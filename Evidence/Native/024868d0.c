/* IL2CPP: Dino.BusSand.GameAudio.<>c$$<BuildSynth>b__157_23
float Dino_BusSand_GameAudio___c___BuildSynth_b__157_23 (Dino_BusSand_GameAudio___c_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<>c$$<BuildSynth>b__157_23
   float Dino_BusSand_GameAudio___c___BuildSynth_b__157_23 (Dino_BusSand_GameAudio___c_o* __this,
   float t, const MethodInfo* method); */

float Dino_BusSand_GameAudio___c___BuildSynth_b__157_23_23868d0(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (param_1 * 380.0 + param_1 * _UNK_00e20570 * param_1) * _UNK_00e1fdf4;
  fVar1 = (float)func_0x049b5320(fVar4);
  fVar2 = (float)func_0x049b5320(fVar4 + fVar4);
  fVar4 = 1.0;
  if (param_1 * 330.0 <= 1.0) {
    fVar4 = param_1 * 330.0;
  }
  fVar3 = (float)expf(param_1 * -40.0);
  return fVar3 * fVar4 * (fVar1 + fVar2 * 0.25);
}

