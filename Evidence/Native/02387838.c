/* IL2CPP: Dino.BusSand.App.UI.KitToggle$$Apply
void Dino_BusSand_App_UI_KitToggle__Apply (Dino_BusSand_App_UI_KitToggle_o* __this, bool on, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitToggle$$Apply
   void Dino_BusSand_App_UI_KitToggle__Apply (Dino_BusSand_App_UI_KitToggle_o* __this, bool on,
   float k, const MethodInfo* method); */

void Dino_BusSand_App_UI_KitToggle__Apply_2287838(float param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  float fVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  puVar6 = PTR_DAT_04cad4c0;
  if ((bRam0000000004f9c165 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb4fd8);
    FUN_02132f7c(PTR_DAT_04cb5018);
    FUN_02132f7c(PTR_DAT_04cb4ea8);
    FUN_02132f7c(PTR_DAT_04cb4fe8);
    FUN_02132f7c(PTR_DAT_04cafcf0);
    FUN_02132f7c(PTR_DAT_04cb5020);
    bRam0000000004f9c165 = 1;
  }
  fVar14 = -72.5;
  lVar9 = *(long *)(param_2 + 0x30);
  if ((param_3 & 1) == 0) {
    fVar14 = 72.5;
  }
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (lVar9 == 0) goto LAB_02387cf8;
  fVar8 = 1.0;
  fVar15 = fVar8;
  if (param_1 <= 1.0) {
    fVar15 = param_1;
  }
  fVar16 = -1.0;
  if (0.0 <= param_1) {
    fVar16 = fVar15 + -1.0;
  }
  UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
            (fVar14 + (-fVar14 - fVar14) *
                      (fVar16 * fVar16 * _UNK_00e20660 +
                      fVar16 * fVar16 * fVar16 * _UNK_00e1feac + 1.0),0,lVar9,0);
  puVar5 = PTR_DAT_04cad330;
  lVar9 = *(long *)(param_2 + 0x30);
  if (lVar9 == 0) goto LAB_02387cf8;
  fVar14 = 0.0;
  if (0.0 <= param_1) {
    fVar14 = fVar15 * _UNK_00e2082c;
  }
  fVar14 = (float)func_0x049b5320(fVar14);
  UnityEngine_Transform__set_localScale_43d1be0
            (fVar14 * _UNK_00e201f4 + 1.0,fVar14 * _UNK_00e201f4 * _UNK_00e201f8 + 1.0,0x3f800000,
             lVar9,0);
  fVar15 = (param_1 + -0.25) / _UNK_00e2098c;
  fVar14 = fVar8;
  if (fVar15 <= 1.0) {
    fVar14 = fVar15;
  }
  fVar16 = 0.0;
  if (0.0 <= fVar15) {
    fVar8 = 1.0 - fVar14;
    fVar16 = fVar14;
  }
  if ((param_3 & 1) == 0) {
    fVar16 = fVar8;
  }
  Dino_BusSand_App_UI_KitToggle__SetAlpha_2287d3c(fVar16,*(undefined8 *)(param_2 + 0x20));
  Dino_BusSand_App_UI_KitToggle__SetAlpha_2287d3c(1.0 - fVar16,*(undefined8 *)(param_2 + 0x28));
  fVar14 = _UNK_00e2094c;
  plVar10 = *(long **)(param_2 + 0x38);
  if (param_1 < _UNK_00e2094c) {
    if ((param_3 & 1) != 0) goto LAB_02387a40;
LAB_02387c28:
    lVar11 = *(long *)PTR_DAT_04ca9d18;
    lVar9 = *(long *)(lVar11 + 0x38);
    if (lVar9 == 0) {
      FUN_0216b4cc(lVar11);
      lVar9 = *(long *)(lVar11 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470(lVar9);
    }
    bVar3 = true;
    iVar2 = *(int *)(*(long *)puVar5 + 0xe4);
    uVar12 = **(undefined8 **)(lVar9 + 0xb8);
    puVar1 = (undefined8 *)PTR_DAT_04cb4fd8;
    puVar4 = (undefined8 *)PTR_DAT_04cb5018;
  }
  else {
    if ((param_3 & 1) != 0) goto LAB_02387c28;
LAB_02387a40:
    lVar11 = *(long *)PTR_DAT_04ca9d18;
    lVar9 = *(long *)(lVar11 + 0x38);
    if (lVar9 == 0) {
      FUN_0216b4cc(lVar11);
      lVar9 = *(long *)(lVar11 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470(lVar9);
    }
    bVar3 = false;
    iVar2 = *(int *)(*(long *)puVar5 + 0xe4);
    uVar12 = **(undefined8 **)(lVar9 + 0xb8);
    puVar1 = (undefined8 *)PTR_DAT_04cb4fe8;
    puVar4 = (undefined8 *)PTR_DAT_04cb5020;
  }
  if (iVar2 == 0) {
    thunk_FUN_0218fdac();
  }
  uVar12 = Dino_BusSand_App_UI_UiKit__T_2285e1c(*puVar4,*puVar1,uVar12);
  puVar7 = PTR_DAT_04cb4ea8;
  puVar1 = (undefined8 *)PTR_DAT_04cafcf0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x518))(plVar10,uVar12,*(undefined8 *)(*plVar10 + 0x520));
    uVar12 = *(undefined8 *)(param_2 + 0x38);
    if (!bVar3) {
      puVar1 = (undefined8 *)puVar7;
    }
    uVar13 = *puVar1;
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_UiKit__Style_2287e10(uVar12,uVar13);
    fVar8 = -35.0;
    if (!bVar3) {
      fVar8 = 27.0;
    }
    if (*(long *)(param_2 + 0x38) != 0) {
      lVar9 = TMPro_TMP_Text__get_rectTransform_42cd6a4(*(long *)(param_2 + 0x38),0);
      fVar15 = 0.0;
      if (fVar14 <= param_1) {
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar16 = (param_1 + _UNK_00e2044c) / _UNK_00e208e8;
        fVar15 = 1.0;
        if (fVar16 <= 1.0) {
          fVar15 = fVar16;
        }
        fVar17 = 1.0;
        if (0.0 <= fVar16) {
          fVar17 = 1.0 - fVar15;
        }
        fVar15 = (fVar17 * fVar17 * fVar17 + -1.0 + 1.0) * fVar8 * _UNK_00e1fefc;
      }
      if (lVar9 != 0) {
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(fVar8 + fVar15,0x40000000,lVar9,0);
        plVar10 = *(long **)(param_2 + 0x38);
        if (param_1 < fVar14) {
          param_1 = param_1 / fVar14;
          fVar14 = 1.0;
          if (param_1 <= 1.0) {
            fVar14 = param_1;
          }
          fVar8 = 1.0;
          if (0.0 <= param_1) {
            fVar8 = 1.0 - fVar14;
          }
        }
        else {
          fVar15 = (param_1 + _UNK_00e2044c) / _UNK_00e20590;
          fVar14 = 1.0;
          if (fVar15 <= 1.0) {
            fVar14 = fVar15;
          }
          fVar8 = 0.0;
          if (0.0 <= fVar15) {
            fVar8 = fVar14;
          }
        }
        if (plVar10 != (long *)0x0) {
          if (*(float *)((long)plVar10 + 0x154) != fVar8) {
            *(float *)((long)plVar10 + 0x154) = fVar8;
            uVar12 = *(undefined8 *)(*plVar10 + 0x300);
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar10 + 0x2f8);
            *(undefined1 *)(plVar10 + 0x76) = 1;
                    /* WARNING: Could not recover jumptable at 0x043cbae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(plVar10,uVar12);
            return;
          }
          return;
        }
      }
    }
  }
LAB_02387cf8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

