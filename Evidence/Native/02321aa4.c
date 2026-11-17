/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$NeedShowBattleResult
bool Dino_BusSand_App_Meta_BattleRoyaleCore__NeedShowBattleResult (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$NeedShowBattleResult
   bool Dino_BusSand_App_Meta_BattleRoyaleCore__NeedShowBattleResult
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_BattleRoyaleCore__NeedShowBattleResult_2221aa4(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = Dino_BusSand_App_Meta_BattleRoyaleCore__IsCheatData_2221168();
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    bVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x48) == 1;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

