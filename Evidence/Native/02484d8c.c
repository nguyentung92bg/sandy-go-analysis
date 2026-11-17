/* IL2CPP: Dino.BusSand.GameAudio$$SirenLoop
void Dino_BusSand_GameAudio__SirenLoop (Dino_BusSand_GameAudio_o* __this, bool on, float pan, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAudio$$SirenLoop
   void Dino_BusSand_GameAudio__SirenLoop (Dino_BusSand_GameAudio_o* __this, bool on, float pan,
   const MethodInfo* method); */

void Dino_BusSand_GameAudio__SirenLoop_2384d8c(float param_1,long param_2,undefined1 param_3)

{
  float fVar1;
  float fVar2;
  
  *(undefined1 *)(param_2 + 0x140) = param_3;
  fVar2 = 1.0;
  if (param_1 <= 1.0) {
    fVar2 = param_1;
  }
  fVar1 = -1.0;
  if (-1.0 <= param_1) {
    fVar1 = fVar2;
  }
  *(float *)(param_2 + 0x144) = fVar1;
  return;
}

