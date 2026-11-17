/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackAdComplete
void Dino_Tracking_DinoEventTracking__TrackAdComplete (System_String_o* adFormat, System_String_o* placement, Dino_Tracking_AdCompleteOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackAdComplete
   void Dino_Tracking_DinoEventTracking__TrackAdComplete (System_String_o* adFormat,
   System_String_o* placement, Dino_Tracking_AdCompleteOptions_o* options,
   Dino_Tracking_CustomParams_o* custom, const MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackAdComplete_247bfec
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plStack_38;
  
  if ((bRam0000000004f9cf44 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1c88);
    FUN_02132f7c(PTR_DAT_04cc1c90);
    FUN_02132f7c(PTR_DAT_04cc1c98);
    FUN_02132f7c(PTR_DAT_04cc1ca0);
    FUN_02132f7c(PTR_DAT_04cc1ca8);
    bRam0000000004f9cf44 = 1;
  }
                    /* try { // try from 0257c05c to 0267c05f has its CatchHandler @ 0257c06c */
                    /* try { // try from 0257c060 to 0267c087 has its CatchHandler @ 0257bea0 */
  plStack_38 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_38);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257bfbc with catch @ 0257c068
                        */
  if ((uVar2 & 1) == 0) {
    return;
  }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257c05c with catch @ 0257c06c
                        */
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc1ca8);
                    /* try { // try from 0257c088 to 0267c08b has its CatchHandler @ 0257c098 */
  Dino_Tracking_TrackingEventAdComplete___ctor_2477c58(lVar3,param_1,param_2);
                    /* catch() { ... } // from try @ 0257c088 with catch @ 0257c098 */
                    /* try { // try from 0257c09c to 0267c0a3 has its CatchHandler @ 0257c0ac */
                    /* try { // try from 0257c0a4 to 0267c0af has its CatchHandler @ 0257bea0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0257c09c with catch @ 0257c0ac
                        */
                    /* try { // try from 0257c0b0 to 0267c163 has its CatchHandler @ 0257c0b0
                       catch() { ... } // from try @ 0257c0b0 with catch @ 0257c0b0
                       catch() { ... } // from try @ 0257c170 with catch @ 0257c0b0
                       catch() { ... } // from try @ 0257c208 with catch @ 0257c0b0
                       catch() { ... } // from try @ 0257c24c with catch @ 0257c0b0 */
  if ((((lVar3 != 0) &&
       (lVar3 = Dino_Tracking_TrackingEventAdBase_object___SetAdPlatform_2f99718
                          (lVar3,*param_3,*(undefined8 *)PTR_DAT_04cc1c98), lVar3 != 0)) &&
      (lVar3 = Dino_Tracking_TrackingEventAdBase_object___SetAdNetwork_2f9977c
                         (lVar3,param_3[1],*(undefined8 *)PTR_DAT_04cc1c90), lVar3 != 0)) &&
     (lVar3 = Dino_Tracking_TrackingEventAdBase_object___SetAdUnitId_2f997e0
                        (lVar3,param_3[2],*(undefined8 *)PTR_DAT_04cc1ca0), lVar3 != 0)) {
    *(undefined8 *)(lVar3 + 0x40) = param_3[3];
    *(undefined8 *)(lVar3 + 0x48) = param_3[4];
    Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_4);
    plVar1 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      lVar4 = *plStack_38;
      lVar6 = *(long *)PTR_DAT_04cc1c88;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
            lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
            goto LAB_0257c15c;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      lVar4 = FUN_0216b7a4(plStack_38);
LAB_0257c15c:
                    /* try { // try from 0257c164 to 0267c16f has its CatchHandler @ 0257c210 */
      lVar4 = thunk_FUN_02150f88(*(undefined8 *)(lVar4 + 8),lVar6);
                    /* try { // try from 0257c170 to 0267c203 has its CatchHandler @ 0257c0b0 */
      (**(code **)(lVar4 + 8))(plVar1,lVar3,lVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

