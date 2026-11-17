/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$BuildHole
void Dino_BusSand_App_UI_GuidePanel__BuildHole (Dino_BusSand_App_UI_GuidePanel_o* __this, UnityEngine_Vector2_o screen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$BuildHole
   void Dino_BusSand_App_UI_GuidePanel__BuildHole (Dino_BusSand_App_UI_GuidePanel_o* __this,
   UnityEngine_Vector2_o screen, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_GuidePanel__BuildHole_22c9478
                (undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  
  puVar4 = PTR_DAT_04cb69e8;
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c36b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0890);
    FUN_02132f7c(PTR_DAT_04cb68a0);
    FUN_02132f7c(PTR_DAT_04cb68f0);
    FUN_02132f7c(PTR_DAT_04cabdc0);
    FUN_02132f7c(PTR_DAT_04cad708);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabda8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb69e8);
    FUN_02132f7c(PTR_DAT_04cb1ab8);
    FUN_02132f7c(PTR_DAT_04cb6a40);
    FUN_02132f7c(PTR_DAT_04cb6a48);
    FUN_02132f7c(PTR_DAT_04cb6a50);
    FUN_02132f7c(PTR_DAT_04cb6a58);
    FUN_02132f7c(PTR_DAT_04cb1ad8);
    bRam0000000004f9c36b = 1;
  }
  lVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_3,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
  if ((uVar10 & 1) == 0) {
    uVar11 = UnityEngine_Component__get_transform_43bcd18(param_3,0);
  }
  else {
    if (lVar9 == 0) goto LAB_023c9bb4;
    uVar11 = UnityEngine_Transform__get_parent_43d0d70(lVar9,0);
  }
  puVar4 = PTR_DAT_04cabda8;
  lVar12 = *(long *)(param_3 + 0x38);
  if (lVar12 != 0) {
    if ((*(long *)(lVar12 + 0x78) == 0) || (*(int *)(*(long *)(lVar12 + 0x78) + 0x18) < 1)) {
      lVar12 = Dino_BusSand_App_UI_GuidePanel__NewRect_22c9bb8
                         (param_3,*(undefined8 *)PTR_DAT_04cb6a48,uVar11);
      plVar15 = (long *)(param_3 + 0x88);
      *plVar15 = lVar12;
      thunk_FUN_02134474(plVar15,lVar12);
      lVar12 = *plVar15;
      if (cRam0000000004f9b948 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b948 = '\x01';
      }
      puVar5 = PTR_DAT_04cacfc0;
      if (lVar12 != 0) {
        UnityEngine_RectTransform__set_anchorMin_43cf5e4
                  (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                   (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],lVar12,0);
        lVar12 = *plVar15;
        if (cRam0000000004f9b949 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b949 = '\x01';
        }
        if (lVar12 != 0) {
          lVar13 = *(long *)(*(long *)puVar5 + 0xb8);
          UnityEngine_RectTransform__set_anchorMax_43cf768
                    (*(undefined4 *)(lVar13 + 8),*(undefined4 *)(lVar13 + 0xc),lVar12,0);
          lVar12 = *plVar15;
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(PTR_DAT_04cacfc0);
            cRam0000000004f9b948 = '\x01';
          }
          if (lVar12 != 0) {
            puVar14 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
            uVar22 = *puVar14;
            uVar19 = puVar14[1];
            UnityEngine_RectTransform__set_offsetMax_43d0018(uVar22,uVar19,lVar12,0);
            UnityEngine_RectTransform__set_offsetMin_43cfe84(uVar22,uVar19,lVar12,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
            if ((uVar10 & 1) != 0) {
              if (lVar9 == 0) goto LAB_023c9bb4;
              lVar12 = *plVar15;
              uVar19 = UnityEngine_Transform__GetSiblingIndex_43d48f4(lVar9,0);
              if (lVar12 == 0) goto LAB_023c9bb4;
              UnityEngine_Transform__SetSiblingIndex_43d4730(lVar12,uVar19,0);
            }
            if ((*plVar15 != 0) &&
               (lVar9 = UnityEngine_Component__get_gameObject_43bcde8(*plVar15,0), lVar9 != 0)) {
              lVar9 = UnityEngine_GameObject__AddComponent_object__275a54c
                                (lVar9,*(undefined8 *)PTR_DAT_04cb0890);
              if ((*(long *)(param_3 + 0x38) != 0) && (lVar9 != 0)) {
                fVar17 = *(float *)(*(long *)(param_3 + 0x38) + 0x58);
                fVar20 = 1.0;
                if (fVar17 <= 1.0) {
                  fVar20 = fVar17;
                }
                fVar18 = 0.0;
                if (0.0 <= fVar17) {
                  fVar18 = fVar20;
                }
                UnityEngine_CanvasGroup__set_alpha_467ad3c(fVar18,lVar9,0);
                UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar9,0,0);
                UnityEngine_CanvasGroup__set_interactable_467aec4(lVar9,0,0);
                puVar3 = PTR_DAT_04cb6a50;
                if (*(long *)(param_3 + 0x38) != 0) {
                  fVar17 = *(float *)(*(long *)(param_3 + 0x38) + 0x4c);
                  fVar20 = _UNK_00e20448;
                  if (_UNK_00e20448 <= fVar17) {
                    fVar20 = fVar17;
                  }
                  iVar2 = *(int *)(*(long *)PTR_DAT_04cabdc0 + 0xe4);
                  fVar20 = fVar20 * 440.0 * 0.5;
                  *(float *)(param_3 + 0xd0) = fVar20;
                  if (iVar2 == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar11 = Dino_BusSand_App_UI_GuidePanel__MakeHoleTexture_22c9ddc
                                     ((fVar20 + -50.0) / (fVar20 + 50.0));
                  *(undefined8 *)(param_3 + 0xb8) = uVar11;
                  thunk_FUN_02134474();
                  lVar9 = Dino_BusSand_App_UI_GuidePanel__NewRect_22c9bb8
                                    (param_3,*(undefined8 *)puVar3,*(undefined8 *)(param_3 + 0x88));
                  plVar15 = (long *)(param_3 + 0x90);
                  *plVar15 = lVar9;
                  thunk_FUN_02134474(plVar15,lVar9);
                  if (((*plVar15 != 0) &&
                      (lVar9 = UnityEngine_Component__get_gameObject_43bcde8(*plVar15,0), lVar9 != 0
                      )) && (plVar15 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                                         (lVar9,*(undefined8 *)PTR_DAT_04cb68a0),
                            puVar7 = PTR_DAT_04cb6a58, puVar6 = PTR_DAT_04cb6a40,
                            puVar5 = PTR_DAT_04cb1ad8, puVar3 = PTR_DAT_04cb1ab8,
                            plVar15 != (long *)0x0)) {
                    UnityEngine_UI_RawImage__set_texture_468c7f4
                              (plVar15,*(undefined8 *)(param_3 + 0xb8),0);
                    (**(code **)(*plVar15 + 0x2c8))(plVar15,0,*(undefined8 *)(*plVar15 + 0x2d0));
                    uVar11 = Dino_BusSand_App_UI_GuidePanel__NewBlock_22ca108
                                       (param_3,*(undefined8 *)puVar7);
                    *(undefined8 *)(param_3 + 0x98) = uVar11;
                    thunk_FUN_02134474();
                    uVar11 = Dino_BusSand_App_UI_GuidePanel__NewBlock_22ca108
                                       (param_3,*(undefined8 *)puVar6);
                    *(undefined8 *)(param_3 + 0xa0) = uVar11;
                    thunk_FUN_02134474();
                    uVar11 = Dino_BusSand_App_UI_GuidePanel__NewBlock_22ca108
                                       (param_3,*(undefined8 *)puVar3);
                    *(undefined8 *)(param_3 + 0xa8) = uVar11;
                    thunk_FUN_02134474();
                    uVar11 = Dino_BusSand_App_UI_GuidePanel__NewBlock_22ca108
                                       (param_3,*(undefined8 *)puVar5);
                    *(undefined8 *)(param_3 + 0xb0) = uVar11;
                    thunk_FUN_02134474((undefined8 *)(param_3 + 0xb0),uVar11);
                    uVar16 = *(undefined8 *)(param_3 + 0x88);
                    uVar11 = *(undefined8 *)(param_3 + 0x50);
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle_467e798
                              (param_1,param_2,uVar16,uVar11,param_3 + 200,0);
                    puVar3 = PTR_DAT_04ca9ae8;
                    if (*(long *)(param_3 + 0x38) != 0) {
                      uVar8 = *(uint *)(*(long *)(param_3 + 0x38) + 0x50);
                      fVar20 = (float)(int)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU)) *
                               _UNK_00e20a7c;
                      if (0.0 < fVar20) {
                        Dino_BusSand_App_UI_GuidePanel__LayoutHole_22ca1c0(0,param_3);
                        lVar9 = Dino_BusSand_App_UI_GuidePanel__HoleOpen_22ca348(fVar20,param_3);
                        if (lVar9 == 0) {
                          thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
                          uVar16 = thunk_FUN_0216e89c();
                          uVar11 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
                          System_NullReferenceException___ctor_483267c(uVar16,uVar11,0);
                        }
                        else {
                          uVar10 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
                          if ((uVar10 & 1) != 0) {
                            if ((bRam0000000004fa84ef & 1) == 0) {
                              FUN_02132f7c(PTR_DAT_04cf7890);
                              bRam0000000004fa84ef = 1;
                            }
                            if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_02133224();
                            }
                            lVar12 = *(long *)(param_3 + 0x10);
                            if (lVar12 != 0) {
                              if (pcRam0000000004fa8560 == (code *)0x0) {
                                pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
                              }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              uVar10 = (*pcRam0000000004fa8560)(lVar12,lVar9);
                              return uVar10;
                            }
                    /* WARNING: Subroutine does not return */
                            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                      (param_3,0);
                          }
                          thunk_FUN_021985a8(PTR_DAT_04caa3a8);
                          uVar16 = thunk_FUN_0216e89c();
                          uVar11 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
                          System_ArgumentException___ctor_47b660c(uVar16,uVar11,0);
                        }
                        uVar11 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
                        FUN_021330e8(uVar16,uVar11);
                      }
                      if ((bRam0000000004f9c36c & 1) == 0) {
                        FUN_02132f7c(PTR_DAT_04cabdc0);
                        FUN_02132f7c(PTR_DAT_04ca9ae8);
                        bRam0000000004f9c36c = 1;
                      }
                      uVar11 = *(undefined8 *)(param_3 + 0x88);
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
                      if ((uVar10 & 1) != 0) {
                        return uVar10;
                      }
                      uVar11 = *(undefined8 *)(param_3 + 0x90);
                      fVar20 = (*(float *)(param_3 + 0xd0) + *(float *)(param_3 + 0xd0) + 100.0) *
                               1.0 * 0.5;
                      fVar21 = *(float *)(param_3 + 200) - fVar20;
                      fVar17 = *(float *)(param_3 + 0xcc) - fVar20;
                      fVar18 = *(float *)(param_3 + 200) + fVar20;
                      fVar20 = *(float *)(param_3 + 0xcc) + fVar20;
                      if (*(int *)(*(long *)PTR_DAT_04cabdc0 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      Dino_BusSand_App_UI_GuidePanel__PlaceBox_22ca3c4
                                (fVar21,fVar17,fVar18,fVar20,uVar11);
                      Dino_BusSand_App_UI_GuidePanel__PlaceBox_22ca3c4
                                (0xc57a0000,0xc57a0000,fVar21,0x457a0000,
                                 *(undefined8 *)(param_3 + 0x98));
                      Dino_BusSand_App_UI_GuidePanel__PlaceBox_22ca3c4
                                (fVar18,0xc57a0000,0x457a0000,0x457a0000,
                                 *(undefined8 *)(param_3 + 0xa0));
                      Dino_BusSand_App_UI_GuidePanel__PlaceBox_22ca3c4
                                (fVar21,fVar20,fVar18,0x457a0000,*(undefined8 *)(param_3 + 0xa8));
                      puVar3 = PTR_DAT_04ca9ae8;
                      lVar9 = *(long *)(param_3 + 0xb0);
                      if ((bRam0000000004f9c36d & 1) == 0) {
                        FUN_02132f7c(PTR_DAT_04ca9ae8);
                        bRam0000000004f9c36d = 1;
                      }
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
                      if ((uVar10 & 1) == 0) {
                        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02133224();
                        }
                        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                                  ((fVar21 + fVar18) * 0.5,(fVar17 + -4000.0) * 0.5,lVar9,0);
                        if ((bRam0000000004fa8a8a & 1) == 0) {
                          FUN_02132f7c(PTR_DAT_04cf7bc8,0);
                          bRam0000000004fa8a8a = 1;
                        }
                        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02133224();
                        }
                        lVar9 = *(long *)(lVar9 + 0x10);
                        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
                        }
                        if (pcRam0000000004fa8ae0 == (code *)0x0) {
                          pcRam0000000004fa8ae0 = (code *)FUN_02132f40(&UNK_00e51f73);
                        }
                        uVar10 = (*pcRam0000000004fa8ae0)(lVar9,&stack0xffffffffffffffe8);
                        return uVar10;
                      }
                      return uVar10;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar19 = *(undefined4 *)(lVar12 + 0x58);
      if (*(int *)(*(long *)PTR_DAT_04cb68f0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar12 = Dino_BusSand_App_UI_GuideDimHoles__Create_22c5a1c(uVar19,uVar11);
      plVar15 = (long *)(param_3 + 0xc0);
      *plVar15 = lVar12;
      thunk_FUN_02134474(plVar15,lVar12);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
      if ((uVar10 & 1) != 0) {
        if (((*plVar15 == 0) ||
            (lVar12 = UnityEngine_Component__get_transform_43bcd18(*plVar15,0), lVar9 == 0)) ||
           (uVar19 = UnityEngine_Transform__GetSiblingIndex_43d48f4(lVar9,0), lVar12 == 0))
        goto LAB_023c9bb4;
        UnityEngine_Transform__SetSiblingIndex_43d4730(lVar12,uVar19,0);
      }
      if ((*(long *)(param_3 + 0x38) != 0) && (*(long *)(param_3 + 0xc0) != 0)) {
        Dino_BusSand_App_UI_GuideDimHoles__AddTargets_22c5f54
                  (*(long *)(param_3 + 0xc0),*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x78));
        if (*plVar15 != 0) {
          plVar15 = (long *)UnityEngine_Component__get_transform_43bcd18(*plVar15,0);
          if (plVar15 == (long *)0x0) {
            *(undefined8 *)(param_3 + 0x88) = 0;
          }
          else {
            lVar9 = *(long *)PTR_DAT_04cabdb0;
            if ((*plVar15 != lVar9) || (*(long **)(param_3 + 0x88) = plVar15, *plVar15 != lVar9)) {
                    /* WARNING: Subroutine does not return */
              FUN_021335a4(plVar15);
            }
          }
          thunk_FUN_02134474(param_3 + 0x88,plVar15);
          if (*(long *)(param_3 + 0x38) != 0) {
            fVar17 = *(float *)(*(long *)(param_3 + 0x38) + 0x4c);
            lVar9 = *(long *)(param_3 + 0x88);
            uVar11 = *(undefined8 *)(param_3 + 0x50);
            fVar20 = _UNK_00e20448;
            if (_UNK_00e20448 <= fVar17) {
              fVar20 = fVar17;
            }
            iVar2 = *(int *)(*(long *)puVar4 + 0xe4);
            *(float *)(param_3 + 0xd0) = fVar20 * 440.0 * 0.5;
            if (iVar2 == 0) {
              thunk_FUN_0218fdac();
            }
            puVar1 = (undefined8 *)(param_3 + 200);
            if ((bRam0000000004fac49e & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cabda8,uVar11,puVar1,0);
              bRam0000000004fac49e = 1;
            }
            puVar3 = PTR_DAT_04cabda8;
            if (cRam0000000004f9b948 == '\0') {
              FUN_02132f7c(PTR_DAT_04cacfc0);
              cRam0000000004f9b948 = '\x01';
            }
            *puVar1 = **(undefined8 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar8 = UnityEngine_RectTransformUtility__ScreenPointToWorldPointInRectangle_467e1ac
                              (param_1,param_2,lVar9,uVar11,&stack0xffffffffffffffb0);
            if ((uVar8 & 1) != 0) {
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar22 = 0;
              uVar19 = UnityEngine_Transform__InverseTransformPoint_43d3ffc(0,0,0,lVar9,0);
              *(undefined4 *)puVar1 = uVar19;
              *(undefined4 *)(param_3 + 0xcc) = uVar22;
            }
            return (ulong)(uVar8 & 1);
          }
        }
      }
    }
  }
LAB_023c9bb4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

