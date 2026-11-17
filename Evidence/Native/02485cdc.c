/* IL2CPP: Dino.BusSand.GameAudio$$LoopFade
void Dino_BusSand_GameAudio__LoopFade (System_Single_array* d, int32_t len, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAudio$$LoopFade
   void Dino_BusSand_GameAudio__LoopFade (System_Single_array* d, int32_t len, const MethodInfo*
   method); */

void Dino_BusSand_GameAudio__LoopFade_2385cdc(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  float fVar6;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar3 = *(ulong *)(param_1 + 0x18);
  uVar2 = (uint)uVar3;
  uVar5 = uVar2;
  if ((int)uVar2 < 0) {
    uVar5 = uVar2 + 1;
  }
  uVar1 = param_2;
  if ((int)uVar5 >> 1 <= (int)param_2) {
    uVar1 = (int)uVar5 >> 1;
  }
  if (0 < (int)uVar1) {
    uVar4 = 0;
    param_1 = param_1 + 0x20;
    uVar5 = uVar2;
    do {
      uVar5 = uVar5 - 1;
      if ((uVar3 & 0xffffffff) == uVar4) {
LAB_02485d60:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      fVar6 = (float)(int)uVar4 / (float)(int)param_2;
      *(float *)(param_1 + uVar4 * 4) = fVar6 * *(float *)(param_1 + uVar4 * 4);
      if (uVar2 <= uVar5) goto LAB_02485d60;
      uVar4 = uVar4 + 1;
      *(float *)(param_1 + (long)(int)uVar5 * 4) =
           fVar6 * *(float *)(param_1 + (long)(int)uVar5 * 4);
    } while (uVar1 != uVar4);
  }
  return;
}

