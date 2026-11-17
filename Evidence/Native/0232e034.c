/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$LevelFor
int32_t Dino_BusSand_App_Meta_DailyChallengeModel__LevelFor (int64_t day, int32_t levelPassed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$LevelFor
   int32_t Dino_BusSand_App_Meta_DailyChallengeModel__LevelFor (int64_t day, int32_t levelPassed,
   const MethodInfo* method); */

int Dino_BusSand_App_Meta_DailyChallengeModel__LevelFor_222e034(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  if ((bRam0000000004f9be50 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9be50 = 1;
  }
  if (9 < param_2) {
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar2 = System_Math__Min_4831118(200,param_2,0);
    if (10 < iVar2) {
      uVar3 = param_1 * 0x9e3779b1 + 0x3c6ef372fe952863;
      uVar3 = (uVar3 ^ uVar3 >> 0x1e) * -0x40a7b892e31b1a47;
      uVar3 = (uVar3 ^ uVar3 >> 0x1b) * -0x6b2fb644ecceee15;
      uVar1 = iVar2 - 9;
      uVar3 = uVar3 ^ uVar3 >> 0x1f;
      iVar2 = 0;
      if ((ulong)uVar1 != 0) {
        iVar2 = (int)(uVar3 / uVar1);
      }
      return ((int)uVar3 - iVar2 * uVar1) + 10;
    }
  }
  return 10;
}

