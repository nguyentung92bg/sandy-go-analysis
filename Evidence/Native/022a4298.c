/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$BuildList
void Dino_BusSand_App_UI_ClimbTowerPanel__BuildList (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$BuildList
   void Dino_BusSand_App_UI_ClimbTowerPanel__BuildList (Dino_BusSand_App_UI_ClimbTowerPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ClimbTowerPanel__BuildList_21a4298(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  int iVar21;
  long *plVar22;
  long *plVar23;
  ulong uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  long *plStack_98;
  long *plStack_90;
  
  puVar7 = PTR_DAT_04caea00;
  puVar5 = PTR_DAT_04cae9f8;
  puVar6 = PTR_DAT_04cae0c8;
  if ((bRam0000000004f9ba31 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caea08);
    FUN_02132f7c(PTR_DAT_04caea10);
    FUN_02132f7c(PTR_DAT_04caea18);
    FUN_02132f7c(PTR_DAT_04caea20);
    FUN_02132f7c(PTR_DAT_04caea28);
    FUN_02132f7c(PTR_DAT_04caea30);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cae0c8);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cae0d0);
    FUN_02132f7c(PTR_DAT_04cae0d8);
    FUN_02132f7c(PTR_DAT_04caea00);
    FUN_02132f7c(PTR_DAT_04caea38);
    FUN_02132f7c(PTR_DAT_04caea40);
    FUN_02132f7c(PTR_DAT_04caea48);
    FUN_02132f7c(PTR_DAT_04caea50);
    FUN_02132f7c(PTR_DAT_04caea58);
    FUN_02132f7c(PTR_DAT_04caea60);
    FUN_02132f7c(PTR_DAT_04caea68);
    FUN_02132f7c(PTR_DAT_04caea70);
    FUN_02132f7c(PTR_DAT_04caea78);
    FUN_02132f7c(PTR_DAT_04cae9f8);
    FUN_02132f7c(PTR_DAT_04caea80);
    bRam0000000004f9ba31 = 1;
  }
  puVar4 = PTR_DAT_04cabdb0;
  puVar3 = PTR_DAT_04ca9ae8;
  lVar9 = Dino_BusSand_App_UI_UIPanel__Get_object__29460d0
                    (param_1,*(undefined8 *)puVar5,*(undefined8 *)puVar6);
  plVar22 = (long *)(param_1 + 0x88);
  *plVar22 = lVar9;
  thunk_FUN_02134474(plVar22,lVar9);
  plVar10 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar7,0);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
    lVar9 = *(long *)puVar4;
    plVar20 = plVar10;
    if (*plVar10 != lVar9) {
      plVar20 = (long *)0x0;
    }
    *(long **)(param_1 + 0x48) = plVar20;
    if (*plVar10 != lVar9) {
      plVar10 = (long *)0x0;
    }
  }
  plVar20 = (long *)(param_1 + 0x48);
  thunk_FUN_02134474(plVar20,plVar10);
  lVar9 = *plVar22;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
  if ((uVar11 & 1) == 0) {
    plVar10 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108
                                (param_1,*(undefined8 *)PTR_DAT_04caea50,0);
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else if (*plVar10 != *(long *)puVar4) {
      plVar10 = (long *)0x0;
    }
  }
  else {
    if (*plVar22 == 0) goto LAB_022a4ddc;
    plVar10 = *(long **)(*plVar22 + 0x40);
  }
  puVar5 = PTR_DAT_04caea80;
  puVar6 = PTR_DAT_04caea58;
  *(long **)(param_1 + 0x50) = plVar10;
  thunk_FUN_02134474();
  plVar10 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar6,0);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    lVar9 = *(long *)puVar4;
    plVar23 = plVar10;
    if (*plVar10 != lVar9) {
      plVar23 = (long *)0x0;
    }
    *(long **)(param_1 + 0x58) = plVar23;
    if (*plVar10 != lVar9) {
      plVar10 = (long *)0x0;
    }
  }
  puVar6 = PTR_DAT_04caea48;
  plVar23 = (long *)(param_1 + 0x58);
  thunk_FUN_02134474(plVar23,plVar10);
  plVar10 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar5,0);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  else {
    lVar9 = *(long *)puVar4;
    plVar1 = plVar10;
    if (*plVar10 != lVar9) {
      plVar1 = (long *)0x0;
    }
    *(long **)(param_1 + 0x60) = plVar1;
    if (*plVar10 != lVar9) {
      plVar10 = (long *)0x0;
    }
  }
  puVar5 = PTR_DAT_04caea60;
  thunk_FUN_02134474(param_1 + 0x60,plVar10);
  plVar10 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar6,0);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    lVar9 = *(long *)puVar4;
    plVar1 = plVar10;
    if (*plVar10 != lVar9) {
      plVar1 = (long *)0x0;
    }
    *(long **)(param_1 + 0x68) = plVar1;
    if (*plVar10 != lVar9) {
      plVar10 = (long *)0x0;
    }
  }
  puVar6 = PTR_DAT_04caea38;
  thunk_FUN_02134474(param_1 + 0x68,plVar10);
  plVar10 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar5,0);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  else {
    lVar9 = *(long *)puVar4;
    plVar1 = plVar10;
    if (*plVar10 != lVar9) {
      plVar1 = (long *)0x0;
    }
    *(long **)(param_1 + 0x70) = plVar1;
    if (*plVar10 != lVar9) {
      plVar10 = (long *)0x0;
    }
  }
  thunk_FUN_02134474(param_1 + 0x70,plVar10);
  plVar10 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar6,0);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    lVar9 = *(long *)puVar4;
    plVar1 = plVar10;
    if (*plVar10 != lVar9) {
      plVar1 = (long *)0x0;
    }
    *(long **)(param_1 + 0x78) = plVar1;
    if (*plVar10 != lVar9) {
      plVar10 = (long *)0x0;
    }
  }
  thunk_FUN_02134474(param_1 + 0x78,plVar10);
  lVar9 = *plVar20;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
  if ((uVar11 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar11 = *(ulong *)(*(long *)(param_1 + 0xa8) + 0x18);
    if (uVar11 == 0) {
      return;
    }
    iVar21 = (int)uVar11;
    *(float *)(param_1 + 0xb0) = (float)iVar21 * 860.0 + -700.0 + -216.0;
    if (*(long *)(param_1 + 0x48) != 0) {
      plStack_90 = (long *)UnityEngine_Transform__Find_43d4bec
                                     (*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_04caea78,0);
      if (plStack_90 == (long *)0x0) {
        plStack_90 = (long *)0x0;
      }
      else if (*plStack_90 != *(long *)puVar4) {
        plStack_90 = (long *)0x0;
      }
      if (*plVar20 != 0) {
        plStack_98 = (long *)UnityEngine_Transform__Find_43d4bec
                                       (*plVar20,*(undefined8 *)PTR_DAT_04caea68,0);
        if (plStack_98 == (long *)0x0) {
          plStack_98 = (long *)0x0;
        }
        else if (*plStack_98 != *(long *)puVar4) {
          plStack_98 = (long *)0x0;
        }
        if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar12 = Dino_BusSand_App_UiAssets__Prefab_21513b8(*(undefined8 *)PTR_DAT_04caea70,0);
        puVar5 = PTR_DAT_04caea20;
        puVar6 = PTR_DAT_04cacfc0;
        if (0 < iVar21) {
          fVar25 = 0.0;
          uVar24 = 0;
          do {
            if (uVar24 == 0) {
              fVar14 = 320.0;
              plVar10 = plStack_90;
            }
            else if (iVar21 - 1 == uVar24) {
              fVar14 = 1320.0;
              plVar10 = plStack_98;
            }
            else {
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar13 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
              if ((uVar13 & 1) == 0) {
                plVar10 = (long *)0x0;
              }
              else {
                lVar9 = *plVar20;
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                lVar9 = UnityEngine_Object__Instantiate_object__2805310
                                  (uVar12,lVar9,0,*(undefined8 *)PTR_DAT_04cad390);
                if (lVar9 == 0) goto LAB_022a4ddc;
                plVar10 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar9,0);
                if ((plVar10 != (long *)0x0) && (*plVar10 != *(long *)PTR_DAT_04cabdb0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_021335a4(plVar10);
                }
              }
              fVar14 = 160.0;
            }
            lVar9 = *(long *)(param_1 + 0x98);
            if (lVar9 == 0) goto LAB_022a4ddc;
            lVar16 = *(long *)(lVar9 + 0x10);
            lVar18 = *(long *)puVar5;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar16 == 0) goto LAB_022a4ddc;
            uVar2 = *(uint *)(lVar9 + 0x18);
            if (uVar2 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar2 + 1;
              *(float *)(lVar16 + (long)(int)uVar2 * 4 + 0x20) = fVar25;
            }
            else {
              System_Collections_Generic_List_float___AddWithResize_3ac28c0
                        (fVar25,lVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar13 = UnityEngine_Object__op_Inequality_43c8dec(plVar10,0,0);
            if ((uVar13 & 1) != 0) {
              if ((plVar10 == (long *)0x0) ||
                 (lVar9 = UnityEngine_Component__get_gameObject_43bcde8(plVar10,0), lVar9 == 0))
              goto LAB_022a4ddc;
              UnityEngine_GameObject__SetActive_43c1408(lVar9,1,0);
              if (cRam0000000004f9b948 == '\0') {
                FUN_02132f7c(puVar6);
                cRam0000000004f9b948 = '\x01';
              }
              uVar26 = **(undefined4 **)(*(long *)puVar6 + 0xb8);
              uVar27 = (*(undefined4 **)(*(long *)puVar6 + 0xb8))[1];
              UnityEngine_RectTransform__set_anchorMax_43cf768(uVar26,uVar27,plVar10,0);
              UnityEngine_RectTransform__set_anchorMin_43cf5e4(uVar26,uVar27,plVar10,0);
              if (cRam0000000004f9b948 == '\0') {
                FUN_02132f7c(puVar6);
                cRam0000000004f9b948 = '\x01';
              }
              UnityEngine_RectTransform__set_pivot_43cfbf4
                        (**(undefined4 **)(*(long *)puVar6 + 0xb8),
                         (*(undefined4 **)(*(long *)puVar6 + 0xb8))[1],plVar10,0);
              UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0,fVar25,plVar10,0);
              if (uVar24 != 0) {
                lVar9 = UnityEngine_Component__GetComponent_object__26f97e8
                                  (plVar10,*(undefined8 *)PTR_DAT_04caea10);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar3);
                }
                uVar13 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
                if ((uVar13 & 1) != 0) {
                  lVar9 = UnityEngine_Component__get_gameObject_43bcde8(plVar10,0);
                  if (lVar9 == 0) goto LAB_022a4ddc;
                  lVar9 = UnityEngine_GameObject__AddComponent_object__275a54c
                                    (lVar9,*(undefined8 *)PTR_DAT_04caea18);
                }
                lVar16 = *(long *)(param_1 + 0xa8);
                if (lVar16 == 0) goto LAB_022a4ddc;
                if (*(uint *)(lVar16 + 0x18) <= uVar24) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                if (*(long *)(param_1 + 0x38) == 0) goto LAB_022a4ddc;
                uVar26 = *(undefined4 *)(lVar16 + uVar24 * 4 + 0x20);
                uVar27 = Dino_BusSand_App_Meta_ClimbTowerFeature__RewardIdAt_2229444
                                   (*(long *)(param_1 + 0x38),uVar24 & 0xffffffff,0);
                if (lVar9 == 0) goto LAB_022a4ddc;
                Dino_BusSand_App_UI_ClimbTowerItemView__SetData_21a16e0
                          (lVar9,uVar24 & 0xffffffff,uVar26,uVar27,param_1,
                           *(undefined8 *)(param_1 + 0x38));
                lVar16 = *(long *)(param_1 + 0x90);
                if (lVar16 == 0) goto LAB_022a4ddc;
                lVar18 = *(long *)(lVar16 + 0x10);
                lVar19 = *(long *)PTR_DAT_04caea28;
                *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                if (lVar18 == 0) goto LAB_022a4ddc;
                uVar2 = *(uint *)(lVar16 + 0x18);
                if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                  *(uint *)(lVar16 + 0x18) = uVar2 + 1;
                  plVar10 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
                  *plVar10 = lVar9;
                  thunk_FUN_02134474(plVar10,lVar9);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                            (lVar16,lVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            bVar8 = uVar24 != 0;
            fVar15 = 484.0;
            uVar24 = uVar24 + 1;
            if (bVar8) {
              fVar15 = 700.0;
            }
            fVar25 = fVar25 + fVar15 + fVar14;
          } while ((uVar11 & 0xffffffff) != uVar24);
        }
        if (*(long *)(param_1 + 0x98) != 0) {
          fVar25 = (float)System_Collections_Generic_List_float___get_Item_3ac25c4
                                    (*(long *)(param_1 + 0x98),iVar21 + -1,
                                     *(undefined8 *)PTR_DAT_04caea30);
          lVar9 = *plVar20;
          if (lVar9 != 0) {
            UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0,lVar9,0);
            UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0,lVar9,0);
            if (*plVar20 != 0) {
              UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0,*plVar20,0);
              puVar5 = PTR_DAT_04cabdb0;
              if (*plVar20 != 0) {
                UnityEngine_RectTransform__set_sizeDelta_43cfa70
                          (0x44870000,fVar25 + 1320.0,*plVar20,0);
                lVar9 = *plVar20;
                if (cRam0000000004f9b948 == '\0') {
                  FUN_02132f7c(PTR_DAT_04cacfc0);
                  cRam0000000004f9b948 = '\x01';
                }
                if (lVar9 != 0) {
                  UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                            (**(undefined4 **)(*(long *)puVar6 + 0xb8),
                             (*(undefined4 **)(*(long *)puVar6 + 0xb8))[1],lVar9,0);
                  lVar9 = *plVar23;
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
                  if ((uVar11 & 1) != 0) {
                    if (*plVar23 == 0) goto LAB_022a4ddc;
                    UnityEngine_RectTransform__SetSizeWithCurrentAnchors_43d09cc
                              (*(undefined4 *)(param_1 + 0xb0),*plVar23,1,0);
                  }
                  plVar10 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108
                                              (param_1,*(undefined8 *)PTR_DAT_04caea40,0);
                  if (plVar10 == (long *)0x0) {
                    plVar10 = (long *)0x0;
                    *(undefined8 *)(param_1 + 0x80) = 0;
                  }
                  else {
                    lVar9 = *(long *)puVar5;
                    plVar20 = plVar10;
                    if (*plVar10 != lVar9) {
                      plVar20 = (long *)0x0;
                    }
                    *(long **)(param_1 + 0x80) = plVar20;
                    if (*plVar10 != lVar9) {
                      plVar10 = (long *)0x0;
                    }
                  }
                  plVar20 = (long *)(param_1 + 0x80);
                  thunk_FUN_02134474(plVar20,plVar10);
                  lVar9 = *plVar20;
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
                  if ((uVar11 & 1) != 0) {
                    if (*plVar20 == 0) goto LAB_022a4ddc;
                    UnityEngine_RectTransform__SetSizeWithCurrentAnchors_43d09cc
                              (*(undefined4 *)(param_1 + 0xb0),*plVar20,1,0);
                  }
                  Dino_BusSand_App_UI_ClimbTowerPanel__GenerateLoopTree_21a50c0(param_1);
                  Dino_BusSand_App_UI_ClimbTowerPanel__BuildTicks_21a5474(param_1);
                  uVar12 = *(undefined8 *)(param_1 + 0x88);
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
                  if ((uVar11 & 1) == 0) {
                    return;
                  }
                  if (*plVar22 != 0) {
                    lVar9 = *(long *)(*plVar22 + 0x68);
                    uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae0d0);
                    UnityEngine_Events_UnityAction_Vector2____ctor_303b9ac
                              (uVar12,param_1,*(undefined8 *)PTR_DAT_04caea08,0);
                    if (lVar9 != 0) {
                      uVar12 = UnityEngine_Events_UnityEvent_Vector2___GetDelegate_303e0b8
                                         (uVar12,*(undefined8 *)
                                                  (*(long *)(*(long *)(*(long *)PTR_DAT_04cae0d8 +
                                                                      0x20) + 0xc0) + 0x10));
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02133224();
                      }
                      lVar9 = *(long *)(lVar9 + 0x10);
                      if (lVar9 != 0) {
                        if ((bRam0000000004fa8d9c & 1) == 0) {
                          FUN_02132f7c(PTR_DAT_04cf7d70);
                          bRam0000000004fa8d9c = 1;
                        }
                        lVar16 = *(long *)(lVar9 + 0x18);
                        if (lVar16 != 0) {
                          lVar18 = *(long *)(lVar16 + 0x10);
                          lVar19 = *(long *)PTR_DAT_04cf7d70;
                          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                          if (lVar18 != 0) {
                            uVar2 = *(uint *)(lVar16 + 0x18);
                            if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                              *(uint *)(lVar16 + 0x18) = uVar2 + 1;
                              puVar17 = (undefined8 *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
                              *puVar17 = uVar12;
                              thunk_FUN_02134474(puVar17,uVar12);
                            }
                            else {
                              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                        (lVar16,uVar12,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                            }
                            *(undefined1 *)(lVar9 + 0x28) = 1;
                            return;
                          }
                        }
                    /* WARNING: Subroutine does not return */
                        FUN_02133224();
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_02133224(0,uVar12,0);
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
LAB_022a4ddc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

