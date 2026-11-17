/* IL2CPP: Dino.BusSand.View.StageLayout$$Compute
Dino_BusSand_View_StageLayout_o* Dino_BusSand_View_StageLayout__Compute (float aspect, Dino_BusSand_Core_LevelData_o* level, float topReservePx, float bottomReservePx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.StageLayout$$Compute
   Dino_BusSand_View_StageLayout_o* Dino_BusSand_View_StageLayout__Compute (float aspect,
   Dino_BusSand_Core_LevelData_o* level, float topReservePx, float bottomReservePx, const
   MethodInfo* method); */

long Dino_BusSand_View_StageLayout__Compute_23e7174
               (undefined4 param_1,undefined1 param_2 [16],float param_3,undefined4 param_4,
               long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  float *pfVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  puVar2 = PTR_DAT_04cbc250;
  if ((bRam0000000004f9ca8d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04cbc250);
    bRam0000000004f9ca8d = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = Dino_BusSand_View_StageLayout__get_Pack_23e7030();
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  *(undefined4 *)(lVar6 + 0x11c) = 0x40400000;
  *(undefined4 *)(lVar6 + 0x140) = 0xffffffff;
  System_Object___ctor_4870e5c(lVar6,0);
  *(undefined4 *)(lVar6 + 0x10) = param_1;
  if (lVar5 != 0) {
    uVar11 = *(undefined8 *)(lVar5 + 0x18);
    *(undefined4 *)(lVar6 + 0x1c) = *(undefined4 *)(lVar5 + 0x20);
    *(undefined8 *)(lVar6 + 0x14) = uVar11;
    fVar17 = (float)((ulong)*(undefined8 *)(lVar5 + 0x24) >> 0x20) * 0.017453292;
    fVar20 = *(float *)(lVar5 + 0x2c) * _UNK_00e20a74;
    uVar13 = UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0);
    lVar9 = *(long *)puVar2;
    *(undefined4 *)(lVar6 + 0x20) = uVar13;
    *(float *)(lVar6 + 0x24) = fVar17;
    *(float *)(lVar6 + 0x28) = fVar20;
    *(undefined4 *)(lVar6 + 0x2c) = param_4;
    **(undefined4 **)(lVar9 + 0xb8) = *(undefined4 *)(lVar5 + 0x24);
    cVar3 = cRam0000000004f9c41d;
    uVar22 = *(undefined4 *)(lVar6 + 0x20);
    uVar13 = *(undefined4 *)(lVar6 + 0x24);
    uVar24 = *(undefined4 *)(lVar6 + 0x28);
    uVar26 = *(undefined4 *)(lVar6 + 0x2c);
    *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)(lVar5 + 0x30);
    if (cVar3 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9c41d = '\x01';
    }
    puVar2 = PTR_DAT_04caa208;
    lVar9 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    uVar22 = UnityEngine_Quaternion__op_Multiply_43af48c
                       (uVar22,uVar13,uVar24,uVar26,*(undefined4 *)(lVar9 + 0x48),
                        *(undefined4 *)(lVar9 + 0x4c),*(undefined4 *)(lVar9 + 0x50),0);
    cVar3 = cRam0000000004f9bcf8;
    uVar23 = *(undefined4 *)(lVar6 + 0x20);
    uVar26 = *(undefined4 *)(lVar6 + 0x24);
    uVar25 = *(undefined4 *)(lVar6 + 0x28);
    uVar27 = *(undefined4 *)(lVar6 + 0x2c);
    *(undefined4 *)(lVar6 + 0x34) = uVar22;
    *(undefined4 *)(lVar6 + 0x38) = uVar13;
    *(undefined4 *)(lVar6 + 0x3c) = uVar24;
    if (cVar3 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9bcf8 = '\x01';
    }
    lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
    uVar13 = UnityEngine_Quaternion__op_Multiply_43af48c
                       (uVar23,uVar26,uVar25,uVar27,*(undefined4 *)(lVar9 + 0x18),
                        *(undefined4 *)(lVar9 + 0x1c),*(undefined4 *)(lVar9 + 0x20),0);
    *(undefined4 *)(lVar6 + 0x40) = uVar13;
    *(undefined4 *)(lVar6 + 0x44) = uVar26;
    *(undefined4 *)(lVar6 + 0x48) = uVar25;
    if ((param_5 != 0) && (lVar9 = *(long *)(param_5 + 0x18), lVar9 != 0)) {
      iVar10 = *(int *)(lVar9 + 0x18);
      uVar13 = *(undefined4 *)(lVar5 + 100);
      fVar20 = *(float *)(lVar5 + 0x68);
      fVar17 = (float)*(int *)(lVar9 + 0x1c);
      if (iVar10 < 1) {
        iVar10 = 0xd0;
      }
      fVar28 = *(float *)(lVar5 + 0x6c);
      uVar24 = *(undefined4 *)(lVar5 + 0x70);
      if (*(int *)(lVar9 + 0x1c) < 1) {
        fVar17 = 156.0;
      }
      if (cRam0000000004f9c25f == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9c25f = '\x01';
      }
      lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
      fVar19 = fVar28;
      fVar18 = fVar20;
      fVar14 = (float)UnityEngine_Quaternion__op_Multiply_43af48c
                                (uVar13,fVar20,fVar28,uVar24,*(undefined4 *)(lVar9 + 0x3c),
                                 *(undefined4 *)(lVar9 + 0x40),*(undefined4 *)(lVar9 + 0x44),0);
      cVar3 = cRam0000000004f9bcf8;
      *(float *)(lVar6 + 0x98) = fVar14;
      *(float *)(lVar6 + 0x9c) = fVar18;
      *(float *)(lVar6 + 0xa0) = fVar19;
      if (cVar3 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9bcf8 = '\x01';
      }
      lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
      fVar16 = fVar20;
      fVar15 = fVar28;
      uVar22 = UnityEngine_Quaternion__op_Multiply_43af48c
                         (uVar13,fVar20,fVar28,uVar24,*(undefined4 *)(lVar9 + 0x18),
                          *(undefined4 *)(lVar9 + 0x1c),*(undefined4 *)(lVar9 + 0x20),0);
      *(undefined4 *)(lVar6 + 0x80) = uVar22;
      *(float *)(lVar6 + 0x84) = fVar16;
      cVar3 = cRam0000000004f9ca03;
      *(float *)(lVar6 + 0x88) = fVar15;
      if (cVar3 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9ca03 = '\x01';
      }
      lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
      fVar16 = fVar20;
      fVar15 = fVar28;
      uVar22 = UnityEngine_Quaternion__op_Multiply_43af48c
                         (uVar13,fVar20,fVar28,uVar24,*(undefined4 *)(lVar9 + 0x54),
                          *(undefined4 *)(lVar9 + 0x58),*(undefined4 *)(lVar9 + 0x5c),0);
      *(undefined4 *)(lVar6 + 0x8c) = uVar22;
      *(float *)(lVar6 + 0x90) = fVar16;
      fVar29 = (float)iVar10;
      *(float *)(lVar6 + 0x94) = fVar15;
      fVar21 = *(float *)(lVar5 + 0x74) / fVar29;
      fVar15 = *(float *)(lVar5 + 0x78) / fVar17;
      lVar9 = *(long *)(param_5 + 0x20);
      fVar16 = fVar21;
      if (fVar15 <= fVar21) {
        fVar16 = fVar15;
      }
      fVar15 = fVar16 * _UNK_00e20810;
      *(float *)(lVar6 + 0x5c) = fVar16;
      if (fVar21 <= fVar15) {
        fVar15 = fVar21;
      }
      *(float *)(lVar6 + 0x70) = fVar15;
      *(float *)(lVar6 + 100) = fVar15 * fVar29;
      *(float *)(lVar6 + 0x68) = fVar17 * fVar16;
      if (lVar9 == 0) {
        fVar17 = 10.0;
      }
      else {
        iVar7 = *(int *)(lVar9 + 0x14);
        fVar17 = (float)iVar7;
        if (iVar7 < 1) {
          fVar17 = 10.0;
        }
      }
      fVar15 = fVar15 * fVar29 * _UNK_00e20474;
      uVar23 = *(undefined4 *)(lVar6 + 0x88);
      *(float *)(lVar6 + 0x60) = fVar16 * fVar17;
      uVar25 = *(undefined4 *)(lVar6 + 0x84);
      *(float *)(lVar6 + 0x6c) = fVar15;
      uVar26 = UnityEngine_Quaternion__LookRotation_43af2a0(*(undefined4 *)(lVar6 + 0x80),0);
      *(undefined4 *)(lVar6 + 0xa4) = uVar26;
      *(undefined4 *)(lVar6 + 0xa8) = uVar25;
      *(undefined4 *)(lVar6 + 0xac) = uVar23;
      *(undefined4 *)(lVar6 + 0xb0) = uVar22;
      fVar30 = *(float *)(lVar5 + 0x60);
      uVar11 = *(undefined8 *)(lVar5 + 0x58);
      fVar16 = (float)UnityEngine_Quaternion__op_Multiply_43af48c
                                (uVar13,fVar20,fVar28,uVar24,0,0,*(undefined4 *)(lVar5 + 0x7c),0);
      fVar17 = _UNK_00e20488;
      iVar7 = 0x17;
      *(undefined4 *)(lVar6 + 0xdc) = 0;
      *(int *)(lVar6 + 0xe8) = iVar10;
      fVar21 = *(float *)(lVar6 + 100) * 0.5;
      fVar15 = *(float *)(lVar6 + 0x68) * 0.5;
      *(float *)(lVar6 + 0x7c) =
           ((fVar30 + fVar28 + *(float *)(lVar6 + 0x94) * fVar17) - fVar19 * fVar21) -
           *(float *)(lVar6 + 0x88) * fVar15;
      *(ulong *)(lVar6 + 0x74) =
           CONCAT44((((float)((ulong)uVar11 >> 0x20) + fVar20 +
                     (float)((ulong)*(undefined8 *)(lVar6 + 0x8c) >> 0x20) * 0.012) -
                    fVar18 * fVar21) -
                    (float)((ulong)*(undefined8 *)(lVar6 + 0x80) >> 0x20) * fVar15,
                    (((float)uVar11 + fVar16 + (float)*(undefined8 *)(lVar6 + 0x8c) * 0.012) -
                    fVar14 * fVar21) - (float)*(undefined8 *)(lVar6 + 0x80) * fVar15);
      fVar17 = *(float *)(lVar5 + 0x80);
      uVar13 = *(undefined4 *)(lVar5 + 0x84);
      lVar9 = *(long *)(param_5 + 0x20);
      *(float *)(lVar6 + 0xc4) = fVar17;
      *(undefined4 *)(lVar6 + 0xb8) = uVar13;
      if ((lVar9 != 0) && (iVar7 = *(int *)(lVar9 + 0x1c), iVar7 < 1)) {
        iVar7 = 0x17;
      }
      *(int *)(lVar6 + 0xec) = iVar7;
      fVar28 = _UNK_00e2093c;
      *(float *)(lVar6 + 200) = fVar17;
      uVar1 = _UNK_00e6b798;
      uVar11 = _UNK_00e6b790;
      fVar20 = _UNK_00e208d8;
      *(undefined4 *)(lVar6 + 0xbc) = 0x3f99999a;
      *(undefined8 *)(lVar6 + 0xd4) = uVar1;
      *(undefined8 *)(lVar6 + 0xcc) = uVar11;
      *(float *)(lVar6 + 0xc0) = fVar17 + fVar20;
      *(float *)(lVar6 + 0xb4) = fVar28 / fVar29;
      fVar20 = (float)Dino_BusSand_View_StageLayout__HalfWidthAt_23e6f34(lVar6);
      *(float *)(lVar6 + 0x4c) = -fVar20;
      *(float *)(lVar6 + 0x50) = fVar20;
      uVar13 = Dino_BusSand_View_StageLayout__GroundZAt_23e6fa8(0xbf800000,lVar6);
      *(undefined4 *)(lVar6 + 0x54) = uVar13;
      uVar13 = Dino_BusSand_View_StageLayout__GroundZAt_23e6fa8(0x3f800000,lVar6);
      *(undefined4 *)(lVar6 + 0x58) = uVar13;
      fVar19 = fVar20 + 3.0 + _UNK_00e1fe08;
      fVar17 = 0.0;
      if (0.0 <= fVar19) {
        fVar17 = fVar19;
      }
      if (cRam0000000004f9ba93 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa200);
        cRam0000000004f9ba93 = '\x01';
      }
      puVar2 = PTR_DAT_04caa200;
      fVar17 = fVar17 / (fVar28 / fVar29);
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        bVar4 = cRam0000000004f9ba93 == '\0';
      }
      else {
        bVar4 = false;
      }
      iVar10 = (int)fVar17;
      fVar20 = fVar20 + 3.0 + *(float *)(lVar6 + 0xd4);
      fVar28 = *(float *)(lVar6 + 0xb4);
      if (iVar10 < 2) {
        iVar10 = 1;
      }
      iVar7 = 0x1f;
      if ((float)(int)fVar17 != INFINITY) {
        iVar7 = iVar10 + 0x1e;
      }
      *(int *)(lVar6 + 0xe4) = iVar7;
      fVar17 = 0.0;
      if (0.0 <= fVar20) {
        fVar17 = fVar20;
      }
      if (bVar4) {
        FUN_02132f7c(PTR_DAT_04caa200);
        cRam0000000004f9ba93 = '\x01';
      }
      fVar17 = fVar17 / fVar28;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar10 = (int)fVar17;
      if (iVar10 < 2) {
        iVar10 = 1;
      }
      lVar9 = *(long *)(param_5 + 0x30);
      iVar7 = 0x1f;
      if ((float)(int)fVar17 != INFINITY) {
        iVar7 = iVar10 + 0x1e;
      }
      *(int *)(lVar6 + 0xe0) = iVar7;
      *(undefined4 *)(lVar6 + 0xf0) = 0x41200000;
      puVar2 = PTR_DAT_04caadd0;
      if (lVar9 != 0) {
        uVar13 = *(undefined4 *)(lVar5 + 0x88);
        *(undefined8 *)(lVar6 + 0x114) = *(undefined8 *)(lVar9 + 0x10);
        *(undefined4 *)(lVar6 + 0x104) = uVar13;
        *(undefined4 *)(lVar6 + 0xf4) = 0x410d999a;
        fVar20 = (float)Dino_BusSand_View_StageLayout__GroundZAt_23e6fa8
                                  (param_3 + param_3 + -1.0,lVar6);
        fVar17 = *(float *)(lVar5 + 0x8c);
        fVar28 = *(float *)(lVar5 + 0x84);
        *(float *)(lVar6 + 0xf8) = fVar20;
        if (fVar17 <= fVar28) {
          fVar17 = fVar28;
        }
        *(float *)(lVar6 + 0x100) = fVar17 / _UNK_00e20574;
        uVar13 = Dino_BusSand_View_StageLayout__HalfWidthAt_23e6f34(fVar20,lVar6);
        lVar5 = FUN_02133068(*(undefined8 *)puVar2,3);
        fVar17 = _UNK_00e2098c;
        if (lVar5 != 0) {
          uVar8 = (uint)*(ulong *)(lVar5 + 0x18);
          if (uVar8 != 0) {
            fVar20 = (_UNK_00e204b0 - fVar20) / ((float)*(int *)(lVar6 + 0x114) + _UNK_00e2098c);
            *(float *)(lVar5 + 0x20) = fVar20;
            if (uVar8 != 1) {
              fVar28 = (float)NEON_fminnm(uVar13,0x41a00000);
              *(float *)(lVar5 + 0x24) =
                   ((fVar28 + fVar28) * _UNK_00e208e0) / ((float)*(int *)(lVar6 + 0x118) + fVar17);
              if (2 < uVar8) {
                *(undefined4 *)(lVar5 + 0x28) = *(undefined4 *)(lVar6 + 0x100);
                if (1 < (int)uVar8) {
                  lVar9 = (*(ulong *)(lVar5 + 0x18) & 0xffffffff) - 1;
                  pfVar12 = (float *)(lVar5 + 0x24);
                  do {
                    fVar17 = *pfVar12;
                    if (fVar20 <= *pfVar12) {
                      fVar17 = fVar20;
                    }
                    fVar20 = fVar17;
                    lVar9 = lVar9 + -1;
                    pfVar12 = pfVar12 + 1;
                  } while (lVar9 != 0);
                }
                *(undefined8 *)(lVar6 + 0x108) = 0;
                fVar17 = _UNK_00e20844;
                if (_UNK_00e20844 <= fVar20) {
                  fVar17 = fVar20;
                }
                *(undefined4 *)(lVar6 + 0x110) = *(undefined4 *)(lVar6 + 0x104);
                *(float *)(lVar6 + 0xfc) = fVar17;
                return lVar6;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

