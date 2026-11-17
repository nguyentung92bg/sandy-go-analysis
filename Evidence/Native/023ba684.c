/* IL2CPP: Dino.BusSand.App.UI.StoreTipsPanel$$OnOpen
void Dino_BusSand_App_UI_StoreTipsPanel__OnOpen (Dino_BusSand_App_UI_StoreTipsPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StoreTipsPanel$$OnOpen
   void Dino_BusSand_App_UI_StoreTipsPanel__OnOpen (Dino_BusSand_App_UI_StoreTipsPanel_o* __this,
   Il2CppObject* param, const MethodInfo* method); */

long Dino_BusSand_App_UI_StoreTipsPanel__OnOpen_22ba684(long param_1,long *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  puVar4 = PTR_DAT_04cb6278;
  if ((bRam0000000004f9c2fe & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caf408);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cb6278);
    FUN_02132f7c(PTR_DAT_04cb6440);
    FUN_02132f7c(PTR_DAT_04cb6448);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cadc20);
    FUN_02132f7c(PTR_DAT_04cb6450);
    FUN_02132f7c(PTR_DAT_04caf448);
    FUN_02132f7c(PTR_DAT_04cafe48);
    FUN_02132f7c(PTR_DAT_04cb6458);
    FUN_02132f7c(PTR_DAT_04cae5d0);
    FUN_02132f7c(PTR_DAT_04cb6460);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04caf208);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04caec20);
    bRam0000000004f9c2fe = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_023ba7e0:
    param_2 = (long *)thunk_FUN_0216e89c();
    Dino_BusSand_App_UI_StoreTipsPanel_Request___ctor_22bb108(param_2,0);
  }
  else {
    bVar3 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar4))
    goto LAB_023ba7e0;
  }
  if (param_1 != 0) {
    plVar14 = (long *)(param_1 + 0x38);
    *plVar14 = (long)param_2;
    thunk_FUN_02134474(plVar14,param_2);
    puVar4 = PTR_DAT_04cad330;
    lVar13 = *plVar14;
    if (lVar13 != 0) {
      uVar2 = *(uint *)(lVar13 + 0x10);
      uVar20 = 0x43960000;
      if (uVar2 != 0) {
        uVar20 = 0x44070000;
      }
      uVar11 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar13 + 0x18),0);
      if ((uVar11 & 1) == 0) {
        if (*plVar14 == 0) goto LAB_023bad00;
        uVar16 = *(undefined8 *)(*plVar14 + 0x18);
      }
      else {
        lVar15 = *(long *)PTR_DAT_04ca9d18;
        lVar13 = *(long *)(lVar15 + 0x38);
        if (lVar13 == 0) {
          FUN_0216b4cc(lVar15);
          lVar13 = *(long *)(lVar15 + 0x38);
        }
        lVar13 = *(long *)(lVar13 + 0x10);
        if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_0216b470();
        }
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar13 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
        if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_0216b470();
        }
        lVar15 = *(long *)puVar4;
        uVar16 = **(undefined8 **)(lVar13 + 0xb8);
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar15);
        }
        uVar16 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                           (*(undefined8 *)PTR_DAT_04cb6460,*(undefined8 *)PTR_DAT_04cb6450,uVar16,0
                           );
      }
      Dino_BusSand_App_UI_KitPopup__PanelAndRow_2280b64(uVar20,0x418c0000,0);
      uVar19 = Dino_BusSand_App_UI_KitPopup__Height_2280b34(0);
      lVar13 = Dino_BusSand_App_UI_KitPopup__Build_2280d18
                         (0x44750000,uVar19,_UNK_00e204d4,param_1,uVar16,0,1,0);
      if (uVar2 == 4) {
        if ((lVar13 == 0) || (lVar15 = *(long *)(lVar13 + 0x48), lVar15 == 0)) goto LAB_023bad00;
      }
      else {
        if ((lVar13 == 0) || (lVar15 = *(long *)(lVar13 + 0x48), lVar15 == 0)) goto LAB_023bad00;
        *(undefined4 *)(lVar15 + 0x2c) = 1;
      }
      lVar12 = *(long *)(lVar13 + 0x38);
      *(bool *)(lVar15 + 0x31) = (uVar2 & 0xfffffffe) == 2;
      puVar6 = PTR_DAT_04caf448;
      puVar5 = PTR_DAT_04cad460;
      if (lVar12 != 0) {
        UnityEngine_Object__set_name_43c72ec(lVar12,*(undefined8 *)PTR_DAT_04cad460,0);
        uVar16 = Dino_BusSand_App_UI_KitPopup__TopPanel_2282af4
                           (uVar20,lVar13,*(undefined8 *)puVar6,0);
        puVar6 = PTR_DAT_04caf408;
        if (uVar2 == 0) {
          lVar15 = *plVar14;
          if (lVar15 == 0) goto LAB_023bad00;
          uVar19 = 0x43160000;
        }
        else {
          puVar1 = (undefined8 *)PTR_DAT_04cafe48;
          if (uVar2 != 4) {
            puVar1 = (undefined8 *)PTR_DAT_04cb6458;
          }
          uVar17 = *(undefined8 *)PTR_DAT_04cae5d0;
          uVar18 = *puVar1;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar15 = Dino_BusSand_App_UI_UiKit__Img_228203c
                             (0x43b40000,0x43a50000,0,0,0x3f800000,uVar16,uVar17,uVar18,0,0);
          Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
                    (0x43480000,0,lVar15,*(undefined8 *)puVar6);
          puVar4 = PTR_DAT_04cad4c0;
          if (lVar15 == 0) goto LAB_023bad00;
          uVar17 = UnityEngine_Component__get_transform_43bcd18(lVar15,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar4);
          }
          Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                    (_UNK_00e20390,_UNK_00e200f8,_UNK_00e200b4,_UNK_00e20660,uVar17,0,0,0);
          lVar15 = *plVar14;
          uVar19 = _UNK_00e204dc;
          if (lVar15 == 0) goto LAB_023bad00;
        }
        lVar15 = Dino_BusSand_App_UI_KitParts__BrownText_23101ac
                           (0x42600000,0x44390000,0x43160000,uVar19,uVar16,
                            *(undefined8 *)PTR_DAT_04cadc20,*(undefined8 *)(lVar15 + 0x20),0);
        if (lVar15 != 0) {
          TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar15,1,0);
          TMPro_TMP_Text__set_fontSizeMin_42cc4a4(0x42100000,lVar15,0);
          TMPro_TMP_Text__set_enableAutoSizing_42cc454(lVar15,1,0);
          if (*plVar14 != 0) {
            uVar11 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(*plVar14 + 0x28),0);
            if ((uVar11 & 1) == 0) {
              if (*plVar14 == 0) goto LAB_023bad00;
              uVar16 = *(undefined8 *)(*plVar14 + 0x28);
            }
            else {
              lVar12 = *(long *)PTR_DAT_04ca9d18;
              lVar15 = *(long *)(lVar12 + 0x38);
              if (lVar15 == 0) {
                FUN_0216b4cc(lVar12);
                lVar15 = *(long *)(lVar12 + 0x38);
              }
              lVar15 = *(long *)(lVar15 + 0x10);
              if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
                lVar15 = FUN_0216b470();
              }
              if (*(int *)(lVar15 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              lVar15 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
              if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
                lVar15 = FUN_0216b470();
              }
              uVar16 = **(undefined8 **)(lVar15 + 0xb8);
              if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
              }
              uVar16 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04caec20,uVar16,0);
            }
            puVar9 = PTR_DAT_04cb6448;
            puVar8 = PTR_DAT_04cb6440;
            puVar7 = PTR_DAT_04caf208;
            puVar6 = PTR_DAT_04cad948;
            puVar4 = PTR_DAT_04caa458;
            uVar17 = *(undefined8 *)(lVar13 + 0x28);
            uVar20 = Dino_BusSand_App_UI_KitPopup__RowY_2280b50(uVar20,0x418c0000,0);
            Dino_BusSand_App_UI_KitParts__Button_2306a4c
                      (_UNK_00e20a78,uVar20,0,0x42940000,0x436c0000,uVar17,*(undefined8 *)puVar7,0,
                       uVar16,0,0);
            uVar16 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
            System_Action___ctor_47b5ed0(uVar16,param_1,*(undefined8 *)puVar8,0);
            Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                      (param_1,*(undefined8 *)puVar7,uVar16,1,*(undefined8 *)puVar6,0);
            uVar16 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
            System_Action___ctor_47b5ed0(uVar16,param_1,*(undefined8 *)puVar9,0);
            puVar4 = PTR_DAT_04ca9ae8;
            uVar17 = *(undefined8 *)puVar5;
            uVar18 = *(undefined8 *)puVar6;
            if ((bRam0000000004f9bc9a & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04ca9af8);
              FUN_02132f7c(PTR_DAT_04ca9ae8);
              FUN_02132f7c(PTR_DAT_04cb1bc8);
              FUN_02132f7c(PTR_DAT_04cb1bd0);
              bRam0000000004f9bc9a = 1;
            }
            lVar13 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,uVar17);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
            puVar4 = PTR_DAT_04ca9af8;
            if ((uVar11 & 1) != 0) {
              uVar16 = System_String__Concat_46d30e8
                                 (*(undefined8 *)PTR_DAT_04cb1bd0,*(undefined8 *)(param_1 + 0x20),
                                  *(undefined8 *)PTR_DAT_04cb1bc8,uVar17,0);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar4);
              }
              UnityEngine_Debug__LogWarning_4357a30(uVar16,0);
              return 0;
            }
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar13 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0);
            puVar4 = PTR_DAT_04cb1660;
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
            lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
            System_Object___ctor_4870e5c(lVar15,0);
            if (lVar15 != 0) {
              plVar14 = (long *)(lVar15 + 0x18);
              *plVar14 = lVar13;
              thunk_FUN_02134474(plVar14,lVar13);
              *(undefined8 *)(lVar15 + 0x20) = uVar16;
              thunk_FUN_02134474((undefined8 *)(lVar15 + 0x20),uVar16);
              puVar4 = PTR_DAT_04ca9ae8;
              if (*plVar14 != 0) {
                lVar13 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                   (*plVar14,*(undefined8 *)PTR_DAT_04cb0eb8);
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar4);
                }
                uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
                if ((uVar11 & 1) == 0) {
                  if (lVar13 == 0) goto LAB_022f5018;
                }
                else {
                  if (*plVar14 == 0) goto LAB_022f5018;
                  uVar16 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                     (*plVar14,*(undefined8 *)PTR_DAT_04cb1678);
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar4);
                  }
                  uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar16,0,0);
                  if ((uVar11 & 1) != 0) {
                    if ((*plVar14 == 0) ||
                       (plVar10 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                                    (*plVar14,*(undefined8 *)PTR_DAT_04cacf98),
                       plVar10 == (long *)0x0)) goto LAB_022f5018;
                    (**(code **)(*plVar10 + 0x2a8))
                              (0x3f800000,0x3f800000,0x3f800000,0,plVar10,
                               *(undefined8 *)(*plVar10 + 0x2b0));
                  }
                  if ((*plVar14 == 0) ||
                     (lVar13 = UnityEngine_GameObject__AddComponent_object__275a54c
                                         (*plVar14,*(undefined8 *)PTR_DAT_04cb1668), lVar13 == 0))
                  goto LAB_022f5018;
                  UnityEngine_UI_Selectable__set_transition_4693ba8(lVar13,0,0);
                }
                puVar6 = PTR_DAT_04cb1688;
                puVar5 = PTR_DAT_04caa8b8;
                if (*(long *)(lVar13 + 0x100) != 0) {
                  UnityEngine_Events_UnityEventBase__RemoveAllListeners_43d861c
                            (*(long *)(lVar13 + 0x100),0);
                  uVar16 = *(undefined8 *)puVar5;
                  lVar12 = *(long *)(lVar13 + 0x100);
                  *(undefined4 *)(lVar15 + 0x10) = 0xbf800000;
                  uVar16 = thunk_FUN_0216e89c(uVar16);
                  UnityEngine_Events_UnityAction___ctor_43d86d4
                            (uVar16,lVar15,*(undefined8 *)puVar6,0);
                  if (lVar12 != 0) {
                    UnityEngine_Events_UnityEvent__AddListener_43d87a4(lVar12,uVar16,0);
                    uVar16 = *(undefined8 *)(lVar13 + 0xe0);
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
                    if ((uVar11 & 1) == 0) {
                      if (*plVar14 == 0) goto LAB_022f5018;
                      plVar10 = (long *)UnityEngine_GameObject__GetComponent_object__275a5dc
                                                  (*plVar14,*(undefined8 *)PTR_DAT_04cb1678);
                    }
                    else {
                      plVar10 = *(long **)(lVar13 + 0xe0);
                    }
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(plVar10,0,0);
                    if ((uVar11 & 1) != 0) {
                      if (plVar10 == (long *)0x0) goto LAB_022f5018;
                      (**(code **)(*plVar10 + 0x2c8))(plVar10,1,*(undefined8 *)(*plVar10 + 0x2d0));
                    }
                    if (*plVar14 != 0) {
                      lVar15 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                         (*plVar14,*(undefined8 *)PTR_DAT_04cb1680);
                      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                        thunk_FUN_0218fdac(*(long *)puVar4);
                      }
                      uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar15,0,0);
                      if ((uVar11 & 1) != 0) {
                        if (*plVar14 == 0) goto LAB_022f5018;
                        lVar15 = UnityEngine_GameObject__AddComponent_object__275a54c
                                           (*plVar14,*(undefined8 *)PTR_DAT_04cb1670);
                      }
                      if (lVar15 != 0) {
                        *(undefined8 *)(lVar15 + 0x20) = uVar18;
                        thunk_FUN_02134474((undefined8 *)(lVar15 + 0x20),uVar18);
                        return lVar13;
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
LAB_023bad00:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

