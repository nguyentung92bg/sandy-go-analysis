/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_0$$<BuildSynth>b__19
float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__19 (Dino_BusSand_GameAudio___c__DisplayClass157_0_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_0$$<BuildSynth>b__19
   float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__19
   (Dino_BusSand_GameAudio___c__DisplayClass157_0_o* __this, float t, const MethodInfo* method); */

float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__19_2387374
                (float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar8 = _UNK_00e20ac0;
  fVar7 = _UNK_00e2094c;
  fVar6 = _UNK_00e208cc;
  fVar5 = _UNK_00e205f8;
  fVar4 = _UNK_00e2032c;
  fVar3 = _UNK_00e2004c;
  fVar2 = _UNK_00e1fee0;
  fVar1 = _UNK_00e1fdf4;
  lVar9 = *(long *)(param_2 + 0x28);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar11 = *(ulong *)(lVar9 + 0x18);
  uVar10 = (uint)uVar11;
  if ((int)uVar10 < 1) {
    fVar23 = 0.0;
  }
  else {
    fVar23 = 0.0;
    uVar12 = 0;
    do {
      fVar22 = param_1 + (float)(int)uVar12 * fVar3;
      if (0.0 <= fVar22) {
        if ((uVar11 & 0xffffffff) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        fVar13 = (float)exp2f((float)(*(int *)(lVar9 + 0x20 + uVar12 * 4) + -0x45) / 12.0);
        fVar21 = fVar13 * 440.0 * fVar1;
        fVar13 = fVar4;
        if (uVar10 - 1 != uVar12) {
          fVar13 = 5.0;
        }
        fVar14 = (float)func_0x049b5320(fVar22 * fVar21);
        fVar15 = (float)func_0x049b5320(fVar22 * (fVar21 + fVar21));
        fVar16 = (float)expf(fVar22 * -8.0);
        fVar17 = (float)func_0x049b5320(fVar22 * fVar21 * fVar2);
        fVar18 = (float)expf(fVar22 * -12.0);
        fVar21 = (float)func_0x049b5320(fVar22 * fVar21 * fVar8);
        fVar19 = (float)expf(fVar22 * -16.0);
        fVar20 = (float)expf(-(fVar22 * fVar13));
        fVar13 = 1.0;
        if (fVar22 * 400.0 <= 1.0) {
          fVar13 = fVar22 * 400.0;
        }
        fVar23 = fVar23 + fVar13 * fVar20 * (fVar19 * fVar21 * fVar5 +
                                            fVar18 * fVar17 * fVar6 +
                                            fVar14 + fVar16 * fVar15 * fVar7) * 0.5;
      }
      uVar12 = uVar12 + 1;
    } while ((uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU)) != uVar12);
  }
  return fVar23;
}

