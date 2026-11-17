/* IL2CPP: Dino.BusSand.App.UI.SimpleStreakRatePanel$$OnOpen
void Dino_BusSand_App_UI_SimpleStreakRatePanel__OnOpen (Dino_BusSand_App_UI_SimpleStreakRatePanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SimpleStreakRatePanel$$OnOpen
   void Dino_BusSand_App_UI_SimpleStreakRatePanel__OnOpen
   (Dino_BusSand_App_UI_SimpleStreakRatePanel_o* __this, Il2CppObject* param, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_SimpleStreakRatePanel__OnOpen_21dd6a0(long param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_54;
  
  if ((bRam0000000004f9bb94 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
                    /* try { // try from 022dd6ec to 023dd6f3 has its CatchHandler @ 022dd90c */
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cae8a8);
    FUN_02132f7c(PTR_DAT_04cae8b0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0ad0);
    FUN_02132f7c(PTR_DAT_04cb0ab8);
    FUN_02132f7c(PTR_DAT_04cae9a8);
    FUN_02132f7c(PTR_DAT_04caebe8);
    FUN_02132f7c(PTR_DAT_04caebf0);
    FUN_02132f7c(PTR_DAT_04cb0ad8);
    FUN_02132f7c(PTR_DAT_04cae9c8);
    FUN_02132f7c(PTR_DAT_04caebf8);
    FUN_02132f7c(PTR_DAT_04cafba8);
    FUN_02132f7c(PTR_DAT_04caec00);
    FUN_02132f7c(PTR_DAT_04caec10);
    FUN_02132f7c(PTR_DAT_04cafb30);
    FUN_02132f7c(PTR_DAT_04cb0ae0);
                    /* try { // try from 022dd7c4 to 023dd7d3 has its CatchHandler @ 022dd904 */
    FUN_02132f7c(PTR_DAT_04caec18);
    FUN_02132f7c(PTR_DAT_04cafbc8);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04caec20);
    FUN_02132f7c(PTR_DAT_04cae9e8);
                    /* try { // try from 022dd80c to 023dd813 has its CatchHandler @ 022dd908 */
    bRam0000000004f9bb94 = 1;
  }
  puVar4 = PTR_DAT_04caa458;
  uStack_54 = 0;
  if (param_2 == (long *)0x0) {
                    /* try { // try from 022dd848 to 023dd86f has its CatchHandler @ 022dd904 */
    param_2 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    lVar14 = *(long *)PTR_DAT_04caa458;
    plVar1 = param_2;
    if (*param_2 != lVar14) {
      plVar1 = (long *)0x0;
    }
    *(long **)(param_1 + 0x38) = plVar1;
    if (*param_2 != lVar14) {
      param_2 = (long *)0x0;
    }
  }
  puVar5 = PTR_DAT_04cb0ab8;
  puVar2 = PTR_DAT_04cac498;
  thunk_FUN_02134474(param_1 + 0x38,param_2);
  lVar14 = Dino_BusSand_App_Meta_StreakRateFeature__get_I_224b6e0(0);
                    /* try { // try from 022dd870 to 023dd927 has its CatchHandler @ 022dd2d4 */
  if (lVar14 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(lVar14,0);
  }
  puVar8 = PTR_DAT_04cafbc8;
  puVar7 = PTR_DAT_04cafba8;
  puVar6 = PTR_DAT_04caec10;
  puVar3 = PTR_DAT_04ca9d18;
  if (**(char **)(*(long *)puVar5 + 0xb8) == '\0') {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* catch() { ... } // from try @ 022dd518 with catch @ 022dd8e4 */
                    /* catch() { ... } // from try @ 022dd59c with catch @ 022dd8e8 */
    uVar10 = *(undefined8 *)PTR_DAT_04cafb30;
    uVar13 = uVar10;
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = *(undefined8 *)puVar8;
    uVar13 = *(undefined8 *)puVar7;
  }
  Dino_BusSand_App_Meta_GameTracking__GoldenStreakImpression_221a688(uVar10,uVar13,0);
                    /* catch() { ... } // from try @ 022dd648 with catch @ 022dd8fc */
                    /* catch() { ... } // from try @ 022dd414 with catch @ 022dd900 */
  uVar13 = *(undefined8 *)puVar6;
                    /* catch() { ... } // from try @ 022dd460 with catch @ 022dd904
                       catch() { ... } // from try @ 022dd7c4 with catch @ 022dd904
                       catch() { ... } // from try @ 022dd848 with catch @ 022dd904 */
                    /* catch() { ... } // from try @ 022dd80c with catch @ 022dd908 */
                    /* catch() { ... } // from try @ 022dd6ec with catch @ 022dd90c */
  **(undefined1 **)(*(long *)puVar5 + 0xb8) = 0;
  uVar13 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,uVar13,0);
  lVar16 = *(long *)puVar3;
  lVar15 = *(long *)(lVar16 + 0x38);
  if (lVar15 == 0) {
                    /* try { // try from 022dd928 to 023dd9a3 has its CatchHandler @ 022dd928
                       catch() { ... } // from try @ 022dd928 with catch @ 022dd928
                       catch() { ... } // from try @ 022dd9bc with catch @ 022dd928
                       catch() { ... } // from try @ 022dddfc with catch @ 022dd928 */
    FUN_0216b4cc(lVar16);
    lVar15 = *(long *)(lVar16 + 0x38);
  }
  lVar15 = *(long *)(lVar15 + 0x10);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_0216b470();
  }
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cab550;
  lVar15 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_0216b470();
  }
  puVar6 = PTR_DAT_04cb0ae0;
  puVar5 = PTR_DAT_04cae9a8;
  uVar10 = **(undefined8 **)(lVar15 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  puVar2 = PTR_DAT_04caebf8;
                    /* try { // try from 022dd9a4 to 023dd9bb has its CatchHandler @ 022dddfc */
  uVar10 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar6,uVar10,0);
                    /* try { // try from 022dd9bc to 023dddf7 has its CatchHandler @ 022dd928 */
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar5);
  }
  Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar13,uVar10,0);
  uVar13 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar2,0);
  lVar16 = *(long *)puVar3;
  lVar15 = *(long *)(lVar16 + 0x38);
  if (lVar15 == 0) {
    FUN_0216b4cc(lVar16);
    lVar15 = *(long *)(lVar16 + 0x38);
  }
  lVar15 = *(long *)(lVar15 + 0x10);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_0216b470();
  }
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar5 = PTR_DAT_04cb0ad8;
  puVar2 = PTR_DAT_04cae9c8;
  lVar15 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_0216b470();
  }
  uVar10 = Dino_BusSand_App_Meta_StreakTowerUtil__L_2251bd4
                     (*(undefined8 *)puVar5,**(undefined8 **)(lVar15 + 0xb8),0);
  Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar13,uVar10,0);
  uVar13 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar2,0);
  lVar16 = *(long *)puVar3;
  lVar15 = *(long *)(lVar16 + 0x38);
  if (lVar15 == 0) {
    FUN_0216b4cc(lVar16);
    lVar15 = *(long *)(lVar16 + 0x38);
  }
  lVar15 = *(long *)(lVar15 + 0x10);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_0216b470();
  }
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04caec20;
  puVar5 = PTR_DAT_04caec18;
  puVar2 = PTR_DAT_04caebf0;
  lVar15 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_0216b470();
  }
  uVar10 = Dino_BusSand_App_Lang__Get_215f9c0
                     (*(undefined8 *)puVar3,**(undefined8 **)(lVar15 + 0xb8),0);
  Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar13,uVar10,0);
  uVar10 = *(undefined8 *)puVar5;
  uVar13 = *(undefined8 *)puVar2;
  if (lVar14 == 0) {
    uStack_54 = 0;
  }
  else {
    uStack_54 = Dino_BusSand_App_Meta_StreakRateFeature__CurMaxScore_224c1d0(lVar14,lVar9,0);
  }
  uVar11 = System_Int32__ToString_482d750(&uStack_54,0);
  uVar10 = System_String__Concat_46c82e0(uVar10,uVar11,0);
  Dino_BusSand_App_UI_UIPanel__Txt_2200924(param_1,uVar13,uVar10,0);
  if ((lVar14 == 0) || (lVar9 == 0)) {
    if (lVar9 == 0) {
      uVar13 = 0;
      goto LAB_022ddc84;
    }
  }
  else {
    uVar13 = Dino_BusSand_App_Meta_StreakRateFeature__CurRewardId_224c230(lVar14,lVar9,0);
    lVar14 = Dino_BusSand_App_Meta_StreakTowerUtil__Rewards_2251c7c(uVar13,0);
    lVar15 = Dino_BusSand_App_UI_UIPanel__Get_object__29460d0
                       (param_1,*(undefined8 *)PTR_DAT_04caec00,*(undefined8 *)PTR_DAT_04caebe8);
    if (lVar14 == 0) {
LAB_022ddd50:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(lVar14 + 0x18) < 1) {
      uVar13 = 0;
    }
    else {
      System_Collections_Generic_List_ActivityRewardEntry___get_Item_39e19e0
                (&uStack_78,lVar14,0,*(undefined8 *)PTR_DAT_04cae8b0);
      uStack_88 = uStack_70;
      uStack_90 = uStack_78;
      uStack_80 = uStack_68;
      uVar13 = Dino_BusSand_App_Meta_StreakTowerUtil__RewardIcon_2252390(&uStack_90,0,0);
    }
    puVar2 = PTR_DAT_04ca9ae8;
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar12 = UnityEngine_Object__op_Inequality_43c8dec(lVar15,0,0);
    if ((uVar12 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
      if ((uVar12 & 1) != 0) {
        if (lVar15 == 0) goto LAB_022ddd50;
        UnityEngine_UI_Image__set_sprite_44a7258(lVar15,uVar13,0);
      }
    }
  }
  uVar13 = *(undefined8 *)(lVar9 + 0x38);
LAB_022ddc84:
  puVar6 = PTR_DAT_04cb0ad0;
  puVar3 = PTR_DAT_04cae9e8;
  puVar5 = PTR_DAT_04cad948;
  puVar2 = PTR_DAT_04cad460;
  uVar10 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar13;
  uVar13 = thunk_FUN_0216e89c(uVar10);
  System_Action___ctor_47b5ed0(uVar13,param_1,*(undefined8 *)puVar6,0);
  Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
            (param_1,*(undefined8 *)puVar2,uVar13,1,*(undefined8 *)puVar5,0);
  uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Action___ctor_47b5ed0(uVar13,param_1,*(undefined8 *)puVar6,0);
  Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
            (param_1,*(undefined8 *)puVar3,uVar13,1,*(undefined8 *)puVar5,0);
  uVar13 = Dino_BusSand_App_UI_SimpleStreakRatePanel__CountDown_21ddd54(param_1);
  Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar13,0);
  return;
}

