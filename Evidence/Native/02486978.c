/* IL2CPP: Dino.BusSand.GameAudio.<>c$$<BuildSynth>b__157_25
float Dino_BusSand_GameAudio___c___BuildSynth_b__157_25 (Dino_BusSand_GameAudio___c_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<>c$$<BuildSynth>b__157_25
   float Dino_BusSand_GameAudio___c___BuildSynth_b__157_25 (Dino_BusSand_GameAudio___c_o* __this,
   float t, const MethodInfo* method); */

float Dino_BusSand_GameAudio___c___BuildSynth_b__157_25_2386978(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (float)func_0x049b5320(param_1 * _UNK_00e2072c);
  fVar2 = (float)func_0x049b5320(param_1 * _UNK_00e20364);
  fVar3 = (float)expf(param_1 * -30.0);
  fVar4 = (float)expf(param_1 * -16.0);
  fVar5 = 1.0;
  if (param_1 * 1000.0 <= 1.0) {
    fVar5 = param_1 * 1000.0;
  }
  return fVar5 * fVar4 * (fVar1 + fVar3 * fVar2 * _UNK_00e207cc);
}

