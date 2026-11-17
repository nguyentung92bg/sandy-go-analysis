import sys,json,re,hashlib,hmac,struct,gzip,io
from pathlib import Path
W=Path(r'D:\APK Decompiler\IL2CPP Workbench');R=W/'Results/Sandy+Go';B=W/'Analysis/Sandy+Go';sys.path.insert(0,str(W/'Analysis/FoodiePop/.deps'))
import UnityPy
from cryptography.hazmat.primitives.ciphers import Cipher,algorithms,modes
meta=(R/'Inputs/global-metadata.dat').read_bytes();dump=(R/'dump.cs').read_text(encoding='utf-8-sig');candidates=[]
for m in re.finditer(r'__StaticArrayInitTypeSize=32 (\w+) /\*Metadata offset 0x([0-9A-F]+)',dump):
 offset=int(m[2],16)
 if 0x607000<offset<0x60a000:candidates.append((offset,meta[offset:offset+32]))
env=UnityPy.load(str(W/'Imports/SandyGo-ReportAssets/data.unity3d'));packs={}
for o in env.objects:
 if o.type.name=='TextAsset':
  t=o.read_typetree()
  if t['m_Name']in ['levels','tables']:
   raw=o.get_raw_data();at=raw.find(b'DBP1');n=struct.unpack_from('<I',raw,at-4)[0];packs[t['m_Name']]=raw[at:at+n]
key=None
for oa,a in candidates:
 for ob,b in candidates:
  k=hashlib.sha256(bytes(a[i]^((i*73)&255)^b[31-i]for i in range(32))).digest();mk=hashlib.sha256(bytes(x^0x5c for x in k)).digest()
  data=packs['tables']
  if hmac.compare_digest(hmac.new(mk,data[:-32],hashlib.sha256).digest(),data[-32:]):key=k;print('Container integrity verified; source metadata offsets',hex(oa),hex(ob));break
 if key:break
if not key:raise ValueError('Could not match container key')
manifest=[]
for name,data in packs.items():
 assert hmac.compare_digest(hmac.new(mk,data[:-32],hashlib.sha256).digest(),data[-32:])
 n=struct.unpack_from('<I',data,20)[0];plain=Cipher(algorithms.AES(key),modes.CBC(data[4:20])).decryptor().update(data[24:24+n]);plain=plain[:-plain[-1]];print(name,'magic',plain[:4],'count',struct.unpack_from('<I',plain,4)[0]);stream=io.BytesIO(plain);stream.read(4);count=struct.unpack('<I',stream.read(4))[0]
 for i in range(count):
  n=struct.unpack('<H',stream.read(2))[0];entry=stream.read(n).decode();n=struct.unpack('<I',stream.read(4))[0];v=gzip.decompress(stream.read(n)).decode('utf-8-sig');rel='Evidence/Unpacked/'+name+'/'+re.sub(r'[^\w.-]','_',entry)+'.json';(B/rel).parent.mkdir(parents=True,exist_ok=True)
  try:obj=json.loads(v);(B/rel).write_text(json.dumps(obj,ensure_ascii=False,indent=2),encoding='utf-8')
  except Exception:rel=rel[:-5]+'.txt';(B/rel).write_text(v,encoding='utf-8')
  manifest.append(dict(pack=name,name=entry,file=rel,size=len(v)))
(B/'Data/unpacked_manifest.json').write_text(json.dumps(manifest,ensure_ascii=False,indent=2),encoding='utf-8');print('Unpacked',len(manifest));print(manifest[:6]);print('Tables',[x['name']for x in manifest if x['pack']=='tables'])
