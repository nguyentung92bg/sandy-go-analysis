/* IL2CPP: Dino.BusSand.App.UI.GoldenView$$get_SecondsLeft
int64_t Dino_BusSand_App_UI_GoldenView__get_SecondsLeft (Dino_BusSand_App_UI_GoldenView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenView$$get_SecondsLeft
   int64_t Dino_BusSand_App_UI_GoldenView__get_SecondsLeft (Dino_BusSand_App_UI_GoldenView_o*
   __this, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_GoldenView__get_SecondsLeft_21b9794(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar3 = Dino_BusSand_App_Meta_GiftPackFeature__get_GoldenPackId_223b618(lVar6,0);
  if ((bRam0000000004f9bec5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48,uVar3,0);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bec5 = 1;
  }
  Dino_BusSand_App_Meta_GiftPackFeature__RefreshActiveStates_223669c(lVar6);
  lVar4 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(lVar6,uVar3);
  if (lVar4 != 0) {
    if ((*(char *)(lVar4 + 0x30) != '\0') && (lVar4 = *(long *)(lVar4 + 0x20), 0 < lVar4)) {
      lVar6 = Dino_BusSand_App_Meta_GiftPackFeature__PackDuration_223a2e0(lVar6,uVar3);
      if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec48);
      }
      lVar5 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
      lVar5 = SUB168(SEXT816(lVar5) * SEXT816(-0x20c49ba5e353f7cf),8);
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar1 = lVar6 + lVar4 + ((lVar5 >> 7) - (lVar5 >> 0x3f));
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

