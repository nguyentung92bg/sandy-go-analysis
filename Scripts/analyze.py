from pathlib import Path
import json,collections,math,html,sys
B=Path(__file__).resolve().parents[1];W=B.parents[1];sys.path.insert(0,str(W/'Analysis/FoodiePop/.deps'))
from PIL import Image
read=lambda p:json.loads((B/p).read_text(encoding='utf-8-sig'));save=lambda p,v:(B/p).write_text(json.dumps(v,ensure_ascii=False,indent=2),encoding='utf-8')
manifest=read('Data/unpacked_manifest.json');tables=read('Data/tables.json');cat=read('Evidence/Unpacked/levels/catalog.json');levels=[];mechanics=collections.defaultdict(list);palette={};stats=collections.Counter();(B/'Images/Levels').mkdir(exist_ok=True)
labels={'Hidden':'Ẩn màu','Key':'Chìa khóa','Lock':'Xe bị khóa','Shift':'Xe quay đầu','Chain':'Xe nối xích','FireTruck':'Xe cứu hỏa','Lifts':'Thang nâng','Dune':'Đụn cát','Garages':'Gara','Lanes':'Làn chờ','Fuel':'Nhiên liệu','Station':'Trạm','Below':'Xe tầng dưới'}
lengths={'Truck':0x999c/14994,'MiniVan':0xc3dc/14994,'Bus':0xf8c7/14994};widths={'Truck':0x7424/14994,'MiniVan':0x6f25/14994,'Bus':0x6d79/14994}
def difficulty(n):return 'Khó'if n==10 or n>=15 and n%10==5 else 'Rất khó'if n>=20 and n%10==0 else 'Thường'
for x in manifest:
 if x['pack']!='levels'or x['name']=='catalog':continue
 l=read(x['file']);id=l['StageIndex'];y=l['Yard'];board=l['Board'];p=dict(zip(l['ColorNames'],l['ColorHex']));palette.update(p);allcars=[];specials=collections.Counter()
 def walk(v):
  if isinstance(v,dict):
   if 'Kind'in v and 'Color'in v:
    allcars.append(v)
    for k in ['Hidden','Key','Lock','Shift','Chain','FireTruck','Fuel','Station','Below']:
     if v.get(k):specials[k]+=1
   if v.get('Type'):specials[v['Type']]+=1
   for val in v.values():walk(val)
  elif isinstance(v,list):
   for val in v:walk(val)
 walk(y)
 for k in ['Garages','Lanes','Lifts']:
  if y.get(k):specials[k]+=len(y[k])
 for k in specials:mechanics[k].append(id)
 chars=collections.Counter(''.join(board['PixelRows']));graincolors={c:chars.get('0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'[i],0)+chars.get('abcdefghijklmnopqrstuvwxyz'[i-10],0)if i>=10 else chars.get(str(i),0)for i,c in enumerate(board['Palette'])};grains=sum(graincolors.values())*max(1,board['EdgeGrains'])**2
 im=Image.new('RGB',(len(board['PixelRows'][0]),len(board['PixelRows'])),'#f0f5f8');pix=im.load()
 for yy,row in enumerate(board['PixelRows']):
  for xx,ch in enumerate(row):
   if ch not in '. ':
    ci=int(ch,36);col=board['Palette'][ci];pix[xx,yy]=tuple(bytes.fromhex(p[col]))
 img=f'Images/Levels/{id:03d}-sand.png';im.save(B/img)
 # Schematic uses exact positions, 24-step heading and mesh footprint dimensions.
 scale=24;pad=22;sw=y['Cols']*scale+pad*2;sh=y['Rows']*scale+pad*2
 svg=[f'<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 {sw} {sh}" role="img" aria-label="Sơ đồ bãi xe màn {id}"><rect width="100%" height="100%" fill="#eef3f7"/><rect x="{pad}" y="{pad}" width="{y["Cols"]*scale}" height="{y["Rows"]*scale}" rx="7" fill="#dce5ee" stroke="#a1b2c4"/>']
 def objrect(o,color,label,dash=False):
  cx=pad+o['CenterX']*scale;cy=pad+(y['Rows']-o['CenterZ'])*scale;ww=o.get('Width',3)*scale;hh=o.get('Length',3)*scale
  svg.append(f'<g transform="translate({cx:.2f} {cy:.2f}) rotate({o.get("AngleIndex",0)*15})"><rect x="{-ww/2}" y="{-hh/2}" width="{ww}" height="{hh}" fill="{color}" fill-opacity=".36" stroke="#334155" stroke-dasharray="{5 if dash else 0}"/><text y="4" text-anchor="middle" font-size="11" fill="#24374b">{label}</text></g>')
 for o in y.get('Objects',[]):objrect(o,'#ca9d55',o['Type'])
 for o in y.get('Lifts',[]):objrect(o,'#7a7db9','LIFT',True)
 for i,car in enumerate(y.get('Buses',[])):
  kind=car['Kind'];cx=pad+car['CenterX']*scale;cy=pad+(y['Rows']-car['CenterZ'])*scale;ww=widths.get(kind,1.8)*scale;hh=lengths.get(kind,3)*scale;color='#'+p.get(car.get('Color'),'e7edf5')
  badges=''.join(code for k,code in [('Hidden','?'),('Key','K'),('Lock','L'),('Shift','S'),('Chain','C'),('FireTruck','F')]if car.get(k));svg.append(f'<g transform="translate({cx:.2f} {cy:.2f}) rotate({car["AngleIndex"]*15})"><rect x="{-ww/2:.2f}" y="{-hh/2:.2f}" width="{ww:.2f}" height="{hh:.2f}" rx="5" fill="{color if not car.get('Hidden') else '#b7c4cd'}" data-reveal="{color}" stroke="#25394b" stroke-width="1.2"/><path d="M -5 {-hh/2+12:.2f} L 0 {-hh/2+5:.2f} L 5 {-hh/2+12:.2f}" fill="none" stroke="#162437" stroke-width="2"/><rect x="-12" y="-9" width="24" height="18" rx="4" fill="#fff" fill-opacity=".9"/><text y="4" text-anchor="middle" font-size="11" fill="#172739">{i+1}</text><text y="{hh/2-7:.2f}" text-anchor="middle" font-size="10" fill="#172739" stroke="#fff" stroke-width=".35">{badges}</text></g>')
 svg.append('</svg>');yardimg=f'Images/Levels/{id:03d}-yard.svg';(B/yardimg).write_text(''.join(svg),encoding='utf-8');import re;revealed=re.sub(r'fill="[^"]+" data-reveal="([^"]+)"',r'fill="\1"',''.join(svg));(B/yardimg.replace('-yard.svg','-yard-revealed.svg')).write_text(revealed,encoding='utf-8')
 meta=dict(index=id,name=x['name'],title=l.get('Title',''),seed=l['Seed'],difficulty=difficulty(id),file=x['file'],image=img,yardImage=yardimg,colors=p,palette=board['Palette'],grains=grains,grainColors=graincolors,boardWidth=board['Width'],boardHeight=board['Height'],yard=y,road=l['Road'],timing=l['Timing'],specials=dict(specials),initialCars=len(y.get('Buses',[])),totalCars=len(allcars),kinds=dict(collections.Counter(c['Kind']for c in allcars)),hidden=sum(bool(c.get('Hidden'))for c in allcars),generated=l.get('Generated',False))
 levels.append(meta);stats.update({'cars':len(allcars),'grains':grains})
levels.sort(key=lambda x:x['index']);summary=dict(version='0.12.0',package='com.dino.sand.bus',levels=len(levels),loopFrom=cat['LoopFrom'],tables=len(tables),iapProducts=len(tables['TbStoreItemConfig']),paletteColors=len(palette),mechanics={k:dict(name=labels.get(k,k),count=len(v),first=min(v),levels=v)for k,v in mechanics.items()},stats=dict(stats),difficulty=dict(collections.Counter(x['difficulty']for x in levels)),roadCapacities=dict(collections.Counter(x['road']['Capacity']for x in levels)),carRange=[min(x['totalCars']for x in levels),max(x['totalCars']for x in levels)])
save('Data/levels.json',levels);save('Data/analysis_summary.json',summary);save('Data/palette.json',palette)
(B/'level-data.js').write_text('window.SANDY_DATA='+json.dumps(dict(levels=levels,catalog=cat,summary=summary),ensure_ascii=False,separators=(',',':'))+';',encoding='utf-8')
print(json.dumps(summary,ensure_ascii=False,indent=2)[:2600])
