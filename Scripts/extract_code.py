import pathlib,json,re,csv,shutil,hashlib
B=pathlib.Path(__file__).resolve().parents[1];R=B.parents[1]/'Results/Sandy+Go';N=R/'Native-20261116-142556-439bfd/PseudoC'
s=(R/'dump.cs').read_text(encoding='utf-8-sig');classes=[]
for block in re.split(r'(?=// Namespace:)',s)[1:]:
 m=re.search(r'^((?:public|private|internal|protected).*? (?:class|struct|enum|interface) ([^ :\r\n]+).*?// TypeDefIndex: (\d+))',block,re.M)
 if not m:continue
 idx=int(m[3]);ns=block.splitlines()[0].replace('// Namespace:','').strip()
 if 3243<=idx<4214 or 8367<=idx<8589 or ns.startswith(('Dino.Tracking','Dino.GameCommon')):
  name=m[2];file='Evidence/Classes/'+str(idx)+'_'+re.sub(r'[^\w.-]','_',name)+'.cs';(B/file).write_text(block,encoding='utf-8');classes.append(dict(name=name,id=idx,ns=ns,file=file,text=block))
(B/'Data/classes.json').write_text(json.dumps(classes,ensure_ascii=False,indent=2),encoding='utf-8')
by={p.name[:8]:p for p in N.iterdir()if p.suffix=='.c'};focus=[];allrows=[]
with (N/'index.tsv').open(encoding='utf-8-sig')as f:
 for r in csv.DictReader(f,delimiter='\t'):
  allrows.append(r)
  if r['method'].startswith(('Dino.BusSand.','Dino.Tracking.','Dino.GameCommon.')):
   file=by.get(r['address']);rel='Evidence/Native/'+r['address']+'.c'
   if r['status']=='OK'and file:
    r['evidence']=rel
    if not(B/rel).exists():shutil.copyfile('\\\\?\\'+str(file),B/rel)
   focus.append(r)
(B/'Data/native_focus.json').write_text(json.dumps(focus,ensure_ascii=False,indent=2),encoding='utf-8')
summary=dict(source=str(R),classes=len(classes),nativeTotal=len(allrows),nativeExported=sum(x['status']=='OK'for x in allrows),nativeFailed=sum(x['status']!='OK'for x in allrows),focusMethods=len(focus),missingFocus=[x for x in focus if not x.get('evidence')]);(B/'Data/run_summary.json').write_text(json.dumps(summary,ensure_ascii=False,indent=2),encoding='utf-8')
hashes={}
for f in ['dump.cs','Inputs/libil2cpp.so','Inputs/global-metadata.dat']:
 p=R/f;hashes[f]={'size':p.stat().st_size,'sha256':hashlib.file_digest(p.open('rb'),'sha256').hexdigest()}
(B/'Data/input_hashes.json').write_text(json.dumps(hashes,indent=2),encoding='utf-8')
for f in ['inputs.json','dumper.log']:shutil.copyfile(R/f,B/'Evidence'/f)
shutil.copyfile(N/'summary.txt',B/'Evidence/native_export_summary.txt')
print('Indexed',len(classes),'metadata types and',len(focus),'native functions')
