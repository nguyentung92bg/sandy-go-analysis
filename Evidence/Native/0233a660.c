/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$PackTotalDuration
int64_t Dino_BusSand_App_Meta_GiftPackFeature__PackTotalDuration (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$PackTotalDuration
   int64_t Dino_BusSand_App_Meta_GiftPackFeature__PackTotalDuration
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method); */

long Dino_BusSand_App_Meta_GiftPackFeature__PackTotalDuration_223a660
               (undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lStack_30;
  long lStack_28;
  
  lVar4 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar6 = *(ulong *)(lVar4 + 0x60);
  if (((0 < (long)uVar6) && (uVar7 = *(ulong *)(lVar4 + 0x58), 0 < (long)uVar7)) &&
     (uVar7 <= uVar6 && uVar6 - uVar7 != 0)) {
    return uVar6 - uVar7;
  }
  if ((bRam0000000004f9bec4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    bRam0000000004f9bec4 = 1;
  }
  lStack_30 = 0;
  lStack_28 = 0;
  lVar4 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(param_1,param_2);
  if (lVar4 != 0) {
    lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(param_1,param_2);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar5 = *(long *)(lVar3 + 0x20);
    lVar1 = *(long *)(lVar3 + 0x60) - lVar5;
    if ((lVar1 != 0 && lVar5 <= *(long *)(lVar3 + 0x60)) && (0 < lVar5)) {
      return lVar1;
    }
    uVar6 = Dino_BusSand_App_Meta_GiftPackCycle__IsFixedCyclePack_223208c(lVar4);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar3 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
      uVar6 = Dino_BusSand_App_Meta_GiftPackCycle__TryGetCycleRange_2232180
                        (lVar4,lVar3 / 1000,&lStack_28,&lStack_30);
      if (((uVar6 & 1) != 0) && (lStack_30 - lStack_28 != 0 && lStack_28 <= lStack_30)) {
        return lStack_30 - lStack_28;
      }
    }
    if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = Dino_BusSand_App_Meta_GiftPackFeature__StoreDurationHours_223a21c(lVar4);
    if (0 < (int)uVar2) {
      return (ulong)uVar2 * 0xe10;
    }
  }
  return 0xa8c0;
}

