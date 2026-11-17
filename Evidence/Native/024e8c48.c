/* IL2CPP: Dino.BusSand.View.StageLayout$$BuildReturnPath
void Dino_BusSand_View_StageLayout__BuildReturnPath (Dino_BusSand_View_StageLayout_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.StageLayout$$BuildReturnPath
   void Dino_BusSand_View_StageLayout__BuildReturnPath (Dino_BusSand_View_StageLayout_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_View_StageLayout__BuildReturnPath_23e8c48(long param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  long lVar10;
  float *pfVar11;
  uint uVar12;
  long lVar13;
  float *pfVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  if ((bRam0000000004f9ca92 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04cbdb10);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04cbc250);
    bRam0000000004f9ca92 = 1;
  }
  puVar8 = PTR_DAT_04cbc250;
  uStack_b8 = 0;
  lStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (cRam0000000004f9ca99 == '\0') {
    FUN_02132f7c(PTR_DAT_04cbda00);
    cRam0000000004f9ca99 = '\x01';
  }
  puVar7 = PTR_DAT_04cb3c10;
  puVar6 = PTR_DAT_04caa1d0;
  uStack_b8 = NEON_rev64(*(undefined8 *)(param_1 + 0xe8),4);
  iVar3 = *(int *)(*(long *)puVar8 + 0xe4);
  *(undefined4 *)(param_1 + 0x140) = **(undefined4 **)(*(long *)PTR_DAT_04cbda00 + 0xb8);
  if (iVar3 == 0) {
    thunk_FUN_0218fdac();
  }
  fVar18 = (float)Dino_BusSand_View_StageLayout__get_EntryRadius_23e6bb0();
  fVar19 = (float)Dino_BusSand_View_StageLayout__get_SideTurnRadius_23e6c3c();
  fVar26 = *(float *)(param_1 + 0xc4);
  fVar20 = (float)Dino_BusSand_View_StageLayout__get_SideTurnZ_23e6d2c(param_1);
  uVar21 = Dino_BusSand_View_StageLayout__get_LoopBackZ_23e6da8(param_1);
  fVar22 = (float)Dino_BusSand_View_StageLayout__get_SideLaneX_23e6b48();
  fVar23 = (float)Dino_BusSand_View_StageLayout__get_SideLaneX_23e6b48();
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
  System_Collections_Generic_List_Vector3____ctor_3af944c(lVar10,*(undefined8 *)puVar7);
  lStack_c0 = lVar10;
  thunk_FUN_02134474(&lStack_c0,lVar10);
  if (lStack_c0 != 0) {
    lVar10 = *(long *)(lStack_c0 + 0x10);
    uVar24 = *(undefined4 *)(param_1 + 0xd8);
    lVar13 = *(long *)PTR_DAT_04caa170;
    *(int *)(lStack_c0 + 0x1c) = *(int *)(lStack_c0 + 0x1c) + 1;
    if (lVar10 != 0) {
      fVar22 = fVar22 - fVar18;
      uVar12 = *(uint *)(lStack_c0 + 0x18);
      if (uVar12 < *(uint *)(lVar10 + 0x18)) {
        lVar10 = lVar10 + (long)(int)uVar12 * 0xc;
        *(uint *)(lStack_c0 + 0x18) = uVar12 + 1;
        *(undefined4 *)(lVar10 + 0x20) = uVar24;
        *(undefined4 *)(lVar10 + 0x24) = 0;
        *(float *)(lVar10 + 0x28) = fVar26;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                  (uVar24,0,fVar26,lStack_c0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      fVar30 = _UNK_00e20448;
      if (*(float *)(param_1 + 0xd8) + _UNK_00e20448 < fVar22) {
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_View_StageLayout___BuildReturnPath_g__Line_106_1_23e9a0c
                  (fVar22,0,fVar26,2,&lStack_c0);
      }
      fVar28 = fVar18 + fVar26;
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_View_StageLayout___BuildReturnPath_g__Arc_106_0_23e9b8c
                (fVar22,0,fVar28,fVar18,0xc2b40000,0,0x14,&lStack_c0);
      fVar27 = fVar28 + fVar30;
      if (fVar27 < fVar20) {
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar25 = Dino_BusSand_View_StageLayout__get_SideLaneX_23e6b48();
        Dino_BusSand_View_StageLayout___BuildReturnPath_g__Line_106_1_23e9a0c
                  (uVar25,0,fVar20,4,&lStack_c0);
      }
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_View_StageLayout___BuildReturnPath_g__Arc_106_0_23e9b8c
                (fVar23 - fVar19,0,fVar20,fVar19,0,0x42b40000,0x18,&lStack_c0);
      fVar23 = -(fVar23 - fVar19);
      Dino_BusSand_View_StageLayout___BuildReturnPath_g__Line_106_1_23e9a0c
                (fVar23,0,uVar21,0x30,&lStack_c0);
      Dino_BusSand_View_StageLayout___BuildReturnPath_g__Arc_106_0_23e9b8c
                (fVar23,0,fVar20,fVar19,0x42b40000,0x43340000,0x18,&lStack_c0);
      if (fVar27 < fVar20) {
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar19 = (float)Dino_BusSand_View_StageLayout__get_SideLaneX_23e6b48();
        Dino_BusSand_View_StageLayout___BuildReturnPath_g__Line_106_1_23e9a0c
                  (-fVar19,0,fVar28,4,&lStack_c0);
      }
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_View_StageLayout___BuildReturnPath_g__Arc_106_0_23e9b8c
                (-fVar22,0,fVar28,fVar18,0x43340000,0x43870000,0x14,&lStack_c0);
      if (*(float *)(param_1 + 0xd8) + fVar30 < fVar22) {
        uVar21 = *(undefined4 *)(param_1 + 0xd4);
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_View_StageLayout___BuildReturnPath_g__Line_106_1_23e9a0c
                  (uVar21,0,fVar26,2,&lStack_c0);
      }
      if (lStack_c0 != 0) {
        uVar25 = System_Collections_Generic_List_Vector3___ToArray_3afb8c0
                           (lStack_c0,*(undefined8 *)PTR_DAT_04cbdb10);
        *(undefined8 *)(param_1 + 0x120) = uVar25;
        thunk_FUN_02134474(param_1 + 0x120,uVar25);
        puVar6 = PTR_DAT_04caadd0;
        if (*(long *)(param_1 + 0x120) != 0) {
          uVar25 = FUN_02133068(*(undefined8 *)PTR_DAT_04caadd0,
                                *(undefined4 *)(*(long *)(param_1 + 0x120) + 0x18));
          *(undefined8 *)(param_1 + 0x128) = uVar25;
          thunk_FUN_02134474(param_1 + 0x128,uVar25);
          if (*(long *)(param_1 + 0x120) != 0) {
            uVar25 = FUN_02133068(*(undefined8 *)puVar6,
                                  *(undefined4 *)(*(long *)(param_1 + 0x120) + 0x18));
            *(undefined8 *)(param_1 + 0x130) = uVar25;
            thunk_FUN_02134474(param_1 + 0x130,uVar25);
            puVar6 = PTR_DAT_04caa200;
            fVar18 = _UNK_00e20410;
            lVar10 = *(long *)(param_1 + 0x120);
            if (lVar10 != 0) {
              lVar13 = 0;
              uVar16 = 0;
              do {
                uVar12 = (uint)*(undefined8 *)(lVar10 + 0x18);
                if ((long)(int)uVar12 <= (long)uVar16) {
                  lVar10 = *(long *)(param_1 + 0x128);
                  if (lVar10 != 0) {
                    if (*(uint *)(lVar10 + 0x18) == 0) goto LAB_024e9494;
                    *(undefined4 *)(lVar10 + 0x20) = 0;
                    lVar13 = *(long *)(param_1 + 0x130);
                    *(undefined4 *)
                     (lVar10 + 0x20 +
                     ((long)(((ulong)*(uint *)(lVar10 + 0x18) << 0x20) + -0x100000000) >> 0x1e)) = 0
                    ;
                    fVar18 = _UNK_00e20a08;
                    if (lVar13 != 0) {
                      if (*(uint *)(lVar13 + 0x18) == 0) goto LAB_024e9494;
                      fVar20 = (float)(int)uStack_b8;
                      fVar19 = 1.0;
                      if (1.0 <= *(float *)(param_1 + 0x11c)) {
                        fVar19 = *(float *)(param_1 + 0x11c);
                      }
                      fVar22 = fVar20 + fVar20 + (float)uStack_b8._4_4_ / fVar19;
                      if (fVar22 * _UNK_00e2094c <= fVar20) {
                        fVar20 = fVar22 * _UNK_00e2094c;
                      }
                      fVar23 = _UNK_00e20a08;
                      if (_UNK_00e20a08 <= *(float *)(param_1 + 0xb4)) {
                        fVar23 = *(float *)(param_1 + 0xb4);
                      }
                      fVar26 = *(float *)(lVar13 + ((long)(((ulong)*(uint *)(lVar13 + 0x18) << 0x20)
                                                          + -0x100000000) >> 0x1e) + 0x20);
                      uStack_b0 = CONCAT44(fVar20,fVar19);
                      uVar12 = uStack_b8._4_4_ * 4 + (int)uStack_b8 * 8;
                      fVar19 = _UNK_00e20a7c;
                      if (_UNK_00e20a7c <= fVar22 - fVar20) {
                        fVar19 = fVar22 - fVar20;
                      }
                      fVar19 = (fVar26 / fVar23 - fVar22) / fVar19 + 1.0;
                      uStack_a8 = CONCAT44(fVar19,fVar22);
                      uVar25 = FUN_02133068(*(undefined8 *)PTR_DAT_04caadd0,uVar12 | 1);
                      *(undefined8 *)(param_1 + 0x138) = uVar25;
                      thunk_FUN_02134474(param_1 + 0x138,uVar25);
                      fVar20 = 0.0;
                      if ((int)uVar12 < 1) goto LAB_024e9418;
                      uVar16 = 0;
                      fVar22 = 0.0;
                      goto LAB_024e9350;
                    }
                  }
                  break;
                }
                uVar1 = uVar16 + 1;
                if ((long)uVar1 < (long)(int)uVar12) {
                  uVar15 = (int)uVar16 + 1;
                  uVar4 = uVar16;
                  uVar5 = uVar1;
                }
                else {
                  uVar15 = (uint)(uVar16 - 1);
                  uVar4 = uVar16 - 1;
                  uVar5 = uVar16;
                }
                if (uVar12 <= uVar15) goto LAB_024e9494;
                pfVar14 = (float *)(lVar10 + 0x20 + uVar5 * 0xc);
                lVar17 = *(long *)(param_1 + 0x128);
                pfVar11 = (float *)(lVar10 + 0x20 + uVar4 * 0xc);
                fVar19 = pfVar14[2];
                fVar20 = *pfVar14;
                fVar22 = *pfVar11;
                fVar23 = pfVar11[2];
                if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                fVar19 = (float)atan2f(-(fVar19 - fVar23),fVar20 - fVar22);
                if (lVar17 == 0) break;
                if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_024e9494;
                lVar10 = *(long *)(param_1 + 0x130);
                lVar2 = lVar10 + uVar16 * 4;
                *(float *)(lVar17 + uVar16 * 4 + 0x20) = fVar19 * fVar18;
                if (uVar16 == 0) {
                  fVar19 = 0.0;
                  if (lVar10 == 0) break;
                }
                else {
                  if (lVar10 == 0) break;
                  uVar12 = (int)uVar16 - 1;
                  if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_024e9494;
                  lVar17 = *(long *)(param_1 + 0x120);
                  if (lVar17 == 0) break;
                  if (((uint)*(ulong *)(lVar17 + 0x18) <= uVar12) ||
                     ((*(ulong *)(lVar17 + 0x18) & 0xffffffff) <= uVar16)) goto LAB_024e9494;
                  lVar17 = lVar17 + lVar13;
                  fVar19 = *(float *)(lVar2 + 0x1c);
                  uVar25 = *(undefined8 *)(lVar17 + 0x14);
                  fVar20 = *(float *)(lVar17 + 0x1c);
                  uVar29 = *(undefined8 *)(lVar17 + 0x20);
                  fVar22 = *(float *)(lVar17 + 0x28);
                  if (cRam0000000004f9b9df == '\0') {
                    FUN_02132f7c(puVar6);
                    cRam0000000004f9b9df = '\x01';
                  }
                  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  fVar23 = (float)uVar25 - (float)uVar29;
                  fVar26 = (float)((ulong)uVar25 >> 0x20) - (float)((ulong)uVar29 >> 0x20);
                  fVar20 = fVar20 - fVar22;
                  fVar19 = fVar19 + SQRT(fVar20 * fVar20 + fVar23 * fVar23 + fVar26 * fVar26);
                }
                if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_024e9494;
                lVar10 = *(long *)(param_1 + 0x120);
                lVar13 = lVar13 + 0xc;
                *(float *)(lVar2 + 0x20) = fVar19;
                uVar16 = uVar1;
              } while (lVar10 != 0);
            }
          }
        }
      }
    }
  }
LAB_024e9244:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
  while( true ) {
    if ((ulong)*(uint *)(lVar10 + 0x18) <= uVar16 + 1) goto LAB_024e9494;
    fVar20 = fVar20 + fVar23;
    lVar13 = uVar16 * 4;
    uVar16 = uVar16 + 1;
    *(float *)(lVar10 + lVar13 + 0x24) = fVar20;
    fVar22 = fVar30;
    if (uVar12 <= uVar16) break;
LAB_024e9350:
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar30 = (float)((int)uVar16 + 1) / 4.0;
    fVar23 = (float)(int)uStack_b8;
    if (fVar23 < fVar30) {
      if (fVar30 <= (float)(uStack_b8._4_4_ + (int)uStack_b8)) {
        fVar30 = (fVar30 - fVar23) / (float)uStack_b0;
      }
      else {
        fVar30 = fVar30 - fVar23;
        fVar23 = (float)uStack_b8._4_4_ / (float)uStack_b0 + fVar23;
        fVar30 = fVar30 - (float)uStack_b8._4_4_;
      }
      fVar30 = fVar30 + fVar23;
    }
    fVar23 = fVar30 - fVar22;
    if (1.0 <= fVar19) {
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar22 = (float)Dino_BusSand_View_StageLayout___BuildReturnPath_g__W_106_3_23e9d5c
                                ((fVar22 + fVar30) * 0.5,&lStack_c0);
      fVar23 = fVar23 * fVar22;
    }
    lVar10 = *(long *)(param_1 + 0x138);
    if (lVar10 == 0) goto LAB_024e9244;
  }
LAB_024e9418:
  if (fVar18 <= fVar20) {
    fVar18 = fVar20;
  }
  if (-1 < (int)uVar12) {
    lVar10 = *(long *)(param_1 + 0x138);
    if (lVar10 == 0) goto LAB_024e9244;
    uVar15 = *(uint *)(lVar10 + 0x18);
    uVar16 = 0;
    do {
      if (uVar15 == uVar16) {
LAB_024e9494:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      bVar9 = uVar16 < uVar12;
      *(float *)(lVar10 + 0x20 + uVar16 * 4) =
           (fVar26 / fVar18) * *(float *)(lVar10 + 0x20 + uVar16 * 4);
      uVar16 = uVar16 + 1;
    } while (bVar9);
  }
  return;
}

