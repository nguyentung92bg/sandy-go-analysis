/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardTips$$SetReward2
void Dino_BusSand_App_UI_YachtRacingRewardTips__SetReward2 (UnityEngine_Transform_o* item, Dino_BusSand_App_Meta_ActivityRewardEntry_o e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardTips$$SetReward2
   void Dino_BusSand_App_UI_YachtRacingRewardTips__SetReward2 (UnityEngine_Transform_o* item,
   Dino_BusSand_App_Meta_ActivityRewardEntry_o e, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingRewardTips__SetReward2_21f25dc(long param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000004f9bc29 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae428);
    FUN_02132f7c(PTR_DAT_04cb14e0);
    FUN_02132f7c(PTR_DAT_04cb14e8);
    FUN_02132f7c(PTR_DAT_04cb14f0);
    FUN_02132f7c(PTR_DAT_04cb14f8);
    FUN_02132f7c(PTR_DAT_04cb1500);
    FUN_02132f7c(PTR_DAT_04cadc80);
    bRam0000000004f9bc29 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (param_1 != 0) {
    lVar5 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)PTR_DAT_04cadc80,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
    if ((uVar6 & 1) == 0) {
      param_1 = lVar5;
    }
    if (param_1 != 0) {
      lVar5 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)PTR_DAT_04cae428,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
      lVar11 = 0;
      if ((uVar6 & 1) != 0) {
        if (lVar5 == 0) goto LAB_022f28c4;
        lVar11 = UnityEngine_Component__GetComponent_object__26f97e8
                           (lVar5,*(undefined8 *)PTR_DAT_04cad788);
      }
      uStack_48 = *(undefined8 *)(param_2 + 2);
      uStack_50 = *(undefined8 *)param_2;
      uStack_40 = *(undefined8 *)(param_2 + 4);
      uVar7 = Dino_BusSand_App_Meta_StreakTowerUtil__RewardIcon_2252390(&uStack_50,0,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
        if ((uVar6 & 1) != 0) {
          if (lVar11 == 0) goto LAB_022f28c4;
          UnityEngine_UI_Image__set_sprite_44a7258(lVar11,uVar7,0);
        }
      }
      puVar3 = PTR_DAT_04cb14e8;
      puVar2 = PTR_DAT_04cb14e0;
      iVar1 = *param_2;
      if (iVar1 == 0x3e9) {
        uVar7 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)PTR_DAT_04cb14f8,0);
        bVar4 = false;
        puVar10 = (undefined8 *)PTR_DAT_04cb14f0;
      }
      else {
        uVar7 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)PTR_DAT_04cb14f8,0);
        bVar4 = iVar1 != 0x3ea;
        puVar10 = (undefined8 *)PTR_DAT_04cb1500;
        if (!bVar4) {
          puVar10 = (undefined8 *)PTR_DAT_04cb14f0;
        }
      }
      Dino_BusSand_App_UI_YachtRacingUi__SetSprite_21f8818(uVar7,*puVar10,0,0);
      uStack_68 = *(undefined8 *)(param_2 + 2);
      uStack_70 = *(undefined8 *)param_2;
      uStack_60 = *(undefined8 *)(param_2 + 4);
      uVar8 = Dino_BusSand_App_Meta_StreakTowerUtil__ValueString_2252014(&uStack_70,0);
      uVar7 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)puVar2,0);
      uVar9 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)puVar3,0);
      Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(uVar7,bVar4,0);
      Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(uVar9,bVar4 ^ 1,0);
      if (bVar4 == false) {
        uVar7 = uVar9;
      }
      Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar7,uVar8,0);
      return;
    }
  }
LAB_022f28c4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

