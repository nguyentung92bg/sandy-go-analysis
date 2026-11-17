/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$ActivityIsHide
bool Dino_BusSand_App_Meta_YachtRacingCore__ActivityIsHide (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$ActivityIsHide
   bool Dino_BusSand_App_Meta_YachtRacingCore__ActivityIsHide
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_YachtRacingCore__ActivityIsHide_225556c(long param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x2c);
    bVar2 = true;
    if ((iVar1 != 4) && (iVar1 != 9)) {
      bVar2 = iVar1 == 1 || iVar1 == 8;
    }
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

