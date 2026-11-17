/* IL2CPP: Dino.BusSand.App.UI.PrivacyPanel$$OnOpen
void Dino_BusSand_App_UI_PrivacyPanel__OnOpen (Dino_BusSand_App_UI_PrivacyPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PrivacyPanel$$OnOpen
   void Dino_BusSand_App_UI_PrivacyPanel__OnOpen (Dino_BusSand_App_UI_PrivacyPanel_o* __this,
   Il2CppObject* param, const MethodInfo* method); */

long Dino_BusSand_App_UI_PrivacyPanel__OnOpen_22bc8d8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  undefined4 uVar18;
  float fVar19;
  
  puVar1 = PTR_DAT_04ca9d18;
  if ((bRam0000000004f9c313 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caf408);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cb6548);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb6550);
    FUN_02132f7c(PTR_DAT_04cb6558);
    FUN_02132f7c(PTR_DAT_04caf448);
    FUN_02132f7c(PTR_DAT_04cafe48);
    FUN_02132f7c(PTR_DAT_04cb6560);
    FUN_02132f7c(PTR_DAT_04cafe68);
    FUN_02132f7c(PTR_DAT_04cb6568);
    FUN_02132f7c(PTR_DAT_04caf208);
    FUN_02132f7c(PTR_DAT_04cb6570);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c313 = 1;
  }
  lVar14 = *(long *)puVar1;
  lVar13 = *(long *)(lVar14 + 0x38);
  if (lVar13 == 0) {
    FUN_0216b4cc(lVar14);
    lVar13 = *(long *)(lVar14 + 0x38);
  }
  lVar13 = *(long *)(lVar13 + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_0216b470();
  }
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cad330;
  lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_0216b470();
  }
  puVar8 = PTR_DAT_04cb6568;
  puVar7 = PTR_DAT_04cb6558;
  puVar6 = PTR_DAT_04cafe68;
  puVar5 = PTR_DAT_04cafe48;
  puVar4 = PTR_DAT_04caf448;
  puVar3 = PTR_DAT_04caf408;
  uVar15 = **(undefined8 **)(lVar13 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar15 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                     (*(undefined8 *)puVar8,*(undefined8 *)puVar7,uVar15,0);
  Dino_BusSand_App_UI_KitPopup__PanelAndRow_2280b64(0x44160000,0x418c0000,0);
  uVar18 = Dino_BusSand_App_UI_KitPopup__Height_2280b34(0);
  Dino_BusSand_App_UI_KitPopup__PanelAndRow_2280b64(0x44160000,0x418c0000,0);
  fVar19 = (float)Dino_BusSand_App_UI_KitPopup__Height_2280b34(0);
  lVar13 = Dino_BusSand_App_UI_KitPopup__Build_2280d18
                     (0x44750000,uVar18,(_UNK_00e20028 - fVar19) * 0.5,param_1,uVar15,0,0,0);
  uVar15 = Dino_BusSand_App_UI_KitPopup__TopPanel_2282af4(0x44160000,lVar13,*(undefined8 *)puVar4,0)
  ;
  lVar14 = Dino_BusSand_App_UI_UiKit__Img_228203c
                     (0x43aa0000,_UNK_00e209c4,0,0,0x3f800000,uVar15,*(undefined8 *)puVar6,
                      *(undefined8 *)puVar5,0,0);
  Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c(0x433e0000,0,lVar14,*(undefined8 *)puVar3);
  puVar2 = PTR_DAT_04cad4c0;
  if (lVar14 != 0) {
    uVar11 = UnityEngine_Component__get_transform_43bcd18(lVar14,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
              (_UNK_00e207dc,_UNK_00e200f8,_UNK_00e200b4,_UNK_00e20660,uVar11,0,0,0);
    lVar17 = *(long *)puVar1;
    lVar14 = *(long *)(lVar17 + 0x38);
    if (lVar14 == 0) {
      FUN_0216b4cc(lVar17);
      lVar14 = *(long *)(lVar17 + 0x38);
    }
    lVar14 = *(long *)(lVar14 + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_0216b470();
    }
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04cab550;
    lVar14 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_0216b470();
    }
    puVar4 = PTR_DAT_04cb6570;
    puVar3 = PTR_DAT_04cb6550;
    uVar11 = **(undefined8 **)(lVar14 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar11 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar3,uVar11,0);
    lVar14 = Dino_BusSand_App_UI_KitParts__BrownText_23101ac
                       (0x42480000,0x443e0000,0x435c0000,_UNK_00e1fde4,uVar15,*(undefined8 *)puVar4,
                        uVar11,0);
    if (lVar14 != 0) {
      TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar14,1,0);
      TMPro_TMP_Text__set_enableAutoSizing_42cc454(lVar14,1,0);
      TMPro_TMP_Text__set_fontSizeMin_42cc4a4(0x42080000,lVar14,0);
      TMPro_TMP_Text__set_fontSizeMax_42cc4f0(0x42480000,lVar14,0);
      if (lVar13 != 0) {
        uVar15 = *(undefined8 *)(lVar13 + 0x28);
        uVar18 = Dino_BusSand_App_UI_KitPopup__RowY_2280b50(0x44160000,0x418c0000,0);
        lVar14 = *(long *)puVar1;
        lVar13 = *(long *)(lVar14 + 0x38);
        if (lVar13 == 0) {
          FUN_0216b4cc(lVar14);
          lVar13 = *(long *)(lVar14 + 0x38);
        }
        lVar13 = *(long *)(lVar13 + 0x10);
        if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_0216b470();
        }
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar5 = PTR_DAT_04cb6560;
        puVar4 = PTR_DAT_04cb6548;
        puVar3 = PTR_DAT_04caf208;
        puVar2 = PTR_DAT_04cad948;
        puVar1 = PTR_DAT_04caa458;
        lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
        if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_0216b470();
        }
        uVar11 = Dino_BusSand_App_Lang__Get_215f9c0
                           (*(undefined8 *)puVar5,**(undefined8 **)(lVar13 + 0xb8),0);
        Dino_BusSand_App_UI_KitParts__Button_2306a4c
                  (_UNK_00e20a78,uVar18,0,0x42940000,0x436c0000,uVar15,*(undefined8 *)puVar3,0,
                   uVar11,0,0);
        uVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
        System_Action___ctor_47b5ed0(uVar15,param_1,*(undefined8 *)puVar4,0);
        puVar1 = PTR_DAT_04ca9ae8;
        uVar11 = *(undefined8 *)puVar3;
        uVar12 = *(undefined8 *)puVar2;
        if ((bRam0000000004f9bc9a & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9af8);
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          FUN_02132f7c(PTR_DAT_04cb1bc8);
          FUN_02132f7c(PTR_DAT_04cb1bd0);
          bRam0000000004f9bc9a = 1;
        }
        lVar13 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,uVar11);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
        puVar1 = PTR_DAT_04ca9af8;
        if ((uVar10 & 1) != 0) {
          uVar15 = System_String__Concat_46d30e8
                             (*(undefined8 *)PTR_DAT_04cb1bd0,*(undefined8 *)(param_1 + 0x20),
                              *(undefined8 *)PTR_DAT_04cb1bc8,uVar11,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          UnityEngine_Debug__LogWarning_4357a30(uVar15,0);
          return 0;
        }
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar13 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0);
        puVar1 = PTR_DAT_04cb1660;
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
        lVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
        System_Object___ctor_4870e5c(lVar14,0);
        if (lVar14 != 0) {
          plVar16 = (long *)(lVar14 + 0x18);
          *plVar16 = lVar13;
          thunk_FUN_02134474(plVar16,lVar13);
          *(undefined8 *)(lVar14 + 0x20) = uVar15;
          thunk_FUN_02134474((undefined8 *)(lVar14 + 0x20),uVar15);
          puVar1 = PTR_DAT_04ca9ae8;
          if (*plVar16 != 0) {
            lVar13 = UnityEngine_GameObject__GetComponent_object__275a5dc
                               (*plVar16,*(undefined8 *)PTR_DAT_04cb0eb8);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
            if ((uVar10 & 1) == 0) {
              if (lVar13 == 0) goto LAB_022f5018;
            }
            else {
              if (*plVar16 == 0) goto LAB_022f5018;
              uVar15 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                 (*plVar16,*(undefined8 *)PTR_DAT_04cb1678);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar1);
              }
              uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar15,0,0);
              if ((uVar10 & 1) != 0) {
                if ((*plVar16 == 0) ||
                   (plVar9 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                               (*plVar16,*(undefined8 *)PTR_DAT_04cacf98),
                   plVar9 == (long *)0x0)) goto LAB_022f5018;
                (**(code **)(*plVar9 + 0x2a8))
                          (0x3f800000,0x3f800000,0x3f800000,0,plVar9,
                           *(undefined8 *)(*plVar9 + 0x2b0));
              }
              if ((*plVar16 == 0) ||
                 (lVar13 = UnityEngine_GameObject__AddComponent_object__275a54c
                                     (*plVar16,*(undefined8 *)PTR_DAT_04cb1668), lVar13 == 0))
              goto LAB_022f5018;
              UnityEngine_UI_Selectable__set_transition_4693ba8(lVar13,0,0);
            }
            puVar3 = PTR_DAT_04cb1688;
            puVar2 = PTR_DAT_04caa8b8;
            if (*(long *)(lVar13 + 0x100) != 0) {
              UnityEngine_Events_UnityEventBase__RemoveAllListeners_43d861c
                        (*(long *)(lVar13 + 0x100),0);
              uVar15 = *(undefined8 *)puVar2;
              lVar17 = *(long *)(lVar13 + 0x100);
              *(undefined4 *)(lVar14 + 0x10) = 0xbf800000;
              uVar15 = thunk_FUN_0216e89c(uVar15);
              UnityEngine_Events_UnityAction___ctor_43d86d4(uVar15,lVar14,*(undefined8 *)puVar3,0);
              if (lVar17 != 0) {
                UnityEngine_Events_UnityEvent__AddListener_43d87a4(lVar17,uVar15,0);
                uVar15 = *(undefined8 *)(lVar13 + 0xe0);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
                if ((uVar10 & 1) == 0) {
                  if (*plVar16 == 0) goto LAB_022f5018;
                  plVar9 = (long *)UnityEngine_GameObject__GetComponent_object__275a5dc
                                             (*plVar16,*(undefined8 *)PTR_DAT_04cb1678);
                }
                else {
                  plVar9 = *(long **)(lVar13 + 0xe0);
                }
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar10 = UnityEngine_Object__op_Inequality_43c8dec(plVar9,0,0);
                if ((uVar10 & 1) != 0) {
                  if (plVar9 == (long *)0x0) goto LAB_022f5018;
                  (**(code **)(*plVar9 + 0x2c8))(plVar9,1,*(undefined8 *)(*plVar9 + 0x2d0));
                }
                if (*plVar16 != 0) {
                  lVar14 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                     (*plVar16,*(undefined8 *)PTR_DAT_04cb1680);
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar1);
                  }
                  uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar14,0,0);
                  if ((uVar10 & 1) != 0) {
                    if (*plVar16 == 0) goto LAB_022f5018;
                    lVar14 = UnityEngine_GameObject__AddComponent_object__275a54c
                                       (*plVar16,*(undefined8 *)PTR_DAT_04cb1670);
                  }
                  if (lVar14 != 0) {
                    *(undefined8 *)(lVar14 + 0x20) = uVar12;
                    thunk_FUN_02134474((undefined8 *)(lVar14 + 0x20),uVar12);
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
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

