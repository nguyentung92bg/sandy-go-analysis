/* IL2CPP: Dino.BusSand.GameAudio.<>c$$<BuildSynth>b__157_15
float Dino_BusSand_GameAudio___c___BuildSynth_b__157_15 (Dino_BusSand_GameAudio___c_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<>c$$<BuildSynth>b__157_15
   float Dino_BusSand_GameAudio___c___BuildSynth_b__157_15 (Dino_BusSand_GameAudio___c_o* __this,
   float t, const MethodInfo* method); */

float Dino_BusSand_GameAudio___c___BuildSynth_b__157_15_2386624(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = 1.0;
  fVar2 = param_1 * 4.0;
  fVar1 = (param_1 + -0.25) * 4.0;
  fVar5 = fVar4;
  if (fVar2 <= 1.0) {
    fVar5 = fVar2;
  }
  fVar3 = 880.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar5 * 440.0 + 880.0;
  }
  fVar5 = fVar4;
  if (fVar1 <= 1.0) {
    fVar5 = fVar1;
  }
  fVar2 = 1320.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar5 * -330.0 + 1320.0;
  }
  if (0.25 <= param_1) {
    fVar3 = fVar2;
  }
  fVar5 = fVar3 * _UNK_00e1fdf4 * param_1;
  fVar1 = (float)func_0x049b5320(fVar5);
  fVar2 = (float)func_0x049b5320(fVar5 * 3.0);
  fVar3 = (0.5 - param_1) * 20.0;
  fVar5 = fVar4;
  if (param_1 * 80.0 <= 1.0) {
    fVar5 = param_1 * 80.0;
  }
  if (fVar3 <= 1.0) {
    fVar4 = fVar3;
  }
  return fVar4 * fVar5 * (fVar1 + fVar2 * 0.25);
}

