/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$FloorToInt
int32_t Dino_BusSand_App_Meta_BattleRoyaleRules__FloorToInt (float f, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$FloorToInt
   int32_t Dino_BusSand_App_Meta_BattleRoyaleRules__FloorToInt (float f, const MethodInfo* method);
    */

int Dino_BusSand_App_Meta_BattleRoyaleRules__FloorToInt_22272ac(float param_1)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04caa200;
  if ((bRam0000000004f9bdf5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bdf5 = 1;
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

