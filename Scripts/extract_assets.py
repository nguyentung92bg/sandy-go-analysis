import sys,pathlib,zipfile,re,json,collections,struct
B=pathlib.Path(__file__).resolve().parents[1];W=B.parents[1];R=W/'Results/Sandy+Go';C=W/'Imports/SandyGo-ReportAssets';C.mkdir(exist_ok=True)
sys.path.insert(0,str(W/'Analysis/FoodiePop/.deps'))
import UnityPy
from UnityPy.helpers.TypeTreeGenerator import TypeTreeGenerator
APK=pathlib.Path(r'D:\APK Decompiler\AssetRipper_win_x64\temp\a772\7de81585\com.dino.sand.bus.apk')
def save(p,v):(B/p).write_text(json.dumps(v,ensure_ascii=False,indent=2,default=str),encoding='utf-8')
def redact(v):
 if isinstance(v,dict):return {k:('[REDACTED]'if re.search(r'api.?key|secret|password|token|credential',k,re.I)and isinstance(x,str)else redact(x))for k,x in v.items()}
 if isinstance(v,list):return list(map(redact,v))
 return v
with zipfile.ZipFile(APK)as z:
 for n in z.namelist():
  if n.endswith(('.bundle','data.unity3d','resources.resource')) or n.endswith('Resources/unity default resources'):
   p=C/pathlib.PurePosixPath(n).name
   if not p.exists():p.write_bytes(z.read(n))
 for n in ['assets/aa/settings.json','assets/aa/catalog.bin','assets/bin/Data/boot.config']:
  (C/pathlib.PurePosixPath(n).name).write_bytes(z.read(n))
env=UnityPy.Environment()
for p in C.iterdir():
 if p.suffix not in ['.json','.bin','.config']:env.load_file(str(p))
versions=sorted({str(a.unity_version)for a in env.assets});print('Unity',versions,flush=True)
gen=TypeTreeGenerator(versions[0]);gen.load_local_dll_folder(str(R/'DummyDll'));env.typetree_generator=gen
records=[];texts=[];sprites=[];images=[];errors=[];types=collections.Counter()
for o in env.objects:
 types[o.type.name]+=1
 try:
  if o.type.name=='TextAsset':
   t=o.read_typetree();name=t['m_Name'];raw=t.get('m_Script','');raw=raw.decode('utf-8',errors='replace')if isinstance(raw,bytes)else raw
   if name in ['levels','tables']:
    original=o.get_raw_data();at=original.find(b'DBP1');size=struct.unpack_from('<I',original,at-4)[0];rel=f'Evidence/TextAssets/{o.assets_file.name}_{o.path_id}.bin';(B/rel).write_bytes(original[at:at+size]);texts.append(dict(name=name,file=rel,kind='sealed container',length=size,serialized=o.assets_file.name,path_id=str(o.path_id)));continue
   rel=f'Evidence/TextAssets/{o.assets_file.name}_{o.path_id}.json'
   try:v=json.loads(raw);save(rel,redact(v));kind='json'
   except Exception:
    if not re.search(r'level|config|table|Tb|csv|json|track|lang',name,re.I):continue
    rel=rel[:-5]+'.txt';(B/rel).write_text(raw,encoding='utf-8',errors='replace');kind='text'
   texts.append(dict(name=name,file=rel,kind=kind,length=len(raw),serialized=o.assets_file.name,path_id=str(o.path_id)))
  elif o.type.name=='MonoBehaviour':
   t=o.read_typetree();name=t.get('m_Name','')
   if name or re.search(r'config|setting',str(t.keys()),re.I):
    rel=f'Evidence/Assets/{o.assets_file.name}_{o.path_id}.json';save(rel,redact(t));records.append(dict(name=name,file=rel,keys=list(t),serialized=o.assets_file.name,path_id=str(o.path_id)))
  elif o.type.name=='Sprite':
   d=o.read();name=d.m_Name;sprites.append(dict(name=name,path_id=str(o.path_id),serialized=o.assets_file.name))
   if re.search(r'booster|shuffle|pick.?up|wand|slot|coin|heart|daily|truck|bus|tower|passport|royale|yacht|cup|gift|key|lock|garage|lift|dune',name,re.I)and len(images)<180:
    try:
     rel=f'Images/UI/{o.assets_file.name}_{o.path_id}.png';im=d.image;im.thumbnail((320,320));im.save(B/rel);images.append(dict(name=name,file=rel))
    except Exception as ex:errors.append(dict(type='SpriteImage',name=name,error=str(ex)[:180]))
  elif o.type.name=='PlayerSettings':save('Data/player_settings.json',redact(o.read_typetree()))
 except Exception as ex:errors.append(dict(serialized=o.assets_file.name,path_id=str(o.path_id),type=o.type.name,error=str(ex)[:200]))
for n,v in [('asset_records',records),('text_assets',texts),('images',images),('sprite_inventory',sprites)]:save('Data/'+n+'.json',v)
save('Data/asset_extraction.json',dict(apk=str(APK),unity=versions,types=dict(types),records=len(records),texts=len(texts),images=len(images),errors=errors))
print('DONE',len(texts),'texts',len(records),'records',len(images),'images',len(errors),'errors',flush=True)
print('Text names:',[x['name']for x in texts][:140],flush=True)
