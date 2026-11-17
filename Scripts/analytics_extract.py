from pathlib import Path
import json,re
B=Path('.');r=json.loads((B/'Data/native_enriched.json').read_text());l=json.loads((B/'Data/resolved_literals.json').read_text());records=[]
pat=re.compile(r'\b(?P<var>(?:pu|u)Var\d+)\s*=\s*(?P<expr>[^;\n]+)|(?P<fn>Dino_BusSand_App_Meta_TrackingPlan__(?:Record)|Dino_BusSand_App_Analytics__(?:Log)|Dino_BusSand_App_Meta_TrackingPlan_Params__(?:Req|Opt))_[0-9a-f]+\s*\((?P<args>[^;]+?)\);',re.S)
def value(expr,aliases):
 expr=expr.strip();m=re.fullmatch(r'(?:\*\(undefined8\s*\*\))?\s*(PTR_DAT_([0-9a-f]+)|(?:pu|u)Var\d+)',expr)
 if not m:return None
 return l.get(m[2])if m[2]else aliases.get(m[1])
for x in r:
 if not x.get('evidence')or'.Cheat.'in x['method']:continue
 t=(B/x['evidence']).read_text();aliases={};events=[];keys=[]
 for m in pat.finditer(t):
  if m['var']:aliases[m['var']]=value(m['expr'],aliases)
  else:
   args=m['args'].split(',');keyIndex=1 if 'Params__'in m['fn']else 0
   v=value(args[keyIndex],aliases)
   if v is not None:
    target=keys if keyIndex==1 else events
    if v not in target:target.append(v)
 if events:records.append(dict(method=x['method'],file=x['evidence'],events=events,keys=keys,literals=x['strings']))
out=dict(scope='Resolved literal event-name arguments at TrackingPlan.Record / Analytics.Log; Req/Opt keys are method-level, not guaranteed full runtime payloads.',records=records,uniqueEvents=sorted(set(v for r in records for v in r['events'])))
(B/'Data/analytics_catalog.json').write_text(json.dumps(out,ensure_ascii=False,indent=2),encoding='utf-8');print('Analytics',len(records),'methods',len(out['uniqueEvents']),'event names');print(out['uniqueEvents'])
