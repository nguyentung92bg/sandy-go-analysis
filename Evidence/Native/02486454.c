/* IL2CPP: Dino.BusSand.GameAudio.<>c$$<BuildSynth>b__157_6
float Dino_BusSand_GameAudio___c___BuildSynth_b__157_6 (Dino_BusSand_GameAudio___c_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<>c$$<BuildSynth>b__157_6
   float Dino_BusSand_GameAudio___c___BuildSynth_b__157_6 (Dino_BusSand_GameAudio___c_o* __this,
   float t, const MethodInfo* method); */

float Dino_BusSand_GameAudio___c___BuildSynth_b__157_6_2386454(float param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = _UNK_00e20210;
  fVar1 = _UNK_00e1fdf4;
  fVar6 = 0.0;
  iVar3 = 0;
  do {
    fVar5 = param_1 + (float)iVar3 * fVar2;
    if (0.0 < fVar5) {
      fVar4 = (float)func_0x049b5320(fVar5 * ((float)iVar3 * 330.0 + 1760.0) * fVar1);
      fVar5 = (float)expf(fVar5 * -14.0);
      fVar6 = fVar6 + fVar5 * fVar4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 5);
  return fVar6 * _UNK_00e2098c;
}

