const fs=require('fs'),path=require('path');
module.exports=function(file,body,{B,images,L,E}){
const asset=n=>images.find(x=>x.name===n)?.file;
const pic=(n,label,cls='wiki-asset')=>asset(n)?`<img class="${cls}" src="${E(asset(n))}" alt="${E(label)}" loading="lazy">`:'';
const card=(name,title,text,href)=>`<figure class="wiki-card">${href?`<a href="${href}">`:''}${pic(name,title)}${href?'</a>':''}<figcaption><b>${title}</b>${text?`<span>${text}</span>`:''}</figcaption></figure>`;
const gallery=(cards,caption='Biểu tượng gốc trích từ game.')=>`<div class="wiki-gallery">${cards.join('')}</div>${caption?`<p class="wiki-caption">${caption}</p>`:''}`;
const levelCard=(idx,label)=>{let l=L.find(x=>x.index===idx);return `<figure class="wiki-card wiki-level-card"><a href="Levels/Levels.html#level=${idx}"><img src="${l.yardImage}" alt="Bố cục màn ${idx}" loading="lazy"></a><figcaption><b>${label}</b><span>Màn ${idx} · sơ đồ dựng từ dữ liệu gốc</span></figcaption></figure>`;};
const svg=(name,title,content,height=240)=>{const rel=`Images/Report/${name}.svg`;fs.mkdirSync(path.join(B,'Images/Report'),{recursive:true});fs.writeFileSync(path.join(B,rel),`<svg xmlns="http://www.w3.org/2000/svg" width="960" height="${height}" viewBox="0 0 960 ${height}" role="img" aria-label="${E(title)}"><rect width="960" height="${height}" rx="18" fill="#f0f6fa"/><style>text{font-family:Segoe UI,Arial,sans-serif;fill:#253343}.title{font-size:22px;font-weight:700}.small{font-size:16px}.big{font-size:31px;font-weight:700}</style>${content}</svg>`);return `<figure class="wiki-diagram"><img src="${rel}" alt="${E(title)}" loading="lazy"><figcaption>${title} — sơ đồ phân tích, không phải ảnh chụp giao diện game.</figcaption></figure>`;};
const stages=(names,sub)=>names.map((n,i)=>{let x=24+i*(912/names.length),w=912/names.length-36;return `<rect x="${x}" y="65" width="${w}" height="115" rx="12" fill="white" stroke="#c7dbe5"/><text x="${x+w/2}" y="108" text-anchor="middle" class="title">${n}</text><text x="${x+w/2}" y="143" text-anchor="middle" class="small">${sub[i]}</text>${i<names.length-1?`<text x="${x+w+7}" y="126" class="title">→</text>`:''}`;}).join('');
if(file==='IAP/IAP.html'){
 const productIcon=id=>id>=5001&&id<=5006?`icon_coin_pack_${id-5000}`:[9001,9003].includes(id)?'icon_perk_gift_ads':id===4002?'icon_event_coin':id===4301?'icon_heart_plus':'icon_gift_box';
 body=body.replace(/<td>([^<]+)<br><small>(\d+)<\/small><\/td>/g,(all,name,id)=>`<td><div class="wiki-product">${pic(productIcon(+id),name)}<span>${name}<br><small>${id}</small></span></div></td>`);
 body=gallery([card('icon_coin_pack_1','Gói coin','6 mức coin trong catalog'),card('icon_gift_box','Gói tài nguyên','Nội dung xem tại từng dòng'),card('icon_perk_gift_ads','Gỡ quảng cáo','Quyền đi kèm từng sản phẩm')],'Biểu tượng minh họa loại sản phẩm; nội dung mua được ghi ở từng dòng, không phải ảnh chụp popup bán hàng.')+body;
}
if(file==='Events/Events.html'){
 const map={'bus-tower':['logo_tower_bus','Tháp xe'],'streak-rate':['illus_bus_streak_wide','Chuỗi thắng'],'climb':['icon_event_tower','Leo tháp'],'royale':['icon_event_royale','Battle Royale'],'yacht':['race_icon_Trophy_coin_1_1','Cúp thưởng đua'],'passport':['icon_gift_box','Minh họa phần thưởng Passport'],'golden':['icon_event_coin','Golden Coin'],'daily':['icon_event_daily','Thử Thách Ngày'],'cup':['icon_event_cup','Cúp tuần']};
 for(const[id,[name,label]]of Object.entries(map))body=body.replace(new RegExp(`(<section id="event-${id}"><h2>[^<]+<\/h2>)(?!<figure)`),`$1<figure class="wiki-section-art">${pic(name,label)}<figcaption>${label} · ảnh gốc trong game</figcaption></figure>`);
}
if(file==='Items/Items.html'){
 body=gallery([card('icon_bus','Xe thường','Đưa đúng màu ra đường'),card('icon_lock','Khóa','Cơ chế cần chìa tương ứng'),card('deco_lift_platform','Thang nâng','Xe được đưa lên theo tầng')])+body;
}
if(file==='Boosters/Boosters.html'){
 body=gallery([card('icon_booster_extra_slot','Thêm chỗ','Tăng sức chứa đường','Boosters/Boosters.html#booster-10005'),card('icon_booster_wand','Đũa thần','Hỗ trợ thu cát cho xe','Boosters/Boosters.html#booster-10004'),card('icon_booster_pickup','Nhấc xe','Đưa xe ra khỏi bãi','Boosters/Boosters.html#booster-10003'),card('icon_booster_shuffle','Xáo màu','Đổi phân bố màu xe','Boosters/Boosters.html#booster-10002')])+body;
 body=body.replace(/(<section id="booster-1003"><h2>[^<]+<\/h2>)/,`$1<figure class="wiki-section-art"><div class="wiki-triple-bus">${pic('icon_bus','Xe 1')}${pic('icon_bus','Xe 2')}${pic('icon_bus','Xe 3')}</div><figcaption>Minh họa tác dụng đưa 3 xe ra đường bằng biểu tượng xe gốc.</figcaption></figure>`);
}
if(file==='Daily/Daily.html')body=gallery([card('icon_event_daily','Thử Thách Ngày','Chơi một màn theo ngày','Daily/DailyChallenge.html'),card('logo_daily_rewards','Quà Mỗi Ngày','Nhận thưởng theo vòng','Daily/DailyGift.html')])+body;
if(file==='Daily/DailyChallenge.html')body=gallery([card('icon_event_daily','Màn thử thách','Nội dung chơi theo ngày'),card('icon_coin','Thưởng ngày','Nhận sau khi hoàn thành'),card('icon_gift_box','Mốc tháng','Tra phần thưởng trong bảng')])+body;
if(file==='Daily/DailyGift.html')body=gallery([card('illus_tut_daily_reward','Quà ngày','Hình hướng dẫn gốc trong game'),card('icon_gift_box','Quà tích lũy','Rương sau 30 lần nhận')])+body;
if(file==='Leaderboard/Leaderboard.html'){
 const cup=svg('cup-bot-groups','Cúp tuần: 1 đầu đàn + 4 mạnh + 24 thường = 29 bot',`<text x="30" y="39" class="title">29 bot + 1 người chơi = 30 vị trí</text>${[['1','Đầu đàn','130–170 điểm','#eee5fb'],['4','Bot mạnh','70–120 điểm','#dff3f3'],['24','Bot thường','8–60 điểm','#e6edf3']].map(([n,label,points,color],i)=>`<rect x="${25+i*310}" y="65" width="290" height="145" rx="12" fill="${color}"/><text x="${170+i*310}" y="108" class="big" text-anchor="middle">${n}</text><text x="${170+i*310}" y="146" class="title" text-anchor="middle">${label}</text><text x="${170+i*310}" y="180" class="small" text-anchor="middle">${points}</text>`).join('')}`);
 body=body.replace(/(<section><h2>Cúp tuần — bảng 30 vị trí[^<]*<\/h2>)/,`$1${cup}`);
 const race=svg('race-stage-bots','Đua thuyền: mục tiêu và số đối thủ từng chặng',`<text x="30" y="39" class="title">Cùng tăng mục tiêu, số đối thủ giảm dần</text>${stages(['Chặng 1','Chặng 2','Chặng 3'],['3 màn · 4 bot · 20 phút','5 màn · 3 bot · 25 phút','7 màn · 2 bot · 30 phút'])}`);
 body=body.replace(/(<section><h2>Đua thuyền — vòng mô phỏng[^<]*<\/h2>)/,`$1${race}`);
 body=gallery([card('icon_event_cup','Cúp tuần','Thứ hạng theo điểm'),card('race_icon_Trophy_coin_1_1','Cúp thưởng đua','Biểu tượng thưởng trong asset'),card('icon_event_royale','Battle Royale','Đấu loại theo vòng')])+body;
}
if(file==='Levels/Levels.html')body=`<details class="wiki-examples"><summary>Hình tham khảo một số cơ chế</summary><div class="wiki-gallery">${levelCard(16,'Xe ẩn màu')}${levelCard(27,'Khóa và chìa')}${levelCard(66,'Đụn cát')}</div></details>`+body;
if(file==='LevelDesign.html')body=gallery([card('char_bus_happy','Mục tiêu chính','Giải phóng xe và thu cát'),card('icon_booster_extra_slot','Hỗ trợ','Can thiệp vào nút thắt'),card('icon_chest_coins','Tiến trình thưởng','Thắng màn và nhận rương')])+body;
if(file==='Analytics/Analytics.html')body=svg('analytics-session-flow','Analytics: các điểm đo trong một lượt chơi',`<text x="30" y="39" class="title">Đọc sự kiện theo hành trình người chơi</text>${stages(['Bắt đầu','Thao tác','Hỗ trợ','Kết quả'],['level_start','Xe / đường / cát','Booster / ad / continue','level_end'])}<text x="30" y="217" class="small">Sơ đồ điểm đo trong client; không biểu diễn tỷ lệ hay dữ liệu người chơi thực tế.</text>`)+body;
if(file==='Evidence/Evidence.html')body=svg('report-evidence-flow','Nguồn báo cáo: dữ liệu đóng gói → đối chiếu luật → tài liệu',`<text x="30" y="39" class="title">Ba lớp thông tin của báo cáo</text>${stages(['Dữ liệu gốc','Luật client','Trình bày'],['250 màn · 37 bảng','Đối chiếu native','Bảng · ảnh · sơ đồ'])}<text x="30" y="217" class="small">Ảnh asset gốc và sơ đồ dựng từ dữ liệu được phân biệt trong chú thích.</text>`)+body;
return body;
};
