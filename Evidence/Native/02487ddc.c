/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_1$$<BuildSynth>b__41
float Dino_BusSand_GameAudio___c__DisplayClass157_1___BuildSynth_b__41 (Dino_BusSand_GameAudio___c__DisplayClass157_1_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_1$$<BuildSynth>b__41
   float Dino_BusSand_GameAudio___c__DisplayClass157_1___BuildSynth_b__41
   (Dino_BusSand_GameAudio___c__DisplayClass157_1_o* __this, float t, const MethodInfo* method); */

float Dino_BusSand_GameAudio___c__DisplayClass157_1___BuildSynth_b__41_2387ddc
                (float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_2 + 0x10) * _UNK_00e1fdf4;
  fVar1 = (float)func_0x049b5320(fVar6 * param_1);
  fVar2 = (float)func_0x049b5320(fVar6 * _UNK_00e20ac8 * param_1);
  fVar3 = (float)expf(param_1 * -9.0);
  fVar4 = (float)func_0x049b5320((fVar6 + fVar6) * param_1);
  fVar5 = (float)expf(param_1 * _UNK_00e20890);
  fVar6 = 1.0;
  if (param_1 * 300.0 <= 1.0) {
    fVar6 = param_1 * 300.0;
  }
  return fVar6 * fVar5 * (fVar4 * _UNK_00e20390 + fVar1 + fVar3 * fVar2 * _UNK_00e20590);
}

