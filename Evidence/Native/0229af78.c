/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleTipsPanel$$OnOpen
void Dino_BusSand_App_UI_BattleRoyaleTipsPanel__OnOpen (Dino_BusSand_App_UI_BattleRoyaleTipsPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleTipsPanel$$OnOpen
   void Dino_BusSand_App_UI_BattleRoyaleTipsPanel__OnOpen
   (Dino_BusSand_App_UI_BattleRoyaleTipsPanel_o* __this, Il2CppObject* param, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_BattleRoyaleTipsPanel__OnOpen_219af78(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 extraout_x1;
  long lVar16;
  long lVar17;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  if ((bRam0000000004f9b9eb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cae4b8);
    FUN_02132f7c(PTR_DAT_04cae4c0);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04cadda0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae4c8);
    FUN_02132f7c(PTR_DAT_04cae4d0);
    FUN_02132f7c(PTR_DAT_04cab270);
    FUN_02132f7c(PTR_DAT_04cae4d8);
    FUN_02132f7c(PTR_DAT_04cadde0);
    FUN_02132f7c(PTR_DAT_04cae4e0);
    FUN_02132f7c(PTR_DAT_04cae4e8);
    FUN_02132f7c(PTR_DAT_04cae4f0);
                    /* try { // try from 0229b0b0 to 0239b0df has its CatchHandler @ 0229b0b0
                       catch() { ... } // from try @ 0229b0b0 with catch @ 0229b0b0
                       catch() { ... } // from try @ 0229b0ec with catch @ 0229b0b0 */
    FUN_02132f7c(PTR_DAT_04cae4f8);
    FUN_02132f7c(PTR_DAT_04cadde8);
    FUN_02132f7c(PTR_DAT_04cae500);
    FUN_02132f7c(PTR_DAT_04cae508);
                    /* try { // try from 0229b0e0 to 0239b0eb has its CatchHandler @ 0229b10c */
    FUN_02132f7c(PTR_DAT_04cad948);
                    /* try { // try from 0229b0ec to 0239b127 has its CatchHandler @ 0229b0b0 */
    FUN_02132f7c(PTR_DAT_04cae510);
    FUN_02132f7c(PTR_DAT_04cade10);
                    /* catch() { ... } // from try @ 0229b0e0 with catch @ 0229b10c */
    FUN_02132f7c(PTR_DAT_04cae518);
    bRam0000000004f9b9eb = 1;
  }
  puVar1 = PTR_DAT_04cae4c0;
  uStack_68 = 0;
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    lVar16 = *(long *)PTR_DAT_04caa458;
    plVar14 = param_2;
    if (*param_2 != lVar16) {
      plVar14 = (long *)0x0;
    }
    *(long **)(param_1 + 0x38) = plVar14;
    if (*param_2 != lVar16) {
      param_2 = (long *)0x0;
    }
  }
  thunk_FUN_02134474(param_1 + 0x38,param_2);
  uVar9 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  lVar16 = *(long *)puVar1;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar16);
    lVar16 = *(long *)puVar1;
  }
  Dino_BusSand_App_UI_BattleRoyaleUi__ApplyKeys_2199be4(uVar9,**(undefined8 **)(lVar16 + 0xb8));
  lVar16 = Dino_BusSand_App_UI_BattleRoyaleUi__get_Core_2199bb0();
  uStack_68 = 0;
  if (lVar16 == 0) {
LAB_0229b218:
    uVar9 = 0x3e9;
  }
  else {
    lVar10 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_RewardPool_22210ac(lVar16,0);
    if (lVar10 == 0) goto LAB_0229b774;
    if (*(int *)(lVar10 + 0x18) < 1) goto LAB_0229b218;
                    /* try { // try from 0229b1d0 to 0239b1ff has its CatchHandler @ 0229b1d0
                       catch() { ... } // from try @ 0229b1d0 with catch @ 0229b1d0
                       catch() { ... } // from try @ 0229b20c with catch @ 0229b1d0 */
    lVar10 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_RewardPool_22210ac(lVar16,0);
    puVar2 = PTR_DAT_04cadda0;
    if (lVar10 == 0) goto LAB_0229b774;
    System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
              (lVar10,0,*(undefined8 *)PTR_DAT_04cadda0);
    uStack_68 = extraout_x1;
    lVar10 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_RewardPool_22210ac(lVar16,0);
                    /* try { // try from 0229b200 to 0239b20b has its CatchHandler @ 0229b22c */
    if (lVar10 == 0) goto LAB_0229b774;
                    /* try { // try from 0229b20c to 0239b247 has its CatchHandler @ 0229b1d0 */
    uVar9 = System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                      (lVar10,0,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_04cae4e8;
                    /* catch() { ... } // from try @ 0229b200 with catch @ 0229b22c */
  if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
  lVar10 = System_Int64__ToString_482ecec(&uStack_68,*(undefined8 *)puVar2,uVar11,0);
  puVar2 = PTR_DAT_04ca9d18;
  if (lVar10 != 0) {
    uVar11 = System_String__Replace_46d4a70
                       (lVar10,*(undefined8 *)PTR_DAT_04cae4f8,*(undefined8 *)PTR_DAT_04cab270,0);
    lVar17 = *(long *)puVar2;
    lVar10 = *(long *)(lVar17 + 0x38);
    if (lVar10 == 0) {
                    /* try { // try from 0229b294 to 0239b307 has its CatchHandler @ 0229b294
                       catch() { ... } // from try @ 0229b294 with catch @ 0229b294
                       catch() { ... } // from try @ 0229b314 with catch @ 0229b294 */
      FUN_0216b4cc(lVar17);
      lVar10 = *(long *)(lVar17 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0216b470();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar6 = PTR_DAT_04cae508;
    puVar4 = PTR_DAT_04cae4d0;
    puVar2 = PTR_DAT_04cadde8;
    lVar10 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0216b470();
    }
    puVar8 = PTR_DAT_04cae500;
    puVar7 = PTR_DAT_04cae4f0;
    puVar5 = PTR_DAT_04cae4c8;
    puVar3 = PTR_DAT_04cadde0;
                    /* try { // try from 0229b308 to 0239b313 has its CatchHandler @ 0229b344 */
                    /* try { // try from 0229b314 to 0239b35f has its CatchHandler @ 0229b294 */
    uVar12 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                       (*(undefined8 *)puVar6,**(undefined8 **)(lVar10 + 0xb8));
    uVar13 = System_String__Concat_46d2b84(*(undefined8 *)puVar4,uVar11,*(undefined8 *)puVar2,0);
                    /* catch() { ... } // from try @ 0229b308 with catch @ 0229b344 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
                    /* try { // try from 0229b360 to 0239b45b has its CatchHandler @ 0229b360
                       catch() { ... } // from try @ 0229b360 with catch @ 0229b360
                       catch() { ... } // from try @ 0229b468 with catch @ 0229b360 */
    uVar13 = Dino_BusSand_App_UI_BattleRoyaleTipsPanel__SafeFormat_219b788(uVar12,uVar13);
    uVar11 = System_String__Concat_46d2b84(*(undefined8 *)puVar3,uVar11,*(undefined8 *)puVar2,0);
    uVar11 = Dino_BusSand_App_UI_BattleRoyaleTipsPanel__SafeFormat_219b788(uVar12,uVar11);
    uVar11 = System_String__Concat_46d2b84(*(undefined8 *)puVar4,uVar11,*(undefined8 *)puVar2,0);
    Dino_BusSand_App_UI_UIPanel__Txt_2200924(param_1,*(undefined8 *)puVar5,uVar13,0);
    Dino_BusSand_App_UI_UIPanel__Txt_2200924(param_1,*(undefined8 *)puVar8,uVar11,0);
    uVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar7,0);
    plVar14 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    uVar12 = *(undefined8 *)PTR_DAT_04cae510;
    if (lVar16 == 0) {
      uStack_6c = 7;
    }
    else {
      uStack_6c = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc(lVar16,0);
    }
    lVar16 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_6c);
    if (plVar14 != (long *)0x0) {
                    /* try { // try from 0229b45c to 0239b467 has its CatchHandler @ 0229b498 */
      if ((lVar16 != 0) &&
         (lVar10 = thunk_FUN_0216e7a0(lVar16,*(undefined8 *)(*plVar14 + 0x40)), lVar10 == 0)) {
        uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar9,0);
      }
      puVar6 = PTR_DAT_04cae4d8;
      puVar4 = PTR_DAT_04cade10;
      puVar2 = PTR_DAT_04cac7b8;
      puVar1 = PTR_DAT_04ca9ae8;
      if ((int)plVar14[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
                    /* try { // try from 0229b468 to 0239b4b3 has its CatchHandler @ 0229b360 */
      plVar14[4] = lVar16;
      thunk_FUN_02134474(plVar14 + 4,lVar16);
                    /* catch() { ... } // from try @ 0229b45c with catch @ 0229b498 */
      uVar12 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060(uVar12,plVar14);
      Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar11,uVar12);
      uVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
      uVar12 = Dino_BusSand_App_UI_BattleRoyaleUi__Amount_219b820(uStack_68);
      Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar11,uVar12);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = Dino_BusSand_App_UI_CommerceUi__ItemIcon_22a80e8(uVar9,1,0);
      lVar16 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar6,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar15 = UnityEngine_Object__op_Inequality_43c8dec(lVar16,0,0);
      lVar10 = 0;
      if ((uVar15 & 1) != 0) {
        if (lVar16 == 0) goto LAB_0229b774;
        lVar10 = UnityEngine_Component__GetComponent_object__26f97e8
                           (lVar16,*(undefined8 *)PTR_DAT_04cad788);
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar15 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
      if ((uVar15 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar15 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
        if ((uVar15 & 1) != 0) {
          if (lVar10 == 0) goto LAB_0229b774;
          UnityEngine_UI_Image__set_sprite_44a7258(lVar10,uVar9,0);
        }
      }
      lVar16 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cae4e0,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar15 = UnityEngine_Object__op_Inequality_43c8dec(lVar16,0,0);
      if ((uVar15 & 1) != 0) {
        if (lVar16 == 0) goto LAB_0229b774;
        uVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar16,0);
        uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar11,param_1,*(undefined8 *)PTR_DAT_04cae4b8,0);
        Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar9,uVar11,0,*(undefined8 *)PTR_DAT_04cad948,0);
      }
      lVar16 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cae518,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar15 = UnityEngine_Object__op_Inequality_43c8dec(lVar16,0,0);
      lVar10 = 0;
      if ((uVar15 & 1) != 0) {
        if (lVar16 == 0) goto LAB_0229b774;
        lVar10 = UnityEngine_Component__GetComponent_object__26f97e8
                           (lVar16,*(undefined8 *)PTR_DAT_04cada30);
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar15 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
      if ((uVar15 & 1) != 0) {
        if (lVar10 == 0) goto LAB_0229b774;
        uVar9 = UnityEngine_Animation__get_clip_43341a8(lVar10,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar15 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
        if ((uVar15 & 1) != 0) {
          lVar16 = UnityEngine_Animation__get_clip_43341a8(lVar10,0);
          if (lVar16 == 0) goto LAB_0229b774;
          UnityEngine_AnimationClip__get_length_4338218(lVar16,0);
          uVar9 = Dino_BusSand_App_UI_BattleRoyaleTipsPanel__WaitClip_219b878(param_1);
          Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar9,0);
        }
      }
      return;
    }
  }
LAB_0229b774:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

