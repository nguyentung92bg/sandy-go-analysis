/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$OnClaimReward
int32_t Dino_BusSand_App_Meta_YachtRacingCore__OnClaimReward (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$OnClaimReward
   int32_t Dino_BusSand_App_Meta_YachtRacingCore__OnClaimReward
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_YachtRacingCore__OnClaimReward_2258b14(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_02358c24:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x81) != '\0') {
    return 0xffffffff;
  }
  uVar3 = Dino_BusSand_App_Meta_YachtRacingCore__ClaimStageReward_2258c28();
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_02358c24;
  lVar7 = *(long *)(param_1 + 0x28);
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x81) = 1;
  if (lVar7 != 0) {
    (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
  }
  uVar5 = Dino_BusSand_App_Meta_YachtRacingCore__get_DataValid_22553cc(param_1);
  if ((uVar5 & 1) == 0) {
    uVar6 = 9;
LAB_02358bc4:
    Dino_BusSand_App_Meta_YachtRacingCore__ApplyState_225550c(param_1,uVar6);
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_02358c24;
    iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x78);
    iVar4 = Dino_BusSand_App_Meta_YachtRacingCore__get_RoundStageCount_225517c(param_1);
    lVar7 = *(long *)(param_1 + 0x10);
    if (iVar1 == iVar4) {
      if (lVar7 == 0) goto LAB_02358c24;
      *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + 1;
      uVar5 = Dino_BusSand_App_Meta_YachtRacingCore__get_StageRoundCountIsMax_22552d0(param_1);
      if ((uVar5 & 1) != 0) {
        uVar6 = 8;
        goto LAB_02358bc4;
      }
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_02358c24;
      uVar6 = 1;
      *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x78) = 1;
    }
    else {
      if (lVar7 == 0) goto LAB_02358c24;
      uVar2 = *(undefined4 *)(lVar7 + 0x78);
      uVar6 = 2;
      *(int *)(lVar7 + 0x78) = iVar1 + 1;
      *(undefined4 *)(lVar7 + 0x7c) = uVar2;
    }
    Dino_BusSand_App_Meta_YachtRacingCore__ApplyState_225550c(param_1,uVar6);
    lVar7 = *(long *)(param_1 + 0x28);
    if (lVar7 != 0) {
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
    }
  }
  return uVar3;
}

