/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_0$$<BuildSynth>b__21
float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__21 (Dino_BusSand_GameAudio___c__DisplayClass157_0_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_0$$<BuildSynth>b__21
   float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__21
   (Dino_BusSand_GameAudio___c__DisplayClass157_0_o* __this, float t, const MethodInfo* method); */

float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__21_2387824
                (float param_1,long param_2)

{
  double dVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  plVar2 = *(long **)(param_2 + 0x18);
  if (plVar2 != (long *)0x0) {
    fVar6 = _UNK_00e200e0 / *(float *)(param_2 + 0x38);
    fVar3 = *(float *)(param_2 + 0x38) * param_1;
    fVar3 = (float)expf(fVar3 + fVar3);
    fVar4 = (float)func_0x049b5320(param_1 * _UNK_00e20008);
    fVar4 = (float)func_0x049b5320(fVar4 * _UNK_00e20094 + fVar6 * (fVar3 + -1.0));
    fVar6 = (0.5 - param_1) / _UNK_00e201f4;
    fVar3 = 1.0;
    if (param_1 / _UNK_00e20174 <= 1.0) {
      fVar3 = param_1 / _UNK_00e20174;
    }
    fVar5 = 1.0;
    if (fVar6 <= 1.0) {
      fVar5 = fVar6;
    }
    dVar1 = (double)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    return fVar3 * fVar5 * (fVar4 + ((float)dVar1 + (float)dVar1 + -1.0) * _UNK_00e20aec);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

