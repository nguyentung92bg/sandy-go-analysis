/* IL2CPP: Dino.BusSand.App.UI.EventContinuePanel$$OnOpen
void Dino_BusSand_App_UI_EventContinuePanel__OnOpen (Dino_BusSand_App_UI_EventContinuePanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.EventContinuePanel$$OnOpen
   void Dino_BusSand_App_UI_EventContinuePanel__OnOpen (Dino_BusSand_App_UI_EventContinuePanel_o*
   __this, Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_EventContinuePanel__OnOpen_21c7940(undefined8 param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  float fVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 uVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  int iStack_94;
  
  puVar6 = PTR_DAT_04caff58;
  if ((bRam0000000004f9bb03 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04caff60);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caf418);
    FUN_02132f7c(PTR_DAT_04caf420);
    FUN_02132f7c(PTR_DAT_04cadbd8);
    FUN_02132f7c(PTR_DAT_04cada88);
    FUN_02132f7c(PTR_DAT_04cada98);
    FUN_02132f7c(PTR_DAT_04cadbe0);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caff68);
    FUN_02132f7c(PTR_DAT_04caff70);
    FUN_02132f7c(PTR_DAT_04caff78);
    FUN_02132f7c(PTR_DAT_04caff58);
    FUN_02132f7c(PTR_DAT_04caff80);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04caff88);
    FUN_02132f7c(PTR_DAT_04caf448);
    FUN_02132f7c(PTR_DAT_04cad9a0);
    FUN_02132f7c(PTR_DAT_04caf5f0);
    FUN_02132f7c(PTR_DAT_04cad9b0);
    FUN_02132f7c(PTR_DAT_04caff90);
    FUN_02132f7c(PTR_DAT_04caff98);
    FUN_02132f7c(PTR_DAT_04caffa0);
    FUN_02132f7c(PTR_DAT_04caffa8);
    FUN_02132f7c(PTR_DAT_04caced0);
    FUN_02132f7c(PTR_DAT_04caffb0);
    FUN_02132f7c(PTR_DAT_04cae5d0);
    FUN_02132f7c(PTR_DAT_04cad9e8);
    FUN_02132f7c(PTR_DAT_04caffb8);
    FUN_02132f7c(PTR_DAT_04cad4f0);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cac740);
    FUN_02132f7c(PTR_DAT_04cad4a8);
    bRam0000000004f9bb03 = 1;
  }
  uStack_98 = 0;
  iStack_94 = 0;
  lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
  System_Object___ctor_4870e5c(lVar15,0);
  puVar6 = PTR_DAT_04cadbe0;
  if (lVar15 == 0) goto LAB_022c85e8;
  *(undefined8 *)(lVar15 + 0x10) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar15 + 0x10),param_1);
  puVar5 = PTR_DAT_04cadbd8;
  if (param_2 == (long *)0x0) {
LAB_022c7bc4:
    param_2 = (long *)thunk_FUN_0216e89c();
    System_Collections_Generic_List_object____ctor_3a8138c(param_2,*(undefined8 *)puVar5);
    if (param_2 == (long *)0x0) goto LAB_022c85e8;
  }
  else {
    bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar6))
    goto LAB_022c7bc4;
  }
  iVar1 = (int)param_2[3];
  lVar22 = *(long *)PTR_DAT_04ca9d18;
  iVar14 = iVar1;
  if (1 < iVar1) {
    iVar14 = 2;
  }
  lVar19 = *(long *)(lVar22 + 0x38);
  if (lVar19 == 0) {
    FUN_0216b4cc(lVar22);
    lVar19 = *(long *)(lVar22 + 0x38);
  }
  lVar19 = *(long *)(lVar19 + 0x10);
  if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = FUN_0216b470();
  }
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar6 = PTR_DAT_04cad330;
  lVar22 = *(long *)(*(long *)(lVar22 + 0x38) + 0x10);
  if ((*(ushort *)(lVar22 + 0x135) & 1) == 0) {
    lVar22 = FUN_0216b470();
  }
  puVar8 = PTR_DAT_04caff98;
  puVar5 = PTR_DAT_04caff88;
  uVar23 = **(undefined8 **)(lVar22 + 0xb8);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar6);
  }
  uVar23 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                     (*(undefined8 *)puVar8,*(undefined8 *)puVar5,uVar23,0);
  uVar28 = _UNK_00e20a1c;
  Dino_BusSand_App_UI_KitPopup__PanelAndRow_2280b64(_UNK_00e20a1c,0x418c0000,0);
  uVar27 = Dino_BusSand_App_UI_KitPopup__Height_2280b34(0);
  uVar13 = Dino_BusSand_App_UI_UiKit__get_CurrentTier_228cc94(0);
  lVar22 = Dino_BusSand_App_UI_KitPopup__Build_2280d18
                     (0x44750000,uVar27,_UNK_00e204d4,param_1,uVar23,uVar13,1,0);
  if ((lVar22 != 0) && (*(long *)(lVar22 + 0x48) != 0)) {
    lVar19 = *(long *)(lVar22 + 0x38);
    *(undefined1 *)(*(long *)(lVar22 + 0x48) + 0x31) = 1;
    puVar6 = PTR_DAT_04caff80;
    if (lVar19 != 0) {
      UnityEngine_Object__set_name_43c72ec(lVar19,*(undefined8 *)PTR_DAT_04caffb8,0);
      uVar23 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
      lVar19 = *(long *)puVar6;
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar19);
        lVar19 = *(long *)puVar6;
      }
      puVar5 = PTR_DAT_04caf420;
      puVar21 = *(undefined8 **)(lVar19 + 0xb8);
      lVar25 = puVar21[1];
      if (lVar25 == 0) {
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar19);
          puVar21 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
        }
        uVar26 = *puVar21;
        lVar25 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(lVar25,uVar26,*(undefined8 *)PTR_DAT_04caff68,0);
        plVar16 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
        *plVar16 = lVar25;
        thunk_FUN_02134474(plVar16,lVar25);
      }
      puVar6 = PTR_DAT_04caf448;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar5 = PTR_DAT_04ca9ae8;
      Dino_BusSand_App_UI_KitTopBar__Build_2283ff0(0xc3000000c3000000,uVar23,lVar25,0,0,0,1,0,0);
      lVar19 = Dino_BusSand_App_UI_KitPopup__TopPanel_2282af4(uVar28,lVar22,*(undefined8 *)puVar6,0)
      ;
      puVar7 = PTR_DAT_04cae5d0;
      puVar8 = PTR_DAT_04cada98;
      puVar6 = PTR_DAT_04cad4c0;
      uVar4 = _UNK_00e2098c;
      uVar27 = _UNK_00e206e4;
      fVar3 = _UNK_00e201f4;
      uVar13 = _UNK_00e1feac;
      iStack_94 = 0;
      if (0 < iVar1) {
        do {
                    /* try { // try from 022c7e7c to 023c7e83 has its CatchHandler @ 022c7ea0 */
          uVar23 = System_Collections_Generic_List_object___get_Item_3a81924
                             (param_2,iStack_94,*(undefined8 *)puVar8);
                    /* try { // try from 022c7e84 to 023c7eb3 has its CatchHandler @ 022c7e4c */
          Dino_BusSand_App_UI_EventQuitWarnPanel__Badge_21c85f4(lVar19,uVar23,iStack_94,iVar14);
                    /* catch() { ... } // from try @ 022c7e7c with catch @ 022c7ea0 */
          uVar23 = System_Int32__ToString_482d750(&iStack_94,0);
          uVar23 = System_String__Concat_46c82e0(*(undefined8 *)puVar7,uVar23,0);
          if (lVar19 == 0) goto LAB_022c85e8;
          uVar23 = UnityEngine_Transform__Find_43d4bec(lVar19,uVar23,0);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar5);
          }
          uVar17 = UnityEngine_Object__op_Inequality_43c8dec(uVar23,0,0);
          iVar1 = iStack_94;
          if ((uVar17 & 1) != 0) {
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                      ((float)iVar1 * fVar3 + 0.25,uVar4,uVar27,uVar13,uVar23,0,0,0);
          }
          iStack_94 = iStack_94 + 1;
        } while (iStack_94 < iVar14);
      }
      lVar24 = *(long *)PTR_DAT_04ca9d18;
      lVar25 = *(long *)(lVar24 + 0x38);
      if (lVar25 == 0) {
        FUN_0216b4cc(lVar24);
        lVar25 = *(long *)(lVar24 + 0x38);
      }
      puVar6 = PTR_DAT_04cad330;
      lVar25 = *(long *)(lVar25 + 0x10);
      if ((*(ushort *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = FUN_0216b470();
      }
      if (*(int *)(lVar25 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar25 = *(long *)(*(long *)(lVar24 + 0x38) + 0x10);
      if ((*(ushort *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = FUN_0216b470();
      }
      puVar11 = PTR_DAT_04caffb0;
      puVar10 = PTR_DAT_04caffa0;
      puVar9 = PTR_DAT_04cad4f0;
      puVar7 = PTR_DAT_04cad4a8;
      puVar8 = PTR_DAT_04cac878;
                    /* try { // try from 022c7fb4 to 023c803b has its CatchHandler @ 022c7fb4
                       catch() { ... } // from try @ 022c7fb4 with catch @ 022c7fb4
                       catch() { ... } // from try @ 022c804c with catch @ 022c7fb4 */
      lVar24 = *(long *)puVar6;
      uVar23 = **(undefined8 **)(lVar25 + 0xb8);
      if (*(int *)(lVar24 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar24);
      }
      uVar23 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                         (*(undefined8 *)puVar10,*(undefined8 *)puVar11,uVar23,0);
      puVar20 = *(undefined4 **)(*(long *)puVar6 + 0xb8);
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      System_Nullable_Color____ctor_2bc9090
                (*puVar20,puVar20[1],puVar20[2],puVar20[3],&uStack_b0,*(undefined8 *)puVar8);
                    /* try { // try from 022c803c to 023c804b has its CatchHandler @ 022c81a8 */
      uStack_c0 = uStack_a0;
                    /* try { // try from 022c804c to 023c81bb has its CatchHandler @ 022c7fb4 */
      uStack_c8 = uStack_a8;
      uStack_d0 = uStack_b0;
      lVar19 = Dino_BusSand_App_UI_UiKit__Text_2282314
                         (0x42480000,0x443e0000,0x430c0000,0,0,lVar19,*(undefined8 *)puVar9,uVar23,
                          *(undefined8 *)puVar7,&uStack_d0,0x202,0);
      puVar8 = PTR_DAT_04caf418;
      puVar6 = PTR_DAT_04caba50;
      if (lVar19 != 0) {
        TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar19,1,0);
        Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
                  (0x43d70000,0,lVar19,*(undefined8 *)puVar8);
        uVar28 = Dino_BusSand_App_UI_KitPopup__RowY_2280b50(uVar28,0x418c0000,0);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar19 = *(long *)puVar6;
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar19 = *(long *)puVar6;
        }
        uVar23 = **(undefined8 **)(lVar19 + 0xb8);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar5);
        }
        uVar17 = UnityEngine_Object__op_Inequality_43c8dec(uVar23,0,0);
        if ((uVar17 & 1) == 0) {
          iVar14 = 0;
          uVar13 = 0;
          uVar27 = _UNK_00e20a78;
        }
        else {
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b88f == '\0') {
            FUN_02132f7c(PTR_DAT_04caba50);
            cRam0000000004f9b88f = '\x01';
          }
          lVar19 = *(long *)puVar6;
          if (*(int *)(lVar19 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar19 = *(long *)puVar6;
          }
          if (**(long **)(lVar19 + 0xb8) == 0) goto LAB_022c85e8;
          iVar14 = Dino_BusSand_App_GameApp__get_ReviveAdsLeft_21645f4(**(long **)(lVar19 + 0xb8),0)
          ;
                    /* catch() { ... } // from try @ 022c803c with catch @ 022c81a8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c8238 with catch @ 022c81bc
                       catch(type#1 @ 00000000) { ... } // from try @ 022c8284 with catch @ 022c81bc
                       catch(type#1 @ 00000000) { ... } // from try @ 022c82a8 with catch @ 022c81bc
                        */
          uVar13 = 0xc35f0000;
          uVar27 = 0x43ba0000;
          if (iVar14 < 1) {
            uVar13 = 0;
            uVar27 = _UNK_00e20a78;
          }
        }
        puVar10 = PTR_DAT_04caff70;
        puVar9 = PTR_DAT_04caf5f0;
        puVar7 = PTR_DAT_04cad9e8;
        puVar8 = PTR_DAT_04cad948;
                    /* try { // try from 022c81e8 to 023c81f3 has its CatchHandler @ 022c8268 */
        uVar23 = *(undefined8 *)(lVar22 + 0x28);
        uVar26 = *(undefined8 *)PTR_DAT_04cad9e8;
        if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 022c8214 to 023c8237 has its CatchHandler @ 022c8258 */
        uStack_98 = Dino_BusSand_App_Meta_Economy__get_RevivePrice_220499c(0);
        uVar18 = System_Int32__ToString_482d750(&uStack_98,0);
                    /* try { // try from 022c8238 to 023c827b has its CatchHandler @ 022c81bc */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c8214 with catch @ 022c8258
                        */
        uVar23 = Dino_BusSand_App_UI_KitParts__Button_2306a4c
                           (uVar27,uVar28,uVar13,0x42940000,0x436c0000,uVar23,uVar26,0,uVar18,
                            *(undefined8 *)puVar9,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c81e8 with catch @ 022c8268
                        */
        *(undefined8 *)(lVar15 + 0x18) = uVar23;
        thunk_FUN_02134474();
        puVar21 = (undefined8 *)PTR_DAT_04caa458;
                    /* try { // try from 022c827c to 023c8283 has its CatchHandler @ 022c82a0 */
                    /* try { // try from 022c8284 to 023c82a3 has its CatchHandler @ 022c81bc */
        uVar23 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar23,lVar15,*(undefined8 *)puVar10,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c827c with catch @ 022c82a0
                        */
                    /* try { // try from 022c82a4 to 023c82a7 has its CatchHandler @ 022c82b0 */
                    /* try { // try from 022c82a8 to 023c82b3 has its CatchHandler @ 022c81bc */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c82a4 with catch @ 022c82b0
                        */
        Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                  (param_1,*(undefined8 *)puVar7,uVar23,1,*(undefined8 *)puVar8,0);
        if (0 < iVar14) {
          uVar23 = *(undefined8 *)(lVar22 + 0x28);
          lVar19 = *(long *)PTR_DAT_04ca9d18;
          lVar22 = *(long *)(lVar19 + 0x38);
          if (lVar22 == 0) {
            FUN_0216b4cc(lVar19);
            lVar22 = *(long *)(lVar19 + 0x38);
          }
          puVar7 = PTR_DAT_04cad330;
          lVar22 = *(long *)(lVar22 + 0x10);
          if ((*(ushort *)(lVar22 + 0x135) & 1) == 0) {
            lVar22 = FUN_0216b470();
          }
          if (*(int *)(lVar22 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar22 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
          if ((*(ushort *)(lVar22 + 0x135) & 1) == 0) {
            lVar22 = FUN_0216b470();
          }
          puVar12 = PTR_DAT_04caffa8;
          puVar11 = PTR_DAT_04cad9b0;
          puVar10 = PTR_DAT_04cad9a0;
          puVar9 = PTR_DAT_04caced0;
                    /* try { // try from 022c8330 to 023c83c3 has its CatchHandler @ 022c8330
                       catch(type#1 @ 00000000) { ... } // from try @ 022c8330 with catch @ 022c8330
                       catch(type#1 @ 00000000) { ... } // from try @ 022c8428 with catch @ 022c8330
                       catch(type#1 @ 00000000) { ... } // from try @ 022c84d4 with catch @ 022c8330
                        */
          uVar26 = **(undefined8 **)(lVar22 + 0xb8);
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar7);
          }
          puVar7 = PTR_DAT_04cac740;
          uVar26 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                             (*(undefined8 *)puVar11,*(undefined8 *)puVar9,uVar26,0);
          uVar23 = Dino_BusSand_App_UI_KitParts__Button_2306a4c
                             (_UNK_00e204dc,uVar28,0x433f0000,0x42940000,0x436c0000,uVar23,
                              *(undefined8 *)puVar10,2,uVar26,*(undefined8 *)puVar12,0);
                    /* try { // try from 022c83c4 to 023c8427 has its CatchHandler @ 022c8484 */
          Dino_BusSand_App_UI_UiKit__Breathe_2289058(_UNK_00e20a84,_UNK_00e20170,uVar23,0);
          if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_GameTracking__AdOffer_22159b0(*(undefined8 *)puVar7,0);
          puVar21 = (undefined8 *)PTR_DAT_04caa458;
          uVar23 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
          System_Action___ctor_47b5ed0(uVar23,lVar15,*(undefined8 *)PTR_DAT_04caff78,0);
                    /* try { // try from 022c8428 to 023c84c7 has its CatchHandler @ 022c8330 */
          Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                    (param_1,*(undefined8 *)puVar10,uVar23,1,*(undefined8 *)puVar8,0);
        }
        uVar23 = thunk_FUN_0216e89c(*puVar21);
        System_Action___ctor_47b5ed0(uVar23,param_1,*(undefined8 *)PTR_DAT_04caff60,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c83c4 with catch @ 022c8484
                        */
        Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                  (param_1,*(undefined8 *)PTR_DAT_04caffb8,uVar23,1,*(undefined8 *)puVar8,0);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar15 = *(long *)puVar6;
                    /* try { // try from 022c84c8 to 023c84cb has its CatchHandler @ 022c84cc */
        if (*(int *)(lVar15 + 0xe4) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c84c8 with catch @ 022c84cc
                        */
          thunk_FUN_0218fdac();
                    /* try { // try from 022c84d0 to 023c84d3 has its CatchHandler @ 022c84dc */
          lVar15 = *(long *)puVar6;
        }
                    /* try { // try from 022c84d4 to 023c84df has its CatchHandler @ 022c8330 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c84d0 with catch @ 022c84dc
                        */
        uVar23 = **(undefined8 **)(lVar15 + 0xb8);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    /* try { // try from 022c84e8 to 023c8527 has its CatchHandler @ 022c84e8
                       catch(type#1 @ 00000000) { ... } // from try @ 022c84e8 with catch @ 022c84e8
                       catch(type#1 @ 00000000) { ... } // from try @ 022c856c with catch @ 022c84e8
                       catch(type#1 @ 00000000) { ... } // from try @ 022c860c with catch @ 022c84e8
                        */
          thunk_FUN_0218fdac(*(long *)puVar5);
        }
        uVar17 = UnityEngine_Object__op_Inequality_43c8dec(uVar23,0,0);
        if ((uVar17 & 1) == 0) {
          uVar28 = 0;
        }
        else {
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b88f == '\0') {
            FUN_02132f7c(PTR_DAT_04caba50);
                    /* try { // try from 022c8528 to 023c8533 has its CatchHandler @ 022c85a8 */
            cRam0000000004f9b88f = '\x01';
          }
          lVar15 = *(long *)puVar6;
                    /* try { // try from 022c8534 to 023c856b has its CatchHandler @ 022c85b0 */
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar15 = *(long *)puVar6;
          }
          if (**(long **)(lVar15 + 0xb8) == 0) goto LAB_022c85e8;
          uVar28 = *(undefined4 *)(**(long **)(lVar15 + 0xb8) + 0x58);
        }
                    /* try { // try from 022c856c to 023c85ff has its CatchHandler @ 022c84e8 */
        if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar6 = PTR_DAT_04caff90;
        uVar13 = Dino_BusSand_App_Meta_Economy__get_RevivePrice_220499c(0);
        if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac498);
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c8528 with catch @ 022c85a8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c8534 with catch @ 022c85b0
                        */
        Dino_BusSand_App_Meta_GameTracking__ContinueOffer_22193d0
                  (uVar28,*(undefined8 *)puVar6,uVar13,iVar14,0);
        return;
      }
    }
  }
LAB_022c85e8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

