/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$OnGameLoseConfirmed
void Dino_BusSand_App_Meta_YachtRacingCore__OnGameLoseConfirmed (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$OnGameLoseConfirmed
   void Dino_BusSand_App_Meta_YachtRacingCore__OnGameLoseConfirmed
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingCore__OnGameLoseConfirmed_22589e8(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = Dino_BusSand_App_Meta_YachtRacingCore__get_DataValid_22553cc();
  if ((uVar2 & 1) == 0) {
    uVar3 = 9;
LAB_02358a84:
    Dino_BusSand_App_Meta_YachtRacingCore__ApplyState_225550c(param_1,uVar3);
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02358aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      return;
    }
    return;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x4c) + 1;
    *(int *)(lVar5 + 0x4c) = iVar1;
    lVar5 = Dino_BusSand_App_Meta_YachtRacingCore__StageInfo_2254fe0
                      (param_1,*(undefined4 *)(lVar5 + 0x78));
    if (lVar5 == 0) {
      iVar4 = 9999;
    }
    else {
      iVar4 = *(int *)(lVar5 + 0x18);
    }
    if (iVar1 < iVar4) {
      uVar3 = 2;
      goto LAB_02358a84;
    }
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
      lVar6 = *(long *)(param_1 + 0x10);
      uVar3 = (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      if (lVar6 != 0) {
        lVar5 = *(long *)(param_1 + 0x10);
        *(undefined8 *)(lVar6 + 0x40) = uVar3;
        if (lVar5 != 0) {
          *(undefined4 *)(lVar5 + 0x48) = 0;
          uVar3 = 4;
          goto LAB_02358a84;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

