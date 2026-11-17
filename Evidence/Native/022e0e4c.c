/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar$$ApplyRewardRibbon
void Dino_BusSand_App_UI_StreakRateHallBar__ApplyRewardRibbon (UnityEngine_Transform_o* anchor, Dino_BusSand_App_Meta_ActivityRewardEntry_o e, System_String_o* icon, System_String_o* bgBlue, System_String_o* bgRed, System_String_o* numBlue, System_String_o* numRed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar$$ApplyRewardRibbon
   void Dino_BusSand_App_UI_StreakRateHallBar__ApplyRewardRibbon (UnityEngine_Transform_o* anchor,
   Dino_BusSand_App_Meta_ActivityRewardEntry_o e, System_String_o* icon, System_String_o* bgBlue,
   System_String_o* bgRed, System_String_o* numBlue, System_String_o* numRed, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_StreakRateHallBar__ApplyRewardRibbon_21e0e4c
               (long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000004f9bbaa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae9a8);
    FUN_02132f7c(PTR_DAT_04cb03f0);
    FUN_02132f7c(PTR_DAT_04cb0410);
    bRam0000000004f9bbaa = 1;
  }
  uVar4 = Dino_BusSand_App_Meta_StreakTowerUtil__IsRedReward_2252004(*(undefined4 *)param_2,0);
  puVar3 = PTR_DAT_04cb0410;
  puVar2 = PTR_DAT_04cb03f0;
  puVar1 = PTR_DAT_04cae9a8;
  if (param_1 != 0) {
    uVar5 = UnityEngine_Transform__Find_43d4bec(param_1,param_5,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    Dino_BusSand_App_UI_StreakRateHallBar__SetActive_21df95c(uVar5,uVar4 & 1);
    uVar5 = UnityEngine_Transform__Find_43d4bec(param_1,param_4,0);
    Dino_BusSand_App_UI_StreakRateHallBar__SetActive_21df95c(uVar5,(uVar4 ^ 0xffffffff) & 1);
    uVar5 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)puVar3,0);
    Dino_BusSand_App_UI_StreakRateHallBar__SetActive_21df95c(uVar5,uVar4 & 1);
    uVar5 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)puVar2,0);
    Dino_BusSand_App_UI_StreakRateHallBar__SetActive_21df95c(uVar5,(uVar4 ^ 0xffffffff) & 1);
    uVar5 = UnityEngine_Transform__Find_43d4bec(param_1,param_7,0);
    Dino_BusSand_App_UI_StreakRateHallBar__SetActive_21df95c(uVar5,uVar4 & 1);
    uVar5 = UnityEngine_Transform__Find_43d4bec(param_1,param_6,0);
    Dino_BusSand_App_UI_StreakRateHallBar__SetActive_21df95c(uVar5,(uVar4 ^ 0xffffffff) & 1);
    uVar5 = UnityEngine_Transform__Find_43d4bec(param_1,param_3,0);
    puVar1 = PTR_DAT_04ca9ae8;
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    lVar9 = 0;
    if ((uVar6 & 1) != 0) {
      lVar9 = UnityEngine_Transform__Find_43d4bec(param_1,param_3,0);
      if (lVar9 == 0) goto LAB_022e113c;
      lVar9 = UnityEngine_Component__GetComponent_object__26f97e8
                        (lVar9,*(undefined8 *)PTR_DAT_04cad788);
    }
    uStack_78 = param_2[1];
    uStack_80 = *param_2;
    uStack_70 = param_2[2];
    uVar5 = Dino_BusSand_App_Meta_StreakTowerUtil__RewardIcon_2252390(&uStack_80,0,0);
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar8);
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
      if ((uVar6 & 1) != 0) {
        if (lVar9 == 0) goto LAB_022e113c;
        UnityEngine_UI_Image__set_sprite_44a7258(lVar9,uVar5,0);
      }
    }
    uStack_98 = param_2[1];
    uStack_a0 = *param_2;
    uStack_90 = param_2[2];
    uVar5 = Dino_BusSand_App_Meta_StreakTowerUtil__ValueString_2252014(&uStack_a0,0);
    uVar7 = UnityEngine_Transform__Find_43d4bec(param_1,param_6,0);
    if (*(int *)(*(long *)PTR_DAT_04cae9a8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cae9a8);
    }
    Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar7,uVar5);
    uVar7 = UnityEngine_Transform__Find_43d4bec(param_1,param_7,0);
    Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar7,uVar5);
    return;
  }
LAB_022e113c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

