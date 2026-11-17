/* IL2CPP: Dino.BusSand.App.UI.KitToggle.<>c__DisplayClass14_0$$<Refresh>b__1
void Dino_BusSand_App_UI_KitToggle___c__DisplayClass14_0___Refresh_b__1 (Dino_BusSand_App_UI_KitToggle___c__DisplayClass14_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitToggle.<>c__DisplayClass14_0$$<Refresh>b__1
   void Dino_BusSand_App_UI_KitToggle___c__DisplayClass14_0___Refresh_b__1
   (Dino_BusSand_App_UI_KitToggle___c__DisplayClass14_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_KitToggle___c__DisplayClass14_0___Refresh_b__1_2288020(long param_1)

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
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  puVar6 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c168 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c168 = 1;
  }
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
  puVar6 = PTR_DAT_04cad4c0;
  if ((uVar9 & 1) == 0) {
    return;
  }
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  bVar3 = *(byte *)(param_1 + 0x18);
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
  fVar16 = -72.5;
  lVar11 = *(long *)(lVar10 + 0x30);
  if ((bVar3 & 1) == 0) {
    fVar16 = 72.5;
  }
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (lVar11 == 0) goto LAB_02387cf8;
  UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
            (fVar16 + (-fVar16 - fVar16) *
                      (_UNK_00e20660 * 0.0 * 0.0 + _UNK_00e1feac * 0.0 * 0.0 * 0.0 + 1.0),0,lVar11,0
            );
  puVar7 = PTR_DAT_04cad330;
  lVar11 = *(long *)(lVar10 + 0x30);
  if (lVar11 == 0) goto LAB_02387cf8;
  fVar16 = (float)func_0x049b5320(_UNK_00e2082c * 1.0);
  UnityEngine_Transform__set_localScale_43d1be0
            (fVar16 * _UNK_00e201f4 + 1.0,fVar16 * _UNK_00e201f4 * _UNK_00e201f8 + 1.0,0x3f800000,
             lVar11,0);
  fVar17 = 0.75 / _UNK_00e2098c;
  fVar16 = 1.0;
  if (fVar17 <= 1.0) {
    fVar16 = fVar17;
  }
  fVar20 = 1.0;
  fVar18 = 0.0;
  if (0.0 <= fVar17) {
    fVar20 = 1.0 - fVar16;
    fVar18 = fVar16;
  }
  if ((bVar3 & 1) == 0) {
    fVar18 = fVar20;
  }
  Dino_BusSand_App_UI_KitToggle__SetAlpha_2287d3c(fVar18,*(undefined8 *)(lVar10 + 0x20));
  Dino_BusSand_App_UI_KitToggle__SetAlpha_2287d3c(1.0 - fVar18,*(undefined8 *)(lVar10 + 0x28));
  fVar16 = _UNK_00e2094c;
  plVar12 = *(long **)(lVar10 + 0x38);
  if (1.0 < _UNK_00e2094c) {
    if ((bVar3 & 1) != 0) goto LAB_02387a40;
LAB_02387c28:
    lVar14 = *(long *)PTR_DAT_04ca9d18;
    lVar11 = *(long *)(lVar14 + 0x38);
    if (lVar11 == 0) {
      FUN_0216b4cc(lVar14);
      lVar11 = *(long *)(lVar14 + 0x38);
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0216b470();
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar11 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0216b470(lVar11);
    }
    bVar4 = true;
    iVar2 = *(int *)(*(long *)puVar7 + 0xe4);
    uVar13 = **(undefined8 **)(lVar11 + 0xb8);
    puVar1 = (undefined8 *)PTR_DAT_04cb4fd8;
    puVar5 = (undefined8 *)PTR_DAT_04cb5018;
  }
  else {
    if ((bVar3 & 1) != 0) goto LAB_02387c28;
LAB_02387a40:
    lVar14 = *(long *)PTR_DAT_04ca9d18;
    lVar11 = *(long *)(lVar14 + 0x38);
    if (lVar11 == 0) {
      FUN_0216b4cc(lVar14);
      lVar11 = *(long *)(lVar14 + 0x38);
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0216b470();
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar11 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0216b470(lVar11);
    }
    bVar4 = false;
    iVar2 = *(int *)(*(long *)puVar7 + 0xe4);
    uVar13 = **(undefined8 **)(lVar11 + 0xb8);
    puVar1 = (undefined8 *)PTR_DAT_04cb4fe8;
    puVar5 = (undefined8 *)PTR_DAT_04cb5020;
  }
  if (iVar2 == 0) {
    thunk_FUN_0218fdac();
  }
  uVar13 = Dino_BusSand_App_UI_UiKit__T_2285e1c(*puVar5,*puVar1,uVar13);
  puVar8 = PTR_DAT_04cb4ea8;
  puVar1 = (undefined8 *)PTR_DAT_04cafcf0;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x518))(plVar12,uVar13,*(undefined8 *)(*plVar12 + 0x520));
    uVar13 = *(undefined8 *)(lVar10 + 0x38);
    if (!bVar4) {
      puVar1 = (undefined8 *)puVar8;
    }
    uVar15 = *puVar1;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_UiKit__Style_2287e10(uVar13,uVar15);
    fVar17 = -35.0;
    if (!bVar4) {
      fVar17 = 27.0;
    }
    if (*(long *)(lVar10 + 0x38) != 0) {
      lVar11 = TMPro_TMP_Text__get_rectTransform_42cd6a4(*(long *)(lVar10 + 0x38),0);
      fVar20 = 0.0;
      if (fVar16 <= 1.0) {
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar18 = (_UNK_00e2044c + 1.0) / _UNK_00e208e8;
        fVar20 = 1.0;
        if (fVar18 <= 1.0) {
          fVar20 = fVar18;
        }
        fVar19 = 1.0;
        if (0.0 <= fVar18) {
          fVar19 = 1.0 - fVar20;
        }
        fVar20 = (fVar19 * fVar19 * fVar19 + -1.0 + 1.0) * fVar17 * _UNK_00e1fefc;
      }
      if (lVar11 != 0) {
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(fVar17 + fVar20,0x40000000,lVar11,0)
        ;
        plVar12 = *(long **)(lVar10 + 0x38);
        if (1.0 < fVar16) {
          fVar16 = 1.0 / fVar16;
          fVar17 = 1.0;
          if (fVar16 <= 1.0) {
            fVar17 = fVar16;
          }
          fVar20 = 1.0;
          if (0.0 <= fVar16) {
            fVar20 = 1.0 - fVar17;
          }
        }
        else {
          fVar17 = (_UNK_00e2044c + 1.0) / _UNK_00e20590;
          fVar16 = 1.0;
          if (fVar17 <= 1.0) {
            fVar16 = fVar17;
          }
          fVar20 = 0.0;
          if (0.0 <= fVar17) {
            fVar20 = fVar16;
          }
        }
        if (plVar12 != (long *)0x0) {
          if (*(float *)((long)plVar12 + 0x154) != fVar20) {
            *(float *)((long)plVar12 + 0x154) = fVar20;
            uVar13 = *(undefined8 *)(*plVar12 + 0x300);
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar12 + 0x2f8);
            *(undefined1 *)(plVar12 + 0x76) = 1;
                    /* WARNING: Could not recover jumptable at 0x043cbae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(plVar12,uVar13);
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

