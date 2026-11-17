/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$get_RoundStageCount
int32_t Dino_BusSand_App_Meta_YachtRacingCore__get_RoundStageCount (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$get_RoundStageCount
   int32_t Dino_BusSand_App_Meta_YachtRacingCore__get_RoundStageCount
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_YachtRacingCore__get_RoundStageCount_225517c(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((bRam0000000004f9bfea & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3e80);
    bRam0000000004f9bfea = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_YachtRacingCore__get_Config_2254734(param_1);
  uVar1 = 0;
  if (lVar2 != 0) {
    lVar2 = Dino_BusSand_App_Meta_YachtRacingCore__get_Config_2254734(param_1);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x30) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(undefined4 *)(*(long *)(lVar2 + 0x30) + 0x18);
  }
  return uVar1;
}

