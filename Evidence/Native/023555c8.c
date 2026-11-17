/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$AtStake
bool Dino_BusSand_App_Meta_YachtRacingCore__AtStake (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$AtStake
   bool Dino_BusSand_App_Meta_YachtRacingCore__AtStake (Dino_BusSand_App_Meta_YachtRacingCore_o*
   __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_YachtRacingCore__AtStake_22555c8(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = Dino_BusSand_App_Meta_YachtRacingCore__get_DataValid_22553cc();
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    bVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x2c) == 3;
  }
  return bVar1;
}

