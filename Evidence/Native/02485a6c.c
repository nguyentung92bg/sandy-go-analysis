/* IL2CPP: Dino.BusSand.GameAudio$$BandPass
void Dino_BusSand_GameAudio__BandPass (System_Single_array* x, System_Func_int__float__o* fc, float damping, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio$$BandPass
   void Dino_BusSand_GameAudio__BandPass (System_Single_array* x, System_Func_int__float__o* fc,
   float damping, const MethodInfo* method); */

void Dino_BusSand_GameAudio__BandPass_2385a6c(float param_1,long param_2,long param_3)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  ulong uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = _UNK_00e2082c;
  uVar3 = _UNK_00e20508;
  fVar2 = _UNK_00e20304;
  if (param_2 != 0) {
    if (0 < *(int *)(param_2 + 0x18)) {
      fVar8 = 0.0;
      fVar9 = 0.0;
      uVar5 = 0;
      do {
        if (param_3 == 0) goto LAB_02485b4c;
        uVar6 = (**(code **)(param_3 + 0x18))
                          (*(undefined8 *)(param_3 + 0x40),uVar5 & 0xffffffff,
                           *(undefined8 *)(param_3 + 0x28));
        uVar1 = *(uint *)(param_2 + 0x18);
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        fVar7 = (float)NEON_fminnm(uVar6,uVar3);
        fVar7 = (float)func_0x049b5320((fVar7 * fVar4) / fVar2);
        fVar9 = fVar9 + fVar8 * (fVar7 + fVar7);
        fVar8 = fVar8 + (fVar7 + fVar7) *
                        ((*(float *)(param_2 + 0x20 + uVar5 * 4) - fVar9) - fVar8 * param_1);
        *(float *)(param_2 + 0x20 + uVar5 * 4) = fVar8;
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)uVar1);
    }
    return;
  }
LAB_02485b4c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

