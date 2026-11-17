/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$CheckCanClaimReward
bool Dino_BusSand_App_Meta_YachtRacingCore__CheckCanClaimReward (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$CheckCanClaimReward
   bool Dino_BusSand_App_Meta_YachtRacingCore__CheckCanClaimReward
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_YachtRacingCore__CheckCanClaimReward_225565c(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    if ((*(int *)(lVar3 + 0x2c) == 7) && (*(char *)(lVar3 + 0x81) == '\0')) {
      lVar3 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468();
      if (lVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(lVar3 + 0x14);
      }
      iVar2 = Dino_BusSand_App_Meta_YachtRacingCore__MaxProgress_22551dc(param_1,0xffffffff);
      bVar1 = iVar2 <= iVar4;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

