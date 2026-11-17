/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackAdClick
void Dino_Tracking_DinoEventTracking__TrackAdClick (System_String_o* adFormat, System_String_o* placement, Dino_Tracking_AdClickOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackAdClick
   void Dino_Tracking_DinoEventTracking__TrackAdClick (System_String_o* adFormat, System_String_o*
   placement, Dino_Tracking_AdClickOptions_o* options, Dino_Tracking_CustomParams_o* custom, const
   MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackAdClick_247be54
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plStack_38;
  
  if ((bRam0000000004f9cf43 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1c60);
    FUN_02132f7c(PTR_DAT_04cc1c68);
                    /* try { // try from 0257bea0 to 0267bfbb has its CatchHandler @ 0257bea0
                       catch() { ... } // from try @ 0257bea0 with catch @ 0257bea0
                       catch() { ... } // from try @ 0257bfc8 with catch @ 0257bea0
                       catch() { ... } // from try @ 0257c060 with catch @ 0257bea0
                       catch() { ... } // from try @ 0257c0a4 with catch @ 0257bea0 */
    FUN_02132f7c(PTR_DAT_04cc1c70);
    FUN_02132f7c(PTR_DAT_04cc1c78);
    FUN_02132f7c(PTR_DAT_04cc1c80);
    bRam0000000004f9cf43 = 1;
  }
  plStack_38 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_38);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc1c80);
  Dino_Tracking_TrackingEventAdClick___ctor_2477af4(lVar3,param_1,param_2);
  if ((((lVar3 == 0) ||
       (lVar3 = Dino_Tracking_TrackingEventAdBase_object___SetAdPlatform_2f99718
                          (lVar3,*param_3,*(undefined8 *)PTR_DAT_04cc1c70), lVar3 == 0)) ||
      (lVar3 = Dino_Tracking_TrackingEventAdBase_object___SetAdNetwork_2f9977c
                         (lVar3,param_3[1],*(undefined8 *)PTR_DAT_04cc1c68), lVar3 == 0)) ||
     ((lVar3 = Dino_Tracking_TrackingEventAdBase_object___SetAdUnitId_2f997e0
                         (lVar3,param_3[2],*(undefined8 *)PTR_DAT_04cc1c78), lVar3 == 0 ||
      (Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_4),
      plVar1 = plStack_38, plStack_38 == (long *)0x0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar4 = *plStack_38;
  lVar6 = *(long *)PTR_DAT_04cc1c60;
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
        lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_0257bfb4;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  lVar4 = FUN_0216b7a4(plStack_38);
LAB_0257bfb4:
                    /* try { // try from 0257bfbc to 0267bfc7 has its CatchHandler @ 0257c068 */
  lVar4 = thunk_FUN_02150f88(*(undefined8 *)(lVar4 + 8),lVar6);
                    /* try { // try from 0257bfc8 to 0267c05b has its CatchHandler @ 0257bea0 */
  (**(code **)(lVar4 + 8))(plVar1,lVar3,lVar4);
  return;
}

