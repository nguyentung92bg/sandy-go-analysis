/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackIapShow
void Dino_Tracking_DinoEventTracking__TrackIapShow (System_String_o* placement, Dino_Tracking_IapShowOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackIapShow
   void Dino_Tracking_DinoEventTracking__TrackIapShow (System_String_o* placement,
   Dino_Tracking_IapShowOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo*
   method); */

void Dino_Tracking_DinoEventTracking__TrackIapShow_247c700
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plStack_28;
  
                    /* try { // try from 0257c718 to 0267c71f has its CatchHandler @ 0257c800 */
  if ((bRam0000000004f9cf4c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1cc8);
                    /* try { // try from 0257c734 to 0267c737 has its CatchHandler @ 0257c7ec */
                    /* try { // try from 0257c738 to 0267c747 has its CatchHandler @ 0257c7fc */
    FUN_02132f7c(PTR_DAT_04cc1cd0);
    FUN_02132f7c(PTR_DAT_04cc1cd8);
                    /* try { // try from 0257c750 to 0267c75b has its CatchHandler @ 0257c7f0 */
    FUN_02132f7c(PTR_DAT_04cc1ce0);
    bRam0000000004f9cf4c = 1;
  }
                    /* try { // try from 0257c75c to 0267c767 has its CatchHandler @ 0257c7f4 */
  plStack_28 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_28);
                    /* try { // try from 0257c768 to 0267c7e3 has its CatchHandler @ 0257c614 */
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc1ce0);
  Dino_Tracking_TrackingEventIapShow___ctor_2479058(lVar3,param_1);
  if (((lVar3 != 0) &&
      (lVar3 = Dino_Tracking_TrackingEventIapBase_object___SetShowType_2f9a248
                         (lVar3,*param_2,*(undefined8 *)PTR_DAT_04cc1cd0), lVar3 != 0)) &&
     (lVar3 = Dino_Tracking_TrackingEventIapBase_object___SetTriggerType_2f9a2a4
                        (lVar3,param_2[1],*(undefined8 *)PTR_DAT_04cc1cd8), lVar3 != 0)) {
    *(undefined8 *)(lVar3 + 0x30) = param_2[2];
    thunk_FUN_02134474();
    Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_3);
    plVar1 = plStack_28;
    if (plStack_28 != (long *)0x0) {
                    /* try { // try from 0257c7e4 to 0267c7e7 has its CatchHandler @ 0257c7f8 */
                    /* try { // try from 0257c7e8 to 0267c81b has its CatchHandler @ 0257c614 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257c734 with catch @ 0257c7ec
                        */
      lVar4 = *plStack_28;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257c750 with catch @ 0257c7f0
                        */
      lVar6 = *(long *)PTR_DAT_04cc1cc8;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257c75c with catch @ 0257c7f4
                        */
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257c7e4 with catch @ 0257c7f8
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257c738 with catch @ 0257c7fc
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257c718 with catch @ 0257c800
                        */
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
                    /* catch() { ... } // from try @ 0257c81c with catch @ 0257c838 */
                    /* try { // try from 0257c83c to 0267c843 has its CatchHandler @ 0257c84c */
            lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
            goto LAB_0257c840;
          }
          uVar2 = uVar2 - 1;
                    /* try { // try from 0257c81c to 0267c81f has its CatchHandler @ 0257c838 */
          piVar5 = piVar5 + 4;
                    /* try { // try from 0257c820 to 0267c83b has its CatchHandler @ 0257c614 */
        } while (uVar2 != 0);
      }
      lVar4 = FUN_0216b7a4(plStack_28);
LAB_0257c840:
                    /* try { // try from 0257c844 to 0267c84f has its CatchHandler @ 0257c614 */
      lVar4 = thunk_FUN_02150f88(*(undefined8 *)(lVar4 + 8),lVar6);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0257c83c with catch @ 0257c84c
                        */
                    /* try { // try from 0257c850 to 0267c93f has its CatchHandler @ 0257c850
                       catch() { ... } // from try @ 0257c850 with catch @ 0257c850
                       catch() { ... } // from try @ 0257c990 with catch @ 0257c850
                       catch() { ... } // from try @ 0257ca78 with catch @ 0257c850
                       catch() { ... } // from try @ 0257cab0 with catch @ 0257c850
                       catch() { ... } // from try @ 0257cad4 with catch @ 0257c850 */
      (**(code **)(lVar4 + 8))(plVar1,lVar3,lVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

