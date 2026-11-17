/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$RemainingSeconds
int64_t Dino_BusSand_App_Meta_GiftPackFeature__RemainingSeconds (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$RemainingSeconds
   int64_t Dino_BusSand_App_Meta_GiftPackFeature__RemainingSeconds
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method); */

ulong Dino_BusSand_App_Meta_GiftPackFeature__RemainingSeconds_223a6bc
                (undefined8 param_1,undefined4 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000004f9bec5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bec5 = 1;
  }
  Dino_BusSand_App_Meta_GiftPackFeature__RefreshActiveStates_223669c(param_1);
  lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(param_1,param_2);
  if (lVar3 != 0) {
    if ((*(char *)(lVar3 + 0x30) != '\0') && (lVar3 = *(long *)(lVar3 + 0x20), 0 < lVar3)) {
      lVar4 = Dino_BusSand_App_Meta_GiftPackFeature__PackDuration_223a2e0(param_1,param_2);
      if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec48);
      }
      lVar5 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
      lVar5 = SUB168(SEXT816(lVar5) * SEXT816(-0x20c49ba5e353f7cf),8);
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar1 = lVar4 + lVar3 + ((lVar5 >> 7) - (lVar5 >> 0x3f));
      uVar2 = 0;
      if (uVar1 < 0x8000000000000000) {
        uVar2 = uVar1;
      }
      return uVar2;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

