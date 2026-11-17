/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_0$$<BuildSynth>b__7
float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__7 (Dino_BusSand_GameAudio___c__DisplayClass157_0_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_0$$<BuildSynth>b__7
   float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__7
   (Dino_BusSand_GameAudio___c__DisplayClass157_0_o* __this, float t, const MethodInfo* method); */

float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__7_2386d9c
                (float param_1,long param_2)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  
  fVar6 = (param_1 * 320.0 + param_1 * _UNK_00e207fc * param_1) * _UNK_00e1fdf4;
  fVar2 = (float)func_0x049b5320(fVar6);
  fVar3 = (float)expf(param_1 * -28.0);
  fVar6 = (float)func_0x049b5320(fVar6 * _UNK_00e20184);
  fVar4 = (float)expf(param_1 * -45.0);
  if (_UNK_00e207ec <= param_1) {
    fVar3 = fVar3 * fVar2 + fVar4 * fVar6 * _UNK_00e2038c;
    fVar2 = 0.0;
  }
  else {
    plVar1 = *(long **)(param_2 + 0x18);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar3 = fVar3 * fVar2 + fVar4 * fVar6 * _UNK_00e2038c;
    dVar5 = (double)(**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
    fVar2 = (param_1 / _UNK_00e20904 + 1.0) * ((float)dVar5 + (float)dVar5 + -1.0) * _UNK_00e20994;
  }
  return fVar3 + fVar2;
}

