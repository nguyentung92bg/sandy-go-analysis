/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$DurationBeforeActivation
int64_t Dino_BusSand_App_Meta_GiftPackFeature__DurationBeforeActivation (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, Dino_BusSand_App_Meta_GiftPackConfig_o* c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$DurationBeforeActivation
   int64_t Dino_BusSand_App_Meta_GiftPackFeature__DurationBeforeActivation
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, Dino_BusSand_App_Meta_GiftPackConfig_o* c,
   const MethodInfo* method); */

long Dino_BusSand_App_Meta_GiftPackFeature__DurationBeforeActivation_223a0ac
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_38;
  long lStack_28;
  
  if ((bRam0000000004f9bebe & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bebe = 1;
  }
  puVar1 = PTR_DAT_04caec48;
  lStack_28 = 0;
  uStack_38 = 0;
  if (param_2 != 0) {
    if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
    uVar4 = Dino_BusSand_App_Meta_GiftPackCycle__TryGetCycleRange_2232180
                      (param_2,lVar3 / 1000,&uStack_38,&lStack_28);
    lVar3 = lStack_28;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar5 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
      if (lVar5 / 1000 < lVar3) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar5 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
        lVar5 = SUB168(SEXT816(lVar5) * SEXT816(-0x20c49ba5e353f7cf),8);
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar3 = ((lVar5 >> 7) - (lVar5 >> 0x3f)) + lVar3;
        lVar5 = 1;
        if (0 < lVar3) {
          lVar5 = lVar3;
        }
        return lVar5;
      }
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = Dino_BusSand_App_Meta_GiftPackFeature__StoreDurationHours_223a21c(param_2);
  if ((int)uVar2 < 1) {
    lVar3 = 0xa8c0;
  }
  else {
    lVar3 = (ulong)uVar2 * 0xe10;
  }
  return lVar3;
}

