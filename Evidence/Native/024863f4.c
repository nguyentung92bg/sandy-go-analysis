/* IL2CPP: Dino.BusSand.GameAudio.<>c$$<BuildSynth>b__157_4
float Dino_BusSand_GameAudio___c___BuildSynth_b__157_4 (Dino_BusSand_GameAudio___c_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<>c$$<BuildSynth>b__157_4
   float Dino_BusSand_GameAudio___c___BuildSynth_b__157_4 (Dino_BusSand_GameAudio___c_o* __this,
   float t, const MethodInfo* method); */

float Dino_BusSand_GameAudio___c___BuildSynth_b__157_4_23863f4(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)func_0x049b5320((param_1 * 600.0 + 880.0) * _UNK_00e1fdf4 * param_1);
  fVar2 = (float)expf(param_1 * -40.0);
  return fVar2 * fVar1;
}

