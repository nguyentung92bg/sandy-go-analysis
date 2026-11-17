/* IL2CPP: Dino.BusSand.App.UI.CommonNamePlateView$$OnAppearanceChanged
void Dino_BusSand_App_UI_CommonNamePlateView__OnAppearanceChanged (Dino_BusSand_App_UI_CommonNamePlateView_o* __this, int32_t a, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommonNamePlateView$$OnAppearanceChanged
   void Dino_BusSand_App_UI_CommonNamePlateView__OnAppearanceChanged
   (Dino_BusSand_App_UI_CommonNamePlateView_o* __this, int32_t a, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommonNamePlateView__OnAppearanceChanged_22d05c8(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c3a6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae570);
    bRam0000000004f9c3a6 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (param_2 != 2) {
    if (param_2 != 3) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04cae570 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar6 = Dino_BusSand_App_Meta_PlayerIdentity__get_PlayerName_225b990(0);
    if ((bRam0000000004f9c3a7 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9c30);
      bRam0000000004f9c3a7 = 1;
    }
    Dino_BusSand_App_UI_CommonNamePlateView__Setup_22cfd58(param_1);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar7 = *(long *)PTR_DAT_04ca9c30;
    if (lVar6 != 0) {
      lVar7 = lVar6;
    }
    plVar8 = (long *)(param_1 + 0x50);
    *plVar8 = lVar7;
    thunk_FUN_02134474(plVar8);
    Dino_BusSand_App_UI_CommonNamePlateView__SetTexts_22d0430
              (*(undefined8 *)(param_1 + 0x28),*plVar8);
    puVar2 = PTR_DAT_04ca9ae8;
    lVar6 = *(long *)(param_1 + 0x30);
    lVar7 = *plVar8;
    if ((bRam0000000004f9c3ac & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cada48);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      bRam0000000004f9c3ac = 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
    if ((uVar5 & 1) == 0) {
      if ((lVar6 == 0) ||
         (lVar6 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                            (lVar6,1,*(undefined8 *)PTR_DAT_04cada48), lVar6 == 0)) {
LAB_023d052c:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar1) {
        lVar11 = 0;
        do {
          if (uVar1 <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar8 = *(long **)(lVar6 + 0x20 + lVar11 * 8);
          if (plVar8 == (long *)0x0) goto LAB_023d052c;
          TMPro_TMP_Text__set_richText_42ccfa8(plVar8,0,0);
          (**(code **)(*plVar8 + 0x518))(plVar8,lVar7,*(undefined8 *)(*plVar8 + 0x520));
          uVar1 = *(uint *)(lVar6 + 0x18);
          lVar11 = lVar11 + 1;
        } while ((int)lVar11 < (int)uVar1);
      }
    }
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04cae570 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar3 = Dino_BusSand_App_Meta_PlayerIdentity__get_NamePlate_226d250(0);
  if ((bRam0000000004f9c3a8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab478);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cab188);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb4768);
    FUN_02132f7c(PTR_DAT_04cb6c40);
    bRam0000000004f9c3a8 = 1;
  }
  Dino_BusSand_App_UI_CommonNamePlateView__Setup_22cfd58(param_1);
  puVar2 = PTR_DAT_04cae570;
  if (*(int *)(param_1 + 0x4c) == iVar3) {
    return;
  }
  if (iVar3 == 0x61a81) {
    Dino_BusSand_App_UI_CommonNamePlateView__Clear_22d0744(param_1);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_023d042c;
      UnityEngine_GameObject__SetActive_43c1408(*(long *)(param_1 + 0x38),1,0);
    }
    iVar3 = 0x61a81;
LAB_023d01b0:
    *(int *)(param_1 + 0x4c) = iVar3;
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04cae570 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_Meta_PlayerIdentity__IsDecorate_226cd0c
                    (iVar3,*(undefined8 *)PTR_DAT_04cb4768,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = Dino_BusSand_App_Meta_PlayerIdentity__DecoratePath_226db24(iVar3,0);
  if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab490);
  }
  lVar6 = Dino_BusSand_App_UiAssets__Prefab_21513b8(uVar9,0);
  puVar2 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  Dino_BusSand_App_UI_CommonNamePlateView__Clear_22d0744(param_1);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar7 = UnityEngine_Object__Instantiate_object__28052a0
                    (lVar6,uVar9,*(undefined8 *)PTR_DAT_04cab478);
  plVar8 = (long *)(param_1 + 0x40);
  *plVar8 = lVar7;
  thunk_FUN_02134474(plVar8,lVar7);
  if (lVar6 != 0) {
    lVar7 = *plVar8;
    uVar9 = UnityEngine_Object__get_name_43c71a4(lVar6,0);
    if (lVar7 != 0) {
      UnityEngine_Object__set_name_43c72ec(lVar7,uVar9,0);
      if (*plVar8 != 0) {
        uVar9 = UnityEngine_GameObject__get_transform_43c1048(*plVar8,0);
        uVar9 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                          (uVar9,*(undefined8 *)PTR_DAT_04cb6c40,0);
        puVar10 = (undefined8 *)(param_1 + 0x30);
        *puVar10 = uVar9;
        thunk_FUN_02134474(puVar10,uVar9);
        Dino_BusSand_App_UI_CommonNamePlateView__SetAutoSize_22d07f4
                  (*(undefined4 *)(param_1 + 0x48),*puVar10);
        Dino_BusSand_App_UI_CommonNamePlateView__SetTexts_22d0430
                  (*puVar10,*(undefined8 *)(param_1 + 0x50));
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(*(undefined8 *)(param_1 + 0x38),0,0);
        if ((uVar5 & 1) != 0) {
          if (*(long *)(param_1 + 0x38) == 0) goto LAB_023d042c;
          UnityEngine_GameObject__SetActive_43c1408(*(long *)(param_1 + 0x38),0,0);
        }
        if (*plVar8 != 0) {
          plVar4 = (long *)UnityEngine_GameObject__get_transform_43c1048(*plVar8,0);
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(PTR_DAT_04cacfc0);
            cRam0000000004f9b948 = '\x01';
          }
          uVar12 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
          uVar13 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
          if (plVar4 == (long *)0x0) {
            plVar4 = (long *)0x0;
          }
          else if (*plVar4 != *(long *)PTR_DAT_04cabdb0) {
            plVar4 = (long *)0x0;
          }
          Dino_BusSand_App_UI_CommonNamePlateView__Stretch_22d090c
                    (uVar12,uVar13,uVar12,uVar13,plVar4);
          lVar6 = *plVar8;
          if (*(int *)(*(long *)PTR_DAT_04cab188 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UI_UIParticleSorting__PrepareAll_217d4f4(lVar6,0);
          goto LAB_023d01b0;
        }
      }
    }
  }
LAB_023d042c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

