/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$OnOpen
void Dino_BusSand_App_UI_StorePanel__OnOpen (Dino_BusSand_App_UI_StorePanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$OnOpen
   void Dino_BusSand_App_UI_StorePanel__OnOpen (Dino_BusSand_App_UI_StorePanel_o* __this,
   Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_StorePanel__OnOpen_22b6324(long param_1,long *param_2)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int *piVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined4 *puVar24;
  int iVar25;
  long *plVar26;
  uint uVar27;
  char cVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uStack_84;
  
  if ((bRam0000000004f9c2e9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cb62d8);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cb1b08);
    FUN_02132f7c(PTR_DAT_04cafbd0);
    FUN_02132f7c(PTR_DAT_04cb62e0);
    FUN_02132f7c(PTR_DAT_04cafbd8);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04caf420);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb62e8);
    FUN_02132f7c(PTR_DAT_04cb62f0);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb62f8);
    FUN_02132f7c(PTR_DAT_04cb6300);
    FUN_02132f7c(PTR_DAT_04cae0f8);
    FUN_02132f7c(PTR_DAT_04cb6308);
    FUN_02132f7c(PTR_DAT_04cb6310);
    FUN_02132f7c(PTR_DAT_04cb6318);
    FUN_02132f7c(PTR_DAT_04caf3c8);
    FUN_02132f7c(PTR_DAT_04cadc30);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04cadf50);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cb6320);
    FUN_02132f7c(PTR_DAT_04cb6328);
    bRam0000000004f9c2e9 = 1;
  }
  if (param_2 == (long *)0x0) {
    iVar25 = 7000;
  }
  else {
    iVar25 = 7000;
    if (*param_2 == *(long *)(PTR_DAT_04ca9ac8 + 0x48)) {
      piVar13 = (int *)thunk_FUN_0216e9e4(param_2);
      iVar25 = *piVar13;
      if (iVar25 < 1) {
        iVar25 = 7000;
      }
    }
  }
  puVar6 = PTR_DAT_04cadc30;
  puVar5 = PTR_DAT_04cad330;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x38) = iVar25;
    uVar14 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar5);
    }
    lVar15 = Dino_BusSand_App_UI_UiKit__Fill_22817d8(0,0,0,0,uVar14,*(undefined8 *)puVar6,0);
    if ((lVar15 != 0) &&
       (lVar16 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0), lVar16 != 0)) {
      UnityEngine_GameObject__AddComponent_object__275a54c(lVar16,*(undefined8 *)PTR_DAT_04cb1b08);
      lVar16 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0);
      puVar6 = PTR_DAT_04cb62f8;
      puVar5 = PTR_DAT_04cacf98;
      if (lVar16 != 0) {
        plVar17 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                    (lVar16,*(undefined8 *)PTR_DAT_04cacf98);
        uVar14 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*(undefined8 *)puVar6);
        if (plVar17 != (long *)0x0) {
          UnityEngine_UI_Image__set_sprite_44a7258(plVar17,uVar14,0);
          UnityEngine_UI_Image__set_type_44afa58(plVar17,2,0);
          (**(code **)(*plVar17 + 0x2a8))
                    (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar17,
                     *(undefined8 *)(*plVar17 + 0x2b0));
          (**(code **)(*plVar17 + 0x2c8))(plVar17,1,*(undefined8 *)(*plVar17 + 0x2d0));
          lVar16 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0);
          puVar6 = PTR_DAT_04cadf50;
          if (lVar16 != 0) {
            UnityEngine_GameObject__AddComponent_object__275a54c
                      (lVar16,*(undefined8 *)PTR_DAT_04cb62e0);
            uVar14 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
            if (cRam0000000004f9b948 == '\0') {
              FUN_02132f7c(PTR_DAT_04cacfc0);
              cRam0000000004f9b948 = '\x01';
            }
            puVar7 = PTR_DAT_04cacfc0;
            lVar16 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                               (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                                (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],0,0,uVar14,
                                *(undefined8 *)puVar6,0,0,0);
            puVar6 = PTR_DAT_04caf3c8;
            if (lVar16 != 0) {
              UnityEngine_RectTransform__set_anchorMin_43cf5e4(0,0x3f800000,lVar16,0);
              UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f800000,0x3f800000,lVar16,0);
              UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0x3f800000,lVar16,0);
              UnityEngine_RectTransform__set_offsetMin_43cfe84(0,_UNK_00e2021c,lVar16,0);
              UnityEngine_RectTransform__set_offsetMax_43d0018(0,0x43c80000,lVar16,0);
              lVar18 = Dino_BusSand_App_UI_UiKit__Fill_22817d8
                                 (0,_UNK_00e204ec,0,0,lVar16,*(undefined8 *)puVar6,0);
              if ((lVar18 != 0) &&
                 (lVar18 = UnityEngine_Component__get_gameObject_43bcde8(lVar18,0),
                 puVar6 = PTR_DAT_04cb6308, lVar18 != 0)) {
                plVar17 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                            (lVar18,*(undefined8 *)puVar5);
                Dino_BusSand_App_UI_UiKit__Hex_2285a84(*(undefined8 *)puVar6,0);
                puVar6 = PTR_DAT_04cb6300;
                if (plVar17 != (long *)0x0) {
                  (**(code **)(*plVar17 + 0x2a8))(plVar17,*(undefined8 *)(*plVar17 + 0x2b0));
                  (**(code **)(*plVar17 + 0x2c8))(plVar17,0,*(undefined8 *)(*plVar17 + 0x2d0));
                  if (cRam0000000004f9b948 == '\0') {
                    FUN_02132f7c(PTR_DAT_04cacfc0);
                    cRam0000000004f9b948 = '\x01';
                  }
                  puVar24 = *(undefined4 **)(*(long *)puVar7 + 0xb8);
                  lVar18 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                                     (*puVar24,puVar24[1],0,0,lVar16,*(undefined8 *)puVar6,0,0,0);
                  if (lVar18 != 0) {
                    UnityEngine_RectTransform__set_anchorMin_43cf5e4(0,0,lVar18,0);
                    UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f800000,0,lVar18,0);
                    UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0,lVar18,0);
                    if (cRam0000000004f9b948 == '\0') {
                      FUN_02132f7c(PTR_DAT_04cacfc0);
                      cRam0000000004f9b948 = '\x01';
                    }
                    puVar24 = *(undefined4 **)(*(long *)puVar7 + 0xb8);
                    UnityEngine_RectTransform__set_offsetMin_43cfe84(*puVar24,puVar24[1],lVar18,0);
                    UnityEngine_RectTransform__set_offsetMax_43d0018(0,_UNK_00e1ffd4,lVar18,0);
                    lVar18 = UnityEngine_Component__get_gameObject_43bcde8(lVar18,0);
                    puVar6 = PTR_DAT_04cb6320;
                    if (lVar18 != 0) {
                      plVar17 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                                  (lVar18,*(undefined8 *)puVar5);
                      uVar14 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*(undefined8 *)puVar6);
                      puVar5 = PTR_DAT_04caba50;
                      if (plVar17 != (long *)0x0) {
                        UnityEngine_UI_Image__set_sprite_44a7258(plVar17,uVar14,0);
                        UnityEngine_UI_Image__set_type_44afa58(plVar17,2,0);
                        (**(code **)(*plVar17 + 0x2c8))(plVar17,0,*(undefined8 *)(*plVar17 + 0x2d0))
                        ;
                        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        if (cRam0000000004f9b88f == '\0') {
                          FUN_02132f7c(PTR_DAT_04caba50);
                          cRam0000000004f9b88f = '\x01';
                        }
                        puVar6 = PTR_DAT_04ca9ae8;
                        lVar18 = *(long *)puVar5;
                        if (*(int *)(lVar18 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                          lVar18 = *(long *)puVar5;
                        }
                        uVar14 = **(undefined8 **)(lVar18 + 0xb8);
                        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                          thunk_FUN_0218fdac(*(long *)puVar6);
                        }
                        uVar19 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
                        if ((uVar19 & 1) == 0) {
                          cVar28 = '\0';
                        }
                        else {
                          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          if (cRam0000000004f9b88f == '\0') {
                            FUN_02132f7c(PTR_DAT_04caba50);
                            cRam0000000004f9b88f = '\x01';
                          }
                          lVar18 = *(long *)puVar5;
                          if (*(int *)(lVar18 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                            lVar18 = *(long *)puVar5;
                          }
                          if (**(long **)(lVar18 + 0xb8) == 0) goto LAB_023b70d0;
                          cVar28 = *(char *)(**(long **)(lVar18 + 0xb8) + 0x39);
                        }
                        puVar7 = PTR_DAT_04caf420;
                        uVar14 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
                        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
                          thunk_FUN_0218fdac(*(long *)puVar7);
                        }
                        puVar8 = PTR_DAT_04cb62e8;
                        puVar7 = PTR_DAT_04caa458;
                        Dino_BusSand_App_UI_KitTopBar__Build_2283ff0
                                  (0xc3000000c3000000,uVar14,0,0,0,0,1,0,0);
                        uVar14 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
                        if (cVar28 == '\0') {
                          if (cRam0000000004f9b948 == '\0') {
                            FUN_02132f7c(PTR_DAT_04cacfc0);
                            cRam0000000004f9b948 = '\x01';
                          }
                          plVar17 = (long *)PTR_DAT_04cad330;
                          uVar29 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
                          uVar30 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
                          if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          lVar18 = Dino_BusSand_App_UI_UiKit__CloseButton_228260c
                                             (uVar29,uVar30,0x42d80000,uVar14,0,0);
                          if (lVar18 == 0) goto LAB_023b70d0;
                          UnityEngine_RectTransform__set_anchorMax_43cf768
                                    (0x3f800000,0x3f800000,lVar18,0);
                          UnityEngine_RectTransform__set_anchorMin_43cf5e4
                                    (0x3f800000,0x3f800000,lVar18,0);
                    /* try { // try from 023b6c04 to 024b6eab has its CatchHandler @ 023b6c04
                       catch() { ... } // from try @ 023b6c04 with catch @ 023b6c04
                       catch() { ... } // from try @ 023b6f94 with catch @ 023b6c04
                       catch() { ... } // from try @ 023b77b0 with catch @ 023b6c04
                       catch() { ... } // from try @ 023b77c0 with catch @ 023b6c04
                       catch() { ... } // from try @ 023b7814 with catch @ 023b6c04 */
                          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                                    (0xc2a00000,0xc3000000c3000000,lVar18,0);
                          uVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
                          System_Action___ctor_47b5ed0(uVar14,param_1,*(undefined8 *)puVar8,0);
                          Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                                    (param_1,*(undefined8 *)PTR_DAT_04cad460,uVar14,1,
                                     *(undefined8 *)PTR_DAT_04cad948,0);
                          uVar29 = 0x41f00000;
                          lVar18 = 0;
                        }
                        else {
                          uVar20 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
                          System_Action___ctor_47b5ed0(uVar20,param_1,*(undefined8 *)puVar8,0);
                          lVar18 = Dino_BusSand_App_UI_KitNav__Build_2286008(uVar14,0,0,uVar20,1,0);
                          *(long *)(param_1 + 0x68) = lVar18;
                          thunk_FUN_02134474((long *)(param_1 + 0x68),lVar18);
                          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          if (cRam0000000004f9b88f == '\0') {
                            FUN_02132f7c(PTR_DAT_04caba50);
                            cRam0000000004f9b88f = '\x01';
                          }
                          lVar21 = *(long *)puVar5;
                          if (*(int *)(lVar21 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                            lVar21 = *(long *)puVar5;
                          }
                          plVar17 = (long *)PTR_DAT_04cad330;
                          if (**(long **)(lVar21 + 0xb8) == 0) goto LAB_023b70d0;
                          lVar21 = Dino_BusSand_App_GameApp__get_Home_2169a38
                                             (**(long **)(lVar21 + 0xb8),0);
                          plVar26 = (long *)(param_1 + 0x70);
                          *plVar26 = lVar21;
                          thunk_FUN_02134474(plVar26,lVar21);
                          lVar21 = *plVar26;
                          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uVar19 = UnityEngine_Object__op_Inequality_43c8dec(lVar21,0,0);
                          if ((uVar19 & 1) != 0) {
                            if (*plVar26 == 0) goto LAB_023b70d0;
                            Dino_BusSand_App_UI_HomePanel__ShowNav_22eb1b4(*plVar26,0,0);
                          }
                          uVar29 = 0x43960000;
                        }
                        puVar5 = PTR_DAT_04cae0f8;
                        uVar14 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
                        uVar20 = *(undefined8 *)puVar5;
                        if (*(int *)(*plVar17 + 0xe4) == 0) {
                          thunk_FUN_0218fdac(*plVar17);
                        }
                        lVar21 = Dino_BusSand_App_UI_UiKit__Fill_22817d8
                                           (0,uVar29,0,_UNK_00e203a8,uVar14,uVar20,0);
                        *(long *)(param_1 + 0x48) = lVar21;
                        thunk_FUN_02134474((long *)(param_1 + 0x48),lVar21);
                        puVar5 = PTR_DAT_04cacfc0;
                        if ((lVar21 != 0) &&
                           (lVar22 = UnityEngine_Component__get_gameObject_43bcde8(lVar21,0),
                           puVar7 = PTR_DAT_04cb6310, lVar22 != 0)) {
                          UnityEngine_GameObject__AddComponent_object__275a54c
                                    (lVar22,*(undefined8 *)PTR_DAT_04cafbd0);
                          Dino_BusSand_App_UI_UiKit__HitArea_228277c(lVar21,0);
                          if (cRam0000000004f9b948 == '\0') {
                            FUN_02132f7c(PTR_DAT_04cacfc0);
                            cRam0000000004f9b948 = '\x01';
                          }
                          puVar24 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
                          lVar22 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                                             (*puVar24,puVar24[1],0,0,lVar21,*(undefined8 *)puVar7,0
                                              ,0,0);
                          plVar17 = (long *)(param_1 + 0x40);
                          *plVar17 = lVar22;
                          thunk_FUN_02134474(plVar17,lVar22);
                          if (*plVar17 != 0) {
                            UnityEngine_RectTransform__set_anchorMin_43cf5e4
                                      (0,0x3f800000,*plVar17,0);
                            if (*plVar17 != 0) {
                              UnityEngine_RectTransform__set_anchorMax_43cf768
                                        (0x3f800000,0x3f800000,*plVar17,0);
                              if (*plVar17 != 0) {
                                UnityEngine_RectTransform__set_pivot_43cfbf4
                                          (0x3f000000,0x3f800000,*plVar17,0);
                                lVar22 = *plVar17;
                                if (cRam0000000004f9b948 == '\0') {
                                  FUN_02132f7c(PTR_DAT_04cacfc0);
                                  cRam0000000004f9b948 = '\x01';
                                }
                                if (lVar22 != 0) {
                                  puVar24 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
                                  uVar30 = *puVar24;
                                  uVar29 = puVar24[1];
                                  UnityEngine_RectTransform__set_offsetMax_43d0018
                                            (uVar30,uVar29,lVar22,0);
                                  UnityEngine_RectTransform__set_offsetMin_43cfe84
                                            (uVar30,uVar29,lVar22,0);
                                  lVar22 = UnityEngine_Component__get_gameObject_43bcde8(lVar21,0);
                                  if ((lVar22 != 0) &&
                                     (lVar22 = UnityEngine_GameObject__AddComponent_object__275a54c
                                                         (lVar22,*(undefined8 *)PTR_DAT_04cafbd8),
                                     lVar22 != 0)) {
                                    *(long *)(lVar22 + 0x20) = *plVar17;
                                    thunk_FUN_02134474((long *)(lVar22 + 0x20));
                                    lVar23 = *(long *)puVar6;
                                    *(undefined2 *)(lVar22 + 0x28) = 0x100;
                                    iVar25 = *(int *)(lVar23 + 0xe4);
                                    *(undefined4 *)(lVar22 + 0x2c) = 1;
                                    if (iVar25 == 0) {
                                      thunk_FUN_0218fdac();
                                    }
                                    uVar19 = UnityEngine_Object__op_Inequality_43c8dec(lVar18,0,0);
                                    if ((uVar19 & 1) != 0) {
                                      if (lVar18 == 0) goto LAB_023b70d0;
                                      UnityEngine_Transform__SetAsLastSibling_43d4684(lVar18,0);
                                    }
                                    puVar6 = PTR_DAT_04cb62d8;
                                    puVar5 = PTR_DAT_04cad4c0;
                                    Dino_BusSand_App_UI_StorePanel__Refresh_22b72b8(param_1);
                    /* try { // try from 023b6eac to 024b6ed3 has its CatchHandler @ 023b77d4 */
                                    lVar18 = FUN_02133068(*(undefined8 *)puVar6,3);
                                    uVar14 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0)
                                    ;
                                    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                                      thunk_FUN_0218fdac(*(long *)puVar5);
                                    }
                                    uVar14 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar14,0);
                                    if (lVar18 != 0) {
                                      if (*(int *)(lVar18 + 0x18) != 0) {
                                        *(undefined8 *)(lVar18 + 0x20) = uVar14;
                                        thunk_FUN_02134474((undefined8 *)(lVar18 + 0x20),uVar14);
                                        uVar14 = UnityEngine_Component__get_gameObject_43bcde8
                                                           (lVar16,0);
                    /* try { // try from 023b6f10 to 024b6f3b has its CatchHandler @ 023b77d0 */
                                        uVar14 = Dino_BusSand_App_UI_UiMotion__Group_228db38
                                                           (uVar14,0);
                                        if ((*(uint *)(lVar18 + 0x18) & 0xfffffffe) != 0) {
                                          *(undefined8 *)(lVar18 + 0x28) = uVar14;
                                          thunk_FUN_02134474((undefined8 *)(lVar18 + 0x28),uVar14);
                                          uVar14 = UnityEngine_Component__get_gameObject_43bcde8
                                                             (lVar21,0);
                                          uVar14 = Dino_BusSand_App_UI_UiMotion__Group_228db38
                                                             (uVar14,0);
                                          if (2 < *(uint *)(lVar18 + 0x18)) {
                                            *(undefined8 *)(lVar18 + 0x30) = uVar14;
                                            thunk_FUN_02134474();
                    /* try { // try from 023b6f6c to 024b6f93 has its CatchHandler @ 023b77d8 */
                                            plVar26 = (long *)(param_1 + 0x58);
                                            *plVar26 = lVar18;
                                            thunk_FUN_02134474(plVar26,lVar18);
                                            uVar29 = _UNK_00e201f0;
                                            lVar15 = *plVar26;
                                            if (lVar15 != 0) {
                                              uVar1 = *(uint *)(lVar15 + 0x18);
                                              if (0 < (int)uVar1) {
                    /* try { // try from 023b6f94 to 024b77ab has its CatchHandler @ 023b6c04 */
                                                uVar27 = 0;
                                                do {
                                                  if (uVar1 <= uVar27) goto LAB_023b72a8;
                                                  lVar16 = *(long *)(lVar15 + (long)(int)uVar27 * 8
                                                                    + 0x20);
                                                  if (lVar16 == 0) goto LAB_023b70d0;
                                                  UnityEngine_CanvasGroup__set_alpha_467ad3c
                                                            (0,lVar16,0);
                                                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                                                    thunk_FUN_0218fdac();
                                                  }
                                                  Dino_BusSand_App_UI_UiMotion__Fade_2291234
                                                            (0x3f800000,uVar29,0,lVar16,0);
                                                  uVar1 = *(uint *)(lVar15 + 0x18);
                                                  uVar27 = uVar27 + 1;
                                                } while ((int)uVar27 < (int)uVar1);
                                              }
                                              puVar11 = PTR_DAT_04cb6318;
                                              puVar10 = PTR_DAT_04cb62f0;
                                              puVar9 = PTR_DAT_04cad568;
                                              puVar8 = PTR_DAT_04cad1f0;
                                              puVar7 = PTR_DAT_04cac7e0;
                                              puVar6 = PTR_DAT_04ca9c20;
                                              fVar4 = _UNK_00e20840;
                                              uVar3 = _UNK_00e205ec;
                                              uVar30 = _UNK_00e204e8;
                                              fVar2 = _UNK_00e1fef8;
                                              uVar29 = _UNK_00e1fea8;
                                              lVar15 = *plVar17;
                                              if (lVar15 != 0) {
                                                iVar25 = 0;
                                                do {
                                                  iVar12 = 
                                                  UnityEngine_Transform__get_childCount_43d4480
                                                            (lVar15,0);
                                                  if (iVar12 <= iVar25) {
                                                    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                                                      thunk_FUN_0218fdac();
                                                    }
                                                    if (cRam0000000004f9b94e == '\0') {
                                                      FUN_02132f7c(PTR_DAT_04cad568);
                                                      cRam0000000004f9b94e = '\x01';
                                                    }
                                                    lVar15 = *(long *)puVar9;
                                                    if (*(int *)(lVar15 + 0xe4) == 0) {
                                                      thunk_FUN_0218fdac();
                                                      lVar15 = *(long *)puVar9;
                                                    }
                                                    if (**(long **)(lVar15 + 0xb8) != 0) {
                                                      Dino_BusSand_GameAudio__Whoosh_2382bbc
                                                                (_UNK_00e208d8,
                                                                 **(long **)(lVar15 + 0xb8),0);
                                                    }
                                                    uVar14 = thunk_FUN_0216e89c(*(undefined8 *)
                                                                                 puVar7);
                                                    System_Action_int____ctor_35ef18c
                                                              (uVar14,param_1,*(undefined8 *)puVar10
                                                               ,0);
                                                    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                                                      thunk_FUN_0218fdac();
                                                    }
                                                    Dino_BusSand_App_Iap__add_Purchased_2179e50
                                                              (uVar14,0);
                                                    uVar14 = thunk_FUN_0216e89c(*(undefined8 *)
                                                                                 puVar7);
                                                    System_Action_int____ctor_35ef18c
                                                              (uVar14,param_1,*(undefined8 *)puVar10
                                                               ,0);
                                                    Dino_BusSand_App_Iap__add_Restored_217a038
                                                              (uVar14,0);
                                                    plVar17 = (long *)FUN_02133068(*(undefined8 *)
                                                                                    puVar6,2);
                                                    puVar5 = PTR_DAT_04ca9ac8;
                                                    if (plVar17 != (long *)0x0) {
                                                      lVar15 = *(long *)puVar11;
                                                      if ((lVar15 == 0) ||
                                                         (lVar15 = thunk_FUN_0216e7a0(lVar15,*(
                                                  undefined8 *)(*plVar17 + 0x40)), lVar15 != 0)) {
                                                    if ((int)plVar17[3] == 0) goto LAB_023b72a8;
                                                    plVar17[4] = *(long *)puVar11;
                                                    thunk_FUN_02134474();
                                                    uStack_84 = *(undefined4 *)(param_1 + 0x38);
                                                    lVar15 = FUN_02133100(*(undefined8 *)
                                                                           (puVar5 + 0x48),
                                                                          &uStack_84);
                                                    if ((lVar15 == 0) ||
                                                       (lVar16 = thunk_FUN_0216e7a0(lVar15,*(
                                                  undefined8 *)(*plVar17 + 0x40)), lVar16 != 0)) {
                                                    if ((*(uint *)(plVar17 + 3) & 0xfffffffe) != 0)
                                                    {
                                                      plVar17[5] = lVar15;
                                                      thunk_FUN_02134474(plVar17 + 5,lVar15);
                                                      if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4)
                                                          == 0) {
                                                        thunk_FUN_0218fdac();
                                                      }
                                                      Dino_BusSand_App_Analytics__Log_216d0c8
                                                                (*(undefined8 *)PTR_DAT_04cb6328,
                                                                 plVar17,0);
                                                      if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4)
                                                          == 0) {
                                                        thunk_FUN_0218fdac();
                                                      }
                                                                                                            
                                                  Dino_BusSand_App_Meta_GameTracking__IapShowShop_22180f8
                                                            (param_1,0);
                                                  return;
                                                  }
                                                  goto LAB_023b72a8;
                                                  }
                                                  }
                                                  uVar14 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                                                  FUN_021330e8(uVar14,0);
                                                  }
                                                  break;
                                                  }
                                                  if (*plVar17 == 0) break;
                                                  uVar14 = UnityEngine_Transform__GetChild_43d5294
                                                                     (*plVar17,iVar25,0);
                                                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                                                    thunk_FUN_0218fdac(*(long *)puVar5);
                                                  }
                                                  Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                                                            ((float)iVar25 * fVar2 + fVar4,uVar29,
                                                             uVar30,uVar3,uVar14,0,0,0);
                                                  lVar15 = *plVar17;
                                                  iVar25 = iVar25 + 1;
                                                } while (lVar15 != 0);
                                              }
                                            }
                                            goto LAB_023b70d0;
                                          }
                                        }
                                      }
LAB_023b72a8:
                    /* WARNING: Subroutine does not return */
                                      FUN_0213322c();
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_023b70d0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

