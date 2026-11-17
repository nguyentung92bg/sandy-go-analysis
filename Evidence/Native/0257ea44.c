/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackResourceSpend
void Dino_Tracking_DinoEventTracking__TrackResourceSpend (int32_t resourceType, System_String_o* resourceName, int64_t resourceAmount, Dino_Tracking_ResourceSpendOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackResourceSpend
   void Dino_Tracking_DinoEventTracking__TrackResourceSpend (int32_t resourceType, System_String_o*
   resourceName, int64_t resourceAmount, Dino_Tracking_ResourceSpendOptions_o* options,
   Dino_Tracking_CustomParams_o* custom, const MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackResourceSpend_247ea44
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plStack_38;
  
  if ((bRam0000000004f9cf62 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc2030);
                    /* try { // try from 0257ea88 to 0267ea8b has its CatchHandler @ 0257ee18 */
    FUN_02132f7c(PTR_DAT_04cc2038);
                    /* try { // try from 0257ea8c to 0267ea8f has its CatchHandler @ 0257ea94 */
                    /* catch() { ... } // from try @ 0257e440 with catch @ 0257ea90
                       try { // try from 0257ea90 to 0267eaab has its CatchHandler @ 0257e160 */
                    /* catch() { ... } // from try @ 0257ea8c with catch @ 0257ea94 */
    FUN_02132f7c(PTR_DAT_04cc2040);
    FUN_02132f7c(PTR_DAT_04cc2048);
                    /* try { // try from 0257eaac to 0267eac3 has its CatchHandler @ 0257edf4 */
    FUN_02132f7c(PTR_DAT_04cc2050);
    bRam0000000004f9cf62 = 1;
  }
  plStack_38 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_38);
                    /* try { // try from 0257eac4 to 0267ebc7 has its CatchHandler @ 0257e160 */
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc2050);
  Dino_Tracking_TrackingEventResourceSpend___ctor_247ac00(lVar3,param_1,param_2,param_3);
  if ((((lVar3 != 0) &&
       (lVar3 = Dino_Tracking_TrackingEventResourceBase_object___SetResourceBalance_2f9b4f4
                          (lVar3,*param_4,param_4[1],*(undefined8 *)PTR_DAT_04cc2048), lVar3 != 0))
      && (lVar3 = Dino_Tracking_TrackingEventResourceBase_object___SetPlacement_2f9b550
                            (lVar3,param_4[2],*(undefined8 *)PTR_DAT_04cc2040), lVar3 != 0)) &&
     (lVar3 = Dino_Tracking_TrackingEventResourceBase_object___SetPlacementDetail_2f9b5b4
                        (lVar3,param_4[3],*(undefined8 *)PTR_DAT_04cc2038), lVar3 != 0)) {
    *(undefined8 *)(lVar3 + 0x50) = param_4[4];
    *(undefined8 *)(lVar3 + 0x58) = param_4[5];
    *(undefined8 *)(lVar3 + 0x60) = param_4[6];
    Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_5);
    plVar1 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      lVar4 = *plStack_38;
      lVar6 = *(long *)PTR_DAT_04cc2030;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
            lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
            goto LAB_0257ebc4;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      lVar4 = FUN_0216b7a4(plStack_38);
LAB_0257ebc4:
                    /* try { // try from 0257ebc8 to 0267ebef has its CatchHandler @ 0257ee78 */
      lVar4 = thunk_FUN_02150f88(*(undefined8 *)(lVar4 + 8),lVar6);
      (**(code **)(lVar4 + 8))(plVar1,lVar3,lVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

