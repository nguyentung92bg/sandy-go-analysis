/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackLoadingStart
void Dino_Tracking_DinoEventTracking__TrackLoadingStart (System_String_o* dataSource, System_String_o* resourceType, System_String_o* loadContext, Dino_Tracking_LoadingStartOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackLoadingStart
   void Dino_Tracking_DinoEventTracking__TrackLoadingStart (System_String_o* dataSource,
   System_String_o* resourceType, System_String_o* loadContext, Dino_Tracking_LoadingStartOptions_o*
   options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackLoadingStart_247ed14
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plStack_38;
  
  if ((bRam0000000004f9cf65 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc2058);
    FUN_02132f7c(PTR_DAT_04cc2060);
    FUN_02132f7c(PTR_DAT_04cc2068);
    FUN_02132f7c(PTR_DAT_04cc2070);
    FUN_02132f7c(PTR_DAT_04cc2078);
    bRam0000000004f9cf65 = 1;
  }
  plStack_38 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_38);
  if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 0257ee8c with catch @ 0257ee9c */
                    /* try { // try from 0257eea0 to 0267eea7 has its CatchHandler @ 0257eeb0 */
                    /* try { // try from 0257eea8 to 0267eeb3 has its CatchHandler @ 0257e160 */
    return;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc2078);
  Dino_Tracking_TrackingEventLoadingStart___ctor_247aff8(lVar3,param_1,param_2,param_3);
                    /* try { // try from 0257edc8 to 0267edcb has its CatchHandler @ 0257ee20 */
                    /* try { // try from 0257edcc to 0267edcf has its CatchHandler @ 0257ee14 */
                    /* try { // try from 0257edd0 to 0267edd3 has its CatchHandler @ 0257ee08 */
                    /* try { // try from 0257edd4 to 0267ede3 has its CatchHandler @ 0257e160 */
                    /* try { // try from 0257ede4 to 0267edf3 has its CatchHandler @ 0257edf4 */
                    /* catch() { ... } // from try @ 0257eaac with catch @ 0257edf4
                       catch() { ... } // from try @ 0257ede4 with catch @ 0257edf4 */
                    /* try { // try from 0257edf8 to 0267edfb has its CatchHandler @ 0257eeb0 */
                    /* try { // try from 0257edfc to 0267ee47 has its CatchHandler @ 0257e160 */
                    /* catch() { ... } // from try @ 0257e4f8 with catch @ 0257ee00 */
                    /* catch() { ... } // from try @ 0257ec64 with catch @ 0257ee04 */
                    /* catch() { ... } // from try @ 0257edd0 with catch @ 0257ee08 */
                    /* catch() { ... } // from try @ 0257ec9c with catch @ 0257ee0c */
                    /* catch() { ... } // from try @ 0257ec80 with catch @ 0257ee10 */
                    /* catch() { ... } // from try @ 0257edcc with catch @ 0257ee14 */
                    /* catch() { ... } // from try @ 0257ea88 with catch @ 0257ee18 */
                    /* catch() { ... } // from try @ 0257e4d8 with catch @ 0257ee1c */
  if ((((lVar3 == 0) ||
       (lVar3 = Dino_Tracking_TrackingEventLoadingBase_object___SetTriggerSource_2f9ae5c
                          (lVar3,*param_4,*(undefined8 *)PTR_DAT_04cc2070), lVar3 == 0)) ||
      (lVar3 = Dino_Tracking_TrackingEventLoadingBase_object___SetLoadId_2f9aec0
                         (lVar3,param_4[1],*(undefined8 *)PTR_DAT_04cc2060), lVar3 == 0)) ||
     ((lVar3 = Dino_Tracking_TrackingEventLoadingBase_object___SetPriority_2f9af24
                         (lVar3,param_4[2],*(undefined8 *)PTR_DAT_04cc2068), lVar3 == 0 ||
      (Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_5),
      plVar1 = plStack_38, plStack_38 == (long *)0x0)))) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0257edf8 with catch @ 0257eeb0
                       catch() { ... } // from try @ 0257ee68 with catch @ 0257eeb0
                       catch() { ... } // from try @ 0257eea0 with catch @ 0257eeb0 */
    FUN_02133224();
  }
                    /* catch() { ... } // from try @ 0257edc8 with catch @ 0257ee20 */
                    /* catch() { ... } // from try @ 0257ec68 with catch @ 0257ee24 */
                    /* catch() { ... } // from try @ 0257ecb0 with catch @ 0257ee28 */
  lVar4 = *plStack_38;
                    /* catch() { ... } // from try @ 0257e4fc with catch @ 0257ee2c */
  lVar6 = *(long *)PTR_DAT_04cc2058;
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
                    /* try { // try from 0257ee48 to 0267ee4b has its CatchHandler @ 0257ee64 */
                    /* try { // try from 0257ee4c to 0267ee67 has its CatchHandler @ 0257e160 */
      if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
                    /* try { // try from 0257ee70 to 0267ee8b has its CatchHandler @ 0257e160 */
                    /* catch() { ... } // from try @ 0257ec2c with catch @ 0257ee74 */
                    /* catch() { ... } // from try @ 0257ebc8 with catch @ 0257ee78 */
        lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_0257ee7c;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
                    /* catch() { ... } // from try @ 0257ee48 with catch @ 0257ee64 */
  lVar4 = FUN_0216b7a4(plStack_38);
                    /* try { // try from 0257ee68 to 0267ee6f has its CatchHandler @ 0257eeb0 */
LAB_0257ee7c:
  lVar4 = thunk_FUN_02150f88(*(undefined8 *)(lVar4 + 8),lVar6);
                    /* try { // try from 0257ee8c to 0267ee8f has its CatchHandler @ 0257ee9c */
  (**(code **)(lVar4 + 8))(plVar1,lVar3,lVar4);
  return;
}

