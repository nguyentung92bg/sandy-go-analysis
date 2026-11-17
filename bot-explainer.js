(()=>{'use strict';
const score=(target,speed,f)=>f<=0?0:f>=1?target:Math.trunc(target*(f+(1-f)*f*speed/100)**2*(3-2*(f+(1-f)*f*speed/100)));
window.SANDY_BOTS={cupScore:score};
const target=document.getElementById('cup-target'),speed=document.getElementById('cup-speed'),fraction=document.getElementById('cup-fraction'),result=document.getElementById('cup-result'),chart=document.getElementById('cup-chart');
if(!target)return;
function draw(){let t=Math.max(8,Math.min(170,Number(target.value)||8)),s=Math.max(-60,Math.min(60,Number(speed.value)||0)),f=Number(fraction.value)/100,q=f+(1-f)*f*s/100;
result.innerHTML=`<p><b>${(f*100).toFixed(0)}% tuần = ${(f*7).toLocaleString('vi-VN')} ngày</b> · target = ${t}, speed = ${s}.<br>q = ${q.toFixed(4)}; điểm hiện tại = <b data-cup-score>${score(t,s,f)}</b> / ${t}. Cuối tuần: ${t} điểm.</p>`;
let svg='<rect width="720" height="270" fill="#fff" rx="12"/>';
for(let i=0;i<=4;i++){let y=225-i*48;svg+=`<path d="M55 ${y}H690" stroke="#dce3ed"/><text x="46" y="${y+4}" text-anchor="end" font-size="12" fill="#39445b">${Math.round(t*i/4)}</text>`;}
for(let i=0;i<=4;i++){let x=55+i*158.75;svg+=`<text x="${x}" y="249" text-anchor="middle" font-size="12" fill="#39445b">${i*25}%</text>`;}
for(let [v,color,label] of [[-60,'#9b4bc2','−60'],[0,'#718096','0'],[60,'#009c87','+60'],[s,'#d15a13','Đang chọn']]){let d='';for(let i=0;i<=100;i++){let a=i/100,r=a+(1-a)*a*v/100;d+=`${i?'L':'M'}${55+i*6.35},${225-r*r*(3-2*r)*192} `;}svg+=`<path d="${d}" fill="none" stroke="${color}" stroke-width="${label==='Đang chọn'?3:1.5}"/>`;}
let y=225-q*q*(3-2*q)*192;svg+=`<path d="M${55+f*635} 30V225" stroke="#d15a13" stroke-dasharray="4 4"/><circle cx="${55+f*635}" cy="${y}" r="5" fill="#d15a13"/><text x="60" y="20" font-size="12" fill="#39445b">Tím: −60 · Xám: 0 · Xanh: +60 · Cam: speed đang chọn</text>`;chart.innerHTML=svg;
}
for(let el of [target,speed,fraction])el.addEventListener('input',draw);draw();
})();
