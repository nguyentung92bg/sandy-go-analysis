/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$LevelForToday
int32_t Dino_BusSand_App_Meta_DailyChallengeModel__LevelForToday (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, int64_t nowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$LevelForToday
   int32_t Dino_BusSand_App_Meta_DailyChallengeModel__LevelForToday
   (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, int64_t nowMs, const MethodInfo* method);
    */

int Dino_BusSand_App_Meta_DailyChallengeModel__LevelForToday_222e110(long param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_04caf808;
  if ((bRam0000000004f9be51 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf808);
    bRam0000000004f9be51 = 1;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  lVar5 = SUB168(SEXT816((long)(86399999 - param_2)) * SEXT816(-0x636ba875fd33dc87),8);
  uVar4 = param_2 / 86400000;
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar4 = (lVar5 >> 0x19) - (lVar5 >> 0x3f);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if ((bRam0000000004f9be50 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9be50 = 1;
  }
  if (9 < iVar3) {
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar3 = System_Math__Min_4831118(200,iVar3,0);
    if (10 < iVar3) {
      uVar4 = uVar4 * 0x9e3779b1 + 0x3c6ef372fe952863;
      uVar4 = (uVar4 ^ uVar4 >> 0x1e) * -0x40a7b892e31b1a47;
      uVar4 = (uVar4 ^ uVar4 >> 0x1b) * -0x6b2fb644ecceee15;
      uVar1 = iVar3 - 9;
      uVar4 = uVar4 ^ uVar4 >> 0x1f;
      iVar3 = 0;
      if ((ulong)uVar1 != 0) {
        iVar3 = (int)(uVar4 / uVar1);
      }
      return ((int)uVar4 - iVar3 * uVar1) + 10;
    }
  }
  return 10;
}

