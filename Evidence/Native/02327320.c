/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$FinalPersonNum
int32_t Dino_BusSand_App_Meta_BattleRoyaleRules__FinalPersonNum (Dino_BusSand_App_Meta_BattleRoyaleFinalStage_o* f, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$FinalPersonNum
   int32_t Dino_BusSand_App_Meta_BattleRoyaleRules__FinalPersonNum
   (Dino_BusSand_App_Meta_BattleRoyaleFinalStage_o* f, const MethodInfo* method); */

int Dino_BusSand_App_Meta_BattleRoyaleRules__FinalPersonNum_2227320(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0x1c);
    iVar1 = *(int *)(param_1 + 0x20) + ~uVar3;
    iVar2 = *(int *)(param_1 + 0x20) - uVar3;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    return uVar3 + (iVar2 >> 1);
  }
  return 10;
}

