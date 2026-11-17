/* IL2CPP: Dino.BusSand.App.UI.KitPopup$$Build
Dino_BusSand_App_UI_KitWindow_o* Dino_BusSand_App_UI_KitPopup__Build (Dino_BusSand_App_UI_UIPanel_o* panel, System_String_o* title, float width, float height, int32_t tier, bool close, float top, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitPopup$$Build
   Dino_BusSand_App_UI_KitWindow_o* Dino_BusSand_App_UI_KitPopup__Build
   (Dino_BusSand_App_UI_UIPanel_o* panel, System_String_o* title, float width, float height, int32_t
   tier, bool close, float top, const MethodInfo* method); */

long Dino_BusSand_App_UI_KitPopup__Build_2280d18
               (float param_1,float param_2,float param_3,long param_4,undefined8 param_5,
               uint param_6,uint param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  
  puVar2 = PTR_DAT_04cb4d88;
  uVar10 = param_6;
  if (param_6 != 2) {
    uVar10 = (uint)(param_6 == 1);
  }
  if ((bRam0000000004f9c146 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cb4d90);
    FUN_02132f7c(PTR_DAT_04cad420);
    FUN_02132f7c(PTR_DAT_04cb4d98);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cb4da0);
    FUN_02132f7c(PTR_DAT_04cb4d88);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb4da8);
    FUN_02132f7c(PTR_DAT_04cad4c8);
    FUN_02132f7c(PTR_DAT_04cb4db0);
    FUN_02132f7c(PTR_DAT_04cb4db8);
    FUN_02132f7c(PTR_DAT_04cb4dc0);
    FUN_02132f7c(PTR_DAT_04cadb88);
    FUN_02132f7c(PTR_DAT_04cadc30);
    FUN_02132f7c(PTR_DAT_04cb4dc8);
    FUN_02132f7c(PTR_DAT_04cb4dd0);
    FUN_02132f7c(PTR_DAT_04cb4dd8);
    FUN_02132f7c(PTR_DAT_04cb4de0);
    bRam0000000004f9c146 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar4,0);
  puVar2 = PTR_DAT_04cb4d98;
  if (lVar4 != 0) {
    plVar12 = (long *)(lVar4 + 0x10);
    *plVar12 = param_4;
    thunk_FUN_02134474(plVar12,param_4);
    fVar22 = 980.0 / param_1;
    fVar17 = _UNK_00e2020c - fVar22 * param_2;
    fVar20 = 120.0;
    if (120.0 <= fVar17) {
      fVar20 = fVar17;
    }
    if (param_3 <= fVar20) {
      fVar20 = param_3;
    }
    fVar17 = _UNK_00e20a88;
    if (120.0 <= param_3) {
      fVar17 = _UNK_00e20338 - fVar20;
    }
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Object___ctor_4870e5c(lVar5,0);
    plVar11 = (long *)(lVar4 + 0x18);
    *plVar11 = lVar5;
    thunk_FUN_02134474(plVar11,lVar5);
    puVar3 = PTR_DAT_04cadc30;
    puVar2 = PTR_DAT_04cad330;
    if (*plVar12 != 0) {
      uVar6 = UnityEngine_Component__get_transform_43bcd18(*plVar12,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      lVar5 = Dino_BusSand_App_UI_UiKit__Fill_22817d8(0,0,0,0,uVar6,*(undefined8 *)puVar3);
      if (lVar5 != 0) {
        lVar13 = *plVar11;
        lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar5,0);
        if ((lVar7 != 0) &&
           (uVar6 = UnityEngine_GameObject__AddComponent_object__275a54c
                              (lVar7,*(undefined8 *)PTR_DAT_04cacf98), lVar13 != 0)) {
          puVar14 = (undefined8 *)(lVar13 + 0x40);
          *puVar14 = uVar6;
          thunk_FUN_02134474(puVar14,uVar6);
          if ((*plVar11 != 0) && (plVar8 = *(long **)(*plVar11 + 0x40), plVar8 != (long *)0x0)) {
            (**(code **)(*plVar8 + 0x2a8))
                      (_UNK_00e20840,_UNK_00e20844,_UNK_00e20754,0,plVar8,
                       *(undefined8 *)(*plVar8 + 0x2b0));
            if ((*plVar11 != 0) && (plVar8 = *(long **)(*plVar11 + 0x40), plVar8 != (long *)0x0)) {
              (**(code **)(*plVar8 + 0x2c8))(plVar8,1,*(undefined8 *)(*plVar8 + 0x2d0));
              puVar2 = PTR_DAT_04cb4db0;
              if (*plVar12 != 0) {
                lVar7 = *plVar11;
                uVar6 = UnityEngine_Component__get_transform_43bcd18(*plVar12,0);
                uVar6 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                                  (param_1,param_2,0,fVar17 + fVar22 * param_2 * -0.5,uVar6,
                                   *(undefined8 *)puVar2,0,0);
                if (lVar7 != 0) {
                  puVar14 = (undefined8 *)(lVar7 + 0x10);
                  *puVar14 = uVar6;
                  thunk_FUN_02134474(puVar14,uVar6);
                  puVar2 = PTR_DAT_04cb4db8;
                  lVar7 = *plVar11;
                  if (lVar7 != 0) {
                    uVar15 = *(undefined8 *)(lVar7 + 0x10);
                    fVar20 = 1.0 / fVar22;
                    uVar6 = Dino_BusSand_App_UI_KitPopup__BodyKey_2280b8c(uVar10);
                    if (cRam0000000004f9b948 == '\0') {
                      FUN_02132f7c(PTR_DAT_04cacfc0);
                      cRam0000000004f9b948 = '\x01';
                    }
                    uVar18 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
                    uVar19 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
                    uStack_a8 = 0;
                    uStack_a0 = 0;
                    uStack_98 = 0;
                    uVar6 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                                      (uVar18,uVar19,uVar18,uVar19,fVar20,uVar15,
                                       *(undefined8 *)puVar2,uVar6,&uStack_a8);
                    *(undefined8 *)(lVar7 + 0x18) = uVar6;
                    thunk_FUN_02134474((undefined8 *)(lVar7 + 0x18),uVar6);
                    if (*plVar11 != 0) {
                      Dino_BusSand_App_UI_UiKit__Stretch_2281f58
                                (fVar20 * -6.0,0,fVar20 * -6.0,fVar20 * 150.0,
                                 *(undefined8 *)(*plVar11 + 0x18));
                      puVar2 = PTR_DAT_04cb4dd8;
                      lVar7 = *plVar11;
                      if (lVar7 != 0) {
                        uVar15 = *(undefined8 *)(lVar7 + 0x10);
                        uVar6 = Dino_BusSand_App_UI_KitPopup__HeaderKey_2280c10(uVar10);
                        fVar17 = fVar20 * _UNK_00e2033c;
                        fVar21 = fVar20 * _UNK_00e2076c;
                        if (cRam0000000004f9b948 == '\0') {
                          FUN_02132f7c(PTR_DAT_04cacfc0);
                          cRam0000000004f9b948 = '\x01';
                        }
                        uStack_c0 = 0;
                        uStack_b8 = 0;
                        uStack_b0 = 0;
                        uVar6 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                                          (fVar17,fVar21,
                                           **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                                           (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],
                                           fVar20,uVar15,*(undefined8 *)puVar2,uVar6,&uStack_c0);
                        *(undefined8 *)(lVar7 + 0x20) = uVar6;
                        thunk_FUN_02134474((undefined8 *)(lVar7 + 0x20),uVar6);
                        if ((*plVar11 != 0) && (lVar7 = *(long *)(*plVar11 + 0x20), lVar7 != 0)) {
                          UnityEngine_RectTransform__set_anchorMax_43cf768
                                    (0x3f000000,0x3f800000,lVar7,0);
                          UnityEngine_RectTransform__set_anchorMin_43cf5e4
                                    (0x3f000000,0x3f800000,lVar7,0);
                          if ((*plVar11 != 0) && (lVar7 = *(long *)(*plVar11 + 0x20), lVar7 != 0)) {
                            UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                                      (0,fVar20 * -144.0,lVar7,0);
                            if (param_6 != 0) {
                              if (*plVar11 == 0) goto LAB_023817cc;
                              uVar6 = *(undefined8 *)(*plVar11 + 0x20);
                              puVar14 = (undefined8 *)PTR_DAT_04cb4dd0;
                              if (param_6 != 2) {
                                puVar14 = (undefined8 *)PTR_DAT_04cb4dc0;
                              }
                              uVar15 = *(undefined8 *)PTR_DAT_04cb4de0;
                              uVar16 = *puVar14;
                              if (cRam0000000004f9b948 == '\0') {
                                FUN_02132f7c(PTR_DAT_04cacfc0);
                                cRam0000000004f9b948 = '\x01';
                              }
                              uVar18 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
                              uVar19 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
                              if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
                                thunk_FUN_0218fdac();
                              }
                              lVar7 = Dino_BusSand_App_UI_UiKit__Img_228203c
                                                (uVar18,uVar19,0,0,fVar20 * _UNK_00e20178,uVar6,
                                                 uVar15,uVar16,0);
                              if (lVar7 == 0) goto LAB_023817cc;
                              lVar13 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar7,0);
                              lVar9 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar7,0);
                              if ((lVar9 == 0) ||
                                 (UnityEngine_RectTransform__set_anchorMax_43cf768
                                            (0x3f000000,0x3f800000,lVar9,0), lVar13 == 0))
                              goto LAB_023817cc;
                              UnityEngine_RectTransform__set_anchorMin_43cf5e4
                                        (0x3f000000,0x3f800000,lVar13,0);
                              lVar7 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar7,0);
                              if (lVar7 == 0) goto LAB_023817cc;
                              fVar17 = 29.5;
                              if (param_6 != 2) {
                                fVar17 = -14.5;
                              }
                              UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                                        (0,fVar20 * fVar17,lVar7,0);
                            }
                            puVar2 = PTR_DAT_04cad4c8;
                            lVar7 = *plVar11;
                            puVar14 = (undefined8 *)PTR_DAT_04cb4da8;
                            if (uVar10 != 1) {
                              puVar14 = (undefined8 *)PTR_DAT_04cad4c8;
                            }
                            puVar1 = (undefined8 *)PTR_DAT_04cb4dc8;
                            if (uVar10 != 2) {
                              puVar1 = puVar14;
                            }
                            if (lVar7 != 0) {
                              uVar6 = *puVar1;
                              uVar15 = *(undefined8 *)(lVar7 + 0x20);
                              uStack_d8 = 0;
                              uStack_d0 = 0;
                              uStack_c8 = 0;
                              System_Nullable_Color____ctor_2bc9090
                                        (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_d8,
                                         *(undefined8 *)PTR_DAT_04cac878);
                              if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
                                thunk_FUN_0218fdac();
                              }
                              uStack_e8 = uStack_d0;
                              uStack_f0 = uStack_d8;
                              uStack_e0 = uStack_c8;
                              uVar6 = Dino_BusSand_App_UI_UiKit__Text_2282314
                                                (fVar20 * 112.0,fVar20 * 700.0,fVar20 * 140.0,
                                                 fVar20 * 8.0,fVar20 * 5.0,uVar15,
                                                 *(undefined8 *)puVar2,param_5,uVar6,&uStack_f0,
                                                 0x202);
                              *(undefined8 *)(lVar7 + 0x30) = uVar6;
                              thunk_FUN_02134474((undefined8 *)(lVar7 + 0x30),uVar6);
                              if ((*plVar11 != 0) &&
                                 (lVar7 = *(long *)(*plVar11 + 0x30), lVar7 != 0)) {
                                TMPro_TMP_Text__set_characterSpacing_42cc65c(_UNK_00e204e4,lVar7,0);
                                if ((param_7 & 1) != 0) {
                                  lVar7 = *plVar11;
                                  if (lVar7 == 0) goto LAB_023817cc;
                                  uVar6 = *(undefined8 *)(lVar7 + 0x10);
                                  if (cRam0000000004f9b948 == '\0') {
                                    FUN_02132f7c(PTR_DAT_04cacfc0);
                                    cRam0000000004f9b948 = '\x01';
                                  }
                                  uVar18 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
                                  uVar19 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
                                  if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
                                    thunk_FUN_0218fdac();
                                  }
                                  uVar6 = Dino_BusSand_App_UI_UiKit__CloseButton_228260c
                                                    (uVar18,uVar19,fVar20 * 123.0,uVar6,uVar10);
                                  *(undefined8 *)(lVar7 + 0x38) = uVar6;
                                  thunk_FUN_02134474((undefined8 *)(lVar7 + 0x38),uVar6);
                                  if ((*plVar11 == 0) ||
                                     (lVar7 = *(long *)(*plVar11 + 0x38), lVar7 == 0))
                                  goto LAB_023817cc;
                                  UnityEngine_RectTransform__set_anchorMax_43cf768
                                            (0x3f000000,0x3f800000,lVar7,0);
                                  UnityEngine_RectTransform__set_anchorMin_43cf5e4
                                            (0x3f000000,0x3f800000,lVar7,0);
                                  if ((*plVar11 == 0) ||
                                     (lVar7 = *(long *)(*plVar11 + 0x38), lVar7 == 0))
                                  goto LAB_023817cc;
                                  UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                                            (fVar20 * _UNK_00e205a4,fVar20 * _UNK_00e20770,lVar7,0);
                                  lVar7 = thunk_FUN_0216e7a0(*plVar12,*(undefined8 *)
                                                                       PTR_DAT_04cad420);
                                  if (lVar7 == 0) {
                                    if (*plVar11 == 0) goto LAB_023817cc;
                                    uVar6 = *(undefined8 *)(*plVar11 + 0x10);
                                    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
                                      thunk_FUN_0218fdac();
                                    }
                                    Dino_BusSand_App_UI_UiKit__HitArea_228277c(uVar6);
                                    uVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar5,0);
                                    uVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                                    System_Action___ctor_47b5ed0
                                              (uVar15,lVar4,*(undefined8 *)PTR_DAT_04cb4da0,0);
                                    Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar6,uVar15,0,0,0);
                                  }
                                }
                                puVar2 = PTR_DAT_04cadb88;
                                lVar4 = *plVar11;
                                if (lVar4 != 0) {
                                  uVar6 = *(undefined8 *)(lVar4 + 0x10);
                                  if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
                                    thunk_FUN_0218fdac();
                                  }
                                  uVar6 = Dino_BusSand_App_UI_UiKit__Fill_22817d8
                                                    (fVar20 * 73.0,fVar20 * 96.0,fVar20 * 73.0,
                                                     fVar20 * 304.0,uVar6,*(undefined8 *)puVar2);
                                  *(undefined8 *)(lVar4 + 0x28) = uVar6;
                                  thunk_FUN_02134474((undefined8 *)(lVar4 + 0x28),uVar6);
                                  if (*plVar11 != 0) {
                                    lVar4 = *(long *)(*plVar11 + 0x10);
                                    if (cRam0000000004f9b65e == '\0') {
                                      FUN_02132f7c(PTR_DAT_04caa208);
                                      cRam0000000004f9b65e = '\x01';
                                    }
                                    if (lVar4 != 0) {
                                      lVar5 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
                                      UnityEngine_Transform__set_localScale_43d1be0
                                                (fVar22 * *(float *)(lVar5 + 0xc),
                                                 fVar22 * *(float *)(lVar5 + 0x10),
                                                 fVar22 * *(float *)(lVar5 + 0x14),lVar4,0);
                                      if (((*plVar11 != 0) &&
                                          (lVar4 = *(long *)(*plVar11 + 0x10), lVar4 != 0)) &&
                                         (lVar4 = UnityEngine_Component__get_gameObject_43bcde8
                                                            (lVar4,0), lVar4 != 0)) {
                                        lVar4 = UnityEngine_GameObject__AddComponent_object__275a54c
                                                          (lVar4,*(undefined8 *)PTR_DAT_04cb4d90);
                                        if ((*plVar11 != 0) && (lVar4 != 0)) {
                                          *(undefined8 *)(lVar4 + 0x20) =
                                               *(undefined8 *)(*plVar11 + 0x40);
                                          thunk_FUN_02134474();
                                          if ((*plVar11 != 0) &&
                                             (lVar5 = *(long *)(*plVar11 + 0x30), lVar5 != 0)) {
                                            uVar6 = TMPro_TMP_Text__get_rectTransform_42cd6a4
                                                              (lVar5,0);
                                            *(undefined8 *)(lVar4 + 0x38) = uVar6;
                                            thunk_FUN_02134474();
                                            if (*plVar11 != 0) {
                                              *(undefined8 *)(lVar4 + 0x40) =
                                                   *(undefined8 *)(*plVar11 + 0x28);
                                              thunk_FUN_02134474();
                                              if (*plVar11 != 0) {
                                                plVar12 = (long *)(*plVar11 + 0x48);
                                                *plVar12 = lVar4;
                                                thunk_FUN_02134474(plVar12,lVar4);
                                                return *plVar11;
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
          }
        }
      }
    }
  }
LAB_023817cc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

