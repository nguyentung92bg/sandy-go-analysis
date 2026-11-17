/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Layout
void Dino_BusSand_App_UI_HomeAtelier__Layout (Dino_BusSand_App_UI_HomeAtelier_o* __this, bool snap, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Layout
   void Dino_BusSand_App_UI_HomeAtelier__Layout (Dino_BusSand_App_UI_HomeAtelier_o* __this, bool
   snap, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier__Layout_22d4fac
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               ulong param_6)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  float *pfVar10;
  code *pcVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  
  if ((bRam0000000004f9c3ce & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb6f08);
    FUN_02132f7c(PTR_DAT_04cb4ec0);
    bRam0000000004f9c3ce = 1;
  }
  if (*(long *)(param_5 + 0x20) == 0) goto LAB_023d5584;
  UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_5 + 0x20),0);
  if (param_4 < 10.0) {
    return;
  }
  fVar15 = param_2;
  fVar17 = param_4;
  fVar13 = (float)Dino_BusSand_App_UI_HomeAtelier__Bottom_22d558c
                            (0x43520000,param_5,*(undefined8 *)PTR_DAT_04cb4ec0);
  fVar14 = (float)Dino_BusSand_App_UI_HomeAtelier__Bottom_22d558c
                            (0,param_5,*(undefined8 *)PTR_DAT_04cb6f08);
  puVar2 = PTR_DAT_04ca9ae8;
  uVar12 = *(undefined8 *)(param_5 + 0x100);
  if (fVar13 <= fVar14) {
    fVar13 = fVar14;
  }
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar13 = fVar13 + 34.0;
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
  if ((uVar4 & 1) == 0) {
    uVar12 = *(undefined8 *)(param_5 + 0x40);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
    if ((uVar4 & 1) == 0) {
      fVar15 = param_4 * _UNK_00e203f4;
    }
    else {
      if (*(long *)(param_5 + 0x40) == 0) goto LAB_023d5584;
      UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_5 + 0x40),0);
      if (*(long *)(param_5 + 0x40) == 0) goto LAB_023d5584;
      fVar15 = fVar17 + fVar15 + fVar17 * _UNK_00e20120;
      UnityEngine_Transform__TransformPoint_43d3c44(0,fVar15,0,*(long *)(param_5 + 0x40),0);
      if (*(long *)(param_5 + 0x20) == 0) goto LAB_023d5584;
      UnityEngine_Transform__InverseTransformPoint_43d3ffc(*(long *)(param_5 + 0x20),0);
      fVar15 = (param_4 + param_2) - fVar15;
    }
    uVar20 = 0x43fa0000;
    fVar14 = (fVar15 + -700.0) / 200.0;
    fVar17 = 1.0;
    if (fVar14 <= 1.0) {
      fVar17 = fVar14;
    }
    fVar18 = 0.0;
    if (0.0 <= fVar14) {
      fVar18 = fVar17;
    }
    fVar17 = 0.0;
    if (0.0 <= fVar18) {
      fVar17 = fVar18;
    }
    fVar14 = 400.0;
    fVar17 = fVar17 * -42.0 + 36.0;
  }
  else {
    if (*(long *)(param_5 + 0x100) == 0) goto LAB_023d5584;
    fVar15 = (float)Dino_BusSand_App_UI_HomeStage__PlanRoof_22efd44
                              (fVar13 + 34.0 + 8.0 + 220.0 + 92.0,*(long *)(param_5 + 0x100),0);
    uVar20 = 0x44070000;
    fVar17 = -92.0;
    fVar14 = 440.0;
  }
  puVar3 = PTR_DAT_04caadd0;
  *(float *)(param_5 + 0x74) = fVar15;
  lVar5 = FUN_02133068(*(undefined8 *)puVar3,3);
  fVar1 = _UNK_00e20a94;
  fVar19 = _UNK_00e201f4;
  fVar18 = _UNK_00e1fec4;
  if (lVar5 == 0) goto LAB_023d5584;
  fVar16 = (fVar15 + fVar17) - (fVar13 + 34.0 + 8.0);
  if (fVar16 <= fVar14) {
    fVar14 = fVar16;
  }
  fVar21 = 220.0;
  if (220.0 <= fVar16) {
    fVar21 = fVar14;
  }
  uVar8 = (uint)*(ulong *)(lVar5 + 0x18);
  if (uVar8 == 0) {
LAB_023d5588:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  fVar21 = fVar21 * (_UNK_00e1fec4 /
                    (1.0 / *(float *)(param_5 + 0x70) + _UNK_00e20a94 + _UNK_00e201f4));
  *(float *)(lVar5 + 0x20) = fVar21;
  if ((uVar8 == 1) || (*(undefined4 *)(lVar5 + 0x24) = uVar20, uVar8 < 3)) goto LAB_023d5588;
  *(float *)(lVar5 + 0x28) = param_3 + -540.0 + 40.0;
  if (1 < (int)uVar8) {
    lVar9 = (*(ulong *)(lVar5 + 0x18) & 0xffffffff) - 1;
    pfVar10 = (float *)(lVar5 + 0x24);
    do {
      fVar14 = *pfVar10;
      if (fVar21 <= *pfVar10) {
        fVar14 = fVar21;
      }
      fVar21 = fVar14;
      lVar9 = lVar9 + -1;
      pfVar10 = pfVar10 + 1;
    } while (lVar9 != 0);
  }
  fVar14 = fVar21 / (fVar18 / (1.0 / *(float *)(param_5 + 0x70) + fVar1 + fVar19));
  fVar15 = ((fVar15 + fVar17) - fVar14) + -34.0 + -8.0;
  if (fVar13 <= fVar15) {
    fVar13 = fVar15;
  }
  if (((param_6 & 1) == 0) && (fVar15 = *(float *)(param_5 + 0x60), 0.0 <= fVar15)) {
    if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar17 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
    fVar18 = (float)expf(fVar17 * -6.0);
    fVar18 = 1.0 - fVar18;
    fVar17 = 1.0;
    if (fVar18 <= 1.0) {
      fVar17 = fVar18;
    }
    fVar19 = 0.0;
    if (0.0 <= fVar18) {
      fVar19 = fVar17;
    }
    fVar13 = fVar15 + (fVar13 - fVar15) * fVar19;
  }
  plVar6 = *(long **)(param_5 + 0x38);
  *(float *)(param_5 + 0x60) = fVar13;
  *(float *)(param_5 + 100) = fVar21;
  *(float *)(param_5 + 0x68) = fVar14;
  *(float *)(param_5 + 0x6c) = fVar21 + 150.0;
  if (plVar6 == (long *)0x0) goto LAB_023d5584;
  fVar15 = -60.0 - param_3 * 0.5;
  fVar17 = param_3 * 0.5 + 60.0;
  if (_UNK_00e2043c < ABS(*(float *)(plVar6 + 0x1c) - fVar13)) {
LAB_023d5484:
    uVar20 = *(undefined4 *)(param_5 + 0x60);
    *(float *)(plVar6 + 0x1b) = fVar15;
    *(float *)((long)plVar6 + 0xdc) = fVar17;
    uVar12 = _UNK_00e6a270;
    *(undefined4 *)(plVar6 + 0x1c) = uVar20;
    pcVar11 = *(code **)(*plVar6 + 0x2f8);
    uVar7 = *(undefined8 *)(*plVar6 + 0x300);
    *(undefined8 *)((long)plVar6 + 0xe4) = uVar12;
    (*pcVar11)(plVar6,uVar7);
  }
  else {
    fVar13 = *(float *)(plVar6 + 0x1b);
    if (cRam0000000004f9c305 == '\0') {
      FUN_02132f7c(PTR_DAT_04cb5bf8);
      plVar6 = *(long **)(param_5 + 0x38);
      cRam0000000004f9c305 = '\x01';
    }
    fVar14 = ABS(fVar13);
    if (fVar14 <= ABS(fVar15)) {
      fVar14 = ABS(fVar15);
    }
    fVar19 = **(float **)(*(long *)PTR_DAT_04cb5bf8 + 0xb8) * 8.0;
    fVar18 = fVar14 * _UNK_00e20900;
    if (fVar14 * _UNK_00e20900 <= fVar19) {
      fVar18 = fVar19;
    }
    if (fVar18 <= ABS(fVar15 - fVar13)) {
      if (plVar6 == (long *)0x0) goto LAB_023d5584;
      goto LAB_023d5484;
    }
    if (plVar6 == (long *)0x0) goto LAB_023d5584;
    fVar13 = ABS(*(float *)((long)plVar6 + 0xdc));
    if (fVar13 <= ABS(fVar17)) {
      fVar13 = ABS(fVar17);
    }
    fVar14 = fVar13 * _UNK_00e20900;
    if (fVar13 * _UNK_00e20900 <= fVar19) {
      fVar14 = fVar19;
    }
    if (fVar14 <= ABS(fVar17 - *(float *)((long)plVar6 + 0xdc))) goto LAB_023d5484;
  }
  fVar13 = *(float *)(param_5 + 0x68);
  uVar12 = *(undefined8 *)(param_5 + 0x100);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar13 = fVar13 + 34.0 + 70.0;
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_5 + 0x100) == 0) goto LAB_023d5584;
    fVar15 = (float)Dino_BusSand_App_UI_HomeStage__FootUnderTop_22f0210
                              (*(long *)(param_5 + 0x100),*(undefined8 *)(param_5 + 0x20),0);
    fVar15 = (fVar15 + 24.0) - (*(float *)(param_5 + 0x60) + -30.0);
    if (fVar13 <= fVar15) {
      fVar13 = fVar15;
    }
  }
  if (*(long *)(param_5 + 0x30) != 0) {
    UnityEngine_RectTransform__set_sizeDelta_43cfa70(param_3,fVar13,*(long *)(param_5 + 0x30),0);
    if (*(long *)(param_5 + 0x30) != 0) {
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                (0,-(*(float *)(param_5 + 0x60) + -30.0),*(long *)(param_5 + 0x30),0);
      *(undefined1 *)(param_5 + 0xe8) = 1;
      return;
    }
  }
LAB_023d5584:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

