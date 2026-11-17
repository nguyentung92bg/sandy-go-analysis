/* IL2CPP: Dino.BusSand.GameAudio$$AddFlux
void Dino_BusSand_GameAudio__AddFlux (Dino_BusSand_GameAudio_o* __this, int32_t grains, float fill, float pan, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAudio$$AddFlux
   void Dino_BusSand_GameAudio__AddFlux (Dino_BusSand_GameAudio_o* __this, int32_t grains, float
   fill, float pan, const MethodInfo* method); */

void Dino_BusSand_GameAudio__AddFlux_2384d0c(float param_1,float param_2,long param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = 1.0;
  if (param_1 <= 1.0) {
    fVar3 = param_1;
  }
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = fVar3;
  }
  fVar4 = (float)param_4;
  fVar3 = 1.0;
  if (param_2 <= 1.0) {
    fVar3 = param_2;
  }
  fVar2 = -1.0;
  if (-1.0 <= param_2) {
    fVar2 = fVar3;
  }
  *(float *)(param_3 + 0x20) = *(float *)(param_3 + 0x20) + fVar4;
  *(ulong *)(param_3 + 0x28) =
       CONCAT44(fVar4 + (float)((ulong)*(undefined8 *)(param_3 + 0x28) >> 0x20),
                fVar1 * fVar4 + (float)*(undefined8 *)(param_3 + 0x28));
  *(float *)(param_3 + 0x3c) = fVar2 * fVar4 + *(float *)(param_3 + 0x3c);
  return;
}

