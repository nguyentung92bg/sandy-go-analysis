/* IL2CPP: Dino.BusSand.View.PaintingLayer$$Noise
UnityEngine_Texture2D_o* Dino_BusSand_View_PaintingLayer__Noise (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PaintingLayer$$Noise
   UnityEngine_Texture2D_o* Dino_BusSand_View_PaintingLayer__Noise (const MethodInfo* method); */

undefined8 Dino_BusSand_View_PaintingLayer__Noise_23d9848(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  double dStack_a8;
  
  plVar15 = (long *)PTR_DAT_04cbc398;
  if ((bRam0000000004f9ca38 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a60);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc398);
    FUN_02132f7c(PTR_DAT_04cae330);
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04cb4ef0);
    FUN_02132f7c(PTR_DAT_04cbd830);
    bRam0000000004f9ca38 = 1;
  }
  puVar12 = PTR_DAT_04ca9ae8;
  lVar13 = *plVar15;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar13 = *plVar15;
  }
  uVar19 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8);
  if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar12);
  }
  uVar14 = UnityEngine_Object__op_Inequality_43c8dec(uVar19,0,0);
  puVar12 = PTR_DAT_04caadd0;
  if ((uVar14 & 1) != 0) {
    if (*(int *)(*plVar15 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
LAB_024d9d84:
    return *(undefined8 *)(*(long *)(*plVar15 + 0xb8) + 8);
  }
  plVar15 = (long *)thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae330);
  System_Random___ctor_4840cc4(plVar15,0x13528ed,0);
  lVar13 = FUN_02133068(*(undefined8 *)puVar12,0x40);
  if (lVar13 != 0) {
    if (0 < *(int *)(lVar13 + 0x18)) {
      uVar14 = 0;
      do {
        if (plVar15 == (long *)0x0) goto LAB_024d9dc4;
        dVar24 = (double)(**(code **)(*plVar15 + 0x1b8))(plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
        uVar8 = *(uint *)(lVar13 + 0x18);
        if (uVar8 <= uVar14) {
LAB_024d9dc0:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(float *)(lVar13 + 0x20 + uVar14 * 4) = (float)dVar24;
        uVar14 = uVar14 + 1;
      } while ((long)uVar14 < (long)(int)uVar8);
    }
    lVar16 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb6a60,0x1000);
    puVar12 = PTR_DAT_04caa200;
    fVar11 = _UNK_00e20390;
    fVar10 = _UNK_00e200f8;
    uVar14 = 0;
    lVar18 = 0;
    fVar30 = 1.0;
    do {
      lVar21 = 0;
      fVar22 = (float)((int)lVar18 << 3) / 64.0;
      uVar8 = 0x80000000;
      if (fVar22 != INFINITY) {
        uVar8 = (int)fVar22;
      }
      uVar4 = uVar8 & 7;
      if (-1 < (int)-uVar8) {
        uVar4 = -(-uVar8 & 7);
      }
      uVar9 = -(uVar8 + 1);
      uVar5 = uVar8 + 1 & 7;
      fVar22 = fVar22 - (float)(int)uVar8;
      if (-1 < (int)uVar9) {
        uVar5 = -(uVar9 & 7);
      }
      fVar23 = fVar22 * fVar22 * (3.0 - (fVar22 + fVar22));
      fVar22 = fVar30;
      if (fVar23 <= 1.0) {
        fVar22 = fVar23;
      }
      uVar20 = uVar14;
      fVar31 = 0.0;
      if (0.0 <= fVar23) {
        fVar31 = fVar22;
      }
      do {
        fVar22 = (float)(int)lVar21 / 64.0;
        uVar9 = *(uint *)(lVar13 + 0x18);
        uVar8 = 0x80000000;
        if (fVar22 != INFINITY) {
          uVar8 = (int)fVar22;
        }
        uVar6 = uVar8 & 7;
        if (-1 < (int)-uVar8) {
          uVar6 = -(-uVar8 & 7);
        }
        uVar2 = uVar6 + uVar4 * 8;
        if (uVar9 <= uVar2) goto LAB_024d9dc0;
        uVar3 = -(uVar8 + 1);
        uVar7 = uVar8 + 1 & 7;
        if (-1 < (int)uVar3) {
          uVar7 = -(uVar3 & 7);
        }
        uVar3 = uVar7 + uVar4 * 8;
        if (((uVar9 <= uVar3) || (uVar6 = uVar6 + uVar5 * 8, uVar9 <= uVar6)) ||
           (uVar7 = uVar7 + uVar5 * 8, uVar9 <= uVar7)) goto LAB_024d9dc0;
        if (plVar15 == (long *)0x0) goto LAB_024d9dc4;
        fVar22 = fVar22 - (float)(int)uVar8;
        fVar26 = *(float *)(lVar13 + (long)(int)uVar2 * 4 + 0x20);
        fVar27 = *(float *)(lVar13 + 0x20 + (long)(int)uVar7 * 4);
        fVar28 = *(float *)(lVar13 + 0x20 + (long)(int)uVar6 * 4);
        fVar23 = fVar22 * fVar22 * (3.0 - (fVar22 + fVar22));
        fVar22 = fVar30;
        if (fVar23 <= 1.0) {
          fVar22 = fVar23;
        }
        fVar25 = 0.0;
        if (0.0 <= fVar23) {
          fVar25 = fVar22;
        }
        fVar26 = fVar26 + fVar25 * (*(float *)(lVar13 + (long)(int)uVar3 * 4 + 0x20) - fVar26);
        dVar24 = (double)(**(code **)(*plVar15 + 0x1b8))(plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
        fVar23 = (float)dVar24 * fVar11 +
                 (fVar26 + fVar31 * ((fVar28 + fVar25 * (fVar27 - fVar28)) - fVar26)) * fVar10;
        fVar22 = fVar30;
        if (fVar23 <= 1.0) {
          fVar22 = fVar23;
        }
        fVar26 = 0.0;
        if (0.0 <= fVar23) {
          fVar26 = fVar22 * 255.0;
        }
        if (cRam0000000004f9b891 == '\0') {
          FUN_02132f7c(puVar12);
          cRam0000000004f9b891 = '\x01';
        }
        if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        dVar29 = (double)fVar26;
        dVar24 = (double)FUN_049b52f0(dVar29,&dStack_a8);
        if (0.0 <= fVar26) {
          if (dVar24 == 0.5) {
            dVar24 = 1.0;
            goto LAB_024d9c20;
          }
          dVar29 = (double)(long)(dVar29 + 0.5);
        }
        else if (dVar24 == -0.5) {
          dVar24 = -1.0;
LAB_024d9c20:
          dVar29 = dStack_a8;
          if (((long)dStack_a8 & 1U) != 0) {
            dVar29 = dStack_a8 + dVar24;
          }
        }
        else {
          dVar29 = (double)(long)(dVar29 + -0.5);
        }
        if (lVar16 == 0) goto LAB_024d9dc4;
        if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_024d9dc0;
        lVar21 = lVar21 + 8;
        lVar1 = uVar20 * 4;
        uVar20 = uVar20 + 1;
        uVar8 = 0xff000000;
        if (dVar29 != INFINITY) {
          uVar8 = ((int)dVar29 & 0xffU) * 0x10101 | 0xff000000;
        }
        *(uint *)(lVar16 + lVar1 + 0x20) = uVar8;
      } while (lVar21 != 0x200);
      lVar18 = lVar18 + 1;
      uVar14 = uVar14 + 0x40;
    } while (lVar18 != 0x40);
    lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4ef0);
    UnityEngine_Texture2D___ctor_439df00(lVar13,0x40,0x40,4,0,1,0);
    if (lVar13 != 0) {
      UnityEngine_Texture__set_filterMode_4398f60(lVar13,1,0);
      UnityEngine_Texture__set_wrapMode_4398ac8(lVar13,0,0);
      UnityEngine_Object__set_name_43c72ec(lVar13,*(undefined8 *)PTR_DAT_04cbd830,0);
      plVar15 = (long *)PTR_DAT_04cbc398;
      lVar18 = *(long *)PTR_DAT_04cbc398;
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar18 = *plVar15;
      }
      plVar17 = (long *)(*(long *)(lVar18 + 0xb8) + 8);
      *plVar17 = lVar13;
      thunk_FUN_02134474(plVar17,lVar13);
      lVar13 = *(long *)(*(long *)(*plVar15 + 0xb8) + 8);
      if (lVar13 != 0) {
        UnityEngine_Texture2D__SetPixels32_439edd8(lVar13,lVar16,0);
        lVar13 = *(long *)(*(long *)(*plVar15 + 0xb8) + 8);
        if (lVar13 != 0) {
          UnityEngine_Texture2D__Apply_439ea14(lVar13,0,1,0);
          goto LAB_024d9d84;
        }
      }
    }
  }
LAB_024d9dc4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

