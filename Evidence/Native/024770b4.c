/* IL2CPP: Dino.BusSand.AudioHub$$FadeOutMusic
void Dino_BusSand_AudioHub__FadeOutMusic (Dino_BusSand_AudioHub_o* __this, float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$FadeOutMusic
   void Dino_BusSand_AudioHub__FadeOutMusic (Dino_BusSand_AudioHub_o* __this, float seconds, const
   MethodInfo* method); */

void Dino_BusSand_AudioHub__FadeOutMusic_23770b4(float param_1,long param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_2 + 0x98) = 0;
  fVar1 = 1.0 / param_1;
  if (param_1 <= 0.0) {
    fVar1 = 100.0;
  }
  *(float *)(param_2 + 0x9c) = fVar1;
  return;
}

