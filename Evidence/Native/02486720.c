/* IL2CPP: Dino.BusSand.GameAudio.<>c$$<BuildSynth>b__157_16
float Dino_BusSand_GameAudio___c___BuildSynth_b__157_16 (Dino_BusSand_GameAudio___c_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<>c$$<BuildSynth>b__157_16
   float Dino_BusSand_GameAudio___c___BuildSynth_b__157_16 (Dino_BusSand_GameAudio___c_o* __this,
   float t, const MethodInfo* method); */

float Dino_BusSand_GameAudio___c___BuildSynth_b__157_16_2386720(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = _UNK_00e208e8;
  fVar2 = 960.0;
  if (_UNK_00e208e8 <= param_1) {
    fVar2 = 720.0;
  }
  fVar3 = (float)func_0x049b5320(param_1 * _UNK_00e1fe80);
  fVar4 = ABS(param_1 + _UNK_00e20924) * 60.0;
  fVar6 = (_UNK_00e20170 - param_1) * 60.0;
  fVar5 = 1.0;
  if (fVar4 <= 1.0) {
    fVar5 = fVar4;
  }
  fVar4 = 1.0;
  if (param_1 * 60.0 <= 1.0) {
    fVar4 = param_1 * 60.0;
  }
  param_1 = fVar2 * (fVar3 * _UNK_00e20488 + 1.0) * _UNK_00e1fdf4 * param_1;
  fVar2 = 1.0;
  if (fVar6 <= 1.0) {
    fVar2 = fVar6;
  }
  fVar3 = (float)func_0x049b5320(param_1);
  fVar6 = (float)func_0x049b5320(param_1 * 3.0);
  return (fVar2 * fVar4 * fVar5 * _UNK_00e2094c + fVar1) * (fVar3 + fVar6 * _UNK_00e20aec);
}

