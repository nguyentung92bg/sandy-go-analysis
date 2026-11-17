/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel$$BuildStuckHelp
void Dino_BusSand_App_UI_LevelEnterPanel__BuildStuckHelp (Dino_BusSand_App_UI_LevelEnterPanel_o* __this, Dino_BusSand_App_UI_KitWindow_o* w, float rowY, UnityEngine_RectTransform_o* sure, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel$$BuildStuckHelp
   void Dino_BusSand_App_UI_LevelEnterPanel__BuildStuckHelp (Dino_BusSand_App_UI_LevelEnterPanel_o*
   __this, Dino_BusSand_App_UI_KitWindow_o* w, float rowY, UnityEngine_RectTransform_o* sure, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_LevelEnterPanel__BuildStuckHelp_2319588
               (undefined4 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  
  puVar1 = PTR_DAT_04cb85e0;
  if ((bRam0000000004f9c57a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cb85e8);
    FUN_02132f7c(PTR_DAT_04cb85e0);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb85f0);
    FUN_02132f7c(PTR_DAT_04cad9b0);
    FUN_02132f7c(PTR_DAT_04cb1e60);
    FUN_02132f7c(PTR_DAT_04caffa8);
    FUN_02132f7c(PTR_DAT_04caced0);
    FUN_02132f7c(PTR_DAT_04cb85f8);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c57a = 1;
  }
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar8,0);
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x10) = param_2;
    thunk_FUN_02134474((undefined8 *)(lVar8 + 0x10),param_2);
    *(undefined8 *)(lVar8 + 0x20) = param_4;
    thunk_FUN_02134474((undefined8 *)(lVar8 + 0x20),param_4);
    if (param_3 != 0) {
      uVar10 = *(undefined8 *)(param_3 + 0x28);
      lVar12 = *(long *)PTR_DAT_04ca9d18;
      lVar9 = *(long *)(lVar12 + 0x38);
      if (lVar9 == 0) {
        FUN_0216b4cc(lVar12);
        lVar9 = *(long *)(lVar12 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0216b470();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar1 = PTR_DAT_04cad330;
      lVar9 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0216b470();
      }
      puVar6 = PTR_DAT_04cb85f8;
      puVar5 = PTR_DAT_04cb85f0;
      puVar4 = PTR_DAT_04caffa8;
      puVar3 = PTR_DAT_04cad9b0;
      puVar2 = PTR_DAT_04caced0;
      uVar13 = **(undefined8 **)(lVar9 + 0xb8);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar13 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                         (*(undefined8 *)puVar3,*(undefined8 *)puVar2,uVar13,0);
      lVar9 = Dino_BusSand_App_UI_KitParts__Button_2306a4c
                        (_UNK_00e204dc,param_1,0x433f0000,0x42940000,0x436c0000,uVar10,
                         *(undefined8 *)puVar6,2,uVar13,*(undefined8 *)puVar4,0);
      plVar11 = (long *)(lVar8 + 0x28);
      *plVar11 = lVar9;
      thunk_FUN_02134474(plVar11,lVar9);
      lVar9 = Dino_BusSand_App_UI_UiKit__Img_228203c
                        (0x42ec0000,0x42ec0000,0,0,0x3f800000,*plVar11,*(undefined8 *)puVar5,0,0,0);
      plVar14 = (long *)(lVar8 + 0x18);
      *plVar14 = lVar9;
      thunk_FUN_02134474(plVar14,lVar9);
      lVar9 = *plVar14;
      uVar10 = Dino_BusSand_App_UI_KitParts__ItemIcon_23100d0(0x2715,0);
      if (lVar9 != 0) {
        UnityEngine_UI_Image__set_sprite_44a7258(lVar9,uVar10,0);
        if (*plVar14 != 0) {
          UnityEngine_UI_Image__set_preserveAspect_44afae0(*plVar14,1,0);
          if (*plVar14 != 0) {
            lVar9 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(*plVar14,0);
            if (((*plVar14 != 0) &&
                (lVar12 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(*plVar14,0), lVar12 != 0
                )) && (UnityEngine_RectTransform__set_anchorMax_43cf768
                                 (0x3f800000,0x3f800000,lVar12,0), lVar9 != 0)) {
              UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f800000,0x3f800000,lVar9,0);
              if ((*plVar14 != 0) &&
                 (lVar9 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(*plVar14,0), lVar9 != 0)
                 ) {
                UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                          (0xc2080000,0xc1b00000,lVar9,0);
                puVar2 = PTR_DAT_04cad4c0;
                puVar1 = PTR_DAT_04cac498;
                if (*plVar14 != 0) {
                  uVar10 = UnityEngine_Component__get_transform_43bcd18(*plVar14,0);
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar2);
                  }
                  puVar2 = PTR_DAT_04cb1e60;
                  Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                            (_UNK_00e2094c,_UNK_00e207cc,_UNK_00e206e4,_UNK_00e20184,uVar10,0,0,0);
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  Dino_BusSand_App_Meta_GameTracking__AdOffer_22159b0(*(undefined8 *)puVar2,0);
                  puVar3 = PTR_DAT_04cb85e8;
                  puVar2 = PTR_DAT_04cad948;
                  puVar1 = PTR_DAT_04caa458;
                  if (*plVar11 != 0) {
                    lVar9 = UnityEngine_Component__get_gameObject_43bcde8(*plVar11,0);
                    uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    System_Action___ctor_47b5ed0(uVar10,lVar8,*(undefined8 *)puVar3,0);
                    puVar1 = PTR_DAT_04cb1660;
                    uVar13 = *(undefined8 *)puVar2;
                    if ((bRam0000000004f9bc9d & 1) == 0) {
                      FUN_02132f7c(PTR_DAT_04cb1668);
                      FUN_02132f7c(PTR_DAT_04cacf98);
                      FUN_02132f7c(PTR_DAT_04cb1670);
                      FUN_02132f7c(PTR_DAT_04cb0eb8);
                      FUN_02132f7c(PTR_DAT_04cb1678);
                      FUN_02132f7c(PTR_DAT_04cb1680);
                      FUN_02132f7c(PTR_DAT_04ca9ae8);
                      FUN_02132f7c(PTR_DAT_04cb1688);
                      FUN_02132f7c(PTR_DAT_04cb1660);
                      FUN_02132f7c(PTR_DAT_04caa8b8);
                      bRam0000000004f9bc9d = 1;
                    }
                    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    System_Object___ctor_4870e5c(lVar8,0);
                    if (lVar8 != 0) {
                      plVar11 = (long *)(lVar8 + 0x18);
                      *plVar11 = lVar9;
                      thunk_FUN_02134474(plVar11,lVar9);
                      *(undefined8 *)(lVar8 + 0x20) = uVar10;
                      thunk_FUN_02134474((undefined8 *)(lVar8 + 0x20),uVar10);
                      puVar1 = PTR_DAT_04ca9ae8;
                      if (*plVar11 != 0) {
                        lVar9 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                          (*plVar11,*(undefined8 *)PTR_DAT_04cb0eb8);
                        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                          thunk_FUN_0218fdac(*(long *)puVar1);
                        }
                        uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
                        if ((uVar7 & 1) == 0) {
                          if (lVar9 == 0) goto LAB_022f5018;
                        }
                        else {
                          if (*plVar11 == 0) goto LAB_022f5018;
                          uVar10 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                             (*plVar11,*(undefined8 *)PTR_DAT_04cb1678);
                          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                            thunk_FUN_0218fdac(*(long *)puVar1);
                          }
                          uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
                          if ((uVar7 & 1) != 0) {
                            if ((*plVar11 == 0) ||
                               (plVar14 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                                            (*plVar11,*(undefined8 *)
                                                                       PTR_DAT_04cacf98),
                               plVar14 == (long *)0x0)) goto LAB_022f5018;
                            (**(code **)(*plVar14 + 0x2a8))
                                      (0x3f800000,0x3f800000,0x3f800000,0,plVar14,
                                       *(undefined8 *)(*plVar14 + 0x2b0));
                          }
                          if ((*plVar11 == 0) ||
                             (lVar9 = UnityEngine_GameObject__AddComponent_object__275a54c
                                                (*plVar11,*(undefined8 *)PTR_DAT_04cb1668),
                             lVar9 == 0)) goto LAB_022f5018;
                          UnityEngine_UI_Selectable__set_transition_4693ba8(lVar9,0,0);
                        }
                        puVar3 = PTR_DAT_04cb1688;
                        puVar2 = PTR_DAT_04caa8b8;
                        if (*(long *)(lVar9 + 0x100) != 0) {
                          UnityEngine_Events_UnityEventBase__RemoveAllListeners_43d861c
                                    (*(long *)(lVar9 + 0x100),0);
                          uVar10 = *(undefined8 *)puVar2;
                          lVar12 = *(long *)(lVar9 + 0x100);
                          *(undefined4 *)(lVar8 + 0x10) = 0xbf800000;
                          uVar10 = thunk_FUN_0216e89c(uVar10);
                          UnityEngine_Events_UnityAction___ctor_43d86d4
                                    (uVar10,lVar8,*(undefined8 *)puVar3,0);
                          if (lVar12 != 0) {
                            UnityEngine_Events_UnityEvent__AddListener_43d87a4(lVar12,uVar10,0);
                            uVar10 = *(undefined8 *)(lVar9 + 0xe0);
                            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
                            if ((uVar7 & 1) == 0) {
                              if (*plVar11 == 0) goto LAB_022f5018;
                              plVar14 = (long *)UnityEngine_GameObject__GetComponent_object__275a5dc
                                                          (*plVar11,*(undefined8 *)PTR_DAT_04cb1678)
                              ;
                            }
                            else {
                              plVar14 = *(long **)(lVar9 + 0xe0);
                            }
                            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            uVar7 = UnityEngine_Object__op_Inequality_43c8dec(plVar14,0,0);
                            if ((uVar7 & 1) != 0) {
                              if (plVar14 == (long *)0x0) goto LAB_022f5018;
                              (**(code **)(*plVar14 + 0x2c8))
                                        (plVar14,1,*(undefined8 *)(*plVar14 + 0x2d0));
                            }
                            if (*plVar11 != 0) {
                              lVar8 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                                (*plVar11,*(undefined8 *)PTR_DAT_04cb1680);
                              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                thunk_FUN_0218fdac(*(long *)puVar1);
                              }
                              uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
                              if ((uVar7 & 1) != 0) {
                                if (*plVar11 == 0) goto LAB_022f5018;
                                lVar8 = UnityEngine_GameObject__AddComponent_object__275a54c
                                                  (*plVar11,*(undefined8 *)PTR_DAT_04cb1670);
                              }
                              if (lVar8 != 0) {
                                *(undefined8 *)(lVar8 + 0x20) = uVar13;
                                thunk_FUN_02134474((undefined8 *)(lVar8 + 0x20),uVar13);
                                return lVar9;
                              }
                            }
                          }
                        }
                      }
                    }
LAB_022f5018:
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
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

