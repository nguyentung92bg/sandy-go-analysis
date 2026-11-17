/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$get_CurrentWinCount
int32_t Dino_BusSand_App_Meta_YachtRacingCore__get_CurrentWinCount (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$get_CurrentWinCount
   int32_t Dino_BusSand_App_Meta_YachtRacingCore__get_CurrentWinCount
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_YachtRacingCore__get_CurrentWinCount_225546c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468();
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = *(undefined4 *)(lVar2 + 0x14);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

