/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotScore$$CalcUserScore
float Dino_BusSand_App_Meta_RacingRobotScore__CalcUserScore (int32_t stage, float baseScore, float stage1Spend, float stage2Spend, Dino_BusSand_App_Meta_RacingRobotGlobalConfig_o* cfg, float playerAssets, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotScore$$CalcUserScore
   float Dino_BusSand_App_Meta_RacingRobotScore__CalcUserScore (int32_t stage, float baseScore,
   float stage1Spend, float stage2Spend, Dino_BusSand_App_Meta_RacingRobotGlobalConfig_o* cfg, float
   playerAssets, const MethodInfo* method); */

ulong Dino_BusSand_App_Meta_RacingRobotScore__CalcUserScore_22656dc
                (ulong param_1,float param_2,float param_3,float param_4,int param_5,long param_6)

{
  int iVar1;
  float fVar2;
  
  if (param_6 == 0) {
    return 0;
  }
  if (param_5 == 3) {
    iVar1 = 2;
  }
  else {
    if (param_5 != 2) {
      return param_1;
    }
    iVar1 = 1;
    param_3 = param_2;
  }
  if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  fVar2 = *(float *)(param_6 + 0x2c) * (float)(*(int *)(param_6 + 0x20) * iVar1) +
          *(float *)(param_6 + 0x28) * param_4;
  if (0.0 < fVar2) {
    param_1 = (ulong)(uint)((float)param_1 / ((param_3 / fVar2) * *(float *)(param_6 + 0x24) + 1.0))
    ;
  }
  return param_1;
}

