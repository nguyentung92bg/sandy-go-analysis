/* IL2CPP: Dino.BusSand.GameAudio$$LowPass
void Dino_BusSand_GameAudio__LowPass (System_Single_array* x, System_Func_int__float__o* fc, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio$$LowPass
   void Dino_BusSand_GameAudio__LowPass (System_Single_array* x, System_Func_int__float__o* fc,
   const MethodInfo* method); */

void Dino_BusSand_GameAudio__LowPass_2385b54(long param_1,long param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = _UNK_00e20728;
  fVar2 = _UNK_00e20304;
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x18)) {
      fVar6 = 0.0;
      uVar4 = 0;
      do {
        if (param_2 == 0) goto LAB_02485c0c;
        fVar5 = (float)(**(code **)(param_2 + 0x18))
                                 (*(undefined8 *)(param_2 + 0x40),uVar4 & 0xffffffff,
                                  *(undefined8 *)(param_2 + 0x28));
        uVar1 = *(uint *)(param_1 + 0x18);
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        fVar5 = (float)expf((fVar5 * fVar3) / fVar2);
        fVar6 = fVar6 + (1.0 - fVar5) * (*(float *)(param_1 + 0x20 + uVar4 * 4) - fVar6);
        *(float *)(param_1 + 0x20 + uVar4 * 4) = fVar6;
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)uVar1);
    }
    return;
  }
LAB_02485c0c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

