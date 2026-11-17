/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeFeature$$get_TodayLevel
int32_t Dino_BusSand_App_Meta_DailyChallengeFeature__get_TodayLevel (Dino_BusSand_App_Meta_DailyChallengeFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeFeature$$get_TodayLevel
   int32_t Dino_BusSand_App_Meta_DailyChallengeFeature__get_TodayLevel
   (Dino_BusSand_App_Meta_DailyChallengeFeature_o* __this, const MethodInfo* method); */

int Dino_BusSand_App_Meta_DailyChallengeFeature__get_TodayLevel_222fa60(void)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = Dino_BusSand_App_Meta_DailyChallengeFeature__get_Model_222f838();
  uVar6 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
  puVar3 = PTR_DAT_04caf808;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9be51 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf808);
    bRam0000000004f9be51 = 1;
  }
  iVar4 = *(int *)(lVar5 + 0x18);
  lVar5 = SUB168(SEXT816((long)(86399999 - uVar6)) * SEXT816(-0x636ba875fd33dc87),8);
  uVar1 = uVar6 / 86400000;
  if ((uVar6 & 0x8000000000000000) != 0) {
    uVar1 = (lVar5 >> 0x19) - (lVar5 >> 0x3f);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if ((bRam0000000004f9be50 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9be50 = 1;
  }
  if (9 < iVar4) {
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar4 = System_Math__Min_4831118(200,iVar4,0);
    if (10 < iVar4) {
      uVar6 = uVar1 * 0x9e3779b1 + 0x3c6ef372fe952863;
      uVar6 = (uVar6 ^ uVar6 >> 0x1e) * -0x40a7b892e31b1a47;
      uVar6 = (uVar6 ^ uVar6 >> 0x1b) * -0x6b2fb644ecceee15;
      uVar2 = iVar4 - 9;
      uVar6 = uVar6 ^ uVar6 >> 0x1f;
      iVar4 = 0;
      if ((ulong)uVar2 != 0) {
        iVar4 = (int)(uVar6 / uVar2);
      }
      return ((int)uVar6 - iVar4 * uVar2) + 10;
    }
  }
  return 10;
}

