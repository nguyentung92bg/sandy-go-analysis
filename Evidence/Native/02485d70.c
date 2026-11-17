/* IL2CPP: Dino.BusSand.GameAudio$$Normalize
void Dino_BusSand_GameAudio__Normalize (System_Single_array* d, float peak, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio$$Normalize
   void Dino_BusSand_GameAudio__Normalize (System_Single_array* d, float peak, const MethodInfo*
   method); */

void Dino_BusSand_GameAudio__Normalize_2385d70(float param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  float *pfVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar2 = (uint)*(ulong *)(param_2 + 0x18);
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
  fVar6 = _UNK_00e20900;
  if (0 < (int)uVar2) {
    uVar4 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
    pfVar3 = (float *)(param_2 + 0x20);
    uVar5 = uVar1;
    do {
      if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar4 = uVar4 - 1;
      uVar5 = uVar5 - 1;
      if (fVar6 <= ABS(*pfVar3)) {
        fVar6 = ABS(*pfVar3);
      }
      pfVar3 = pfVar3 + 1;
    } while (uVar4 != 0);
  }
  if (0 < (int)uVar2) {
    pfVar3 = (float *)(param_2 + 0x20);
    do {
      uVar1 = uVar1 - 1;
      *pfVar3 = (param_1 / fVar6) * *pfVar3;
      pfVar3 = pfVar3 + 1;
    } while (uVar1 != 0);
  }
  return;
}

