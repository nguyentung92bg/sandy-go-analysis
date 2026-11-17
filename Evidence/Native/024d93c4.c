/* IL2CPP: Dino.BusSand.View.PaintingLayer$$WriteWash
void Dino_BusSand_View_PaintingLayer__WriteWash (Dino_BusSand_View_PaintingLayer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PaintingLayer$$WriteWash
   void Dino_BusSand_View_PaintingLayer__WriteWash (Dino_BusSand_View_PaintingLayer_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_PaintingLayer__WriteWash_23d93c4(long param_1)

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
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  double dStack_58;
  
  if ((bRam0000000004f9ca37 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc398);
    bRam0000000004f9ca37 = 1;
  }
  puVar7 = PTR_DAT_04cbc398;
  puVar6 = PTR_DAT_04caa200;
  uVar5 = _UNK_00e2032c;
  lVar13 = 0;
  uVar14 = 0;
  do {
    lVar11 = *(long *)(param_1 + 0x48);
    if (lVar11 == 0) goto LAB_024d9840;
    if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_024d9844;
    fVar18 = *(float *)(lVar11 + uVar14 * 4 + 0x20);
    if (0.0 <= fVar18) {
      lVar11 = *(long *)puVar7;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar11 = *(long *)puVar7;
      }
      fVar18 = fVar18 / *(float *)(*(long *)(lVar11 + 0xb8) + 4);
      fVar15 = 1.0;
      if (fVar18 <= 1.0) {
        fVar15 = fVar18;
      }
      fVar17 = 0.0;
      if (0.0 <= fVar18) {
        fVar17 = fVar15;
      }
      fVar15 = (float)func_0x049b5300(1.0 - fVar17,uVar5);
      fVar17 = fVar17 * 10.0;
      fVar18 = 1.0;
      if (fVar17 <= 1.0) {
        fVar18 = fVar17;
      }
      fVar23 = 0.0;
      if (0.0 <= fVar17) {
        fVar23 = fVar18 * 255.0;
      }
      if (cRam0000000004f9b891 == '\0') {
        FUN_02132f7c(puVar6);
        cRam0000000004f9b891 = '\x01';
      }
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      dVar22 = (double)fVar23;
      dVar16 = (double)FUN_049b52f0(dVar22,&dStack_58);
      if (0.0 <= fVar23) {
        if (dVar16 == 0.5) {
          dVar16 = 1.0;
          goto LAB_024d955c;
        }
        dVar22 = (double)(long)(dVar22 + 0.5);
      }
      else if (dVar16 == -0.5) {
        dVar16 = -1.0;
LAB_024d955c:
        dVar22 = dStack_58;
        if (((long)dStack_58 & 1U) != 0) {
          dVar22 = dStack_58 + dVar16;
        }
      }
      else {
        dVar22 = (double)(long)(dVar22 + -0.5);
      }
      lVar11 = *(long *)(param_1 + 0x58);
      if (cRam0000000004f9b891 == '\0') {
        FUN_02132f7c(puVar6);
        cRam0000000004f9b891 = '\x01';
      }
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar18 = (1.0 - fVar15) * 255.0;
      dVar19 = (double)fVar18;
      dVar16 = (double)FUN_049b52f0(dVar19,&dStack_58);
      if (0.0 <= fVar18) {
        if (dVar16 == 0.5) {
          dVar16 = 1.0;
          goto LAB_024d95f4;
        }
        dVar19 = (double)(long)(dVar19 + 0.5);
      }
      else if (dVar16 == -0.5) {
        dVar16 = -1.0;
LAB_024d95f4:
        dVar19 = dStack_58;
        if (((long)dStack_58 & 1U) != 0) {
          dVar19 = dStack_58 + dVar16;
        }
      }
      else {
        dVar19 = (double)(long)(dVar19 + -0.5);
      }
      lVar12 = *(long *)(param_1 + 0x50);
      if (lVar12 == 0) goto LAB_024d9840;
      if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_024d9844;
      fVar18 = *(float *)(lVar12 + lVar13 + 0x20);
      if (cRam0000000004f9b891 == '\0') {
        FUN_02132f7c(puVar6);
        cRam0000000004f9b891 = '\x01';
      }
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar18 = fVar18 * 255.0;
      dVar20 = (double)fVar18;
      dVar16 = (double)FUN_049b52f0(dVar20,&dStack_58);
      if (0.0 <= fVar18) {
        if (dVar16 == 0.5) {
          dVar16 = 1.0;
          goto LAB_024d96a0;
        }
        dVar20 = (double)(long)(dVar20 + 0.5);
      }
      else if (dVar16 == -0.5) {
        dVar16 = -1.0;
LAB_024d96a0:
        dVar20 = dStack_58;
        if (((long)dStack_58 & 1U) != 0) {
          dVar20 = dStack_58 + dVar16;
        }
      }
      else {
        dVar20 = (double)(long)(dVar20 + -0.5);
      }
      lVar12 = *(long *)(param_1 + 0x50);
      if (lVar12 == 0) goto LAB_024d9840;
      if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_024d9844;
      fVar18 = *(float *)(lVar12 + lVar13 + 0x24);
      if (cRam0000000004f9b891 == '\0') {
        FUN_02132f7c(puVar6);
        cRam0000000004f9b891 = '\x01';
      }
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar18 = fVar18 * 255.0;
      dVar21 = (double)fVar18;
      dVar16 = (double)FUN_049b52f0(dVar21,&dStack_58);
      if (0.0 <= fVar18) {
        if (dVar16 == 0.5) {
          dVar16 = 1.0;
          goto LAB_024d974c;
        }
        dVar21 = (double)(long)(dVar21 + 0.5);
      }
      else if (dVar16 == -0.5) {
        dVar16 = -1.0;
LAB_024d974c:
        dVar21 = dStack_58;
        if (((long)dStack_58 & 1U) != 0) {
          dVar21 = dStack_58 + dVar16;
        }
      }
      else {
        dVar21 = (double)(long)(dVar21 + -0.5);
      }
      if (lVar11 == 0) goto LAB_024d9840;
      if (*(uint *)(lVar11 + 0x18) <= uVar14) {
LAB_024d9844:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar1 = 0;
      if (dVar22 != INFINITY) {
        uVar1 = (int)dVar22 << 0x18;
      }
      uVar2 = 0;
      if (dVar21 != INFINITY) {
        uVar2 = ((int)dVar21 & 0xffU) << 0x10;
      }
      uVar3 = 0;
      if (dVar20 != INFINITY) {
        uVar3 = ((int)dVar20 & 0xffU) << 8;
      }
      uVar4 = 0;
      if (dVar19 != INFINITY) {
        uVar4 = (int)dVar19 & 0xff;
      }
      *(uint *)(lVar11 + uVar14 * 4 + 0x20) = uVar4 | uVar3 | uVar2 | uVar1;
    }
    else {
      lVar11 = *(long *)(param_1 + 0x58);
      if (lVar11 == 0) goto LAB_024d9840;
      if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_024d9844;
      *(undefined4 *)(lVar11 + uVar14 * 4 + 0x20) = 0;
    }
    uVar14 = uVar14 + 1;
    lVar13 = lVar13 + 8;
  } while (uVar14 != 0x80);
  if (*(long *)(param_1 + 0x28) != 0) {
    UnityEngine_Texture2D__SetPixels32_439edd8
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x58),0);
    plVar8 = *(long **)(param_1 + 0x28);
    if (plVar8 != (long *)0x0) {
      uVar14 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
      if ((uVar14 & 1) == 0) {
        uVar9 = UnityEngine_Texture__CreateNonReadableException_4399d64(uVar14,plVar8);
        uVar10 = thunk_FUN_021985a8(PTR_DAT_04cf7070);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar9,uVar10);
      }
      if ((bRam0000000004fa7993 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf6fd0);
        bRam0000000004fa7993 = 1;
      }
      if (plVar8 != (long *)0x0) {
        lVar13 = plVar8[2];
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(plVar8,0);
        }
        if (pcRam0000000004fa7a48 == (code *)0x0) {
          pcRam0000000004fa7a48 = (code *)FUN_02132f40(&UNK_00e28bfa);
        }
                    /* WARNING: Could not recover jumptable at 0x0449accc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa7a48)(lVar13,0,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
LAB_024d9840:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

