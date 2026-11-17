/* IL2CPP: Dino.BusSand.View.GrainParticles$$LateUpdate
void Dino_BusSand_View_GrainParticles__LateUpdate (Dino_BusSand_View_GrainParticles_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GrainParticles$$LateUpdate
   void Dino_BusSand_View_GrainParticles__LateUpdate (Dino_BusSand_View_GrainParticles_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_View_GrainParticles__LateUpdate_23b5fb4
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,long param_4)

{
  undefined8 *puVar1;
  int iVar2;
  float *pfVar3;
  char cVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  char *pcVar15;
  long lVar16;
  undefined8 uVar17;
  int iVar18;
  undefined8 uVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  if ((bRam0000000004f9c986 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc358);
    FUN_02132f7c(PTR_DAT_04cbc9a8);
    FUN_02132f7c(PTR_DAT_04cbc9b0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c986 = 1;
  }
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uVar26 = UnityEngine_Time__get_deltaTime_43cd5e8(0);
  iVar20 = *(int *)(param_4 + 0x30);
  fVar27 = (float)NEON_fminnm(uVar26,_UNK_00e2043c);
  uVar11 = (ulong)(uint)*(float *)(param_4 + 0x174);
  *(int *)(param_4 + 0x160) = *(int *)(param_4 + 0x160) + 1;
  uVar19 = _UNK_00e698f0;
  fVar9 = _UNK_00e205ec;
  fVar8 = _UNK_00e201f8;
  fVar7 = _UNK_00e20094;
  fVar27 = *(float *)(param_4 + 0x174) * fVar27;
  if (0 < iVar20) {
    lVar22 = 0;
LAB_024b60ac:
    iVar20 = (int)lVar22;
    lVar22 = (long)iVar20;
    lVar16 = (long)iVar20 * 0x88 + 0x98;
    do {
      fVar33 = (float)param_3;
      lVar24 = *(long *)(param_4 + 0x20);
      if (lVar24 == 0) goto LAB_024b6cdc;
      uVar21 = (uint)lVar22;
      if (*(uint *)(lVar24 + 0x18) <= uVar21) goto LAB_024b6ce0;
      lVar23 = lVar24 + lVar16;
      if (0.0 < fVar27) {
        *(undefined8 *)(lVar23 + -0x44) = *(undefined8 *)(lVar23 + -0x74);
        *(undefined4 *)(lVar23 + -0x3c) = *(undefined4 *)(lVar23 + -0x6c);
      }
      cVar4 = *(char *)(lVar23 + -0x78);
      fVar40 = fVar27 + *(float *)(lVar23 + -0x38);
      *(float *)(lVar23 + -0x38) = fVar40;
      fVar28 = (float)uVar19;
      fVar35 = (float)((ulong)uVar19 >> 0x20);
      if (cVar4 == '\x03') {
        lVar12 = lVar24 + lVar16;
        uVar34 = *(uint *)(lVar12 + -0x1c);
        if ((int)uVar34 < 0) {
LAB_024b6368:
          uVar17 = 0;
        }
        else {
          lVar14 = *(long *)(param_4 + 0x138);
          if (lVar14 == 0) goto LAB_024b6cdc;
          if (*(int *)(lVar14 + 0x18) <= (int)uVar34) goto LAB_024b6368;
          uVar17 = *(undefined8 *)(lVar14 + (ulong)uVar34 * 8 + 0x20);
        }
        uVar42 = *(undefined8 *)(lVar12 + -0x50);
        fVar33 = *(float *)(lVar12 + -0x48);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar25 = UnityEngine_Object__op_Equality_43c6f30(uVar17,0,0);
        if ((uVar25 & 1) == 0) {
          if (0.0 <= *(float *)(lVar23 + -0x38)) {
            lVar14 = lVar24 + lVar16;
            fVar40 = *(float *)(lVar14 + -0x68);
            uVar11 = (ulong)(uint)fVar40;
            pfVar3 = (float *)(param_4 + 0x164);
            if (*(float *)(lVar14 + -0x20) != 0.0) {
              pfVar3 = (float *)(lVar14 + -0x20);
            }
            fVar30 = *(float *)(lVar14 + -100) + fVar27 * *pfVar3;
            param_3 = (ulong)(uint)fVar30;
            *(float *)(lVar14 + -100) = fVar30;
            fVar31 = (float)*(undefined8 *)(lVar12 + -0x4c) + fVar30 * fVar27;
            *(float *)(lVar12 + -0x50) = *(float *)(lVar12 + -0x50) + fVar27 * fVar40;
            *(ulong *)(lVar12 + -0x4c) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + -0x4c) >> 0x20) +
                          *(float *)(lVar14 + -0x60) * fVar27,fVar31);
            if (fVar31 < *(float *)(lVar14 + -0x18)) {
              *(float *)(lVar12 + -0x4c) = *(float *)(lVar14 + -0x18);
              uVar11 = CONCAT44(fVar30 * fVar35,fVar40 * fVar28);
              *(float *)(lVar14 + -0x60) = *(float *)(lVar14 + -0x60) * fVar7;
              *(ulong *)(lVar14 + -0x68) = uVar11;
            }
          }
        }
        else {
          *(undefined1 *)(lVar23 + -0x78) = 1;
          if (cRam0000000004f9b65d == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65d = '\x01';
          }
          lVar14 = lVar24 + lVar16;
          uVar29 = **(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
          uVar34 = *(uint *)(*(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
          uVar11 = (ulong)uVar34;
          *(undefined4 *)(lVar14 + -0x18) = 0;
          *(undefined8 *)(lVar14 + -0x68) = uVar29;
          *(uint *)(lVar14 + -0x60) = uVar34;
        }
        fVar40 = (float)uVar11;
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar17,0,0);
        fVar28 = (float)param_3;
        if ((uVar11 & 1) != 0) {
          fVar35 = (float)Dino_BusSand_View_GrainParticles__PassTargetPos_23b4f8c
                                    (param_4,*(undefined4 *)(lVar12 + -0x1c));
          lVar14 = lVar24 + lVar16;
          fVar28 = fVar28 + *(float *)(lVar12 + -0x48);
          param_3 = (ulong)(uint)fVar28;
          fVar30 = (float)*(undefined8 *)(lVar12 + -0x50);
          fVar35 = fVar35 + fVar30;
          fVar31 = (float)((ulong)*(undefined8 *)(lVar12 + -0x50) >> 0x20);
          fVar40 = fVar40 + fVar31;
          *(float *)(lVar14 + -0x6c) = fVar28;
          *(ulong *)(lVar14 + -0x74) = CONCAT44(fVar40,fVar35);
          if (0.0 < fVar27) {
            *(ulong *)(lVar14 + -0x44) =
                 CONCAT44(fVar40 - (fVar31 - (float)((ulong)uVar42 >> 0x20)),
                          fVar35 - (fVar30 - (float)uVar42));
            *(float *)(lVar14 + -0x3c) = fVar28 - (*(float *)(lVar12 + -0x48) - fVar33);
          }
        }
        fVar33 = *(float *)(lVar24 + lVar16 + -0x34);
        uVar11 = (ulong)(uint)fVar33;
        if (fVar33 <= *(float *)(lVar23 + -0x38)) goto LAB_024b6700;
      }
      else if (cVar4 == '\x02') {
        if (0.0 <= fVar40) {
          lVar23 = lVar24 + lVar16;
          fVar33 = *(float *)(lVar23 + -0x60);
          pfVar3 = (float *)(lVar23 + -0x24);
          if (*(float *)(lVar23 + -0x24) <= 0.0) {
            pfVar3 = (float *)(param_4 + 0x178);
          }
          fVar28 = (float)expf(-(*pfVar3 * fVar27));
          fVar33 = fVar33 * fVar28;
          fVar35 = (float)*(undefined8 *)(lVar23 + -0x68) * fVar28;
          fVar28 = (float)((ulong)*(undefined8 *)(lVar23 + -0x68) >> 0x20) * fVar28;
          *(float *)(lVar23 + -0x60) = fVar33;
          pfVar3 = (float *)(param_4 + 0x17c);
          if (*(float *)(lVar23 + -0x20) != 0.0) {
            pfVar3 = (float *)(lVar23 + -0x20);
          }
          *(ulong *)(lVar23 + -0x68) = CONCAT44(fVar28,fVar35);
          fVar30 = fVar27 * *pfVar3;
          fVar35 = fVar35 + (float)*(undefined8 *)(param_4 + 0x180) * fVar30;
          fVar28 = fVar28 + (float)((ulong)*(undefined8 *)(param_4 + 0x180) >> 0x20) * fVar30;
          fVar33 = fVar33 + *(float *)(param_4 + 0x188) * fVar30;
          uVar11 = (ulong)(uint)fVar33;
          *(ulong *)(lVar23 + -0x68) = CONCAT44(fVar28,fVar35);
          *(float *)(lVar23 + -0x60) = fVar33;
          param_3 = CONCAT44((float)((ulong)*(undefined8 *)(lVar23 + -0x74) >> 0x20) +
                             fVar28 * fVar27,
                             (float)*(undefined8 *)(lVar23 + -0x74) + fVar35 * fVar27);
          *(ulong *)(lVar23 + -0x74) = param_3;
          *(float *)(lVar23 + -0x6c) = *(float *)(lVar23 + -0x6c) + fVar27 * fVar33;
        }
        if ((*(float *)(lVar24 + lVar16 + -0x34) <= fVar40) ||
           (fVar33 = *(float *)(param_4 + 0x170), uVar11 = (ulong)(uint)fVar33,
           *(float *)(lVar24 + lVar16 + -0x70) < fVar33)) goto LAB_024b6700;
      }
      else if (cVar4 == '\0') {
        if (0.0 <= fVar40) {
          lVar23 = lVar24 + lVar16;
          fVar40 = fVar40 / *(float *)(lVar23 + -0x34);
          fVar28 = 1.0;
          if (fVar40 <= 1.0) {
            fVar28 = fVar40;
          }
          fVar35 = 0.0;
          if (0.0 <= fVar40) {
            fVar35 = fVar28;
          }
          fVar30 = fVar35 * fVar35;
          fVar41 = fVar30 * (fVar35 * fVar8 + fVar9);
          fVar28 = (float)Dino_BusSand_View_GrainParticles__PassTargetPos_23b4f8c
                                    (param_4,*(undefined4 *)(lVar23 + -0x1c));
          fVar36 = *(float *)(lVar23 + -0x54);
          fVar31 = (float)*(undefined8 *)(lVar23 + -0x5c);
          fVar32 = (float)((ulong)*(undefined8 *)(lVar23 + -0x5c) >> 0x20);
          fVar37 = fVar31 + (fVar28 - fVar31) * 0.5 + (float)*(undefined8 *)(lVar23 + -0x50);
          fVar38 = fVar32 + (fVar30 - fVar32) * 0.5 +
                   (float)((ulong)*(undefined8 *)(lVar23 + -0x50) >> 0x20);
          fVar40 = 1.0;
          if (fVar41 <= 1.0) {
            fVar40 = fVar41;
          }
          fVar39 = fVar36 + (fVar33 - fVar36) * 0.5 + *(float *)(lVar23 + -0x48);
          fVar6 = 0.0;
          if (0.0 <= fVar41) {
            fVar6 = fVar40;
          }
          fVar31 = fVar31 + (fVar37 - fVar31) * fVar6;
          fVar32 = fVar32 + (fVar38 - fVar32) * fVar6;
          fVar36 = fVar36 + (fVar39 - fVar36) * fVar6;
          fVar33 = fVar6 * ((fVar39 + (fVar33 - fVar39) * fVar6) - fVar36);
          param_3 = (ulong)(uint)fVar33;
          fVar36 = fVar36 + fVar33;
          uVar11 = (ulong)(uint)fVar36;
          *(ulong *)(lVar23 + -0x74) =
               CONCAT44(fVar32 + ((fVar38 + (fVar30 - fVar38) * fVar6) - fVar32) * fVar6,
                        fVar31 + ((fVar37 + (fVar28 - fVar37) * fVar6) - fVar31) * fVar6);
          *(float *)(lVar23 + -0x6c) = fVar36;
          if (1.0 <= fVar35) goto LAB_024b652c;
        }
      }
      else {
        lVar24 = lVar24 + lVar16;
        fVar33 = *(float *)(lVar24 + -0x68);
        uVar11 = (ulong)(uint)fVar33;
        fVar30 = *(float *)(lVar24 + -100) + fVar27 * *(float *)(param_4 + 0x164);
        param_3 = (ulong)(uint)fVar30;
        *(float *)(lVar24 + -100) = fVar30;
        *(float *)(lVar24 + -0x74) = *(float *)(lVar24 + -0x74) + fVar27 * fVar33;
        pfVar3 = (float *)(param_4 + 0x170);
        if (*(float *)(lVar24 + -0x18) != 0.0) {
          pfVar3 = (float *)(lVar24 + -0x18);
        }
        fVar31 = (float)*(undefined8 *)(lVar24 + -0x70) + fVar30 * fVar27;
        *(ulong *)(lVar24 + -0x70) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar24 + -0x70) >> 0x20) +
                      *(float *)(lVar24 + -0x60) * fVar27,fVar31);
        if (fVar31 < *pfVar3) {
          *(float *)(lVar24 + -0x70) = *pfVar3;
          uVar11 = CONCAT44(fVar30 * fVar35,fVar33 * fVar28);
          *(float *)(lVar24 + -0x60) = *(float *)(lVar24 + -0x60) * fVar7;
          *(ulong *)(lVar24 + -0x68) = uVar11;
        }
        if (*(float *)(lVar24 + -0x34) <= fVar40) goto LAB_024b6700;
      }
      iVar20 = *(int *)(param_4 + 0x30);
      lVar22 = lVar22 + 1;
      lVar16 = lVar16 + 0x88;
      if (iVar20 <= lVar22) break;
    } while( true );
  }
LAB_024b6754:
  if (iVar20 != 0) {
    uVar19 = *(undefined8 *)(param_4 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar19,0,0);
    puVar10 = PTR_DAT_04cbc358;
    fVar9 = _UNK_00e20948;
    fVar8 = _UNK_00e20590;
    fVar7 = _UNK_00e201f4;
    if ((uVar11 & 1) != 0) {
      return;
    }
    if (*(int *)(param_4 + 0x30) < 1) {
      return;
    }
    fVar33 = 1.0;
    iVar18 = 0;
    iVar20 = 0;
    uVar11 = 0;
    do {
      lVar22 = *(long *)(param_4 + 0x20);
      if (lVar22 == 0) goto LAB_024b6cdc;
      if (*(uint *)(lVar22 + 0x18) <= uVar11) {
LAB_024b6ce0:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      lVar22 = lVar22 + 0x20;
      pcVar15 = (char *)(lVar22 + uVar11 * 0x88);
      fVar40 = 0.0;
      fVar28 = *(float *)(pcVar15 + 0x40);
      cVar4 = *pcVar15;
      if (0.0 <= fVar28) {
        fVar35 = *(float *)(lVar22 + uVar11 * 0x88 + 0x44);
        if (cVar4 == '\0') {
          fVar35 = fVar28 / fVar35;
          fVar30 = fVar33;
          if (fVar35 <= 1.0) {
            fVar30 = fVar35;
          }
          fVar40 = fVar33;
          if (0.0 <= fVar35) {
            fVar40 = fVar30 * -0.25 + 1.0;
          }
        }
        else {
          fVar30 = fVar8;
          if (cVar4 == '\x03') {
            fVar30 = fVar7;
          }
          fVar30 = (fVar35 - fVar28) / fVar30;
          fVar35 = fVar33;
          if (fVar30 <= 1.0) {
            fVar35 = fVar30;
          }
          fVar40 = 0.0;
          if (0.0 <= fVar30) {
            fVar40 = fVar35;
          }
        }
        fVar40 = *(float *)(pcVar15 + 0x48) * fVar40;
      }
      iVar5 = 0x1fff - iVar20;
      iVar2 = iVar18;
      if (cVar4 == '\x02') {
        iVar20 = iVar20 + 1;
        iVar2 = iVar5;
      }
      lVar16 = lVar22 + uVar11 * 0x88;
      if (cVar4 == '\x02') {
        fVar30 = *(float *)(param_4 + 0x130);
        fVar35 = *(float *)(lVar16 + 0x44);
        if (*(float *)(lVar16 + 0x44) <= fVar9) {
          fVar35 = fVar9;
        }
        fVar28 = fVar28 / fVar35;
        uVar19 = CONCAT44((float)((ulong)*(undefined8 *)(lVar16 + 4) >> 0x20) -
                          (float)((ulong)*(undefined8 *)(lVar16 + 0x10) >> 0x20) * fVar30,
                          (float)*(undefined8 *)(lVar16 + 4) -
                          (float)*(undefined8 *)(lVar16 + 0x10) * fVar30);
        fVar31 = fVar33;
        if (fVar28 <= 1.0) {
          fVar31 = fVar28;
        }
        fVar30 = *(float *)(lVar16 + 0xc) - *(float *)(lVar16 + 0x18) * fVar30;
        fVar35 = 0.0;
        if (0.0 <= fVar28) {
          fVar35 = fVar31;
        }
      }
      else {
        iVar18 = iVar18 + 1;
        fVar35 = 0.0;
        if (fVar28 <= fVar27) {
          uVar19 = *(undefined8 *)(lVar16 + 4);
          fVar30 = *(float *)(lVar16 + 0xc);
        }
        else {
          uVar19 = *(undefined8 *)(lVar16 + 0x34);
          fVar30 = *(float *)(lVar16 + 0x3c);
        }
      }
      uVar25 = 0;
      lVar22 = lVar22 + uVar11 * 0x88;
      lVar16 = -0x130;
      lVar24 = (long)(iVar2 * 4) * 0x4c;
      do {
        lVar23 = *(long *)(param_4 + 0x28);
        if (lVar23 == 0) goto LAB_024b6cdc;
        if (*(uint *)(lVar23 + 0x18) <= (uint)(iVar2 * 4 + (int)uVar25)) goto LAB_024b6ce0;
        uVar17 = *(undefined8 *)(lVar22 + 4);
        lVar12 = lVar23 + lVar24 + lVar16;
        *(undefined4 *)(lVar12 + 0x158) = *(undefined4 *)(lVar22 + 0xc);
        *(undefined8 *)(lVar12 + 0x150) = uVar17;
        lVar12 = *(long *)puVar10;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar12 = *(long *)puVar10;
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
        if (lVar12 == 0) goto LAB_024b6cdc;
        if (*(uint *)(lVar12 + 0x18) <= uVar25) goto LAB_024b6ce0;
        lVar14 = uVar25 * 8;
        uVar25 = uVar25 + 1;
        lVar23 = lVar23 + lVar24 + lVar16;
        lVar16 = lVar16 + 0x4c;
        uVar17 = *(undefined8 *)(lVar12 + lVar14 + 0x20);
        *(float *)(lVar23 + 0x164) = fVar40;
        *(float *)(lVar23 + 0x168) = fVar35;
        *(float *)(lVar23 + 0x174) = fVar30;
        *(undefined8 *)(lVar23 + 0x16c) = uVar19;
        *(undefined8 *)(lVar23 + 0x15c) = uVar17;
        *(undefined4 *)(lVar23 + 0x178) = 0;
        uVar17 = *(undefined8 *)(lVar22 + 0x68);
        *(undefined8 *)(lVar23 + 0x184) = *(undefined8 *)(lVar22 + 0x70);
        *(undefined8 *)(lVar23 + 0x17c) = uVar17;
        uVar17 = *(undefined8 *)(lVar22 + 0x78);
        *(undefined8 *)(lVar23 + 0x194) = *(undefined8 *)(lVar22 + 0x80);
        *(undefined8 *)(lVar23 + 0x18c) = uVar17;
      } while (lVar16 != 0);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < *(int *)(param_4 + 0x30));
    if (0 < iVar18) {
      if (*(long *)(param_4 + 0x38) == 0) goto LAB_024b6cdc;
      UnityEngine_Mesh__SetVertexBufferData_GrainParticles_GrainVertex__27fb67c
                (*(long *)(param_4 + 0x38),*(undefined8 *)(param_4 + 0x28),0,0,iVar18 << 2,0,0xf,
                 *(undefined8 *)PTR_DAT_04cbc9b0);
      lVar22 = *(long *)(param_4 + 0x38);
      UnityEngine_Rendering_SubMeshDescriptor___ctor_43df430(&uStack_d0,0,iVar18 * 6,0,0);
      if (*(long *)(param_4 + 0x38) == 0) goto LAB_024b6cdc;
      UnityEngine_Mesh__get_bounds_438fac4(&uStack_e8,*(long *)(param_4 + 0x38),0);
      uStack_a8 = CONCAT44(iVar18 << 2,(undefined4)uStack_a8);
      uStack_c8 = uStack_e0;
      uStack_d0 = uStack_e8;
      uStack_c0 = uStack_d8;
      if (lVar22 == 0) goto LAB_024b6cdc;
      uStack_118 = uStack_e0;
      uStack_120 = uStack_e8;
      uStack_108 = uStack_b8;
      uStack_110 = uStack_d8;
      uStack_f8 = uStack_a8;
      uStack_100 = uStack_b0;
      UnityEngine_Mesh__SetSubMesh_438f620(lVar22,0,&uStack_120,0xf,0);
      uVar19 = *(undefined8 *)(param_4 + 0x38);
      if (cRam0000000004f9b65b == '\0') {
        FUN_02132f7c(PTR_DAT_04caa1f8);
        cRam0000000004f9b65b = '\x01';
      }
      lVar22 = *(long *)(*(long *)PTR_DAT_04caa1f8 + 0xb8);
      uStack_158 = *(undefined8 *)(lVar22 + 0x48);
      uStack_160 = *(undefined8 *)(lVar22 + 0x40);
      uStack_148 = *(undefined8 *)(lVar22 + 0x58);
      uStack_150 = *(undefined8 *)(lVar22 + 0x50);
      uStack_138 = *(undefined8 *)(lVar22 + 0x68);
      uStack_140 = *(undefined8 *)(lVar22 + 0x60);
      uStack_128 = *(undefined8 *)(lVar22 + 0x78);
      uStack_130 = *(undefined8 *)(lVar22 + 0x70);
      if (*(int *)(*(long *)PTR_DAT_04cbc9a8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uStack_198 = uStack_158;
      uStack_1a0 = uStack_160;
      uStack_188 = uStack_148;
      uStack_190 = uStack_150;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_178 = uStack_138;
      uStack_180 = uStack_140;
      uStack_168 = uStack_128;
      uStack_170 = uStack_130;
      uStack_1b0 = 0;
      UnityEngine_Graphics__RenderMesh_436c008(param_4 + 0x48,uVar19,0,&uStack_1a0,&uStack_1f0,0);
    }
    if (0 < iVar20) {
      uVar19 = *(undefined8 *)(param_4 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar19,0,0);
      if ((uVar11 & 1) != 0) {
        if (*(long *)(param_4 + 0x38) != 0) {
          iVar18 = (0x2000 - iVar20) * 4;
          UnityEngine_Mesh__SetVertexBufferData_GrainParticles_GrainVertex__27fb67c
                    (*(long *)(param_4 + 0x38),*(undefined8 *)(param_4 + 0x28),iVar18,iVar18,
                     iVar20 << 2,0,0xf,*(undefined8 *)PTR_DAT_04cbc9b0);
          lVar22 = *(long *)(param_4 + 0x38);
          UnityEngine_Rendering_SubMeshDescriptor___ctor_43df430
                    (&uStack_d0,(0x2000 - iVar20) * 6,iVar20 * 6,0,0);
          if (*(long *)(param_4 + 0x38) != 0) {
            UnityEngine_Mesh__get_bounds_438fac4(&uStack_e8,*(long *)(param_4 + 0x38),0);
            uStack_a8 = CONCAT44(iVar20 << 2,iVar18);
            uStack_c8 = uStack_e0;
            uStack_d0 = uStack_e8;
            uStack_c0 = uStack_d8;
            if (lVar22 != 0) {
              uStack_218 = uStack_e0;
              uStack_220 = uStack_e8;
              uStack_208 = uStack_b8;
              uStack_210 = uStack_d8;
              uStack_1f8 = uStack_a8;
              uStack_200 = uStack_b0;
              UnityEngine_Mesh__SetSubMesh_438f620(lVar22,1,&uStack_220,0xf,0);
              uVar19 = *(undefined8 *)(param_4 + 0x38);
              if (cRam0000000004f9b65b == '\0') {
                FUN_02132f7c(PTR_DAT_04caa1f8);
                cRam0000000004f9b65b = '\x01';
              }
              lVar22 = *(long *)(*(long *)PTR_DAT_04caa1f8 + 0xb8);
              uStack_158 = *(undefined8 *)(lVar22 + 0x48);
              uStack_160 = *(undefined8 *)(lVar22 + 0x40);
              uStack_148 = *(undefined8 *)(lVar22 + 0x58);
              uStack_150 = *(undefined8 *)(lVar22 + 0x50);
              uStack_138 = *(undefined8 *)(lVar22 + 0x68);
              uStack_140 = *(undefined8 *)(lVar22 + 0x60);
              uStack_128 = *(undefined8 *)(lVar22 + 0x78);
              uStack_130 = *(undefined8 *)(lVar22 + 0x70);
              if (*(int *)(*(long *)PTR_DAT_04cbc9a8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uStack_258 = uStack_158;
              uStack_260 = uStack_160;
              uStack_248 = uStack_148;
              uStack_250 = uStack_150;
              uStack_2a8 = 0;
              uStack_2b0 = 0;
              uStack_298 = 0;
              uStack_2a0 = 0;
              uStack_288 = 0;
              uStack_290 = 0;
              uStack_278 = 0;
              uStack_280 = 0;
              uStack_238 = uStack_138;
              uStack_240 = uStack_140;
              uStack_228 = uStack_128;
              uStack_230 = uStack_130;
              uStack_270 = 0;
              UnityEngine_Graphics__RenderMesh_436c008
                        (param_4 + 0xc0,uVar19,1,&uStack_260,&uStack_2b0,0);
              return;
            }
          }
        }
LAB_024b6cdc:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
  return;
LAB_024b652c:
  lVar12 = *(long *)(param_4 + 0x148);
  if (lVar12 == 0) goto LAB_024b6cdc;
  uVar34 = *(uint *)(lVar23 + -0x1c);
  if ((int)uVar34 < (int)*(uint *)(lVar12 + 0x18)) {
    if (*(uint *)(lVar12 + 0x18) <= uVar34) goto LAB_024b6ce0;
    lVar12 = *(long *)(lVar12 + (long)(int)uVar34 * 8 + 0x20);
    if (lVar12 != 0) {
      (**(code **)(lVar12 + 0x18))
                (*(undefined8 *)(lVar12 + 0x40),(long)(int)uVar34,*(undefined8 *)(lVar12 + 0x28));
    }
  }
  if (0.0 < *(float *)(param_4 + 0x168)) {
    fVar33 = (float)UnityEngine_Random__get_value_43b6570(0);
    fVar40 = *(float *)(param_4 + 0x168);
    uVar11 = (ulong)(uint)fVar40;
    if ((fVar33 < fVar40) && (*(int *)(param_4 + 0x30) < 0x1fff)) {
      fVar33 = (float)UnityEngine_Random__get_insideUnitCircle_43b665c(0);
      uVar34 = *(uint *)(param_4 + 0x30);
      lVar12 = *(long *)(param_4 + 0x20);
      fVar28 = *(float *)(param_4 + 0x16c);
      *(uint *)(param_4 + 0x30) = uVar34 + 1;
      if (lVar12 == 0) goto LAB_024b6cdc;
      if (*(uint *)(lVar12 + 0x18) <= uVar34) goto LAB_024b6ce0;
      puVar13 = (undefined1 *)(lVar12 + 0x20 + (long)(int)uVar34 * 0x88);
      *puVar13 = 3;
      uVar17 = *(undefined8 *)(lVar23 + -0x74);
      *(undefined4 *)(puVar13 + 0xc) = *(undefined4 *)(lVar23 + -0x6c);
      *(undefined8 *)(puVar13 + 4) = uVar17;
      cVar4 = cRam0000000004f9b65d;
      uVar17 = *(undefined8 *)(lVar23 + -0x74);
      *(undefined4 *)(puVar13 + 0x3c) = *(undefined4 *)(lVar23 + -0x6c);
      *(undefined8 *)(puVar13 + 0x34) = uVar17;
      if (cVar4 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65d = '\x01';
      }
      lVar12 = lVar12 + 0x20 + (long)(int)uVar34 * 0x88;
      uVar34 = *(uint *)(*(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
      param_3 = (ulong)uVar34;
      *(undefined8 *)(lVar12 + 0x28) = **(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      fVar35 = _UNK_00e200f8;
      *(uint *)(lVar12 + 0x30) = uVar34;
      fVar31 = *(float *)(param_4 + 0x16c);
      fVar30 = (float)UnityEngine_Random__Range_43b64a8(fVar35,fVar9,0);
      *(float *)(lVar12 + 0x10) = fVar33 * fVar28;
      *(float *)(lVar12 + 0x14) = fVar31 * fVar30;
      *(float *)(lVar12 + 0x18) = fVar40 * fVar28;
      uVar26 = UnityEngine_Random__Range_43b64a8(_UNK_00e208cc,_UNK_00e206e4,0);
      *(undefined4 *)(lVar12 + 0x40) = 0;
      puVar1 = (undefined8 *)(lVar24 + lVar16);
      uVar11 = (ulong)(uint)fVar35;
      *(undefined4 *)(lVar12 + 0x44) = uVar26;
      *(float *)(lVar12 + 0x48) = *(float *)(puVar1 + -6) * fVar35;
      uVar26 = *(undefined4 *)((long)puVar1 + -0x14);
      *(undefined4 *)(lVar12 + 0x4c) = 0;
      *(undefined4 *)(lVar12 + 100) = uVar26;
      *(undefined4 *)(lVar12 + 0x5c) = *(undefined4 *)(lVar23 + -0x1c);
      uVar17 = puVar1[-2];
      *(undefined8 *)(lVar12 + 0x70) = puVar1[-1];
      *(undefined8 *)(lVar12 + 0x68) = uVar17;
      *(undefined4 *)(lVar12 + 0x74) = 0;
      uVar42 = puVar1[1];
      uVar17 = *puVar1;
      *(undefined4 *)(lVar12 + 0x58) = 0;
      *(undefined8 *)(lVar12 + 0x80) = uVar42;
      *(undefined8 *)(lVar12 + 0x78) = uVar17;
      *(undefined4 *)(lVar12 + 0x60) = 0xbd4ccccd;
    }
  }
LAB_024b6700:
  lVar24 = *(long *)(param_4 + 0x20);
  uVar34 = *(int *)(param_4 + 0x30) - 1;
  *(uint *)(param_4 + 0x30) = uVar34;
  if (lVar24 == 0) goto LAB_024b6cdc;
  if ((*(uint *)(lVar24 + 0x18) <= uVar34) || (*(uint *)(lVar24 + 0x18) <= uVar21))
  goto LAB_024b6ce0;
  func_0x049b5450(lVar24 + lVar16 + -0x78,lVar24 + (long)(int)uVar34 * 0x88 + 0x20,0x88);
  iVar20 = *(int *)(param_4 + 0x30);
  if (iVar20 <= (int)uVar21) goto LAB_024b6754;
  goto LAB_024b60ac;
}

