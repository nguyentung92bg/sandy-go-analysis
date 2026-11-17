/* IL2CPP: Dino.BusSand.View.VehicleView$$ApplyPackColors
void Dino_BusSand_View_VehicleView__ApplyPackColors (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$ApplyPackColors
   void Dino_BusSand_View_VehicleView__ApplyPackColors (Dino_BusSand_View_VehicleView_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__ApplyPackColors_23f770c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,float param_4,
               long param_5)

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
  undefined4 uVar17;
  float fVar18;
  double unaff_d8;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fStack_90;
  float fStack_80;
  float fStack_70;
  
  if ((bRam0000000004f9caca & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4e10);
    FUN_02132f7c(PTR_DAT_04cb4df8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb70d8);
    FUN_02132f7c(PTR_DAT_04caa100);
    FUN_02132f7c(PTR_DAT_04caa110);
    FUN_02132f7c(PTR_DAT_04caa108);
    FUN_02132f7c(PTR_DAT_04caa118);
    bRam0000000004f9caca = 1;
  }
  if (*(long *)(param_5 + 0x120) == 0) {
                    /* try { // try from 024f77c8 to 025f77ef has its CatchHandler @ 024f828c */
    return;
  }
  if (*(char *)(param_5 + 0x2e0) == '\0') {
    uVar19 = param_2;
    uVar21 = param_3;
    fVar22 = param_4;
    if (*(char *)(param_5 + 0x30) == '\0') {
      uVar2 = *(undefined1 *)(param_5 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 024f782c to 025f7853 has its CatchHandler @ 024f8288 */
      uVar17 = Dino_BusSand_View_PackPalette__Main_2390528(uVar2,0);
      param_2 = uVar19;
      param_3 = uVar21;
      param_4 = fVar22;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar17 = Dino_BusSand_View_PackPalette__get_HiddenMain_2390720(0);
      param_2 = uVar19;
      param_3 = uVar21;
      param_4 = fVar22;
    }
  }
  else {
    fVar22 = *(float *)(param_5 + 0x2f0);
    uVar21 = *(undefined4 *)(param_5 + 0x2ec);
    uVar19 = *(undefined4 *)(param_5 + 0x2e8);
    uVar17 = *(undefined4 *)(param_5 + 0x2e4);
  }
  if (*(char *)(param_5 + 0x2f4) == '\0') {
                    /* try { // try from 024f785c to 025f7863 has its CatchHandler @ 024f8234 */
    if (*(char *)(param_5 + 0x30) == '\0') {
      uVar2 = *(undefined1 *)(param_5 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
                    /* try { // try from 024f78a0 to 025f78ab has its CatchHandler @ 024f820c */
        thunk_FUN_0218fdac();
      }
      uVar24 = Dino_BusSand_View_PackPalette__Shadow_2390624(uVar2,0);
    }
    else {
                    /* try { // try from 024f7864 to 025f786f has its CatchHandler @ 024f8238 */
      if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar24 = Dino_BusSand_View_PackPalette__get_HiddenShadow_2390858(0);
                    /* try { // try from 024f7884 to 025f7893 has its CatchHandler @ 024f8224 */
    }
  }
  else {
    param_4 = *(float *)(param_5 + 0x304);
    param_3 = *(undefined4 *)(param_5 + 0x300);
    param_2 = *(undefined4 *)(param_5 + 0x2fc);
    uVar24 = *(undefined4 *)(param_5 + 0x2f8);
  }
  if (*(long *)(param_5 + 0x120) == 0) {
LAB_024f79e4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_MaterialPropertyBlock__Clear_43729a8(*(long *)(param_5 + 0x120),0);
  if (*(long *)(param_5 + 0x120) == 0) goto LAB_024f79e4;
                    /* try { // try from 024f78d8 to 025f78e3 has its CatchHandler @ 024f8208 */
                    /* try { // try from 024f78e8 to 025f78ff has its CatchHandler @ 024f822c */
  UnityEngine_MaterialPropertyBlock__SetColor_4372eb4
            (uVar17,uVar19,uVar21,fVar22,*(long *)(param_5 + 0x120),*(undefined8 *)PTR_DAT_04caa100,
             0);
  if (*(long *)(param_5 + 0x120) == 0) goto LAB_024f79e4;
                    /* try { // try from 024f790c to 025f7917 has its CatchHandler @ 024f81fc */
                    /* try { // try from 024f7918 to 025f7923 has its CatchHandler @ 024f8218 */
  UnityEngine_MaterialPropertyBlock__SetColor_4372eb4
            (uVar24,param_2,param_3,*(long *)(param_5 + 0x120),*(undefined8 *)PTR_DAT_04caa108,0);
                    /* try { // try from 024f792c to 025f7937 has its CatchHandler @ 024f8214 */
  if (*(long *)(param_5 + 0x120) == 0) goto LAB_024f79e4;
                    /* try { // try from 024f7938 to 025f793f has its CatchHandler @ 024f8210 */
  uVar19 = 0x3f800000;
  if (*(char *)(param_5 + 0x134) != '\0') {
    uVar19 = 0;
  }
                    /* try { // try from 024f7950 to 025f7957 has its CatchHandler @ 024f81e0 */
  UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c
            (uVar19,*(long *)(param_5 + 0x120),*(undefined8 *)PTR_DAT_04caa118,0);
  puVar3 = PTR_DAT_04ca9ae8;
  if (*(long *)(param_5 + 0x120) == 0) goto LAB_024f79e4;
                    /* try { // try from 024f7974 to 025f797b has its CatchHandler @ 024f7a84 */
  UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c
            (*(undefined4 *)(param_5 + 0x128),*(long *)(param_5 + 0x120),
             *(undefined8 *)PTR_DAT_04caa110,0);
  uVar10 = *(undefined8 *)(param_5 + 0xe8);
                    /* try { // try from 024f798c to 025f79ef has its CatchHandler @ 024f7a8c */
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_5 + 0xe8) == 0) goto LAB_024f79e4;
    UnityEngine_Renderer__SetPropertyBlock_4373a18
              (*(long *)(param_5 + 0xe8),*(undefined8 *)(param_5 + 0x120),0);
  }
  *(undefined4 *)(param_5 + 0x138) = 0xbf800000;
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9cacb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa0d8);
    FUN_02132f7c(PTR_DAT_04cb4e10);
    FUN_02132f7c(PTR_DAT_04cb4df8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb70d8);
    FUN_02132f7c(PTR_DAT_04cbc460);
    FUN_02132f7c(PTR_DAT_04caa100);
    FUN_02132f7c(PTR_DAT_04cbdf28);
    FUN_02132f7c(PTR_DAT_04cbdf38);
    FUN_02132f7c(PTR_DAT_04cbdf40);
    FUN_02132f7c(PTR_DAT_04caa108);
    FUN_02132f7c(PTR_DAT_04caa120);
    bRam0000000004f9cacb = 1;
  }
  uVar10 = *(undefined8 *)(param_5 + 0xf0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (*(char *)(param_5 + 0x134) == '\0') {
    bVar9 = false;
  }
  else {
    bVar9 = _UNK_00e207ec < *(float *)(param_5 + 0x278);
  }
  if ((*(long *)(param_5 + 0xf8) == 0) ||
     (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_5 + 0xf8),0), lVar6 == 0
     )) goto LAB_024f80ac;
  bVar4 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar6,0);
  if (bVar9 != (bool)(bVar4 & 1)) {
    if ((*(long *)(param_5 + 0xf8) == 0) ||
       (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_5 + 0xf8),0),
       lVar6 == 0)) goto LAB_024f80ac;
    UnityEngine_GameObject__SetActive_43c1408(lVar6,bVar9,0);
  }
  if (bVar9 == false) {
    return;
  }
  if (*(long *)(param_5 + 0xf8) == 0) goto LAB_024f80ac;
  fVar22 = *(float *)(param_5 + 0x114);
  UnityEngine_Transform__set_localScale_43d1be0
            (*(undefined4 *)(param_5 + 0x10c),
             *(float *)(param_5 + 0x110) * (*(float *)(param_5 + 0x27c) * _UNK_00e201f4 + 1.0),
             *(long *)(param_5 + 0xf8),0);
  fVar18 = *(float *)(param_5 + 0x278) * 200.0;
  dVar11 = (double)FUN_049b52f0((double)fVar18,&stack0xffffffffffffffd8);
  if (0.0 <= fVar18) {
    if (dVar11 == 0.5) {
      fVar22 = 1.0;
      goto LAB_024f7bd0;
    }
    fVar18 = (float)(int)(fVar18 + 0.5);
  }
  else if (dVar11 == -0.5) {
    fVar22 = -1.0;
LAB_024f7bd0:
    fVar18 = (float)unaff_d8;
    if (((long)unaff_d8 & 1U) != 0) {
      fVar18 = (float)unaff_d8 + fVar22;
    }
  }
  else {
    fVar18 = (float)(int)(fVar18 + -0.5);
  }
  fVar20 = *(float *)(param_5 + 0x2c4) * 100.0;
  dVar11 = (double)FUN_049b52f0((double)fVar20,&stack0xffffffffffffffd8);
  if (0.0 <= fVar20) {
    if (dVar11 == 0.5) {
      fVar22 = 1.0;
      goto LAB_024f7c5c;
    }
    fVar20 = (float)(int)(fVar20 + 0.5);
  }
  else if (dVar11 == -0.5) {
    fVar22 = -1.0;
LAB_024f7c5c:
    fVar20 = (float)unaff_d8;
    if (((long)unaff_d8 & 1U) != 0) {
      fVar20 = (float)unaff_d8 + fVar22;
    }
  }
  else {
    fVar20 = (float)(int)(fVar20 + -0.5);
  }
  fVar18 = fVar18 / 200.0;
  fVar23 = *(float *)(param_5 + 700) * 100.0;
  dVar11 = (double)FUN_049b52f0((double)fVar23,&stack0xffffffffffffffd8);
  if (0.0 <= fVar23) {
    if (dVar11 == 0.5) {
      fVar22 = 1.0;
      goto LAB_024f7ce4;
    }
    fVar23 = (float)(int)(fVar23 + 0.5);
  }
  else if (dVar11 == -0.5) {
    fVar22 = -1.0;
LAB_024f7ce4:
    fVar23 = (float)unaff_d8;
    if (((long)unaff_d8 & 1U) != 0) {
      fVar23 = (float)unaff_d8 + fVar22;
    }
  }
  else {
    fVar23 = (float)(int)(fVar23 + -0.5);
  }
  fVar20 = fVar20 / 100.0;
  fVar23 = fVar23 / 100.0;
  fVar13 = ABS(fVar18 - *(float *)(param_5 + 0x138));
  if (((fVar13 < _UNK_00e20948) &&
      (fVar13 = ABS(fVar20 - *(float *)(param_5 + 0x2b0)), fVar13 < _UNK_00e20948)) &&
     (fVar13 = ABS(fVar23 - *(float *)(param_5 + 0x2b4)), fVar13 < _UNK_00e20948)) {
    fVar22 = *(float *)(param_5 + 0x2b8);
    fVar13 = ABS(*(float *)(param_5 + 0x2c0) - fVar22);
    if (fVar13 < _UNK_00e20948) {
      return;
    }
  }
  plVar1 = (long *)(param_5 + 0x2a8);
  *(float *)(param_5 + 0x138) = fVar18;
  *(float *)(param_5 + 0x2b0) = fVar20;
  *(float *)(param_5 + 0x2b4) = fVar23;
  *(undefined4 *)(param_5 + 0x2b8) = *(undefined4 *)(param_5 + 0x2c0);
  if (*(long *)(param_5 + 0x2a8) == 0) {
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa0d8);
    UnityEngine_MaterialPropertyBlock___ctor_4372b28(lVar6,0);
    *plVar1 = lVar6;
    thunk_FUN_02134474(plVar1,lVar6);
  }
  if (*(char *)(param_5 + 0x2c8) != '\0') {
    if (*plVar1 == 0) goto LAB_024f80ac;
    UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c
              (fVar23,*plVar1,*(undefined8 *)PTR_DAT_04cbdf38,0);
    if (*plVar1 == 0) goto LAB_024f80ac;
    UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c
              (*(undefined4 *)(param_5 + 0x2c0),*plVar1,*(undefined8 *)PTR_DAT_04cbdf40,0);
    if (*(char *)(param_5 + 0x2dc) != '\0') {
      if (*plVar1 == 0) goto LAB_024f80ac;
      param_4 = *(float *)(param_5 + 0x2d8);
      fVar22 = *(float *)(param_5 + 0x2d4);
      fVar13 = *(float *)(param_5 + 0x2d0);
      UnityEngine_MaterialPropertyBlock__SetVector_4372e60
                (*(undefined4 *)(param_5 + 0x2cc),*plVar1,*(undefined8 *)PTR_DAT_04cbdf28,0);
    }
  }
  if (*(char *)(param_5 + 0x2e0) == '\0') {
    if (*(char *)(param_5 + 0x30) == '\0') {
      uVar2 = *(undefined1 *)(param_5 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar23 = (float)Dino_BusSand_View_PackPalette__Main_2390528(uVar2,0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar23 = (float)Dino_BusSand_View_PackPalette__get_HiddenMain_2390720(0);
    }
  }
  else {
    param_4 = *(float *)(param_5 + 0x2f0);
    fVar22 = *(float *)(param_5 + 0x2ec);
    fVar13 = *(float *)(param_5 + 0x2e8);
    fVar23 = *(float *)(param_5 + 0x2e4);
  }
  if (*(char *)(param_5 + 0x2f4) == '\0') {
    fStack_90 = fVar13;
    fStack_70 = param_4;
    fStack_80 = fVar22;
    if (*(char *)(param_5 + 0x30) == '\0') {
      uVar2 = *(undefined1 *)(param_5 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar16 = (float)Dino_BusSand_View_PackPalette__Shadow_2390624(uVar2,0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar16 = (float)Dino_BusSand_View_PackPalette__get_HiddenShadow_2390858(0);
    }
  }
  else {
    fStack_70 = *(float *)(param_5 + 0x304);
    fStack_80 = *(float *)(param_5 + 0x300);
    fStack_90 = *(float *)(param_5 + 0x2fc);
    fVar16 = *(float *)(param_5 + 0x2f8);
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
    fVar14 = 1.0;
    if (fVar20 <= 1.0) {
      fVar14 = fVar20;
    }
    fVar15 = 0.0;
    if (0.0 <= fVar20) {
      fVar15 = fVar14;
    }
    fVar13 = fVar13 + ((float)((ulong)uVar10 >> 0x20) - fVar13) * fVar15;
    UnityEngine_MaterialPropertyBlock__SetColor_4372eb4
              (CONCAT44(fVar13,fVar23 + ((float)uVar10 - fVar23) * fVar15),fVar13,
               fVar22 + ((float)uVar12 - fVar22) * fVar15,
               param_4 + ((float)((ulong)uVar12 >> 0x20) - param_4) * fVar15,lVar6,
               *(undefined8 *)PTR_DAT_04caa100,0);
    if (*plVar1 != 0) {
      fVar20 = fVar20 * _UNK_00e20094;
      lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
      fVar22 = 1.0;
      if (fVar20 <= 1.0) {
        fVar22 = fVar20;
      }
      uVar12 = *(undefined8 *)(lVar6 + 0xd0);
      uVar10 = *(undefined8 *)(lVar6 + 200);
      fVar23 = 0.0;
      if (0.0 <= fVar20) {
        fVar23 = fVar22;
      }
      fStack_90 = fStack_90 + ((float)((ulong)uVar10 >> 0x20) - fStack_90) * fVar23;
      UnityEngine_MaterialPropertyBlock__SetColor_4372eb4
                (CONCAT44(fStack_90,fVar16 + ((float)uVar10 - fVar16) * fVar23),fStack_90,
                 fStack_80 + ((float)uVar12 - fStack_80) * fVar23,
                 fStack_70 + ((float)((ulong)uVar12 >> 0x20) - fStack_70) * fVar23,*plVar1,
                 *(undefined8 *)PTR_DAT_04caa108,0);
      if (*plVar1 != 0) {
        UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c
                  (fVar18,*plVar1,*(undefined8 *)PTR_DAT_04caa120,0);
        lVar6 = *(long *)(param_5 + 0xf0);
        if (lVar6 != 0) {
          lVar7 = *plVar1;
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

