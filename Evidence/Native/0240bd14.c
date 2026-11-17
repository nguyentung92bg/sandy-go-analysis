/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$PlaceTab
void Dino_BusSand_App_UI_HudPanel__PlaceTab (Dino_BusSand_App_UI_HudPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$PlaceTab
   void Dino_BusSand_App_UI_HudPanel__PlaceTab (Dino_BusSand_App_UI_HudPanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel__PlaceTab_230bd14
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c51d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabd80);
    FUN_02132f7c(PTR_DAT_04cb8198);
    FUN_02132f7c(PTR_DAT_04cb6a88);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabda8);
    bRam0000000004f9c51d = 1;
  }
  uStack_38 = 0;
  Dino_BusSand_App_UI_HudPanel__PlaceWorldTags_230a8a8(param_5);
  uVar9 = *(undefined8 *)(param_5 + 0x68);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  if (((uVar6 & 1) == 0) && (*(long *)(param_5 + 0xd0) != 0)) {
    uVar9 = *(undefined8 *)(param_5 + 0x40);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
    if ((uVar6 & 1) == 0) {
      if (*(long *)(param_5 + 0x40) != 0) {
        uVar9 = Dino_BusSand_App_Gameplay_GameplayController__get_Cam_229b328
                          (*(long *)(param_5 + 0x40),0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
        if ((uVar6 & 1) != 0) {
          return;
        }
        if (*(long *)(param_5 + 0x68) != 0) {
          fVar11 = (float)UnityEngine_Transform__get_localPosition_43cfce8
                                    (*(long *)(param_5 + 0x68),0);
          if (*(long *)(param_5 + 0x68) != 0) {
            UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_5 + 0x68),0);
            if (*(long *)(param_5 + 0x40) != 0) {
              lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Cam_229b328
                                (*(long *)(param_5 + 0x40),0);
              if ((*(long *)(param_5 + 0xc0) != 0) &&
                 (fVar15 = param_2,
                 UnityEngine_Transform__TransformPoint_43d3c44
                           (fVar11,param_2,param_3,*(long *)(param_5 + 0xc0),0), lVar7 != 0)) {
                uVar12 = UnityEngine_Camera__WorldToScreenPoint_435c56c(lVar7,0);
                if (*(long *)(param_5 + 0x40) != 0) {
                  lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Cam_229b328
                                    (*(long *)(param_5 + 0x40),0);
                  if (*(long *)(param_5 + 0xc0) != 0) {
                    fVar16 = param_2 - param_4 * 0.5;
                    fVar13 = param_3;
                    UnityEngine_Transform__TransformPoint_43d3c44
                              (fVar11,fVar16,param_3,*(long *)(param_5 + 0xc0),0);
                    if (lVar7 != 0) {
                      UnityEngine_Camera__WorldToScreenPoint_435c56c(lVar7,0);
                      puVar5 = PTR_DAT_04cb6a88;
                      if (*(int *)(*(long *)PTR_DAT_04cb6a88 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      if (cRam0000000004f9c54f == '\0') {
                        FUN_02132f7c(PTR_DAT_04cb6a88);
                        cRam0000000004f9c54f = '\x01';
                      }
                      lVar7 = *(long *)puVar5;
                      if (*(int *)(lVar7 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar7 = *(long *)puVar5;
                      }
                      lVar8 = *(long *)puVar3;
                      uVar9 = *(undefined8 *)(param_5 + 0x80);
                      iVar1 = *(int *)(lVar8 + 0xe4);
                      *(float *)(*(long *)(lVar7 + 0xb8) + 8) = fVar16;
                      if (iVar1 == 0) {
                        thunk_FUN_0218fdac(lVar8);
                      }
                      uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
                      if ((uVar6 & 1) != 0) {
                        return;
                      }
                      if (cRam0000000004f9b94d == '\0') {
                        FUN_02132f7c(PTR_DAT_04cad1b0);
                        cRam0000000004f9b94d = '\x01';
                      }
                      puVar4 = PTR_DAT_04cad1b0;
                      uVar9 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
                      uVar9 = 0;
                      if ((uVar6 & 1) != 0) {
                        if (cRam0000000004f9b94d == '\0') {
                          FUN_02132f7c(PTR_DAT_04cad1b0);
                          cRam0000000004f9b94d = '\x01';
                        }
                        if (**(long **)(*(long *)puVar4 + 0xb8) == 0) goto LAB_0240c3ec;
                        uVar9 = *(undefined8 *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x20);
                      }
                      uVar10 = *(undefined8 *)(param_5 + 0x58);
                      if (*(int *)(*(long *)PTR_DAT_04cabda8 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      uVar6 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle_467e798
                                        (uVar12,fVar15,uVar10,uVar9,&uStack_38,0);
                      if ((uVar6 & 1) == 0) {
                        return;
                      }
                      uVar9 = *(undefined8 *)(param_5 + 0x110);
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
                      if ((uVar6 & 1) == 0) {
                        if (*(long *)(param_5 + 0x58) == 0) goto LAB_0240c3ec;
                        lVar7 = UnityEngine_Component__GetComponentInParent_object__26f9d74
                                          (*(long *)(param_5 + 0x58),*(undefined8 *)PTR_DAT_04cabd80
                                          );
                        *(long *)(param_5 + 0x110) = lVar7;
                        thunk_FUN_02134474(param_5 + 0x110,lVar7);
                      }
                      else {
                        lVar7 = *(long *)(param_5 + 0x110);
                      }
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
                      fVar16 = 1.0;
                      if ((uVar6 & 1) != 0) {
                        if ((lVar7 == 0) ||
                           (lVar7 = UnityEngine_Canvas__get_rootCanvas_4680a14(lVar7,0), lVar7 == 0)
                           ) goto LAB_0240c3ec;
                        fVar16 = (float)UnityEngine_Canvas__get_scaleFactor_467f504(lVar7,0);
                      }
                      if (*(long *)(param_5 + 0x68) != 0) {
                        UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_5 + 0x68),0);
                        if (*(long *)(param_5 + 0x40) != 0) {
                          lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Cam_229b328
                                            (*(long *)(param_5 + 0x40),0);
                          if (*(long *)(param_5 + 0xc0) != 0) {
                            fVar14 = param_2;
                            UnityEngine_Transform__TransformPoint_43d3c44
                                      (fVar11 - fVar13 * 0.5,param_2,param_3,
                                       *(long *)(param_5 + 0xc0),0);
                            if (lVar7 != 0) {
                              uVar12 = UnityEngine_Camera__WorldToScreenPoint_435c56c(lVar7,0);
                              if (*(long *)(param_5 + 0x40) != 0) {
                                lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Cam_229b328
                                                  (*(long *)(param_5 + 0x40),0);
                                if (*(long *)(param_5 + 0xc0) != 0) {
                                  param_2 = param_2 + 0.0;
                                  UnityEngine_Transform__TransformPoint_43d3c44
                                            (fVar11 + fVar13 * 0.5,param_2,param_3 + 0.0,
                                             *(long *)(param_5 + 0xc0),0);
                                  if (lVar7 != 0) {
                                    fVar11 = (float)UnityEngine_Camera__WorldToScreenPoint_435c56c
                                                              (lVar7,0);
                                    fVar13 = (float)FUN_02410ce4(uVar12,fVar14,fVar11,param_2,0);
                                    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                                      thunk_FUN_0218fdac();
                                    }
                                    fVar14 = (float)FUN_02410d60(0);
                                    lVar7 = *(long *)(param_5 + 0x80);
                                    if (lVar7 != 0) {
                                      UnityEngine_RectTransform__set_anchorMax_43cf768
                                                (0x3f000000,0x3f000000,lVar7,0);
                                      UnityEngine_RectTransform__set_anchorMin_43cf5e4
                                                (0x3f000000,0x3f000000,lVar7,0);
                                      if (*(long *)(param_5 + 0x80) != 0) {
                                        UnityEngine_RectTransform__set_pivot_43cfbf4
                                                  (0x3f000000,0x3f000000,*(long *)(param_5 + 0x80),0
                                                  );
                                        uVar9 = *(undefined8 *)(param_5 + 0x118);
                                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                          thunk_FUN_0218fdac();
                                        }
                                        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0)
                                        ;
                                        if ((uVar6 & 1) == 0) {
                                          if (*(long *)(param_5 + 0x80) == 0) goto LAB_0240c3ec;
                                          lVar7 = UnityEngine_Component__GetComponent_object__26f97e8
                                                            (*(long *)(param_5 + 0x80),
                                                             *(undefined8 *)PTR_DAT_04cb8198);
                                          *(long *)(param_5 + 0x118) = lVar7;
                                          thunk_FUN_02134474(param_5 + 0x118,lVar7);
                                        }
                                        else {
                                          lVar7 = *(long *)(param_5 + 0x118);
                                        }
                                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                          thunk_FUN_0218fdac();
                                        }
                                        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0)
                                        ;
                                        if ((uVar6 & 1) != 0) {
                                          if (lVar7 == 0) goto LAB_0240c3ec;
                                          *(undefined4 *)(lVar7 + 0x20) = 0x3f4ccccd;
                                        }
                                        if (*(long *)(param_5 + 0x80) != 0) {
                                          UnityEngine_RectTransform__get_rect_43cf450
                                                    (*(long *)(param_5 + 0x80),0);
                                          if (*(long *)(param_5 + 0x58) != 0) {
                                            fVar17 = fVar11;
                                            UnityEngine_RectTransform__get_rect_43cf450
                                                      (*(long *)(param_5 + 0x58),0);
                                            if (*(long *)(param_5 + 0x80) != 0) {
                                              fVar18 = fVar17;
                                              UnityEngine_RectTransform__get_rect_43cf450
                                                        (*(long *)(param_5 + 0x80),0);
                                              fVar2 = _UNK_00e200f8;
                                              if (*(long *)(param_5 + 0x80) != 0) {
                                                fVar11 = (float)uStack_38 -
                                                         ((fVar13 / fVar16) * 0.5 + 16.0 +
                                                         fVar11 * 0.5 * _UNK_00e200f8);
                                                fVar13 = (fVar18 * 0.5 * _UNK_00e200f8 -
                                                         fVar17 * 0.5) + 12.0;
                                                fVar17 = -2.0;
                                                fVar18 = uStack_38._4_4_ + -2.0;
                                                if (fVar11 <= fVar13) {
                                                  fVar11 = fVar13;
                                                }
                                                fVar13 = uStack_38._4_4_;
                                                UnityEngine_RectTransform__get_rect_43cf450
                                                          (*(long *)(param_5 + 0x80),0);
                                                fVar13 = fVar13 * fVar2;
                                                uVar6 = 
                                                  Dino_BusSand_App_UI_HudPanel__CoinPillOverlaps_230d13c
                                                            (fVar11,fVar18,fVar17 * fVar2,fVar13,
                                                             param_5);
                                                if ((uVar6 & 1) != 0) {
                                                  if (*(long *)(param_5 + 0x80) == 0)
                                                  goto LAB_0240c3ec;
                                                  fVar11 = (float)uStack_38;
                                                  fVar17 = uStack_38._4_4_;
                                                  UnityEngine_RectTransform__get_rect_43cf450
                                                            (*(long *)(param_5 + 0x80),0);
                                                  fVar18 = (fVar17 - ((ABS(fVar15 - fVar14) +
                                                                      ABS(fVar15 - fVar14)) / fVar16
                                                                     ) * 0.5) + -22.0 +
                                                           fVar13 * 0.5 * _UNK_00e200a8;
                                                }
                                                if (*(long *)(param_5 + 0x80) != 0) {
                                                  UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                                                            (fVar11,fVar18,*(long *)(param_5 + 0x80)
                                                             ,0);
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
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_0240c3ec:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

