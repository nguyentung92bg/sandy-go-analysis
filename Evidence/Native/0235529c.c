/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$get_FirstStartRewardId
int32_t Dino_BusSand_App_Meta_YachtRacingCore__get_FirstStartRewardId (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$get_FirstStartRewardId
   int32_t Dino_BusSand_App_Meta_YachtRacingCore__get_FirstStartRewardId
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_YachtRacingCore__get_FirstStartRewardId_225529c(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = Dino_BusSand_App_Meta_YachtRacingCore__get_Config_2254734();
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    lVar2 = Dino_BusSand_App_Meta_YachtRacingCore__get_Config_2254734(param_1);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(undefined4 *)(lVar2 + 0x18);
  }
  return uVar1;
}

