/* IL2CPP: Dino.BusSand.App.UI.QuitPanel$$OnOpen
void Dino_BusSand_App_UI_QuitPanel__OnOpen (Dino_BusSand_App_UI_QuitPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.QuitPanel$$OnOpen
   void Dino_BusSand_App_UI_QuitPanel__OnOpen (Dino_BusSand_App_UI_QuitPanel_o* __this,
   Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_QuitPanel__OnOpen_231b2cc(long param_1,long *param_2)

{
  char cVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  undefined4 uVar11;
  char *pcVar12;
  ulong uVar13;
  byte bVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  if ((bRam0000000004f9c58b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caf408);
    FUN_02132f7c(PTR_DAT_04caf418);
    FUN_02132f7c(PTR_DAT_04caf420);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cb86b0);
    FUN_02132f7c(PTR_DAT_04cb86b8);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb86c0);
    FUN_02132f7c(PTR_DAT_04cb86c8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb8440);
    FUN_02132f7c(PTR_DAT_04cb86d0);
    FUN_02132f7c(PTR_DAT_04caf448);
    FUN_02132f7c(PTR_DAT_04cb8450);
    FUN_02132f7c(PTR_DAT_04cb86d8);
    FUN_02132f7c(PTR_DAT_04cb86e0);
    FUN_02132f7c(PTR_DAT_04cada90);
    FUN_02132f7c(PTR_DAT_04cb86e8);
    FUN_02132f7c(PTR_DAT_04caf460);
    FUN_02132f7c(PTR_DAT_04cb8480);
    FUN_02132f7c(PTR_DAT_04cb6458);
    FUN_02132f7c(PTR_DAT_04cb8488);
    FUN_02132f7c(PTR_DAT_04cb86f0);
    FUN_02132f7c(PTR_DAT_04cb86f8);
    FUN_02132f7c(PTR_DAT_04cb8700);
    FUN_02132f7c(PTR_DAT_04cb8708);
    FUN_02132f7c(PTR_DAT_04cae5d0);
    FUN_02132f7c(PTR_DAT_04cb6070);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04cb8710);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cb8718);
    bRam0000000004f9c58b = 1;
  }
  if ((param_2 == (long *)0x0) || (*param_2 != *(long *)(PTR_DAT_04ca9ac8 + 0x28))) {
    bVar14 = 0;
    bVar10 = false;
    plVar2 = (long *)PTR_DAT_04ca9d18;
  }
  else {
    pcVar12 = (char *)thunk_FUN_0216e9e4(param_2);
    bVar14 = 1;
    bVar10 = *pcVar12 != '\0';
    plVar2 = (long *)PTR_DAT_04ca9d18;
  }
  PTR_DAT_04ca9d18 = (undefined *)plVar2;
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x38) = bVar14 & bVar10;
    puVar4 = PTR_DAT_04cad330;
    lVar16 = *plVar2;
    lVar15 = *(long *)(lVar16 + 0x38);
    if ((bVar14 & bVar10) == 0) {
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
      lVar15 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_0216b470();
      }
      uVar17 = **(undefined8 **)(lVar15 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
      }
      uVar17 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cb8710,uVar17,0);
    }
    else {
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
      lVar15 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_0216b470();
      }
      uVar17 = **(undefined8 **)(lVar15 + 0xb8);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar4);
      }
      uVar17 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                         (*(undefined8 *)PTR_DAT_04cb8718,*(undefined8 *)PTR_DAT_04cb86e8,uVar17,0);
    }
    uVar24 = _UNK_00e20a1c;
    Dino_BusSand_App_UI_KitPopup__PanelAndRow_2280b64(_UNK_00e20a1c,0x418c0000,0);
    uVar23 = Dino_BusSand_App_UI_KitPopup__Height_2280b34(0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = Dino_BusSand_App_UI_UiKit__get_CurrentTier_228cc94(0);
    lVar15 = Dino_BusSand_App_UI_KitPopup__Build_2280d18
                       (0x44750000,uVar23,_UNK_00e204d4,param_1,uVar17,uVar11,1,0);
    puVar6 = PTR_DAT_04cb86d8;
    puVar5 = PTR_DAT_04caf448;
    puVar3 = PTR_DAT_04caf420;
    if ((lVar15 != 0) && (lVar16 = *(long *)(lVar15 + 0x48), lVar16 != 0)) {
      *(undefined4 *)(lVar16 + 0x2c) = 1;
      *(undefined1 *)(lVar16 + 0x31) = 1;
      uVar17 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      puVar3 = PTR_DAT_04caa458;
      Dino_BusSand_App_UI_KitTopBar__Build_2283ff0(0xc3000000c3000000,uVar17,0,0,0,0,1,0,0);
      uVar17 = Dino_BusSand_App_UI_KitPopup__TopPanel_2282af4(uVar24,lVar15,*(undefined8 *)puVar5,0)
      ;
      uVar13 = Dino_BusSand_App_UI_KitParts__get_LifeAtStake_2310c28(0);
      lVar19 = *plVar2;
      uVar18 = *(undefined8 *)puVar6;
      lVar16 = *(long *)(lVar19 + 0x38);
      if ((uVar13 & 1) == 0) {
        if (lVar16 == 0) {
          FUN_0216b4cc(lVar19);
          lVar16 = *(long *)(lVar19 + 0x38);
        }
        lVar16 = *(long *)(lVar16 + 0x10);
        if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_0216b470();
        }
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar16 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
        if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_0216b470();
        }
        uVar20 = **(undefined8 **)(lVar16 + 0xb8);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar4);
        }
        uVar20 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                           (*(undefined8 *)PTR_DAT_04cb86d0,*(undefined8 *)PTR_DAT_04cb86e0,uVar20,0
                           );
        Dino_BusSand_App_UI_KitParts__BrownText_23101ac
                  (0x42700000,0x44340000,0x42a00000,0x42b60000,uVar17,uVar18,uVar20,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar18 = Dino_BusSand_App_UI_UiKit__Img_228203c
                           (0x43d20000,0x43a40000,0,0,0x3f800000,uVar17,
                            *(undefined8 *)PTR_DAT_04cae5d0,*(undefined8 *)PTR_DAT_04cb6458,0,0);
        Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
                  (0x43a00000,0x41200000,uVar18,*(undefined8 *)PTR_DAT_04caf408);
LAB_0241bbb8:
        puVar7 = PTR_DAT_04cb86b0;
        puVar6 = PTR_DAT_04cada90;
        puVar5 = PTR_DAT_04cad948;
        puVar3 = PTR_DAT_04cad460;
        Dino_BusSand_App_UI_KitParts__StreakTag_23102f8(uVar17,0);
        uVar17 = *(undefined8 *)(lVar15 + 0x28);
        cVar1 = *(char *)(param_1 + 0x38);
        uVar18 = *(undefined8 *)puVar6;
        uVar24 = Dino_BusSand_App_UI_KitPopup__RowY_2280b50(uVar24,0x418c0000,0);
        lVar16 = *plVar2;
        lVar15 = *(long *)(lVar16 + 0x38);
        if (*(char *)(param_1 + 0x38) == '\0') {
          if (lVar15 == 0) {
            FUN_0216b4cc(lVar16);
                    /* try { // try from 0241bcc8 to 0251bce7 has its CatchHandler @ 0241bc24 */
            lVar15 = *(long *)(lVar16 + 0x38);
          }
          lVar15 = *(long *)(lVar15 + 0x10);
          if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_0216b470();
          }
          puVar22 = (undefined8 *)PTR_DAT_04cb86b8;
                    /* try { // try from 0241bce8 to 0251bcf7 has its CatchHandler @ 0241bcf8 */
          if (*(int *)(lVar15 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0241bcb0 with catch @ 0241bcf8
                       catch() { ... } // from try @ 0241bce8 with catch @ 0241bcf8 */
            thunk_FUN_0218fdac();
          }
                    /* try { // try from 0241bcfc to 0251bcff has its CatchHandler @ 0241bd08 */
                    /* try { // try from 0241bd00 to 0251bd0b has its CatchHandler @ 0241bc24 */
          lVar15 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0241bcfc with catch @ 0241bd08
                        */
          if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_0216b470();
          }
          uVar20 = **(undefined8 **)(lVar15 + 0xb8);
          if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
          }
          uVar20 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cb86f8,uVar20,0);
        }
        else {
          if (lVar15 == 0) {
                    /* try { // try from 0241bc24 to 0251bc6b has its CatchHandler @ 0241bc24
                       catch() { ... } // from try @ 0241bc24 with catch @ 0241bc24
                       catch() { ... } // from try @ 0241bc84 with catch @ 0241bc24
                       catch() { ... } // from try @ 0241bcc8 with catch @ 0241bc24
                       catch() { ... } // from try @ 0241bd00 with catch @ 0241bc24 */
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
          lVar15 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
          if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_0216b470();
          }
          puVar9 = PTR_DAT_04cb8708;
          puVar8 = PTR_DAT_04cb8700;
                    /* try { // try from 0241bc6c to 0251bc6f has its CatchHandler @ 0241bc94 */
                    /* try { // try from 0241bc7c to 0251bc83 has its CatchHandler @ 0241bc98 */
          uVar20 = **(undefined8 **)(lVar15 + 0xb8);
                    /* try { // try from 0241bc84 to 0251bcaf has its CatchHandler @ 0241bc24 */
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar4);
          }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0241bc6c with catch @ 0241bc94
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0241bc7c with catch @ 0241bc98
                        */
          uVar20 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                             (*(undefined8 *)puVar8,*(undefined8 *)puVar9,uVar20,0);
          puVar22 = (undefined8 *)PTR_DAT_04cb86b8;
                    /* try { // try from 0241bcb0 to 0251bcc7 has its CatchHandler @ 0241bcf8 */
        }
        uVar23 = 1;
        if (cVar1 != '\0') {
          uVar23 = 2;
        }
        Dino_BusSand_App_UI_KitParts__Button_2306a4c
                  (_UNK_00e20a78,uVar24,0,0x42940000,0x436c0000,uVar17,uVar18,uVar23,uVar20,0,0);
        puVar4 = PTR_DAT_04caa458;
        uVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar17,param_1,*puVar22,0);
        Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                  (param_1,*(undefined8 *)puVar6,uVar17,1,*(undefined8 *)puVar5,0);
        uVar17 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
        System_Action___ctor_47b5ed0(uVar17,param_1,*(undefined8 *)puVar7,0);
        Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                  (param_1,*(undefined8 *)puVar3,uVar17,1,*(undefined8 *)puVar5,0);
        return;
      }
      if (lVar16 == 0) {
        FUN_0216b4cc(lVar19);
        lVar16 = *(long *)(lVar19 + 0x38);
      }
      lVar16 = *(long *)(lVar16 + 0x10);
      if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_0216b470();
      }
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar16 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
      if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_0216b470();
      }
      uVar20 = **(undefined8 **)(lVar16 + 0xb8);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar4);
      }
      uVar20 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                         (*(undefined8 *)PTR_DAT_04cb8488,*(undefined8 *)PTR_DAT_04cb8480,uVar20,0);
                    /* try { // try from 0241b804 to 0251b83f has its CatchHandler @ 0241b804
                       catch() { ... } // from try @ 0241b804 with catch @ 0241b804
                       catch() { ... } // from try @ 0241b848 with catch @ 0241b804
                       catch() { ... } // from try @ 0241b884 with catch @ 0241b804
                       catch() { ... } // from try @ 0241b8e0 with catch @ 0241b804 */
      Dino_BusSand_App_UI_KitParts__BrownText_23101ac
                (0x42700000,0x44340000,0x42a00000,0x42b60000,uVar17,uVar18,uVar20,0);
      lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb86c8);
      System_Object___ctor_4870e5c(lVar16,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    /* try { // try from 0241b840 to 0251b847 has its CatchHandler @ 0241b854 */
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 0241b848 to 0251b86b has its CatchHandler @ 0241b804 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0241b840 with catch @ 0241b854
                        */
                    /* try { // try from 0241b86c to 0251b883 has its CatchHandler @ 0241b8d8 */
                    /* try { // try from 0241b884 to 0251b8c7 has its CatchHandler @ 0241b804 */
      uVar18 = Dino_BusSand_App_UI_UiKit__Img_228203c
                         (0x43c50000,_UNK_00e1fdf0,0,0,0x3f800000,uVar17,
                          *(undefined8 *)PTR_DAT_04cb6070,*(undefined8 *)PTR_DAT_04cb8440,0,0);
      lVar19 = Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
                         (0x439b0000,0,uVar18,*(undefined8 *)PTR_DAT_04caf408);
      if (lVar16 != 0) {
        plVar21 = (long *)(lVar16 + 0x10);
        *plVar21 = lVar19;
        thunk_FUN_02134474(plVar21,lVar19);
                    /* try { // try from 0241b8c8 to 0251b8d7 has its CatchHandler @ 0241b8d8 */
                    /* catch() { ... } // from try @ 0241b86c with catch @ 0241b8d8
                       catch() { ... } // from try @ 0241b8c8 with catch @ 0241b8d8 */
                    /* try { // try from 0241b8dc to 0251b8df has its CatchHandler @ 0241b8e8 */
        uStack_88 = 0;
        uStack_80 = 0;
                    /* try { // try from 0241b8e0 to 0251b8eb has its CatchHandler @ 0241b804 */
        uStack_78 = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0241b8dc with catch @ 0241b8e8
                        */
        System_Nullable_Color____ctor_2bc9090
                  (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_88,
                   *(undefined8 *)PTR_DAT_04cac878);
        uStack_98 = uStack_80;
        uStack_a0 = uStack_88;
        uStack_90 = uStack_78;
        uVar18 = Dino_BusSand_App_UI_UiKit__Text_2282314
                           (0x42dc0000,0x43340000,0x43020000,0,0,uVar17,
                            *(undefined8 *)PTR_DAT_04cb86f0,*(undefined8 *)PTR_DAT_04cb8450,
                            *(undefined8 *)PTR_DAT_04caf460,&uStack_a0,0x202,0);
        lVar19 = Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
                           (0x43d70000,0x42dc0000,uVar18,*(undefined8 *)PTR_DAT_04caf418);
        if (*plVar21 != 0) {
          uVar18 = UnityEngine_Component__get_transform_43bcd18(*plVar21,0);
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
          }
          Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                    (_UNK_00e207dc,0x3fa00000,_UNK_00e207cc,0x3f800000,uVar18,0,0,0);
          uVar18 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
          System_Action___ctor_47b5ed0(uVar18,lVar16,*(undefined8 *)PTR_DAT_04cb86c0,0);
          if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar16 = Dino_BusSand_App_Tween__Delayed_2161264(0x3f000000,uVar18,0);
          if (((lVar16 != 0) &&
              (lVar16 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar16,1,0), lVar16 != 0)) &&
             (Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar16,param_1,0), lVar19 != 0)) {
            uVar18 = TMPro_TMP_Text__get_transform_42cd604(lVar19,0);
            Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                      (_UNK_00e205ac,_UNK_00e2098c,_UNK_00e208d0,_UNK_00e1feac,uVar18,0,0,0);
            goto LAB_0241bbb8;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

