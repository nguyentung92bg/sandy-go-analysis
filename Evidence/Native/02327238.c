/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$CeilToInt
int32_t Dino_BusSand_App_Meta_BattleRoyaleRules__CeilToInt (float f, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$CeilToInt
   int32_t Dino_BusSand_App_Meta_BattleRoyaleRules__CeilToInt (float f, const MethodInfo* method);
    */

int Dino_BusSand_App_Meta_BattleRoyaleRules__CeilToInt_2227238(float param_1)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04caa200;
  if ((bRam0000000004f9bdf4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bdf4 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar1 = -0x80000000;
  if ((float)(int)param_1 != INFINITY) {
    iVar1 = (int)param_1;
  }
  return iVar1;
}

