from pathlib import Path
import json,zipfile
B=Path(__file__).resolve().parents[1];v=json.loads((B/'Data/verification.json').read_text(encoding='utf-8'));assert v['status']=='PASS'
target=B/'SandyGo-Report.zip';temp=B/'SandyGo-Report.building.zip';count=0
with zipfile.ZipFile(temp,'w',compression=zipfile.ZIP_DEFLATED,compresslevel=6)as z:
 for p in B.rglob('*'):
  if not p.is_file()or p.suffix in ['.zip','.pyc']or'__pycache__'in p.parts:continue
  z.write(p,p.relative_to(B).as_posix());count+=1
with zipfile.ZipFile(temp)as z:assert z.testzip()is None
temp.replace(target);print(target);print(count,'files,',target.stat().st_size,'bytes')
