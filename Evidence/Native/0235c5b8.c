/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$AtStake
bool Dino_BusSand_App_Meta_YachtRacingFeature__AtStake (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$AtStake
   bool Dino_BusSand_App_Meta_YachtRacingFeature__AtStake
   (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_YachtRacingFeature__AtStake_225c5b8(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(5,0);
  if ((uVar2 & 1) == 0) {
    return false;
  }
  lVar3 = Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38(param_1);
  if (lVar3 != 0) {
    uVar2 = Dino_BusSand_App_Meta_YachtRacingCore__get_DataValid_22553cc(lVar3,0);
    if ((uVar2 & 1) == 0) {
      bVar1 = false;
    }
    else {
      if (*(long *)(lVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      bVar1 = *(int *)(*(long *)(lVar3 + 0x10) + 0x2c) == 3;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

