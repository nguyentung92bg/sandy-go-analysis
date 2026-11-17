import pathlib,json,re,struct
B=pathlib.Path(__file__).resolve().parents[1];R=B.parents[1]/'Results/Sandy+Go';blob=(R/'Inputs/libil2cpp.so').read_bytes();d=json.loads((R/'script.json').read_text(encoding='utf-8-sig'));strings={x['Address']:x['Value']for x in d['ScriptString']}
ph=struct.unpack_from('<Q',blob,32)[0];sz,n=struct.unpack_from('<HH',blob,54);segs=[struct.unpack_from('<IIQQQQQQ',blob,ph+i*sz)for i in range(n)];so=struct.unpack_from('<Q',blob,40)[0];sz,n=struct.unpack_from('<HH',blob,58);relocs={}
for i in range(n):
 _,t,_,_,o,size,_,_,_,_=struct.unpack_from('<IIQQQQIIQQ',blob,so+i*sz)
 if t==4:
  for j in range(0,size,24):
   loc,kind,add=struct.unpack_from('<QQq',blob,o+j)
   if kind&0xffffffff==1027:relocs[loc]=add

def resolve(p):
 va=int(p,16)-0x100000
 if va in relocs:return strings.get(relocs[va])
 for t,_,o,v,_,fs,_,_ in segs:
  if t==1 and v<=va<v+fs:return strings.get(struct.unpack_from('<Q',blob,o+va-v)[0])
meta=(R/'Inputs/global-metadata.dat').read_bytes();dump=(R/'dump.cs').read_text(encoding='utf-8-sig')
fields={m[2]:(int(m[1]),int(m[3],16))for m in re.finditer(r'__StaticArrayInitTypeSize=(\d+) (\w+) /\*Metadata offset 0x([0-9A-F]+)',dump)}
metadata={x['Address']:x['Name']for x in d['ScriptMetadata']};arrays={}
for loc,add in relocs.items():
 name=metadata.get(add,'').split('.')[-1]
 if name in fields:
  size,offset=fields[name];raw=meta[offset:offset+size];arrays[f'{loc+0x100000:08x}']={'size':size,'metadataOffset':offset,'field':name,'ints':list(struct.unpack('<'+'i'*(size//4),raw))if size%4==0 else []}
(B/'Data/static_arrays.json').write_text(json.dumps(arrays,indent=2),encoding='utf-8')
rows=json.loads((B/'Data/native_focus.json').read_text(encoding='utf-8'));literals={}
for r in rows:
 if not r.get('evidence'):continue
 text=(B/r['evidence']).read_text(encoding='utf-8');refs=[]
 for p in dict.fromkeys(re.findall(r'PTR_DAT_([0-9a-f]+)',text)):
  val=resolve(p)
  if val is not None:
   literals[p]=val;refs.append(dict(pointer=p,value=val))
 r['strings']=refs
(B/'Data/native_enriched.json').write_text(json.dumps(rows,ensure_ascii=False,indent=2),encoding='utf-8');(B/'Data/resolved_literals.json').write_text(json.dumps(literals,ensure_ascii=False,indent=2),encoding='utf-8');print('Enriched',len(rows),'methods;',len(literals),'literals')
