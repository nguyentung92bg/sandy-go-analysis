/* IL2CPP: Dino.BusSand.App.UI.KitToggle.<>c__DisplayClass14_0$$<Refresh>b__0
void Dino_BusSand_App_UI_KitToggle___c__DisplayClass14_0___Refresh_b__0 (Dino_BusSand_App_UI_KitToggle___c__DisplayClass14_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitToggle.<>c__DisplayClass14_0$$<Refresh>b__0
   void Dino_BusSand_App_UI_KitToggle___c__DisplayClass14_0___Refresh_b__0
   (Dino_BusSand_App_UI_KitToggle___c__DisplayClass14_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_KitToggle___c__DisplayClass14_0___Refresh_b__0_2287f88
               (float param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  code *UNRECOVERED_JUMPTABLE;
  float fVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  puVar6 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c167 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c167 = 1;
  }
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
  puVar6 = PTR_DAT_04cad4c0;
  if ((uVar9 & 1) == 0) {
    return;
  }
  lVar10 = *(long *)(param_2 + 0x10);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  bVar3 = *(byte *)(param_2 + 0x18);
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
  fVar17 = -72.5;
  lVar12 = *(long *)(lVar10 + 0x30);
  if ((bVar3 & 1) == 0) {
    fVar17 = 72.5;
  }
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (lVar12 == 0) goto LAB_02387cf8;
  fVar11 = 1.0;
  fVar18 = fVar11;
  if (param_1 <= 1.0) {
    fVar18 = param_1;
  }
  fVar19 = -1.0;
  if (0.0 <= param_1) {
    fVar19 = fVar18 + -1.0;
  }
  UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
            (fVar17 + (-fVar17 - fVar17) *
                      (fVar19 * fVar19 * _UNK_00e20660 +
                      fVar19 * fVar19 * fVar19 * _UNK_00e1feac + 1.0),0,lVar12,0);
  puVar7 = PTR_DAT_04cad330;
  lVar12 = *(long *)(lVar10 + 0x30);
  if (lVar12 == 0) goto LAB_02387cf8;
  fVar17 = 0.0;
  if (0.0 <= param_1) {
    fVar17 = fVar18 * _UNK_00e2082c;
  }
  fVar17 = (float)func_0x049b5320(fVar17);
  UnityEngine_Transform__set_localScale_43d1be0
            (fVar17 * _UNK_00e201f4 + 1.0,fVar17 * _UNK_00e201f4 * _UNK_00e201f8 + 1.0,0x3f800000,
             lVar12,0);
  fVar18 = (param_1 + -0.25) / _UNK_00e2098c;
  fVar17 = fVar11;
  if (fVar18 <= 1.0) {
    fVar17 = fVar18;
  }
  fVar19 = 0.0;
  if (0.0 <= fVar18) {
    fVar11 = 1.0 - fVar17;
    fVar19 = fVar17;
  }
  if ((bVar3 & 1) == 0) {
    fVar19 = fVar11;
  }
  Dino_BusSand_App_UI_KitToggle__SetAlpha_2287d3c(fVar19,*(undefined8 *)(lVar10 + 0x20));
  Dino_BusSand_App_UI_KitToggle__SetAlpha_2287d3c(1.0 - fVar19,*(undefined8 *)(lVar10 + 0x28));
  fVar17 = _UNK_00e2094c;
  plVar13 = *(long **)(lVar10 + 0x38);
  if (param_1 < _UNK_00e2094c) {
    if ((bVar3 & 1) != 0) goto LAB_02387a40;
LAB_02387c28:
    lVar15 = *(long *)PTR_DAT_04ca9d18;
    lVar12 = *(long *)(lVar15 + 0x38);
    if (lVar12 == 0) {
      FUN_0216b4cc(lVar15);
      lVar12 = *(long *)(lVar15 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0216b470();
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar12 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0216b470(lVar12);
    }
    bVar4 = true;
    iVar2 = *(int *)(*(long *)puVar7 + 0xe4);
    uVar14 = **(undefined8 **)(lVar12 + 0xb8);
    puVar1 = (undefined8 *)PTR_DAT_04cb4fd8;
    puVar5 = (undefined8 *)PTR_DAT_04cb5018;
  }
  else {
    if ((bVar3 & 1) != 0) goto LAB_02387c28;
LAB_02387a40:
    lVar15 = *(long *)PTR_DAT_04ca9d18;
    lVar12 = *(long *)(lVar15 + 0x38);
    if (lVar12 == 0) {
      FUN_0216b4cc(lVar15);
      lVar12 = *(long *)(lVar15 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0216b470();
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar12 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0216b470(lVar12);
    }
    bVar4 = false;
    iVar2 = *(int *)(*(long *)puVar7 + 0xe4);
    uVar14 = **(undefined8 **)(lVar12 + 0xb8);
    puVar1 = (undefined8 *)PTR_DAT_04cb4fe8;
    puVar5 = (undefined8 *)PTR_DAT_04cb5020;
  }
  if (iVar2 == 0) {
    thunk_FUN_0218fdac();
  }
  uVar14 = Dino_BusSand_App_UI_UiKit__T_2285e1c(*puVar5,*puVar1,uVar14);
  puVar8 = PTR_DAT_04cb4ea8;
  puVar1 = (undefined8 *)PTR_DAT_04cafcf0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x518))(plVar13,uVar14,*(undefined8 *)(*plVar13 + 0x520));
    uVar14 = *(undefined8 *)(lVar10 + 0x38);
    if (!bVar4) {
      puVar1 = (undefined8 *)puVar8;
    }
    uVar16 = *puVar1;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_UiKit__Style_2287e10(uVar14,uVar16);
    fVar11 = -35.0;
    if (!bVar4) {
      fVar11 = 27.0;
    }
    if (*(long *)(lVar10 + 0x38) != 0) {
      lVar12 = TMPro_TMP_Text__get_rectTransform_42cd6a4(*(long *)(lVar10 + 0x38),0);
      fVar18 = 0.0;
      if (fVar17 <= param_1) {
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar19 = (param_1 + _UNK_00e2044c) / _UNK_00e208e8;
        fVar18 = 1.0;
        if (fVar19 <= 1.0) {
          fVar18 = fVar19;
        }
        fVar20 = 1.0;
        if (0.0 <= fVar19) {
          fVar20 = 1.0 - fVar18;
        }
        fVar18 = (fVar20 * fVar20 * fVar20 + -1.0 + 1.0) * fVar11 * _UNK_00e1fefc;
      }
      if (lVar12 != 0) {
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(fVar11 + fVar18,0x40000000,lVar12,0)
        ;
        plVar13 = *(long **)(lVar10 + 0x38);
        if (param_1 < fVar17) {
          param_1 = param_1 / fVar17;
          fVar17 = 1.0;
          if (param_1 <= 1.0) {
            fVar17 = param_1;
          }
          fVar11 = 1.0;
          if (0.0 <= param_1) {
            fVar11 = 1.0 - fVar17;
          }
        }
        else {
          fVar18 = (param_1 + _UNK_00e2044c) / _UNK_00e20590;
          fVar17 = 1.0;
          if (fVar18 <= 1.0) {
            fVar17 = fVar18;
          }
          fVar11 = 0.0;
          if (0.0 <= fVar18) {
            fVar11 = fVar17;
          }
        }
        if (plVar13 != (long *)0x0) {
          if (*(float *)((long)plVar13 + 0x154) != fVar11) {
            *(float *)((long)plVar13 + 0x154) = fVar11;
            uVar14 = *(undefined8 *)(*plVar13 + 0x300);
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar13 + 0x2f8);
            *(undefined1 *)(plVar13 + 0x76) = 1;
                    /* WARNING: Could not recover jumptable at 0x043cbae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(plVar13,uVar14);
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

