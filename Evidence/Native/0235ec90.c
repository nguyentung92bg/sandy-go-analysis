/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$EvalSpeedFormula
float Dino_BusSand_App_Meta_RacingRobotParser__EvalSpeedFormula (System_String_o* formula, System_Collections_Generic_Dictionary_string__double__o* vars, System_Random_o* rng, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$EvalSpeedFormula
   float Dino_BusSand_App_Meta_RacingRobotParser__EvalSpeedFormula (System_String_o* formula,
   System_Collections_Generic_Dictionary_string__double__o* vars, System_Random_o* rng, const
   MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_RacingRobotParser__EvalSpeedFormula_225ec90(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = Dino_BusSand_App_Meta_YachtRacingExpr__TryEvaluate_2259218();
  uVar1 = 0;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0x42700000;
  }
  return uVar1;
}

