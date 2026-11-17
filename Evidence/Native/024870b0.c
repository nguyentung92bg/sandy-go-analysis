/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_0$$<BuildSynth>b__12
float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__12 (Dino_BusSand_GameAudio___c__DisplayClass157_0_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_0$$<BuildSynth>b__12
   float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__12
   (Dino_BusSand_GameAudio___c__DisplayClass157_0_o* __this, float t, const MethodInfo* method); */

float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__12_23870b0
                (float param_1,long param_2)

{
  double dVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = 0.0;
  if (param_1 < _UNK_00e2030c) {
    plVar2 = *(long **)(param_2 + 0x18);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    dVar1 = (double)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    fVar5 = ((float)dVar1 + (float)dVar1 + -1.0) * _UNK_00e20094;
  }
  fVar3 = (float)expf(param_1 * -90.0);
  fVar4 = (float)func_0x049b5320(param_1 * _UNK_00e20730);
  return fVar4 * fVar3 + fVar5;
}

