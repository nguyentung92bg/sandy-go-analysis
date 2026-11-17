/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackAdOfferShown
void Dino_Tracking_DinoEventTracking__TrackAdOfferShown (System_String_o* adFormat, System_String_o* placement, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackAdOfferShown
   void Dino_Tracking_DinoEventTracking__TrackAdOfferShown (System_String_o* adFormat,
   System_String_o* placement, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackAdOfferShown_247c194
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plStack_28;
  
  if ((bRam0000000004f9cf45 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1cb0);
    FUN_02132f7c(PTR_DAT_04cc1cb8);
    bRam0000000004f9cf45 = 1;
  }
  plStack_28 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_28);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc1cb8);
                    /* try { // try from 0257c204 to 0267c207 has its CatchHandler @ 0257c214 */
  Dino_Tracking_TrackingEventAdOfferShown___ctor_24781a4(lVar3,param_1,param_2);
                    /* try { // try from 0257c208 to 0267c22f has its CatchHandler @ 0257c0b0 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257c164 with catch @ 0257c210
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257c204 with catch @ 0257c214
                        */
  if ((lVar3 == 0) ||
     (Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_3), plVar1 = plStack_28
     , plStack_28 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar4 = *plStack_28;
  lVar6 = *(long *)PTR_DAT_04cc1cb0;
                    /* try { // try from 0257c230 to 0267c233 has its CatchHandler @ 0257c240 */
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
                    /* catch() { ... } // from try @ 0257c230 with catch @ 0257c240 */
                    /* try { // try from 0257c244 to 0267c24b has its CatchHandler @ 0257c254 */
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
                    /* try { // try from 0257c24c to 0267c257 has its CatchHandler @ 0257c0b0 */
      if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
        lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_0257c27c;
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0257c244 with catch @ 0257c254
                        */
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  lVar4 = FUN_0216b7a4(plStack_28);
LAB_0257c27c:
  lVar4 = thunk_FUN_02150f88(*(undefined8 *)(lVar4 + 8),lVar6);
  (**(code **)(lVar4 + 8))(plVar1,lVar3,lVar4);
  return;
}

