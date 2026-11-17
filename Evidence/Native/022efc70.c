/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$SetReward
void Dino_BusSand_App_UI_YachtRacingRewardPanel__SetReward (UnityEngine_RectTransform_o* item, Dino_BusSand_App_Meta_ActivityRewardEntry_o e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$SetReward
   void Dino_BusSand_App_UI_YachtRacingRewardPanel__SetReward (UnityEngine_RectTransform_o* item,
   Dino_BusSand_App_Meta_ActivityRewardEntry_o e, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingRewardPanel__SetReward_21efc70(long param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((bRam0000000004f9bc15 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1370);
    FUN_02132f7c(PTR_DAT_04caed30);
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04caed38);
                    /* try { // try from 022efcec to 023efcf3 has its CatchHandler @ 022efd54 */
    FUN_02132f7c(PTR_DAT_04cb1378);
                    /* try { // try from 022efcf4 to 023efd7f has its CatchHandler @ 022efc3c */
    bRam0000000004f9bc15 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (param_1 != 0) {
    lVar4 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)PTR_DAT_04cadc80,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
    puVar3 = PTR_DAT_04cb1378;
    if ((uVar5 & 1) == 0) {
      param_1 = lVar4;
    }
    if (param_1 != 0) {
                    /* catch() { ... } // from try @ 022efcec with catch @ 022efd54 */
      iVar1 = *param_2;
      lVar4 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)PTR_DAT_04cb1370,0);
                    /* try { // try from 022efd80 to 023efe2f has its CatchHandler @ 022efd80
                       catch() { ... } // from try @ 022efd80 with catch @ 022efd80
                       catch() { ... } // from try @ 022efe38 with catch @ 022efd80 */
      Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(lVar4,iVar1 != 0x3e9,0);
      uVar6 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)puVar3,0);
      Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(uVar6,iVar1 == 0x3e9,0);
      if (iVar1 != 0x3e9) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
        if ((uVar5 & 1) != 0) {
          if (lVar4 == 0) goto LAB_022eff44;
          lVar4 = UnityEngine_Component__GetComponent_object__26f97e8
                            (lVar4,*(undefined8 *)PTR_DAT_04cad788);
          uStack_68 = *(undefined8 *)(param_2 + 2);
          uStack_70 = *(undefined8 *)param_2;
          uStack_60 = *(undefined8 *)(param_2 + 4);
          uVar6 = Dino_BusSand_App_Meta_StreakTowerUtil__RewardIcon_2252390(&uStack_70,0,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
                    /* try { // try from 022efe30 to 023efe37 has its CatchHandler @ 022efe98 */
                    /* try { // try from 022efe38 to 023efec3 has its CatchHandler @ 022efd80 */
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
            if ((uVar5 & 1) != 0) {
              if (lVar4 == 0) goto LAB_022eff44;
              UnityEngine_UI_Image__set_sprite_44a7258(lVar4,uVar6,0);
            }
          }
        }
      }
      puVar3 = PTR_DAT_04caed38;
      puVar2 = PTR_DAT_04caed30;
      uStack_88 = *(undefined8 *)(param_2 + 2);
      uStack_90 = *(undefined8 *)param_2;
      uStack_80 = *(undefined8 *)(param_2 + 4);
                    /* catch() { ... } // from try @ 022efe30 with catch @ 022efe98 */
      uVar6 = Dino_BusSand_App_Meta_StreakTowerUtil__ValueString_2252014(&uStack_90,0);
      uVar7 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)puVar2,0);
                    /* try { // try from 022efec4 to 023eff73 has its CatchHandler @ 022efec4
                       catch() { ... } // from try @ 022efec4 with catch @ 022efec4
                       catch() { ... } // from try @ 022eff7c with catch @ 022efec4 */
      uVar8 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)puVar3,0);
      Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(uVar7,*param_2 - 0x3ebU < 0xfffffffe,0);
      Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(uVar8,*param_2 - 0x3e9U < 2,0);
      Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar7,uVar6,0);
      Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar8,uVar6,0);
      return;
    }
  }
LAB_022eff44:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

