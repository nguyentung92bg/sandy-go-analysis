/* IL2CPP: Dino.BusSand.GameAudio.<>c$$<BuildSynth>b__157_9
float Dino_BusSand_GameAudio___c___BuildSynth_b__157_9 (Dino_BusSand_GameAudio___c_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<>c$$<BuildSynth>b__157_9
   float Dino_BusSand_GameAudio___c___BuildSynth_b__157_9 (Dino_BusSand_GameAudio___c_o* __this,
   float t, const MethodInfo* method); */

float Dino_BusSand_GameAudio___c___BuildSynth_b__157_9_2386514(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)NEON_fminnm(param_1,_UNK_00e20a94);
  fVar1 = (float)func_0x049b5320((param_1 * 700.0 + fVar1 * fVar1 * _UNK_00e207f8) * _UNK_00e1fdf4);
  fVar2 = (float)expf(param_1 * -32.0);
  return fVar2 * fVar1;
}

