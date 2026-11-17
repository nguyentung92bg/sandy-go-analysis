/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotLineup$$CalcRobotScore
float Dino_BusSand_App_Meta_RacingRobotLineup__CalcRobotScore (Dino_BusSand_App_Meta_RacingRobotConfig_o* cfg, float userAvgTime, int32_t totalLevels, float userScore, System_Random_o* rng, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotLineup$$CalcRobotScore
   float Dino_BusSand_App_Meta_RacingRobotLineup__CalcRobotScore
   (Dino_BusSand_App_Meta_RacingRobotConfig_o* cfg, float userAvgTime, int32_t totalLevels, float
   userScore, System_Random_o* rng, const MethodInfo* method); */

float Dino_BusSand_App_Meta_RacingRobotLineup__CalcRobotScore_2264f58
                (float param_1,undefined4 param_2,long param_3,undefined4 param_4,undefined8 param_5
                )

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_68 [8];
  float fStack_60;
  
  if (param_3 != 0) {
    auVar4 = Dino_BusSand_App_Meta_RacingRobotParser__ParseHangup_225eab4
                       (*(undefined8 *)(param_3 + 0x28));
    if (auVar4._0_4_ == 1) {
      iVar1 = auVar4._4_4_;
    }
    else {
      iVar1 = Dino_BusSand_App_Meta_RacingRobotParser__EvalHangupFormula_225eb60
                        (param_2,auVar4._8_8_,param_5);
    }
    fVar3 = 0.0;
    if ((iVar1 < 1) &&
       (((*(int *)(param_3 + 0x14) != 3 ||
         (Dino_BusSand_App_Meta_RacingRobotParser__ParseChase_225e364
                    (auStack_68,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20)),
         0.0 < fStack_60)) &&
        (fVar2 = (float)Dino_BusSand_App_Meta_RacingRobotLineup__RobotAvgTime_22653c4
                                  (param_2,param_3,param_4,param_5), 0.0 < fVar2)))) {
      fVar3 = ((param_1 + 60.0) * 25.0) / fVar2;
    }
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

