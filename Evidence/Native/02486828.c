/* IL2CPP: Dino.BusSand.GameAudio.<>c$$<BuildSynth>b__157_18
float Dino_BusSand_GameAudio___c___BuildSynth_b__157_18 (Dino_BusSand_GameAudio___c_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<>c$$<BuildSynth>b__157_18
   float Dino_BusSand_GameAudio___c___BuildSynth_b__157_18 (Dino_BusSand_GameAudio___c_o* __this,
   float t, const MethodInfo* method); */

float Dino_BusSand_GameAudio___c___BuildSynth_b__157_18_2386828(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)func_0x049b5320((param_1 * -500.0 + 260.0) * _UNK_00e1fdf4 * param_1);
  fVar2 = (float)func_0x049b5320(param_1 * _UNK_00e20360);
  fVar3 = (float)expf(param_1 * -40.0);
  fVar4 = (float)expf(param_1 * -28.0);
  return fVar4 * (fVar3 * fVar2 * _UNK_00e207cc + fVar1);
}

