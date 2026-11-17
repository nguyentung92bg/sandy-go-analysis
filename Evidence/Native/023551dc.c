/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$MaxProgress
int32_t Dino_BusSand_App_Meta_YachtRacingCore__MaxProgress (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, int32_t stage, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$MaxProgress
   int32_t Dino_BusSand_App_Meta_YachtRacingCore__MaxProgress
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, int32_t stage, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_YachtRacingCore__MaxProgress_22551dc(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_2 == -1) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    param_2 = *(int *)(*(long *)(param_1 + 0x10) + 0x78);
  }
  lVar2 = Dino_BusSand_App_Meta_RacingStageConfig__Load_225d05c(param_2,0);
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x18);
  }
  return uVar1;
}

