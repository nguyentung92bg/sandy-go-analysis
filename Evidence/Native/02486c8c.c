/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_0$$<BuildSynth>b__5
float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__5 (Dino_BusSand_GameAudio___c__DisplayClass157_0_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio.<>c__DisplayClass157_0$$<BuildSynth>b__5
   float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__5
   (Dino_BusSand_GameAudio___c__DisplayClass157_0_o* __this, float t, const MethodInfo* method); */

float Dino_BusSand_GameAudio___c__DisplayClass157_0___BuildSynth_b__5_2386c8c
                (float param_1,long param_2)

{
  double dVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  plVar2 = *(long **)(param_2 + 0x18);
  if (plVar2 != (long *)0x0) {
    fVar3 = (float)expf(param_1 * -40.0);
    fVar7 = (param_1 * 240.0 + param_1 * -150.0 * param_1) * _UNK_00e1fdf4;
    fVar4 = (float)func_0x049b5320(fVar7 * _UNK_00e1fea4);
    fVar7 = (float)func_0x049b5320(fVar7);
    dVar1 = (double)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    fVar5 = (float)expf(param_1 * -70.0);
    fVar6 = (float)expf(param_1 * -20.0);
    return fVar6 * (fVar7 + fVar3 * fVar4 * _UNK_00e1fea8 +
                   fVar5 * (float)(dVar1 + dVar1 + -1.0) * _UNK_00e2098c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

