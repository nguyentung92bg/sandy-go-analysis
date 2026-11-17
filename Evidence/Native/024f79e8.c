/* IL2CPP: Dino.BusSand.View.VehicleView$$UpdatePackSand
void Dino_BusSand_View_VehicleView__UpdatePackSand (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$UpdatePackSand
   void Dino_BusSand_View_VehicleView__UpdatePackSand (Dino_BusSand_View_VehicleView_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__UpdatePackSand_23f79e8(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float in_s3;
  float fVar17;
  float fVar18;
  float fVar19;
  float fStack_90;
  float fStack_80;
  float fStack_70;
  float fStack_60;
  double dStack_28;
  
  puVar3 = PTR_DAT_04ca9ae8;
                    /* try { // try from 024f7a08 to 025f7a0b has its CatchHandler @ 024f81e8 */
  if ((bRam0000000004f9cacb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa0d8);
    FUN_02132f7c(PTR_DAT_04cb4e10);
    FUN_02132f7c(PTR_DAT_04cb4df8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 024f7a4c to 025f7a6f has its CatchHandler @ 024f8200 */
    FUN_02132f7c(PTR_DAT_04cb70d8);
    FUN_02132f7c(PTR_DAT_04cbc460);
    FUN_02132f7c(PTR_DAT_04caa100);
    FUN_02132f7c(PTR_DAT_04cbdf28);
                    /* try { // try from 024f7a7c to 025f7a7f has its CatchHandler @ 024f7a88 */
                    /* try { // try from 024f7a80 to 025f7aa3 has its CatchHandler @ 024f7438 */
    FUN_02132f7c(PTR_DAT_04cbdf38);
                    /* catch() { ... } // from try @ 024f7974 with catch @ 024f7a84 */
                    /* catch() { ... } // from try @ 024f7a7c with catch @ 024f7a88 */
                    /* catch() { ... } // from try @ 024f798c with catch @ 024f7a8c */
    FUN_02132f7c(PTR_DAT_04cbdf40);
    FUN_02132f7c(PTR_DAT_04caa108);
                    /* try { // try from 024f7aa4 to 025f7aa7 has its CatchHandler @ 024f81c8 */
    FUN_02132f7c(PTR_DAT_04caa120);
                    /* try { // try from 024f7aa8 to 025f806b has its CatchHandler @ 024f7438 */
    bRam0000000004f9cacb = 1;
  }
  uVar10 = *(undefined8 *)(param_1 + 0xf0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x134) == '\0') {
    bVar9 = false;
  }
  else {
    bVar9 = _UNK_00e207ec < *(float *)(param_1 + 0x278);
  }
  if ((*(long *)(param_1 + 0xf8) == 0) ||
     (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0xf8),0), lVar6 == 0
     )) goto LAB_024f80ac;
  bVar4 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar6,0);
  if (bVar9 != (bool)(bVar4 & 1)) {
    if ((*(long *)(param_1 + 0xf8) == 0) ||
       (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0xf8),0),
       lVar6 == 0)) goto LAB_024f80ac;
    UnityEngine_GameObject__SetActive_43c1408(lVar6,bVar9,0);
  }
  if (bVar9 == false) {
    return;
  }
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_024f80ac;
  fVar14 = *(float *)(param_1 + 0x114);
  UnityEngine_Transform__set_localScale_43d1be0
            (*(undefined4 *)(param_1 + 0x10c),
             *(float *)(param_1 + 0x110) * (*(float *)(param_1 + 0x27c) * _UNK_00e201f4 + 1.0),
             *(long *)(param_1 + 0xf8),0);
  fVar17 = *(float *)(param_1 + 0x278) * 200.0;
  dVar11 = (double)FUN_049b52f0((double)fVar17,&dStack_28);
  if (0.0 <= fVar17) {
    if (dVar11 == 0.5) {
      fVar14 = 1.0;
      goto LAB_024f7bd0;
    }
    fVar17 = (float)(int)(fVar17 + 0.5);
  }
  else if (dVar11 == -0.5) {
    fVar14 = -1.0;
LAB_024f7bd0:
    fVar17 = (float)dStack_28;
    if (((long)dStack_28 & 1U) != 0) {
      fVar17 = (float)dStack_28 + fVar14;
    }
  }
  else {
    fVar17 = (float)(int)(fVar17 + -0.5);
  }
  fVar18 = *(float *)(param_1 + 0x2c4) * 100.0;
  dVar11 = (double)FUN_049b52f0((double)fVar18,&dStack_28);
  if (0.0 <= fVar18) {
    if (dVar11 == 0.5) {
      fVar14 = 1.0;
      goto LAB_024f7c5c;
    }
    fVar18 = (float)(int)(fVar18 + 0.5);
  }
  else if (dVar11 == -0.5) {
    fVar14 = -1.0;
LAB_024f7c5c:
    fVar18 = (float)dStack_28;
    if (((long)dStack_28 & 1U) != 0) {
      fVar18 = (float)dStack_28 + fVar14;
    }
  }
  else {
    fVar18 = (float)(int)(fVar18 + -0.5);
  }
  fVar17 = fVar17 / 200.0;
  fVar19 = *(float *)(param_1 + 700) * 100.0;
  dVar11 = (double)FUN_049b52f0((double)fVar19,&dStack_28);
  if (0.0 <= fVar19) {
    if (dVar11 == 0.5) {
      fVar14 = 1.0;
      goto LAB_024f7ce4;
    }
    fVar19 = (float)(int)(fVar19 + 0.5);
  }
  else if (dVar11 == -0.5) {
    fVar14 = -1.0;
LAB_024f7ce4:
    fVar19 = (float)dStack_28;
    if (((long)dStack_28 & 1U) != 0) {
      fVar19 = (float)dStack_28 + fVar14;
    }
  }
  else {
    fVar19 = (float)(int)(fVar19 + -0.5);
  }
  fVar18 = fVar18 / 100.0;
  fVar19 = fVar19 / 100.0;
  fVar13 = ABS(fVar17 - *(float *)(param_1 + 0x138));
  if (((fVar13 < _UNK_00e20948) &&
      (fVar13 = ABS(fVar18 - *(float *)(param_1 + 0x2b0)), fVar13 < _UNK_00e20948)) &&
     (fVar13 = ABS(fVar19 - *(float *)(param_1 + 0x2b4)), fVar13 < _UNK_00e20948)) {
    fVar14 = *(float *)(param_1 + 0x2b8);
    fVar13 = ABS(*(float *)(param_1 + 0x2c0) - fVar14);
    if (fVar13 < _UNK_00e20948) {
      return;
    }
  }
  plVar1 = (long *)(param_1 + 0x2a8);
  *(float *)(param_1 + 0x138) = fVar17;
  *(float *)(param_1 + 0x2b0) = fVar18;
  *(float *)(param_1 + 0x2b4) = fVar19;
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_1 + 0x2c0);
  if (*(long *)(param_1 + 0x2a8) == 0) {
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa0d8);
    UnityEngine_MaterialPropertyBlock___ctor_4372b28(lVar6,0);
    *plVar1 = lVar6;
    thunk_FUN_02134474(plVar1,lVar6);
  }
  if (*(char *)(param_1 + 0x2c8) != '\0') {
    if (*plVar1 == 0) goto LAB_024f80ac;
    UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c
              (fVar19,*plVar1,*(undefined8 *)PTR_DAT_04cbdf38,0);
    if (*plVar1 == 0) goto LAB_024f80ac;
    UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c
              (*(undefined4 *)(param_1 + 0x2c0),*plVar1,*(undefined8 *)PTR_DAT_04cbdf40,0);
    if (*(char *)(param_1 + 0x2dc) != '\0') {
      if (*plVar1 == 0) goto LAB_024f80ac;
      in_s3 = *(float *)(param_1 + 0x2d8);
      fVar14 = *(float *)(param_1 + 0x2d4);
      fVar13 = *(float *)(param_1 + 0x2d0);
      UnityEngine_MaterialPropertyBlock__SetVector_4372e60
                (*(undefined4 *)(param_1 + 0x2cc),*plVar1,*(undefined8 *)PTR_DAT_04cbdf28,0);
    }
  }
  if (*(char *)(param_1 + 0x2e0) == '\0') {
    if (*(char *)(param_1 + 0x30) == '\0') {
      uVar2 = *(undefined1 *)(param_1 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar19 = (float)Dino_BusSand_View_PackPalette__Main_2390528(uVar2,0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar19 = (float)Dino_BusSand_View_PackPalette__get_HiddenMain_2390720(0);
    }
  }
  else {
    in_s3 = *(float *)(param_1 + 0x2f0);
    fVar14 = *(float *)(param_1 + 0x2ec);
    fVar13 = *(float *)(param_1 + 0x2e8);
    fVar19 = *(float *)(param_1 + 0x2e4);
  }
  if (*(char *)(param_1 + 0x2f4) == '\0') {
    fStack_90 = fVar13;
    fStack_70 = in_s3;
    fStack_80 = fVar14;
    if (*(char *)(param_1 + 0x30) == '\0') {
      uVar2 = *(undefined1 *)(param_1 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fStack_60 = (float)Dino_BusSand_View_PackPalette__Shadow_2390624(uVar2,0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fStack_60 = (float)Dino_BusSand_View_PackPalette__get_HiddenShadow_2390858(0);
    }
  }
  else {
    fStack_70 = *(float *)(param_1 + 0x304);
    fStack_80 = *(float *)(param_1 + 0x300);
    fStack_90 = *(float *)(param_1 + 0x2fc);
    fStack_60 = *(float *)(param_1 + 0x2f8);
  }
  puVar3 = PTR_DAT_04cbc460;
  lVar6 = *plVar1;
  if (*(int *)(*(long *)PTR_DAT_04cbc460 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (lVar6 != 0) {
    lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
    uVar12 = *(undefined8 *)(lVar7 + 0xd0);
    uVar10 = *(undefined8 *)(lVar7 + 200);
    fVar15 = 1.0;
    if (fVar18 <= 1.0) {
      fVar15 = fVar18;
    }
    fVar16 = 0.0;
    if (0.0 <= fVar18) {
      fVar16 = fVar15;
    }
    fVar13 = fVar13 + ((float)((ulong)uVar10 >> 0x20) - fVar13) * fVar16;
    UnityEngine_MaterialPropertyBlock__SetColor_4372eb4
              (CONCAT44(fVar13,fVar19 + ((float)uVar10 - fVar19) * fVar16),fVar13,
               fVar14 + ((float)uVar12 - fVar14) * fVar16,
               in_s3 + ((float)((ulong)uVar12 >> 0x20) - in_s3) * fVar16,lVar6,
               *(undefined8 *)PTR_DAT_04caa100,0);
    if (*plVar1 != 0) {
      fVar18 = fVar18 * _UNK_00e20094;
      lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
      fVar14 = 1.0;
      if (fVar18 <= 1.0) {
        fVar14 = fVar18;
      }
      uVar12 = *(undefined8 *)(lVar6 + 0xd0);
      uVar10 = *(undefined8 *)(lVar6 + 200);
      fVar19 = 0.0;
      if (0.0 <= fVar18) {
        fVar19 = fVar14;
      }
      fStack_90 = fStack_90 + ((float)((ulong)uVar10 >> 0x20) - fStack_90) * fVar19;
      UnityEngine_MaterialPropertyBlock__SetColor_4372eb4
                (CONCAT44(fStack_90,fStack_60 + ((float)uVar10 - fStack_60) * fVar19),fStack_90,
                 fStack_80 + ((float)uVar12 - fStack_80) * fVar19,
                 fStack_70 + ((float)((ulong)uVar12 >> 0x20) - fStack_70) * fVar19,*plVar1,
                 *(undefined8 *)PTR_DAT_04caa108,0);
      if (*plVar1 != 0) {
                    /* try { // try from 024f806c to 025f8073 has its CatchHandler @ 024f821c */
        UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c
                  (fVar17,*plVar1,*(undefined8 *)PTR_DAT_04caa120,0);
        lVar6 = *(long *)(param_1 + 0xf0);
        if (lVar6 != 0) {
          lVar7 = *plVar1;
                    /* try { // try from 024f808c to 025f808f has its CatchHandler @ 024f81dc */
                    /* try { // try from 024f8090 to 025f80c7 has its CatchHandler @ 024f8240 */
          if ((bRam0000000004fa68bf & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf67a0,lVar7,0);
            bRam0000000004fa68bf = 1;
          }
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar8 = *(long *)(lVar6 + 0x10);
          if (lVar8 != 0) {
            uVar10 = 0;
            if (lVar7 != 0) {
              uVar10 = *(undefined8 *)(lVar7 + 0x10);
            }
            if (pcRam0000000004fa6908 == (code *)0x0) {
              pcRam0000000004fa6908 = (code *)FUN_02132f40(&UNK_00e2f2e7);
            }
                    /* WARNING: Could not recover jumptable at 0x04473688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa6908)(lVar8,uVar10);
            return;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
        }
      }
    }
  }
LAB_024f80ac:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

