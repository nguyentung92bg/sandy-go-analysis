/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_0$$<BuildSynth>b__36
float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__36 (Dino_BusSand_GameAudio___c__DisplayClass157_0_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_0$$<BuildSynth>b__36
   float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__36
   (Dino_BusSand_GameAudio___c__DisplayClass157_0_o* __this, float t, const MethodInfo* method); */

float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__36_2387be8
                (float param_1,long param_2)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  long *plVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar9 = _UNK_00e20ac4;
  fVar8 = _UNK_00e209e8;
  fVar7 = _UNK_00e2094c;
  fVar6 = _UNK_00e208e8;
  fVar5 = _UNK_00e204a4;
  fVar4 = _UNK_00e20368;
  fVar3 = _UNK_00e200f8;
  fVar2 = _UNK_00e1fef8;
  fVar17 = 0.0;
  fVar20 = 1.0;
  fVar18 = 0.0;
  bVar10 = true;
  do {
    bVar12 = bVar10;
    fVar18 = param_1 - fVar18;
    if (0.0 <= fVar18) {
      fVar19 = 0.0;
      if (fVar18 < fVar4) {
        plVar11 = *(long **)(param_2 + 0x48);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        dVar1 = (double)(**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
        fVar19 = ((float)dVar1 + (float)dVar1 + -1.0) * 0.5;
      }
      fVar13 = (float)func_0x049b5320(fVar18 * fVar8);
      fVar14 = (float)func_0x049b5320(fVar18 * fVar5);
      fVar15 = (float)expf(fVar18 * -95.0);
      fVar16 = (float)func_0x049b5320(fVar18 * fVar9);
      fVar18 = (float)expf(fVar18 * -60.0);
      fVar17 = fVar17 + fVar20 * (fVar18 * fVar16 * fVar3 +
                                 fVar15 * (fVar13 + fVar14 * fVar7) + fVar19);
    }
    fVar20 = fVar6;
    fVar18 = fVar2;
    bVar10 = false;
  } while (bVar12);
  return fVar17;
}

