/* IL2CPP: Dino.BusSand.GameAudio$$SetHush
void Dino_BusSand_GameAudio__SetHush (Dino_BusSand_GameAudio_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAudio$$SetHush
   void Dino_BusSand_GameAudio__SetHush (Dino_BusSand_GameAudio_o* __this, float k, const
   MethodInfo* method); */

void Dino_BusSand_GameAudio__SetHush_23847a4(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0;
  if (param_1 <= 1.0) {
    fVar2 = param_1;
  }
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = fVar2;
  }
  *(float *)(param_2 + 0x13c) = fVar1;
  return;
}

