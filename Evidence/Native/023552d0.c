/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$get_StageRoundCountIsMax
bool Dino_BusSand_App_Meta_YachtRacingCore__get_StageRoundCountIsMax (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$get_StageRoundCountIsMax
   bool Dino_BusSand_App_Meta_YachtRacingCore__get_StageRoundCountIsMax
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_YachtRacingCore__get_StageRoundCountIsMax_22552d0(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = Dino_BusSand_App_Meta_YachtRacingCore__get_Config_2254734();
  if (lVar2 == 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x30);
    lVar2 = Dino_BusSand_App_Meta_YachtRacingCore__get_Config_2254734(param_1);
    if (lVar2 != 0) {
      return *(int *)(lVar2 + 0x1c) < iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

