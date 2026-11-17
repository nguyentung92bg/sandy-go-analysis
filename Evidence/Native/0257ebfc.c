/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackResourceCoinEarn
void Dino_Tracking_DinoEventTracking__TrackResourceCoinEarn (int64_t resourceAmount, Dino_Tracking_ResourceEarnOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackResourceCoinEarn
   void Dino_Tracking_DinoEventTracking__TrackResourceCoinEarn (int64_t resourceAmount,
   Dino_Tracking_ResourceEarnOptions_o* options, Dino_Tracking_CustomParams_o* custom, const
   MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackResourceCoinEarn_247ebfc
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
  if ((bRam0000000004f9cf63 & 1) == 0) {
                    /* try { // try from 0257ec2c to 0267ec53 has its CatchHandler @ 0257ee74 */
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cb2108);
    bRam0000000004f9cf63 = 1;
  }
  puVar2 = PTR_DAT_04cb2108;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0257ec64 to 0267ec67 has its CatchHandler @ 0257ee04 */
  uVar7 = *(undefined8 *)puVar2;
                    /* try { // try from 0257ec68 to 0267ec77 has its CatchHandler @ 0257ee24 */
  lVar6 = -param_1;
  if (-1 < param_1) {
    lVar6 = param_1;
  }
  if ((bRam0000000004f9cf61 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc2008);
    FUN_02132f7c(PTR_DAT_04cc2010);
    FUN_02132f7c(PTR_DAT_04cc2018);
    FUN_02132f7c(PTR_DAT_04cc2020);
    FUN_02132f7c(PTR_DAT_04cc2028);
    bRam0000000004f9cf61 = 1;
  }
  plStack_38 = (long *)0x0;
  uVar4 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_38);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc2028);
  Dino_Tracking_TrackingEventResourceEarn___ctor_247a9f0(lVar5,0,uVar7,lVar6);
  if ((((lVar5 != 0) &&
       (lVar6 = Dino_Tracking_TrackingEventResourceBase_object___SetResourceBalance_2f9b4f4
                          (lVar5,*param_2,param_2[1],*(undefined8 *)PTR_DAT_04cc2020), lVar6 != 0))
      && (lVar6 = Dino_Tracking_TrackingEventResourceBase_object___SetPlacement_2f9b550
                            (lVar6,param_2[2],*(undefined8 *)PTR_DAT_04cc2018), lVar6 != 0)) &&
     (lVar6 = Dino_Tracking_TrackingEventResourceBase_object___SetPlacementDetail_2f9b5b4
                        (lVar6,param_2[3],*(undefined8 *)PTR_DAT_04cc2010), lVar6 != 0)) {
    *(undefined8 *)(lVar6 + 0x50) = param_2[4];
    Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar6,param_3);
    plVar3 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      lVar5 = *plStack_38;
      lVar9 = *(long *)PTR_DAT_04cc2008;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)(lVar9 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
            goto LAB_0257ea0c;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      lVar5 = FUN_0216b7a4(plStack_38);
LAB_0257ea0c:
      lVar5 = thunk_FUN_02150f88(*(undefined8 *)(lVar5 + 8),lVar9);
      (**(code **)(lVar5 + 8))(plVar3,lVar6,lVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

