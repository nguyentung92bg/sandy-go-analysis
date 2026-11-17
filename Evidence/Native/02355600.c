/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$NeedShowSpecialLose
bool Dino_BusSand_App_Meta_YachtRacingCore__NeedShowSpecialLose (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$NeedShowSpecialLose
   bool Dino_BusSand_App_Meta_YachtRacingCore__NeedShowSpecialLose
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_YachtRacingCore__NeedShowSpecialLose_2255600(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = Dino_BusSand_App_Meta_YachtRacingCore__get_DataValid_22553cc();
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x2c) == 3) {
      iVar1 = *(int *)(param_1 + 100);
      iVar2 = Dino_BusSand_App_Meta_YachtRacingCore__MaxProgress_22551dc(param_1,0xffffffff);
      return iVar1 + 1 == iVar2;
    }
  }
  return false;
}

