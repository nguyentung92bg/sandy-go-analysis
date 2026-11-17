/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotLineup$$AvgFormula
float Dino_BusSand_App_Meta_RacingRobotLineup__AvgFormula (System_String_o* formula, int32_t totalLevels, float userScore, System_Random_o* rng, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotLineup$$AvgFormula
   float Dino_BusSand_App_Meta_RacingRobotLineup__AvgFormula (System_String_o* formula, int32_t
   totalLevels, float userScore, System_Random_o* rng, const MethodInfo* method); */

float Dino_BusSand_App_Meta_RacingRobotLineup__AvgFormula_22654e4
                (float param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dStack_48;
  
  puVar2 = PTR_DAT_04caa200;
  if ((bRam0000000004f9c051 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4388);
    FUN_02132f7c(PTR_DAT_04cb4380);
    FUN_02132f7c(PTR_DAT_04cb45f0);
    FUN_02132f7c(PTR_DAT_04cb4378);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cb4390);
    FUN_02132f7c(PTR_DAT_04cb43c8);
    FUN_02132f7c(PTR_DAT_04cb43d0);
    bRam0000000004f9c051 = 1;
  }
  puVar4 = PTR_DAT_04cb4380;
  puVar3 = PTR_DAT_04cb4378;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar5 = System_Math__Max_4830fc8(1,param_3,0);
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_Dictionary_object__double____ctor_34a5244(lVar6,*(undefined8 *)puVar4);
  puVar4 = PTR_DAT_04cb43d0;
  puVar3 = PTR_DAT_04cb43c8;
  puVar2 = PTR_DAT_04cb4388;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_Dictionary_object__double___Add_34a5fbc
            ((double)param_1,lVar6,*(undefined8 *)PTR_DAT_04cb4390,*(undefined8 *)PTR_DAT_04cb4388);
  System_Collections_Generic_Dictionary_object__double___Add_34a5fbc
            ((double)param_3,lVar6,*(undefined8 *)puVar4,*(undefined8 *)puVar2);
  dVar9 = 0.0;
  System_Collections_Generic_Dictionary_object__double___Add_34a5fbc
            (0,lVar6,*(undefined8 *)puVar3,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_04cb45f0;
  fVar10 = 0.0;
  iVar1 = iVar5;
  if (0 < iVar5) {
    do {
      System_Collections_Generic_Dictionary_object__double___set_Item_34a5fa8
                (dVar9,lVar6,*(undefined8 *)puVar3,*(undefined8 *)puVar2);
      dStack_48 = 0.0;
      uVar7 = Dino_BusSand_App_Meta_YachtRacingExpr__TryEvaluate_2259218
                        (param_2,lVar6,param_4,&dStack_48,0);
      dVar9 = dVar9 + 1.0;
      fVar8 = (float)dStack_48;
      if ((uVar7 & 1) == 0) {
        fVar8 = 60.0;
      }
      iVar1 = iVar1 + -1;
      fVar10 = fVar10 + fVar8;
    } while (iVar1 != 0);
  }
  return fVar10 / (float)iVar5;
}

