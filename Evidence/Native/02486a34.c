/* IL2CPP: Dino.BusSand.GameAudio.<>c$$<BuildSynth>b__157_29
float Dino_BusSand_GameAudio___c___BuildSynth_b__157_29 (Dino_BusSand_GameAudio___c_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<>c$$<BuildSynth>b__157_29
   float Dino_BusSand_GameAudio___c___BuildSynth_b__157_29 (Dino_BusSand_GameAudio___c_o* __this,
   float t, const MethodInfo* method); */

float Dino_BusSand_GameAudio___c___BuildSynth_b__157_29_2386a34(float param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar6 = _UNK_00e20994;
  fVar5 = _UNK_00e20390;
  fVar4 = _UNK_00e20004;
  fVar3 = _UNK_00e1fea8;
  fVar2 = _UNK_00e1fdf4;
  fVar14 = 0.0;
  fVar16 = 0.0;
  bVar7 = true;
  do {
    bVar1 = bVar7;
    fVar16 = param_1 - fVar16;
    if (0.0 <= fVar16) {
      fVar8 = 200.0;
      if (!bVar1) {
        fVar8 = 170.0;
      }
      fVar15 = (fVar8 * fVar16 + fVar16 * fVar16 * -35.0) * fVar2;
      fVar8 = 1.0;
      if (!bVar1) {
        fVar8 = fVar6;
      }
      fVar9 = (float)func_0x049b5320(fVar15);
      fVar10 = (float)func_0x049b5320(fVar15 + fVar15);
      fVar11 = (float)func_0x049b5320(fVar15 * 3.0);
      fVar12 = (float)func_0x049b5320(fVar15 * 4.0);
      fVar13 = (float)expf(fVar16 * -26.0);
      fVar15 = 1.0;
      if (fVar16 * 500.0 <= 1.0) {
        fVar15 = fVar16 * 500.0;
      }
      fVar14 = fVar14 + fVar15 * fVar13 * fVar8 * (fVar12 * fVar5 +
                                                  fVar11 * 0.5 + fVar9 + fVar10 * fVar3);
    }
    fVar16 = fVar4;
    bVar7 = false;
  } while (bVar1);
  return fVar14;
}

