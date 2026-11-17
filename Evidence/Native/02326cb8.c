/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$AtStake
bool Dino_BusSand_App_Meta_BattleRoyaleFeature__AtStake (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$AtStake
   bool Dino_BusSand_App_Meta_BattleRoyaleFeature__AtStake
   (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_BattleRoyaleFeature__AtStake_2226cb8(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(4,0);
  if ((uVar2 & 1) == 0) {
    return false;
  }
  lVar3 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_Core_22262b8(param_1);
  if (lVar3 != 0) {
    uVar2 = Dino_BusSand_App_Meta_BattleRoyaleCore__IsCheatData_2221168();
    if ((uVar2 & 1) == 0) {
      if (*(long *)(lVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      bVar1 = *(int *)(*(long *)(lVar3 + 0x10) + 0x48) == 1;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

