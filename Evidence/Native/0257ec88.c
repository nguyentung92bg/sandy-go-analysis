/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackResourceCoinSpend
void Dino_Tracking_DinoEventTracking__TrackResourceCoinSpend (int64_t resourceAmount, Dino_Tracking_ResourceSpendOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackResourceCoinSpend
   void Dino_Tracking_DinoEventTracking__TrackResourceCoinSpend (int64_t resourceAmount,
   Dino_Tracking_ResourceSpendOptions_o* options, Dino_Tracking_CustomParams_o* custom, const
   MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackResourceCoinSpend_247ec88
               (long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  long *plStack_38;
  
  puVar1 = PTR_DAT_04caa200;
                    /* try { // try from 0257ec9c to 0267eca7 has its CatchHandler @ 0257ee0c */
                    /* try { // try from 0257ecb0 to 0267ecb3 has its CatchHandler @ 0257ee28 */
  if ((bRam0000000004f9cf64 & 1) == 0) {
                    /* try { // try from 0257ecb4 to 0267edc7 has its CatchHandler @ 0257e160 */
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cb2108);
    bRam0000000004f9cf64 = 1;
  }
  puVar2 = PTR_DAT_04cb2108;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = *(undefined8 *)puVar2;
  lVar6 = -param_1;
  if (-1 < param_1) {
    lVar6 = param_1;
  }
  if ((bRam0000000004f9cf62 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc2030);
    FUN_02132f7c(PTR_DAT_04cc2038);
    FUN_02132f7c(PTR_DAT_04cc2040);
    FUN_02132f7c(PTR_DAT_04cc2048);
    FUN_02132f7c(PTR_DAT_04cc2050);
    bRam0000000004f9cf62 = 1;
  }
  plStack_38 = (long *)0x0;
  uVar4 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_38);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc2050);
  Dino_Tracking_TrackingEventResourceSpend___ctor_247ac00(lVar5,0,uVar7,lVar6);
  if ((((lVar5 != 0) &&
       (lVar6 = Dino_Tracking_TrackingEventResourceBase_object___SetResourceBalance_2f9b4f4
                          (lVar5,*param_2,param_2[1],*(undefined8 *)PTR_DAT_04cc2048), lVar6 != 0))
      && (lVar6 = Dino_Tracking_TrackingEventResourceBase_object___SetPlacement_2f9b550
                            (lVar6,param_2[2],*(undefined8 *)PTR_DAT_04cc2040), lVar6 != 0)) &&
     (lVar6 = Dino_Tracking_TrackingEventResourceBase_object___SetPlacementDetail_2f9b5b4
                        (lVar6,param_2[3],*(undefined8 *)PTR_DAT_04cc2038), lVar6 != 0)) {
    *(undefined8 *)(lVar6 + 0x50) = param_2[4];
    *(undefined8 *)(lVar6 + 0x58) = param_2[5];
    *(undefined8 *)(lVar6 + 0x60) = param_2[6];
    Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar6,param_3);
    plVar3 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      lVar5 = *plStack_38;
      lVar9 = *(long *)PTR_DAT_04cc2030;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)(lVar9 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
            goto LAB_0257ebc4;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      lVar5 = FUN_0216b7a4(plStack_38);
LAB_0257ebc4:
      lVar5 = thunk_FUN_02150f88(*(undefined8 *)(lVar5 + 8),lVar9);
      (**(code **)(lVar5 + 8))(plVar3,lVar6,lVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

