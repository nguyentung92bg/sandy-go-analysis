/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotScore$$StageN
float Dino_BusSand_App_Meta_RacingRobotScore__StageN (float baseScore, float spend, int32_t prevStage, Dino_BusSand_App_Meta_RacingRobotGlobalConfig_o* cfg, float assets, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotScore$$StageN
   float Dino_BusSand_App_Meta_RacingRobotScore__StageN (float baseScore, float spend, int32_t
   prevStage, Dino_BusSand_App_Meta_RacingRobotGlobalConfig_o* cfg, float assets, const MethodInfo*
   method); */

float Dino_BusSand_App_Meta_RacingRobotScore__StageN_2265714
                (float param_1,float param_2,float param_3,int param_4,long param_5)

{
  float fVar1;
  
  if (param_5 != 0) {
    fVar1 = *(float *)(param_5 + 0x2c) * (float)(*(int *)(param_5 + 0x20) * param_4) +
            *(float *)(param_5 + 0x28) * param_3;
    if (0.0 < fVar1) {
      param_1 = param_1 / ((param_2 / fVar1) * *(float *)(param_5 + 0x24) + 1.0);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

