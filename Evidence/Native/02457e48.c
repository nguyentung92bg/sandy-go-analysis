/* IL2CPP: Dino.BusSand.Cheat.AutoQaPanel$$OnOpen
void Dino_BusSand_Cheat_AutoQaPanel__OnOpen (Dino_BusSand_Cheat_AutoQaPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.AutoQaPanel$$OnOpen
   void Dino_BusSand_Cheat_AutoQaPanel__OnOpen (Dino_BusSand_Cheat_AutoQaPanel_o* __this,
   Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_Cheat_AutoQaPanel__OnOpen_2357e48(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar4 = PTR_DAT_04cba260;
  if ((bRam0000000004f9c71b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cafbd0);
    FUN_02132f7c(PTR_DAT_04cafbd8);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cba268);
    FUN_02132f7c(PTR_DAT_04cba270);
    FUN_02132f7c(PTR_DAT_04cafb18);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cba278);
    FUN_02132f7c(PTR_DAT_04caea50);
    FUN_02132f7c(PTR_DAT_04cba280);
    FUN_02132f7c(PTR_DAT_04cba288);
    FUN_02132f7c(PTR_DAT_04cba290);
    FUN_02132f7c(PTR_DAT_04cba298);
    FUN_02132f7c(PTR_DAT_04caf3d0);
    FUN_02132f7c(PTR_DAT_04cba260);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cba2a0);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c71b = 1;
  }
  lVar8 = Dino_BusSand_App_UI_KitPopup__Build_2280d18
                    (0x44750000,_UNK_00e20300,_UNK_00e204d4,param_1,*(undefined8 *)puVar4,0,1,0);
  puVar4 = PTR_DAT_04cad330;
  if (lVar8 != 0) {
    uVar12 = *(undefined8 *)(lVar8 + 0x28);
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    System_Nullable_Color____ctor_2bc9090
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_88,
               *(undefined8 *)PTR_DAT_04cac878);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar5 = PTR_DAT_04cba2a0;
    puVar2 = PTR_DAT_04caf3d0;
    puVar3 = PTR_DAT_04cacfc0;
    puVar1 = PTR_DAT_04ca9c30;
    uVar15 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
    uVar16 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_90 = uStack_78;
    uStack_98 = uStack_80;
    uStack_a0 = uStack_88;
    lVar9 = Dino_BusSand_App_UI_UiKit__Text_2282314
                      (0x42300000,0x445c0000,0x428c0000,uVar15,uVar16,uVar12,*(undefined8 *)puVar5,
                       *(undefined8 *)puVar1,*(undefined8 *)puVar2,&uStack_a0,0x202,0);
    plVar13 = (long *)(param_1 + 0x40);
    *plVar13 = lVar9;
    thunk_FUN_02134474(plVar13,lVar9);
    if (*plVar13 != 0) {
      lVar9 = TMPro_TMP_Text__get_rectTransform_42cd6a4(*plVar13,0);
      if (((*plVar13 != 0) &&
          (lVar10 = TMPro_TMP_Text__get_rectTransform_42cd6a4(*plVar13,0), lVar10 != 0)) &&
         (UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,lVar10,0),
         lVar9 != 0)) {
        UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,lVar9,0);
        if ((*plVar13 != 0) &&
           (lVar9 = TMPro_TMP_Text__get_rectTransform_42cd6a4(*plVar13,0), puVar1 = PTR_DAT_04caea50
           , lVar9 != 0)) {
          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0,0xc2200000,lVar9,0);
          uVar12 = *(undefined8 *)(lVar8 + 0x28);
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(PTR_DAT_04cacfc0);
            cRam0000000004f9b948 = '\x01';
          }
          lVar9 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                            (**(undefined4 **)(*(long *)puVar3 + 0xb8),
                             (*(undefined4 **)(*(long *)puVar3 + 0xb8))[1],0,0,uVar12,
                             *(undefined8 *)puVar1,0,0,0);
          Dino_BusSand_App_UI_UiKit__Stretch_2281f58
                    (0x41a00000,0x433e0000,0x41a00000,0x42b40000,lVar9,0);
          if ((lVar9 != 0) &&
             (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0), lVar10 != 0)) {
            UnityEngine_GameObject__AddComponent_object__275a54c
                      (lVar10,*(undefined8 *)PTR_DAT_04cafbd0);
            lVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0);
            if ((lVar10 != 0) &&
               (plVar13 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                            (lVar10,*(undefined8 *)PTR_DAT_04cacf98),
               puVar1 = PTR_DAT_04cba290, plVar13 != (long *)0x0)) {
              (**(code **)(*plVar13 + 0x2a8))
                        (0,0,0,_UNK_00e20a7c,plVar13,*(undefined8 *)(*plVar13 + 0x2b0));
              lVar10 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                                 (0,0x41200000,0,0,lVar9,*(undefined8 *)puVar1,0,0,0);
              plVar13 = (long *)(param_1 + 0x38);
              *plVar13 = lVar10;
              thunk_FUN_02134474(plVar13,lVar10);
              if (*plVar13 != 0) {
                UnityEngine_RectTransform__set_anchorMin_43cf5e4(0,0x3f800000,*plVar13,0);
                if (*plVar13 != 0) {
                  UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f800000,0x3f800000,*plVar13,0)
                  ;
                  if (*plVar13 != 0) {
                    UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0x3f800000,*plVar13,0);
                    lVar10 = *plVar13;
                    if (cRam0000000004f9b948 == '\0') {
                      FUN_02132f7c(PTR_DAT_04cacfc0);
                      cRam0000000004f9b948 = '\x01';
                    }
                    if (lVar10 != 0) {
                      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                                (**(undefined4 **)(*(long *)puVar3 + 0xb8),
                                 (*(undefined4 **)(*(long *)puVar3 + 0xb8))[1],lVar10,0);
                      lVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0);
                      if ((lVar10 != 0) &&
                         (lVar10 = UnityEngine_GameObject__AddComponent_object__275a54c
                                             (lVar10,*(undefined8 *)PTR_DAT_04cafbd8),
                         puVar2 = PTR_DAT_04cba280, puVar1 = PTR_DAT_04cba278, lVar10 != 0)) {
                        *(long *)(lVar10 + 0x20) = *plVar13;
                        thunk_FUN_02134474();
                        UnityEngine_UI_ScrollRect__set_viewport_468e0c8(lVar10,lVar9,0);
                        *(undefined2 *)(lVar10 + 0x28) = 0x100;
                        cVar7 = cRam0000000004f9b948;
                        uVar12 = *(undefined8 *)(lVar8 + 0x28);
                        *(undefined4 *)(lVar10 + 0x3c) = 0x42200000;
                        if (cVar7 == '\0') {
                          FUN_02132f7c(PTR_DAT_04cacfc0);
                          cRam0000000004f9b948 = '\x01';
                        }
                        uVar12 = Dino_BusSand_App_UI_UiKit__LabelButton_228c6c0
                                           (0x43d20000,0x43020000,
                                            **(undefined4 **)(*(long *)puVar3 + 0xb8),
                                            (*(undefined4 **)(*(long *)puVar3 + 0xb8))[1],0x42300000
                                            ,uVar12,*(undefined8 *)puVar2,0,*(undefined8 *)puVar1,0,
                                            0);
                        lVar9 = Dino_BusSand_App_UI_UiKit__ButtonRoot_228cab4(uVar12,0);
                        puVar1 = PTR_DAT_04cba270;
                        if (lVar9 != 0) {
                          UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0,lVar9,0);
                          UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0,lVar9,0);
                          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                                    (0xc35c0000,0x42be0000,lVar9,0);
                          uVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0);
                          lVar9 = *(long *)puVar1;
                          if (*(int *)(lVar9 + 0xe4) == 0) {
                            thunk_FUN_0218fdac(lVar9);
                            lVar9 = *(long *)puVar1;
                          }
                          puVar5 = PTR_DAT_04cad948;
                          puVar2 = PTR_DAT_04caa458;
                          puVar11 = *(undefined8 **)(lVar9 + 0xb8);
                          lVar10 = puVar11[1];
                          if (lVar10 == 0) {
                            if (*(int *)(lVar9 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(lVar9);
                              puVar11 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
                            }
                            uVar14 = *puVar11;
                            lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                            System_Action___ctor_47b5ed0
                                      (lVar10,uVar14,*(undefined8 *)PTR_DAT_04cba268,0);
                            plVar13 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                            *plVar13 = lVar10;
                            thunk_FUN_02134474(plVar13,lVar10);
                          }
                          Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8
                                    (uVar12,lVar10,1,*(undefined8 *)puVar5,0);
                          uVar12 = *(undefined8 *)(lVar8 + 0x28);
                          if (cRam0000000004f9b948 == '\0') {
                            FUN_02132f7c(PTR_DAT_04cacfc0);
                            cRam0000000004f9b948 = '\x01';
                          }
                          puVar6 = PTR_DAT_04cba298;
                          puVar1 = PTR_DAT_04cba288;
                          uVar15 = **(undefined4 **)(*(long *)puVar3 + 0xb8);
                          uVar16 = (*(undefined4 **)(*(long *)puVar3 + 0xb8))[1];
                          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uVar12 = Dino_BusSand_App_UI_UiKit__LabelButton_228c6c0
                                             (0x43d20000,0x43020000,uVar15,uVar16,0x42300000,uVar12,
                                              *(undefined8 *)puVar6,3,*(undefined8 *)puVar1,0,0);
                          lVar8 = Dino_BusSand_App_UI_UiKit__ButtonRoot_228cab4(uVar12,0);
                          puVar1 = PTR_DAT_04cafb18;
                          puVar4 = PTR_DAT_04cad460;
                          if (lVar8 != 0) {
                            UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0,lVar8,0);
                            UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0,lVar8,0);
                            UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                                      (0x435c0000,0x42be0000,lVar8,0);
                            uVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
                            uVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                            System_Action___ctor_47b5ed0(uVar14,param_1,*(undefined8 *)puVar1,0);
                            Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8
                                      (uVar12,uVar14,1,*(undefined8 *)puVar5,0);
                            uVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                            System_Action___ctor_47b5ed0(uVar12,param_1,*(undefined8 *)puVar1,0);
                            Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                                      (param_1,*(undefined8 *)puVar4,uVar12,1,*(undefined8 *)puVar5,
                                       0);
                            Dino_BusSand_Cheat_AutoQaPanel__Rebuild_2358640(param_1);
                    /* try { // try from 02458634 to 025586d3 has its CatchHandler @ 02458634
                       catch() { ... } // from try @ 02458634 with catch @ 02458634
                       catch() { ... } // from try @ 024586dc with catch @ 02458634
                       catch() { ... } // from try @ 02458740 with catch @ 02458634
                       catch() { ... } // from try @ 02458768 with catch @ 02458634
                       catch() { ... } // from try @ 02458794 with catch @ 02458634 */
                            return;
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
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

