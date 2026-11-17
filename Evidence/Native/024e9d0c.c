/* IL2CPP: Dino.BusSand.View.StageLayout$$<BuildReturnPath>g__TauOf|106_2
float Dino_BusSand_View_StageLayout___BuildReturnPath_g__TauOf_106_2 (float kGrains, Dino_BusSand_View_StageLayout___c__DisplayClass106_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.StageLayout$$<BuildReturnPath>g__TauOf|106_2
   float Dino_BusSand_View_StageLayout___BuildReturnPath_g__TauOf_106_2 (float kGrains,
   Dino_BusSand_View_StageLayout___c__DisplayClass106_0_o* , const MethodInfo* method); */

float Dino_BusSand_View_StageLayout___BuildReturnPath_g__TauOf_106_2_23e9d0c
                (float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(int *)(param_2 + 8);
  if (fVar1 < param_1) {
    if (param_1 <= (float)(*(int *)(param_2 + 0xc) + *(int *)(param_2 + 8))) {
      param_1 = (param_1 - fVar1) / *(float *)(param_2 + 0x10);
    }
    else {
      fVar2 = (float)*(int *)(param_2 + 0xc);
      param_1 = (param_1 - fVar1) - fVar2;
      fVar1 = fVar2 / *(float *)(param_2 + 0x10) + fVar1;
    }
    param_1 = param_1 + fVar1;
  }
  return param_1;
}

