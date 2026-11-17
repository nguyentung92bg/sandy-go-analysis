/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$EvalHangupFormula
int32_t Dino_BusSand_App_Meta_RacingRobotParser__EvalHangupFormula (System_String_o* formula, float userScore, System_Random_o* rng, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$EvalHangupFormula
   int32_t Dino_BusSand_App_Meta_RacingRobotParser__EvalHangupFormula (System_String_o* formula,
   float userScore, System_Random_o* rng, const MethodInfo* method); */

int Dino_BusSand_App_Meta_RacingRobotParser__EvalHangupFormula_225eb60
              (float param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  double dStack_38;
  
  puVar2 = PTR_DAT_04cb4380;
  puVar1 = PTR_DAT_04cb4378;
  if ((bRam0000000004f9c029 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4388);
    FUN_02132f7c(PTR_DAT_04cb4380);
    FUN_02132f7c(PTR_DAT_04cb4378);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cb4390);
    bRam0000000004f9c029 = 1;
  }
  dStack_38 = 0.0;
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary_object__double____ctor_34a5244(lVar5,*(undefined8 *)puVar2);
  if (lVar5 != 0) {
    System_Collections_Generic_Dictionary_object__double___Add_34a5fbc
              ((double)param_1,lVar5,*(undefined8 *)PTR_DAT_04cb4390,*(undefined8 *)PTR_DAT_04cb4388
              );
    uVar6 = Dino_BusSand_App_Meta_YachtRacingExpr__TryEvaluate_2259218
                      (param_2,lVar5,param_3,&dStack_38,0);
    dVar3 = dStack_38;
    if ((uVar6 & 1) == 0) {
      iVar4 = 0;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar4 = -0x80000000;
      if ((double)(long)dVar3 != INFINITY) {
        iVar4 = (int)dVar3;
      }
    }
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

