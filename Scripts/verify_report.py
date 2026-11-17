from pathlib import Path
from html.parser import HTMLParser
from urllib.parse import urlsplit,unquote
import json,posixpath,collections,hashlib
B=Path(__file__).resolve().parents[1];read=lambda n:json.loads((B/'Data'/n).read_text(encoding='utf-8-sig'));names={p.relative_to(B).as_posix()for p in B.rglob('*')if p.is_file()};errors=[];links=0;pages=[]
class Parser(HTMLParser):
 def __init__(self):super().__init__();self.base='';self.links=[]
 def handle_starttag(self,t,attrs):
  d=dict(attrs)
  if t=='base':self.base=d.get('href','')
  else:
   for k in ['href','src']:
    if k in d:self.links.append(d[k])
for file in sorted(n for n in names if n.endswith('.html')):
 pages.append(file);p=Parser();p.feed((B/file).read_text(encoding='utf-8-sig'));base=posixpath.normpath(posixpath.join(posixpath.dirname(file),p.base))
 for link in p.links:
  u=urlsplit(link)
  if u.scheme or u.netloc or not u.path:continue
  target=posixpath.normpath(posixpath.join(base,unquote(u.path)));links+=1
  if target not in names:errors.append('Missing link '+file+' -> '+target)
levels=read('levels.json');catalog=json.loads((B/'Evidence/Unpacked/levels/catalog.json').read_text(encoding='utf-8'));assert len(levels)==250 and len(catalog['Levels'])==250
for l in levels:
 raw=json.loads((B/l['file']).read_text(encoding='utf-8'));rows=raw['Board']['PixelRows'];assert len(rows)==raw['Board']['Height'];assert all(len(x)==raw['Board']['Width']for x in rows)
 assert len(raw['ColorNames'])==len(raw['ColorHex']);assert all(p in raw['ColorNames']for p in raw['Board']['Palette']);assert l['road']['Capacity']==5
 for f in [l['image'],l['yardImage'],l['yardImage'].replace('-yard.svg','-yard-revealed.svg')]:assert (B/f).is_file()
 assert l['initialCars']<=l['totalCars'];assert sum(l['grainColors'].values())==sum(ch not in '. 'for row in rows for ch in row)
T=read('tables.json');assert len(T)==37;assert len(T['TbStoreItemConfig'])==17;assert len({x['GPStoreId']for x in T['TbStoreItemConfig'].values()})==17
for name in ['TbStreakRate']:
 for x in T[name].values():
  assert len(x['NeedScoreList'])==len(x['RewardList'])
  assert all(str(r)in T['TbRewardConfig']for r in x['RewardList'])
for x in read('native_focus.json'):
 if x.get('evidence')and not (B/x['evidence']).is_file():errors.append('Missing native '+x['method'])
qa=read('browser_qa.json');assert qa['status']=='PASS';result=dict(status='PASS'if not errors else'FAIL',pages=len(pages),localLinks=links,levels=len(levels),tables=len(T),iapProducts=17,browserQA=qa['status'],errors=errors)
(B/'Data/verification.json').write_text(json.dumps(result,ensure_ascii=False,indent=2),encoding='utf-8');print(json.dumps(result,ensure_ascii=False,indent=2));raise SystemExit(bool(errors))
