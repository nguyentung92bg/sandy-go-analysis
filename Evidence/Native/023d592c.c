/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Get
Dino_BusSand_App_UI_HomeAtelier_Sheet_o* Dino_BusSand_App_UI_HomeAtelier__Get (Dino_BusSand_App_UI_HomeAtelier_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Get
   Dino_BusSand_App_UI_HomeAtelier_Sheet_o* Dino_BusSand_App_UI_HomeAtelier__Get
   (Dino_BusSand_App_UI_HomeAtelier_o* __this, int32_t level, const MethodInfo* method); */

long Dino_BusSand_App_UI_HomeAtelier__Get_22d592c(long param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  int iVar13;
  float fVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  long lStack_88;
  int iStack_74;
  
  iStack_74 = param_2;
  if ((bRam0000000004f9c3d0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6f20);
    FUN_02132f7c(PTR_DAT_04cb6f28);
    FUN_02132f7c(PTR_DAT_04cb0890);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cb68a0);
    FUN_02132f7c(PTR_DAT_04cac6c0);
    FUN_02132f7c(PTR_DAT_04cacb18);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6f30);
    FUN_02132f7c(PTR_DAT_04cb6f38);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb6f40);
    FUN_02132f7c(PTR_DAT_04cb6950);
    FUN_02132f7c(PTR_DAT_04cb6f48);
    FUN_02132f7c(PTR_DAT_04cb6f50);
    FUN_02132f7c(PTR_DAT_04cb4db8);
    FUN_02132f7c(PTR_DAT_04cb6f58);
    FUN_02132f7c(PTR_DAT_04cb6f60);
    FUN_02132f7c(PTR_DAT_04cafc50);
    FUN_02132f7c(PTR_DAT_04cb6f68);
    FUN_02132f7c(PTR_DAT_04cad4a8);
    bRam0000000004f9c3d0 = 1;
  }
  lStack_88 = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar7 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                      (*(long *)(param_1 + 0x78),param_2,&lStack_88,*(undefined8 *)PTR_DAT_04cb6f20)
    ;
    if ((uVar7 & 1) != 0) {
      return lStack_88;
    }
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb6f38);
    uVar15 = NEON_fmov(0xbf800000,4);
    *(undefined4 *)(lVar8 + 0x8c) = 0xbf800000;
    *(undefined8 *)(lVar8 + 0x84) = uVar15;
    System_Object___ctor_4870e5c(lVar8,0);
    fVar1 = _UNK_00e20344;
    uVar15 = *(undefined8 *)(param_1 + 0x28);
    *(int *)(lVar8 + 0x10) = iStack_74;
    fVar14 = (float)iStack_74 * fVar1 - (float)(int)((float)iStack_74 * fVar1);
    fVar1 = 1.0;
    if (fVar14 <= 1.0) {
      fVar1 = fVar14;
    }
    fVar2 = 0.0;
    if (0.0 <= fVar14) {
      fVar2 = fVar1;
    }
    *(float *)(lVar8 + 0x80) = fVar2;
    lStack_88 = lVar8;
    uVar9 = System_Int32__ToString_482d750(&iStack_74,0);
    uVar9 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb6f40,uVar9,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar6 = PTR_DAT_04cad330;
    uVar16 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
    uVar17 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar15 = Dino_BusSand_App_UI_UiKit__Node_22818c4(uVar16,uVar17,0,0,uVar15,uVar9,0,0,0);
    *(undefined8 *)(lVar8 + 0x18) = uVar15;
    thunk_FUN_02134474((undefined8 *)(lVar8 + 0x18),uVar15);
    if ((((lStack_88 != 0) && (*(long *)(lStack_88 + 0x18) != 0)) &&
        (UnityEngine_RectTransform__set_pivot_43cfbf4
                   (0x3f000000,0x3f800000,*(long *)(lStack_88 + 0x18),0), lVar8 = lStack_88,
        lStack_88 != 0)) &&
       ((*(long *)(lStack_88 + 0x18) != 0 &&
        (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lStack_88 + 0x18),0),
        lVar10 != 0)))) {
      uVar15 = UnityEngine_GameObject__AddComponent_object__275a54c
                         (lVar10,*(undefined8 *)PTR_DAT_04cb0890);
      *(undefined8 *)(lVar8 + 0x68) = uVar15;
      thunk_FUN_02134474((undefined8 *)(lVar8 + 0x68),uVar15);
      if ((lStack_88 != 0) &&
         ((*(long *)(lStack_88 + 0x68) != 0 &&
          (UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(*(long *)(lStack_88 + 0x68),0,0),
          lVar8 = lStack_88, lStack_88 != 0)))) {
        uVar15 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                           (*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),0,0,
                            *(undefined8 *)(lStack_88 + 0x18),*(undefined8 *)PTR_DAT_04cb4db8,0,0,0)
        ;
        *(undefined8 *)(lVar8 + 0x20) = uVar15;
        thunk_FUN_02134474((undefined8 *)(lVar8 + 0x20),uVar15);
        if ((lStack_88 != 0) && (lVar8 = *(long *)(lStack_88 + 0x20), lVar8 != 0)) {
          UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f000000,lVar8,0);
          UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f000000,lVar8,0);
          if ((((lStack_88 != 0) && (*(long *)(lStack_88 + 0x20) != 0)) &&
              (UnityEngine_RectTransform__set_pivot_43cfbf4
                         (0x3f000000,0x3f800000,*(long *)(lStack_88 + 0x20),0), lStack_88 != 0)) &&
             (((*(long *)(lStack_88 + 0x20) != 0 &&
               (UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                          (0,0xc0800000,*(long *)(lStack_88 + 0x20),0), lStack_88 != 0)) &&
              ((lVar8 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                                  (*(float *)(param_1 + 100) + 36.0,
                                   *(float *)(param_1 + 0x68) + 36.0,0,0,
                                   *(undefined8 *)(lStack_88 + 0x20),*(undefined8 *)PTR_DAT_04cb6950
                                   ,0,0,0), lVar8 != 0 &&
               (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0),
               puVar5 = PTR_DAT_04cacf98, lVar10 != 0)))))) {
            plVar11 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                        (lVar10,*(undefined8 *)PTR_DAT_04cacf98);
            uVar15 = Dino_BusSand_App_UI_AtelierArt__get_Shadow_22d642c();
            if (plVar11 != (long *)0x0) {
              UnityEngine_UI_Image__set_sprite_44a7258(plVar11,uVar15,0);
              UnityEngine_UI_Image__set_type_44afa58(plVar11,1,0);
              (**(code **)(*plVar11 + 0x2a8))
                        (_UNK_00e201f4,_UNK_00e20754,_UNK_00e207dc,_UNK_00e207dc,plVar11,
                         *(undefined8 *)(*plVar11 + 0x2b0));
              (**(code **)(*plVar11 + 0x2c8))(plVar11,0,*(undefined8 *)(*plVar11 + 0x2d0));
              if (lStack_88 != 0) {
                *(long *)(lStack_88 + 0x28) = lVar8;
                thunk_FUN_02134474((long *)(lStack_88 + 0x28),lVar8);
                if ((lStack_88 != 0) &&
                   (lVar8 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                                      (*(undefined4 *)(param_1 + 100),
                                       *(undefined4 *)(param_1 + 0x68),0,0,
                                       *(undefined8 *)(lStack_88 + 0x20),
                                       *(undefined8 *)PTR_DAT_04cb6f50,0,0,0), lVar8 != 0)) {
                  UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0x3f800000,lVar8,0);
                  UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,lVar8,0);
                  UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,lVar8,0);
                  lVar10 = lStack_88;
                  lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
                  if ((lVar8 != 0) &&
                     (uVar15 = UnityEngine_GameObject__AddComponent_object__275a54c
                                         (lVar8,*(undefined8 *)PTR_DAT_04cb68a0), lVar10 != 0)) {
                    puVar12 = (undefined8 *)(lVar10 + 0x40);
                    *puVar12 = uVar15;
                    thunk_FUN_02134474(puVar12,uVar15);
                    if ((lStack_88 != 0) &&
                       (plVar11 = *(long **)(lStack_88 + 0x40), plVar11 != (long *)0x0)) {
                      (**(code **)(*plVar11 + 0x2c8))(plVar11,0,*(undefined8 *)(*plVar11 + 0x2d0));
                      lVar8 = lStack_88;
                      puVar3 = PTR_DAT_04cb6f30;
                      if (*(int *)(*(long *)PTR_DAT_04cb6f30 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      uVar15 = Dino_BusSand_View_PicturePaper__NewMaterial_23dc460(0);
                      if (lVar8 != 0) {
                        puVar12 = (undefined8 *)(lVar8 + 0x48);
                        *puVar12 = uVar15;
                        thunk_FUN_02134474(puVar12,uVar15);
                        iVar13 = iStack_74;
                        if ((0 < iStack_74) && (iStack_74 <= *(int *)(param_1 + 0x58))) {
                          if (*(int *)(*(long *)PTR_DAT_04cacb18 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          lVar10 = Dino_BusSand_App_Levels_LevelDatabase__ForDisplayLevel_229b034
                                             (iVar13,0);
                          lVar8 = lStack_88;
                          if (lVar10 == 0) {
                            uVar15 = 0;
                          }
                          else {
                            uVar15 = *(undefined8 *)(lVar10 + 0x20);
                            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(*(long *)puVar3);
                            }
                            uVar15 = Dino_BusSand_View_PicturePaper__Build_23db054(uVar15,0);
                          }
                          if (lVar8 == 0) goto LAB_023d6410;
                          puVar12 = (undefined8 *)(lVar8 + 0x50);
                          *puVar12 = uVar15;
                          thunk_FUN_02134474(puVar12);
                        }
                        puVar3 = PTR_DAT_04ca9ae8;
                        if (lStack_88 != 0) {
                          uVar15 = *(undefined8 *)(lStack_88 + 0x48);
                          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
                          puVar4 = PTR_DAT_04cac6c0;
                          if ((uVar7 & 1) == 0) {
                            if (lStack_88 == 0) goto LAB_023d6410;
                            plVar11 = *(long **)(lStack_88 + 0x40);
                            if (*(int *)(*(long *)PTR_DAT_04cac6c0 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            if (plVar11 == (long *)0x0) goto LAB_023d6410;
                            lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
                            (**(code **)(*plVar11 + 0x2a8))
                                      (*(undefined4 *)(lVar8 + 4),*(undefined4 *)(lVar8 + 8),
                                       *(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 0x10),
                                       plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
                          }
                          else {
                            if (((lStack_88 == 0) || (*(long *)(lStack_88 + 0x48) == 0)) ||
                               (UnityEngine_Material__SetFloat_4383048
                                          (*(float *)(lStack_88 + 0x80) * _UNK_00e1fe5c,
                                           *(long *)(lStack_88 + 0x48),
                                           *(undefined8 *)PTR_DAT_04cb6f58,0), lStack_88 == 0))
                            goto LAB_023d6410;
                            lVar8 = *(long *)(lStack_88 + 0x48);
                            if (*(long *)(lStack_88 + 0x50) == 0) {
                              if (lVar8 == 0) goto LAB_023d6410;
                              UnityEngine_Material__SetFloat_4383048
                                        (0,lVar8,*(undefined8 *)PTR_DAT_04cb6f68,0);
                            }
                            else {
                              Dino_BusSand_View_PicturePaper__Apply_23dc5bc
                                        (*(long *)(lStack_88 + 0x50),lVar8,0);
                            }
                            if ((lStack_88 == 0) ||
                               (plVar11 = *(long **)(lStack_88 + 0x40), plVar11 == (long *)0x0))
                            goto LAB_023d6410;
                            (**(code **)(*plVar11 + 0x348))
                                      (plVar11,*(undefined8 *)(lStack_88 + 0x48),
                                       *(undefined8 *)(*plVar11 + 0x350));
                          }
                          if (lStack_88 != 0) {
                            if (*(long *)(lStack_88 + 0x50) != 0) {
                              uVar15 = *(undefined8 *)(lStack_88 + 0x48);
                              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                thunk_FUN_0218fdac();
                              }
                              uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
                              if ((uVar7 & 1) != 0) {
                                if (((lStack_88 == 0) || (*(long *)(lStack_88 + 0x50) == 0)) ||
                                   (*(long *)(lStack_88 + 0x40) == 0)) goto LAB_023d6410;
                                UnityEngine_UI_RawImage__set_texture_468c7f4
                                          (*(long *)(lStack_88 + 0x40),
                                           *(undefined8 *)(*(long *)(lStack_88 + 0x50) + 0x10),0);
                              }
                              if (lStack_88 == 0) goto LAB_023d6410;
                            }
                            lVar8 = lStack_88;
                            if (*(long *)(lStack_88 + 0x50) != 0) {
                              uVar9 = *(undefined8 *)(lStack_88 + 0x20);
                              uVar15 = System_Int32__ToString_482d750(&iStack_74,0);
                              uStack_a0 = 0;
                              uStack_98 = 0;
                              uStack_90 = 0;
                              System_Nullable_Color____ctor_2bc9090
                                        (_UNK_00e20324,_UNK_00e20104,_UNK_00e1fdd8,_UNK_00e1fea8,
                                         &uStack_a0,*(undefined8 *)PTR_DAT_04cac878);
                              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                                thunk_FUN_0218fdac();
                              }
                              uStack_b8 = uStack_98;
                              uStack_c0 = uStack_a0;
                              uStack_b0 = uStack_90;
                              uVar15 = Dino_BusSand_App_UI_UiKit__Text_2282314
                                                 (0x41f00000,0x430c0000,0x42200000,0,0,uVar9,
                                                  *(undefined8 *)PTR_DAT_04cafc50,uVar15,
                                                  *(undefined8 *)PTR_DAT_04cad4a8,&uStack_c0,0x202,0
                                                 );
                              *(undefined8 *)(lVar8 + 0x60) = uVar15;
                              thunk_FUN_02134474((undefined8 *)(lVar8 + 0x60),uVar15);
                              if (((((lStack_88 == 0) || (*(long *)(lStack_88 + 0x60) == 0)) ||
                                   (TMPro_TMP_Text__set_alignment_42cc610
                                              (*(long *)(lStack_88 + 0x60),0x204,0), lStack_88 == 0)
                                   ) || ((plVar11 = *(long **)(lStack_88 + 0x60),
                                         plVar11 == (long *)0x0 ||
                                         ((**(code **)(*plVar11 + 0x2c8))
                                                    (plVar11,0,*(undefined8 *)(*plVar11 + 0x2d0)),
                                         lStack_88 == 0)))) || (*(long *)(lStack_88 + 0x60) == 0))
                              goto LAB_023d6410;
                              lVar8 = TMPro_TMP_Text__get_rectTransform_42cd6a4
                                                (*(long *)(lStack_88 + 0x60),0);
                              UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                                        (0,0,_UNK_00e1fe60,0);
                              if (((lVar8 == 0) ||
                                  (UnityEngine_Transform__set_localRotation_43d156c(lVar8,0),
                                  lVar8 = lStack_88, lStack_88 == 0)) ||
                                 (plVar11 = *(long **)(lStack_88 + 0x60), plVar11 == (long *)0x0))
                              goto LAB_023d6410;
                              fVar14 = (float)(**(code **)(*plVar11 + 0x638))
                                                        (plVar11,*(undefined8 *)(*plVar11 + 0x640));
                              fVar1 = 140.0;
                              if (fVar14 <= 140.0) {
                                fVar1 = fVar14;
                              }
                              *(float *)(lVar8 + 0x98) = fVar1;
                            }
                            puVar4 = PTR_DAT_04cb6f60;
                            puVar3 = PTR_DAT_04cb6f48;
                            fVar1 = _UNK_00e20a74;
                            iVar13 = 0;
                            do {
                              if (lStack_88 == 0) goto LAB_023d6410;
                              uVar15 = *(undefined8 *)(lStack_88 + 0x18);
                              puVar12 = (undefined8 *)puVar3;
                              if (iVar13 != 0) {
                                puVar12 = (undefined8 *)puVar4;
                              }
                              uVar9 = *puVar12;
                              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                                thunk_FUN_0218fdac();
                              }
                              lVar8 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                                                (0x41b00000,0x42800000,0,0,uVar15,uVar9,0,0,0);
                              if ((lVar8 == 0) ||
                                 (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0),
                                 lVar10 == 0)) goto LAB_023d6410;
                              plVar11 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                                          (lVar10,*(undefined8 *)puVar5);
                              uVar15 = Dino_BusSand_App_UI_AtelierArt__get_Peg_22d64e0();
                              if (plVar11 == (long *)0x0) goto LAB_023d6410;
                              UnityEngine_UI_Image__set_sprite_44a7258(plVar11,uVar15,0);
                              (**(code **)(*plVar11 + 0x2c8))
                                        (plVar11,0,*(undefined8 *)(*plVar11 + 0x2d0));
                              if (lStack_88 == 0) goto LAB_023d6410;
                              fVar14 = 3.0;
                              if (iVar13 != 0) {
                                fVar14 = -4.0;
                              }
                              UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                                        (0,0,(fVar14 + (*(float *)(lStack_88 + 0x80) + -0.5) * 4.0)
                                             * fVar1,0);
                              UnityEngine_Transform__set_localRotation_43d156c(lVar8,0);
                              if (iVar13 == 0) {
                                if (lStack_88 == 0) goto LAB_023d6410;
                                plVar11 = (long *)(lStack_88 + 0x30);
                              }
                              else {
                                if (lStack_88 == 0) goto LAB_023d6410;
                                plVar11 = (long *)(lStack_88 + 0x38);
                              }
                              *plVar11 = lVar8;
                              thunk_FUN_02134474(plVar11,lVar8);
                              iVar13 = iVar13 + 1;
                            } while (iVar13 != 2);
                            if (*(long *)(param_1 + 0x78) != 0) {
                              System_Collections_Generic_Dictionary_int__object___set_Item_3437318
                                        (*(long *)(param_1 + 0x78),iStack_74,lStack_88,
                                         *(undefined8 *)PTR_DAT_04cb6f28);
                              return lStack_88;
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
LAB_023d6410:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

