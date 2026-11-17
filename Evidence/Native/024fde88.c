/* IL2CPP: Dino.BusSand.View.VehicleView$$TickFlash
void Dino_BusSand_View_VehicleView__TickFlash (Dino_BusSand_View_VehicleView_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$TickFlash
   void Dino_BusSand_View_VehicleView__TickFlash (Dino_BusSand_View_VehicleView_o* __this, float dt,
   const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__TickFlash_23fde88
               (float param_1,undefined1 param_2 [16],float param_3,float param_4,long param_5)

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
  float fVar11;
  double dVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  double unaff_d8;
  float fVar21;
  undefined4 uVar22;
  float fStack_90;
  float fStack_80;
  float fStack_70;
  
  if ((bRam0000000004f9caf5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4e10);
    FUN_02132f7c(PTR_DAT_04cb4df8);
    FUN_02132f7c(PTR_DAT_04cb70d8);
    FUN_02132f7c(PTR_DAT_04caa100);
    FUN_02132f7c(PTR_DAT_04caa108);
    bRam0000000004f9caf5 = 1;
  }
  fVar14 = _UNK_00e204e8;
  if (*(float *)(param_5 + 0x338) < 0.0) {
    return;
  }
  param_1 = *(float *)(param_5 + 0x338) + param_1;
  fVar20 = param_1 / _UNK_00e204e8;
  *(float *)(param_5 + 0x338) = param_1;
  if (fVar20 < 1.0) {
    fVar21 = *(float *)(param_5 + 0x33c);
    if (*(char *)(param_5 + 0x2e0) == '\0') {
      if (*(char *)(param_5 + 0x30) == '\0') {
        uVar2 = *(undefined1 *)(param_5 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar11 = (float)Dino_BusSand_View_PackPalette__Main_2390528(uVar2,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar11 = (float)Dino_BusSand_View_PackPalette__get_HiddenMain_2390720(0);
      }
    }
    else {
      param_4 = *(float *)(param_5 + 0x2f0);
      param_3 = *(float *)(param_5 + 0x2ec);
      fVar14 = *(float *)(param_5 + 0x2e8);
      fVar11 = *(float *)(param_5 + 0x2e4);
    }
    if (*(char *)(param_5 + 0x2f4) == '\0') {
      fStack_70 = fVar14;
      fVar16 = param_4;
      fVar17 = param_3;
      if (*(char *)(param_5 + 0x30) == '\0') {
        uVar2 = *(undefined1 *)(param_5 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar18 = (float)Dino_BusSand_View_PackPalette__Shadow_2390624(uVar2,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar18 = (float)Dino_BusSand_View_PackPalette__get_HiddenShadow_2390858(0);
      }
    }
    else {
      fVar16 = *(float *)(param_5 + 0x304);
      fVar17 = *(float *)(param_5 + 0x300);
      fStack_70 = *(float *)(param_5 + 0x2fc);
      fVar18 = *(float *)(param_5 + 0x2f8);
    }
                    /* try { // try from 024fe068 to 025fe223 has its CatchHandler @ 024fe068
                       catch() { ... } // from try @ 024fe068 with catch @ 024fe068
                       catch() { ... } // from try @ 024fe2d4 with catch @ 024fe068
                       catch() { ... } // from try @ 024fe434 with catch @ 024fe068
                       catch() { ... } // from try @ 024fe448 with catch @ 024fe068
                       catch() { ... } // from try @ 024fe48c with catch @ 024fe068 */
    if (*(long *)(param_5 + 0x120) == 0) {
LAB_024fe15c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar20 = 1.0 - fVar20;
    fVar20 = fVar20 * fVar20 * fVar21;
    fVar21 = 1.0;
    if (fVar20 <= 1.0) {
      fVar21 = fVar20;
    }
    fVar15 = 0.0;
    if (0.0 <= fVar20) {
      fVar15 = fVar21;
    }
    fVar14 = fVar14 + ((float)((ulong)*(undefined8 *)(param_5 + 0x340) >> 0x20) - fVar14) * fVar15;
    UnityEngine_MaterialPropertyBlock__SetColor_4372eb4
              (CONCAT44(fVar14,fVar11 + ((float)*(undefined8 *)(param_5 + 0x340) - fVar11) * fVar15)
               ,fVar14,param_3 + ((float)*(undefined8 *)(param_5 + 0x348) - param_3) * fVar15,
               param_4 + ((float)((ulong)*(undefined8 *)(param_5 + 0x348) >> 0x20) - param_4) *
                         fVar15,*(long *)(param_5 + 0x120),*(undefined8 *)PTR_DAT_04caa100,0);
    if (*(long *)(param_5 + 0x120) == 0) goto LAB_024fe15c;
    fVar20 = fVar20 * 0.75;
    fVar14 = 1.0;
    if (fVar20 <= 1.0) {
      fVar14 = fVar20;
    }
    fVar21 = 0.0;
    if (0.0 <= fVar20) {
      fVar21 = fVar14;
    }
    fStack_70 = fStack_70 +
                ((float)((ulong)*(undefined8 *)(param_5 + 0x340) >> 0x20) - fStack_70) * fVar21;
    UnityEngine_MaterialPropertyBlock__SetColor_4372eb4
              (CONCAT44(fStack_70,
                        fVar18 + ((float)*(undefined8 *)(param_5 + 0x340) - fVar18) * fVar21),
               fStack_70,fVar17 + ((float)*(undefined8 *)(param_5 + 0x348) - fVar17) * fVar21,
               fVar16 + ((float)((ulong)*(undefined8 *)(param_5 + 0x348) >> 0x20) - fVar16) * fVar21
               ,*(long *)(param_5 + 0x120),*(undefined8 *)PTR_DAT_04caa108,0);
    lVar6 = *(long *)(param_5 + 0xe8);
    if (lVar6 == 0) goto LAB_024fe15c;
    lVar7 = *(long *)(param_5 + 0x120);
    goto UnityEngine_Renderer__Internal_SetPropertyBlock_4373608;
  }
  *(undefined4 *)(param_5 + 0x338) = 0xbf800000;
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
    return;
  }
  if (*(char *)(param_5 + 0x2e0) == '\0') {
    fVar20 = fVar14;
    fVar21 = param_3;
    fVar11 = param_4;
    if (*(char *)(param_5 + 0x30) == '\0') {
      uVar2 = *(undefined1 *)(param_5 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar19 = Dino_BusSand_View_PackPalette__Main_2390528(uVar2,0);
      fVar14 = fVar20;
      param_3 = fVar21;
      param_4 = fVar11;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar19 = Dino_BusSand_View_PackPalette__get_HiddenMain_2390720(0);
      fVar14 = fVar20;
      param_3 = fVar21;
      param_4 = fVar11;
    }
  }
  else {
    fVar11 = *(float *)(param_5 + 0x2f0);
    fVar21 = *(float *)(param_5 + 0x2ec);
    fVar20 = *(float *)(param_5 + 0x2e8);
    uVar19 = *(undefined4 *)(param_5 + 0x2e4);
  }
  if (*(char *)(param_5 + 0x2f4) == '\0') {
    if (*(char *)(param_5 + 0x30) == '\0') {
      uVar2 = *(undefined1 *)(param_5 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar22 = Dino_BusSand_View_PackPalette__Shadow_2390624(uVar2,0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar22 = Dino_BusSand_View_PackPalette__get_HiddenShadow_2390858(0);
    }
  }
  else {
    param_4 = *(float *)(param_5 + 0x304);
    param_3 = *(float *)(param_5 + 0x300);
    fVar14 = *(float *)(param_5 + 0x2fc);
    uVar22 = *(undefined4 *)(param_5 + 0x2f8);
  }
  if (*(long *)(param_5 + 0x120) == 0) {
LAB_024f79e4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_MaterialPropertyBlock__Clear_43729a8(*(long *)(param_5 + 0x120),0);
  if (*(long *)(param_5 + 0x120) == 0) goto LAB_024f79e4;
  UnityEngine_MaterialPropertyBlock__SetColor_4372eb4
            (uVar19,fVar20,fVar21,fVar11,*(long *)(param_5 + 0x120),*(undefined8 *)PTR_DAT_04caa100,
             0);
  if (*(long *)(param_5 + 0x120) == 0) goto LAB_024f79e4;
  UnityEngine_MaterialPropertyBlock__SetColor_4372eb4
            (uVar22,fVar14,param_3,*(long *)(param_5 + 0x120),*(undefined8 *)PTR_DAT_04caa108,0);
  if (*(long *)(param_5 + 0x120) == 0) goto LAB_024f79e4;
  uVar19 = 0x3f800000;
  if (*(char *)(param_5 + 0x134) != '\0') {
    uVar19 = 0;
  }
  UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c
            (uVar19,*(long *)(param_5 + 0x120),*(undefined8 *)PTR_DAT_04caa118,0);
  puVar3 = PTR_DAT_04ca9ae8;
  if (*(long *)(param_5 + 0x120) == 0) goto LAB_024f79e4;
  UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c
            (*(undefined4 *)(param_5 + 0x128),*(long *)(param_5 + 0x120),
             *(undefined8 *)PTR_DAT_04caa110,0);
  uVar10 = *(undefined8 *)(param_5 + 0xe8);
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
  fVar14 = *(float *)(param_5 + 0x114);
  UnityEngine_Transform__set_localScale_43d1be0
            (*(undefined4 *)(param_5 + 0x10c),
             *(float *)(param_5 + 0x110) * (*(float *)(param_5 + 0x27c) * _UNK_00e201f4 + 1.0),
             *(long *)(param_5 + 0xf8),0);
  fVar20 = *(float *)(param_5 + 0x278) * 200.0;
  dVar12 = (double)FUN_049b52f0((double)fVar20,&stack0xffffffffffffffd8);
  if (0.0 <= fVar20) {
    if (dVar12 == 0.5) {
      fVar14 = 1.0;
      goto LAB_024f7bd0;
    }
    fVar20 = (float)(int)(fVar20 + 0.5);
  }
  else if (dVar12 == -0.5) {
    fVar14 = -1.0;
LAB_024f7bd0:
    fVar20 = (float)unaff_d8;
    if (((long)unaff_d8 & 1U) != 0) {
      fVar20 = (float)unaff_d8 + fVar14;
    }
  }
  else {
    fVar20 = (float)(int)(fVar20 + -0.5);
  }
  fVar21 = *(float *)(param_5 + 0x2c4) * 100.0;
  dVar12 = (double)FUN_049b52f0((double)fVar21,&stack0xffffffffffffffd8);
  if (0.0 <= fVar21) {
    if (dVar12 == 0.5) {
      fVar14 = 1.0;
      goto LAB_024f7c5c;
    }
    fVar21 = (float)(int)(fVar21 + 0.5);
  }
  else if (dVar12 == -0.5) {
    fVar14 = -1.0;
LAB_024f7c5c:
    fVar21 = (float)unaff_d8;
    if (((long)unaff_d8 & 1U) != 0) {
      fVar21 = (float)unaff_d8 + fVar14;
    }
  }
  else {
    fVar21 = (float)(int)(fVar21 + -0.5);
  }
  fVar20 = fVar20 / 200.0;
  fVar11 = *(float *)(param_5 + 700) * 100.0;
  dVar12 = (double)FUN_049b52f0((double)fVar11,&stack0xffffffffffffffd8);
  if (0.0 <= fVar11) {
    if (dVar12 == 0.5) {
      fVar14 = 1.0;
      goto LAB_024f7ce4;
    }
    fVar11 = (float)(int)(fVar11 + 0.5);
  }
  else if (dVar12 == -0.5) {
    fVar14 = -1.0;
LAB_024f7ce4:
    fVar11 = (float)unaff_d8;
    if (((long)unaff_d8 & 1U) != 0) {
      fVar11 = (float)unaff_d8 + fVar14;
    }
  }
  else {
    fVar11 = (float)(int)(fVar11 + -0.5);
  }
  fVar21 = fVar21 / 100.0;
  fVar11 = fVar11 / 100.0;
  fVar16 = ABS(fVar20 - *(float *)(param_5 + 0x138));
  if (((fVar16 < _UNK_00e20948) &&
      (fVar16 = ABS(fVar21 - *(float *)(param_5 + 0x2b0)), fVar16 < _UNK_00e20948)) &&
     (fVar16 = ABS(fVar11 - *(float *)(param_5 + 0x2b4)), fVar16 < _UNK_00e20948)) {
    fVar14 = *(float *)(param_5 + 0x2b8);
    fVar16 = ABS(*(float *)(param_5 + 0x2c0) - fVar14);
    if (fVar16 < _UNK_00e20948) {
      return;
    }
  }
  plVar1 = (long *)(param_5 + 0x2a8);
  *(float *)(param_5 + 0x138) = fVar20;
  *(float *)(param_5 + 0x2b0) = fVar21;
  *(float *)(param_5 + 0x2b4) = fVar11;
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
              (fVar11,*plVar1,*(undefined8 *)PTR_DAT_04cbdf38,0);
    if (*plVar1 == 0) goto LAB_024f80ac;
    UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c
              (*(undefined4 *)(param_5 + 0x2c0),*plVar1,*(undefined8 *)PTR_DAT_04cbdf40,0);
    if (*(char *)(param_5 + 0x2dc) != '\0') {
      if (*plVar1 == 0) goto LAB_024f80ac;
      param_4 = *(float *)(param_5 + 0x2d8);
      fVar14 = *(float *)(param_5 + 0x2d4);
      fVar16 = *(float *)(param_5 + 0x2d0);
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
      fVar11 = (float)Dino_BusSand_View_PackPalette__Main_2390528(uVar2,0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar11 = (float)Dino_BusSand_View_PackPalette__get_HiddenMain_2390720(0);
    }
  }
  else {
    param_4 = *(float *)(param_5 + 0x2f0);
    fVar14 = *(float *)(param_5 + 0x2ec);
    fVar16 = *(float *)(param_5 + 0x2e8);
    fVar11 = *(float *)(param_5 + 0x2e4);
  }
  if (*(char *)(param_5 + 0x2f4) == '\0') {
    fStack_90 = fVar16;
    fStack_70 = param_4;
    fStack_80 = fVar14;
    if (*(char *)(param_5 + 0x30) == '\0') {
      uVar2 = *(undefined1 *)(param_5 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar17 = (float)Dino_BusSand_View_PackPalette__Shadow_2390624(uVar2,0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar17 = (float)Dino_BusSand_View_PackPalette__get_HiddenShadow_2390858(0);
    }
  }
  else {
    fStack_70 = *(float *)(param_5 + 0x304);
    fStack_80 = *(float *)(param_5 + 0x300);
    fStack_90 = *(float *)(param_5 + 0x2fc);
    fVar17 = *(float *)(param_5 + 0x2f8);
  }
  puVar3 = PTR_DAT_04cbc460;
  lVar6 = *plVar1;
  if (*(int *)(*(long *)PTR_DAT_04cbc460 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (lVar6 != 0) {
    lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
    uVar13 = *(undefined8 *)(lVar7 + 0xd0);
    uVar10 = *(undefined8 *)(lVar7 + 200);
    fVar18 = 1.0;
    if (fVar21 <= 1.0) {
      fVar18 = fVar21;
    }
    fVar15 = 0.0;
    if (0.0 <= fVar21) {
      fVar15 = fVar18;
    }
    fVar16 = fVar16 + ((float)((ulong)uVar10 >> 0x20) - fVar16) * fVar15;
    UnityEngine_MaterialPropertyBlock__SetColor_4372eb4
              (CONCAT44(fVar16,fVar11 + ((float)uVar10 - fVar11) * fVar15),fVar16,
               fVar14 + ((float)uVar13 - fVar14) * fVar15,
               param_4 + ((float)((ulong)uVar13 >> 0x20) - param_4) * fVar15,lVar6,
               *(undefined8 *)PTR_DAT_04caa100,0);
    if (*plVar1 != 0) {
      fVar21 = fVar21 * _UNK_00e20094;
      lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
      fVar14 = 1.0;
      if (fVar21 <= 1.0) {
        fVar14 = fVar21;
      }
      uVar13 = *(undefined8 *)(lVar6 + 0xd0);
      uVar10 = *(undefined8 *)(lVar6 + 200);
      fVar11 = 0.0;
      if (0.0 <= fVar21) {
        fVar11 = fVar14;
      }
      fStack_90 = fStack_90 + ((float)((ulong)uVar10 >> 0x20) - fStack_90) * fVar11;
      UnityEngine_MaterialPropertyBlock__SetColor_4372eb4
                (CONCAT44(fStack_90,fVar17 + ((float)uVar10 - fVar17) * fVar11),fStack_90,
                 fStack_80 + ((float)uVar13 - fStack_80) * fVar11,
                 fStack_70 + ((float)((ulong)uVar13 >> 0x20) - fStack_70) * fVar11,*plVar1,
                 *(undefined8 *)PTR_DAT_04caa108,0);
      if (*plVar1 != 0) {
        UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c
                  (fVar20,*plVar1,*(undefined8 *)PTR_DAT_04caa120,0);
        lVar6 = *(long *)(param_5 + 0xf0);
        if (lVar6 != 0) {
          lVar7 = *plVar1;
UnityEngine_Renderer__Internal_SetPropertyBlock_4373608:
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

