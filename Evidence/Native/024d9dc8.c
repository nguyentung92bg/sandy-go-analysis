/* IL2CPP: Dino.BusSand.View.PaintingLayer$$Bloom
void Dino_BusSand_View_PaintingLayer__Bloom (Dino_BusSand_View_PaintingLayer_o* __this, uint8_t color, System_Nullable_Vector2__o cell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PaintingLayer$$Bloom
   void Dino_BusSand_View_PaintingLayer__Bloom (Dino_BusSand_View_PaintingLayer_o* __this, uint8_t
   color, System_Nullable_Vector2__o cell, const MethodInfo* method); */

void Dino_BusSand_View_PaintingLayer__Bloom_23d9dc8
               (long param_1,byte param_2,ulong param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  double dStack_58;
  
  if ((bRam0000000004f9ca34 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4de8);
    FUN_02132f7c(PTR_DAT_04cb4df0);
    bRam0000000004f9ca34 = 1;
  }
  if ((char)param_2 < '\x01') {
    return;
  }
  lVar13 = *(long *)(param_1 + 0x48);
  if (lVar13 != 0) {
    uVar1 = (uint)param_2;
    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
      uVar12 = (ulong)param_2;
      if (0.0 <= *(float *)(lVar13 + uVar12 * 4 + 0x20)) {
        return;
      }
      if ((param_3 & 0xff) == 0) {
        lVar13 = *(long *)(param_1 + 0x60);
        if (lVar13 == 0) goto LAB_024d9f08;
        if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_024d9f0c;
        uVar9 = *(undefined8 *)(lVar13 + uVar12 * 8 + 0x20);
      }
      else {
        uVar9 = CONCAT44(param_4,(int)(param_3 >> 0x20));
      }
      lVar13 = *(long *)(param_1 + 0x50);
      if (lVar13 == 0) goto LAB_024d9f08;
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        uVar18 = NEON_scvtf(*(undefined8 *)(param_1 + 0x68),4);
        fVar14 = ((float)uVar9 + 0.5) / (float)uVar18;
        fVar16 = ((float)((ulong)uVar9 >> 0x20) + 0.5) / (float)((ulong)uVar18 >> 0x20);
        uVar19 = NEON_fmov(0x3f800000,4);
        iVar20 = -(uint)(fVar14 < 0.0);
        iVar21 = -(uint)(fVar16 < 0.0);
        uVar19 = CONCAT44(fVar16,fVar14) ^
                 (CONCAT44(fVar16,fVar14) ^ uVar19) &
                 CONCAT44(-(uint)((float)(uVar19 >> 0x20) < fVar16),-(uint)((float)uVar19 < fVar14))
        ;
        *(ulong *)(lVar13 + uVar12 * 8 + 0x20) =
             CONCAT17((byte)(uVar19 >> 0x38) & ~(byte)((uint)iVar21 >> 0x18),
                      CONCAT16((byte)(uVar19 >> 0x30) & ~(byte)((uint)iVar21 >> 0x10),
                               CONCAT15((byte)(uVar19 >> 0x28) & ~(byte)((uint)iVar21 >> 8),
                                        CONCAT14((byte)(uVar19 >> 0x20) & ~(byte)iVar21,
                                                 CONCAT13((byte)(uVar19 >> 0x18) &
                                                          ~(byte)((uint)iVar20 >> 0x18),
                                                          CONCAT12((byte)(uVar19 >> 0x10) &
                                                                   ~(byte)((uint)iVar20 >> 0x10),
                                                                   CONCAT11((byte)(uVar19 >> 8) &
                                                                            ~(byte)((uint)iVar20 >>
                                                                                   8),
                                                                            (byte)uVar19 &
                                                                            ~(byte)iVar20)))))));
        lVar13 = *(long *)(param_1 + 0x48);
        if (lVar13 == 0) goto LAB_024d9f08;
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(undefined1 *)(param_1 + 0x70) = 1;
          *(undefined4 *)(lVar13 + uVar12 * 4 + 0x20) = 0;
          if ((bRam0000000004f9ca37 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cbc398);
            bRam0000000004f9ca37 = 1;
          }
          puVar7 = PTR_DAT_04cbc398;
          puVar6 = PTR_DAT_04caa200;
          uVar5 = _UNK_00e2032c;
          lVar13 = 0;
          uVar12 = 0;
          do {
            lVar10 = *(long *)(param_1 + 0x48);
            if (lVar10 == 0) goto LAB_024d9840;
            if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_024d9844;
            fVar14 = *(float *)(lVar10 + uVar12 * 4 + 0x20);
            if (0.0 <= fVar14) {
              lVar10 = *(long *)puVar7;
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar10 = *(long *)puVar7;
              }
              fVar14 = fVar14 / *(float *)(*(long *)(lVar10 + 0xb8) + 4);
              fVar16 = 1.0;
              if (fVar14 <= 1.0) {
                fVar16 = fVar14;
              }
              fVar17 = 0.0;
              if (0.0 <= fVar14) {
                fVar17 = fVar16;
              }
              fVar16 = (float)func_0x049b5300(1.0 - fVar17,uVar5);
              fVar17 = fVar17 * 10.0;
              fVar14 = 1.0;
              if (fVar17 <= 1.0) {
                fVar14 = fVar17;
              }
              fVar26 = 0.0;
              if (0.0 <= fVar17) {
                fVar26 = fVar14 * 255.0;
              }
              if (cRam0000000004f9b891 == '\0') {
                FUN_02132f7c(puVar6);
                cRam0000000004f9b891 = '\x01';
              }
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              dVar25 = (double)fVar26;
              dVar15 = (double)FUN_049b52f0(dVar25,&dStack_58);
              if (0.0 <= fVar26) {
                if (dVar15 == 0.5) {
                  dVar15 = 1.0;
                  goto LAB_024d955c;
                }
                dVar25 = (double)(long)(dVar25 + 0.5);
              }
              else if (dVar15 == -0.5) {
                dVar15 = -1.0;
LAB_024d955c:
                dVar25 = dStack_58;
                if (((long)dStack_58 & 1U) != 0) {
                  dVar25 = dStack_58 + dVar15;
                }
              }
              else {
                dVar25 = (double)(long)(dVar25 + -0.5);
              }
              lVar10 = *(long *)(param_1 + 0x58);
              if (cRam0000000004f9b891 == '\0') {
                FUN_02132f7c(puVar6);
                cRam0000000004f9b891 = '\x01';
              }
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              fVar14 = (1.0 - fVar16) * 255.0;
              dVar22 = (double)fVar14;
              dVar15 = (double)FUN_049b52f0(dVar22,&dStack_58);
              if (0.0 <= fVar14) {
                if (dVar15 == 0.5) {
                  dVar15 = 1.0;
                  goto LAB_024d95f4;
                }
                dVar22 = (double)(long)(dVar22 + 0.5);
              }
              else if (dVar15 == -0.5) {
                dVar15 = -1.0;
LAB_024d95f4:
                dVar22 = dStack_58;
                if (((long)dStack_58 & 1U) != 0) {
                  dVar22 = dStack_58 + dVar15;
                }
              }
              else {
                dVar22 = (double)(long)(dVar22 + -0.5);
              }
              lVar11 = *(long *)(param_1 + 0x50);
              if (lVar11 == 0) goto LAB_024d9840;
              if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_024d9844;
              fVar14 = *(float *)(lVar11 + lVar13 + 0x20);
              if (cRam0000000004f9b891 == '\0') {
                FUN_02132f7c(puVar6);
                cRam0000000004f9b891 = '\x01';
              }
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              fVar14 = fVar14 * 255.0;
              dVar23 = (double)fVar14;
              dVar15 = (double)FUN_049b52f0(dVar23,&dStack_58);
              if (0.0 <= fVar14) {
                if (dVar15 == 0.5) {
                  dVar15 = 1.0;
                  goto LAB_024d96a0;
                }
                dVar23 = (double)(long)(dVar23 + 0.5);
              }
              else if (dVar15 == -0.5) {
                dVar15 = -1.0;
LAB_024d96a0:
                dVar23 = dStack_58;
                if (((long)dStack_58 & 1U) != 0) {
                  dVar23 = dStack_58 + dVar15;
                }
              }
              else {
                dVar23 = (double)(long)(dVar23 + -0.5);
              }
              lVar11 = *(long *)(param_1 + 0x50);
              if (lVar11 == 0) goto LAB_024d9840;
              if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_024d9844;
              fVar14 = *(float *)(lVar11 + lVar13 + 0x24);
              if (cRam0000000004f9b891 == '\0') {
                FUN_02132f7c(puVar6);
                cRam0000000004f9b891 = '\x01';
              }
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              fVar14 = fVar14 * 255.0;
              dVar24 = (double)fVar14;
              dVar15 = (double)FUN_049b52f0(dVar24,&dStack_58);
              if (0.0 <= fVar14) {
                if (dVar15 == 0.5) {
                  dVar15 = 1.0;
                  goto LAB_024d974c;
                }
                dVar24 = (double)(long)(dVar24 + 0.5);
              }
              else if (dVar15 == -0.5) {
                dVar15 = -1.0;
LAB_024d974c:
                dVar24 = dStack_58;
                if (((long)dStack_58 & 1U) != 0) {
                  dVar24 = dStack_58 + dVar15;
                }
              }
              else {
                dVar24 = (double)(long)(dVar24 + -0.5);
              }
              if (lVar10 == 0) goto LAB_024d9840;
              if (*(uint *)(lVar10 + 0x18) <= uVar12) {
LAB_024d9844:
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              uVar1 = 0;
              if (dVar25 != INFINITY) {
                uVar1 = (int)dVar25 << 0x18;
              }
              uVar2 = 0;
              if (dVar24 != INFINITY) {
                uVar2 = ((int)dVar24 & 0xffU) << 0x10;
              }
              uVar3 = 0;
              if (dVar23 != INFINITY) {
                uVar3 = ((int)dVar23 & 0xffU) << 8;
              }
              uVar4 = 0;
              if (dVar22 != INFINITY) {
                uVar4 = (int)dVar22 & 0xff;
              }
              *(uint *)(lVar10 + uVar12 * 4 + 0x20) = uVar4 | uVar3 | uVar2 | uVar1;
            }
            else {
              lVar10 = *(long *)(param_1 + 0x58);
              if (lVar10 == 0) goto LAB_024d9840;
              if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_024d9844;
              *(undefined4 *)(lVar10 + uVar12 * 4 + 0x20) = 0;
            }
            uVar12 = uVar12 + 1;
            lVar13 = lVar13 + 8;
          } while (uVar12 != 0x80);
          if (*(long *)(param_1 + 0x28) != 0) {
            UnityEngine_Texture2D__SetPixels32_439edd8
                      (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x58),0);
            plVar8 = *(long **)(param_1 + 0x28);
            if (plVar8 != (long *)0x0) {
              uVar12 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
              if ((uVar12 & 1) == 0) {
                uVar9 = UnityEngine_Texture__CreateNonReadableException_4399d64(uVar12,plVar8);
                uVar18 = thunk_FUN_021985a8(PTR_DAT_04cf7070);
                    /* WARNING: Subroutine does not return */
                FUN_021330e8(uVar9,uVar18);
              }
              if ((bRam0000000004fa7993 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cf6fd0);
                bRam0000000004fa7993 = 1;
              }
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar13 = plVar8[2];
              if (lVar13 != 0) {
                if (pcRam0000000004fa7a48 == (code *)0x0) {
                  pcRam0000000004fa7a48 = (code *)FUN_02132f40(&UNK_00e28bfa);
                }
                    /* WARNING: Could not recover jumptable at 0x0449accc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000004fa7a48)(lVar13,0,0);
                return;
              }
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(plVar8,0);
            }
          }
LAB_024d9840:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
    }
LAB_024d9f0c:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
LAB_024d9f08:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

