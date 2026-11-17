/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotLineup$$RobotAvgTime
float Dino_BusSand_App_Meta_RacingRobotLineup__RobotAvgTime (Dino_BusSand_App_Meta_RacingRobotConfig_o* cfg, int32_t totalLevels, float userScore, System_Random_o* rng, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotLineup$$RobotAvgTime
   float Dino_BusSand_App_Meta_RacingRobotLineup__RobotAvgTime
   (Dino_BusSand_App_Meta_RacingRobotConfig_o* cfg, int32_t totalLevels, float userScore,
   System_Random_o* rng, const MethodInfo* method); */

float Dino_BusSand_App_Meta_RacingRobotLineup__RobotAvgTime_22653c4
                (float param_1,long param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  int iStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined8 uStack_50;
  double dStack_48;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  fVar10 = 0.0;
  if (*(int *)(param_2 + 0x14) != 3) {
    Dino_BusSand_App_Meta_RacingRobotParser__ParseSpeed_225dd68
              (&iStack_60,0,*(undefined8 *)(param_2 + 0x18),param_4);
    if (iStack_60 - 3U < 2) {
LAB_023654ac:
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
      System_Collections_Generic_Dictionary_object__double____ctor_34a5244
                (lVar6,*(undefined8 *)puVar4);
      puVar4 = PTR_DAT_04cb43d0;
      puVar3 = PTR_DAT_04cb43c8;
      puVar2 = PTR_DAT_04cb4388;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_Dictionary_object__double___Add_34a5fbc
                ((double)param_1,lVar6,*(undefined8 *)PTR_DAT_04cb4390,
                 *(undefined8 *)PTR_DAT_04cb4388);
      System_Collections_Generic_Dictionary_object__double___Add_34a5fbc
                ((double)param_3,lVar6,*(undefined8 *)puVar4,*(undefined8 *)puVar2);
      dVar12 = 0.0;
      System_Collections_Generic_Dictionary_object__double___Add_34a5fbc
                (0,lVar6,*(undefined8 *)puVar3,*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_04cb45f0;
      fVar10 = 0.0;
      iVar1 = iVar5;
      if (0 < iVar5) {
        do {
          System_Collections_Generic_Dictionary_object__double___set_Item_34a5fa8
                    (dVar12,lVar6,*(undefined8 *)puVar3,*(undefined8 *)puVar2);
          dStack_48 = 0.0;
          uVar7 = Dino_BusSand_App_Meta_YachtRacingExpr__TryEvaluate_2259218
                            (uStack_50,lVar6,param_4,&dStack_48,0);
          dVar12 = dVar12 + 1.0;
          fVar11 = (float)dStack_48;
          if ((uVar7 & 1) == 0) {
            fVar11 = 60.0;
          }
          iVar1 = iVar1 + -1;
          fVar10 = fVar10 + fVar11;
        } while (iVar1 != 0);
      }
      return fVar10 / (float)iVar5;
    }
    if (iStack_60 == 2) {
      uVar7 = System_String__IsNullOrEmpty_46d2084(uStack_50,0);
      if ((uVar7 & 1) == 0) goto LAB_023654ac;
      fVar10 = (fStack_58 + fStack_54) * 0.5;
    }
    else if (iStack_60 == 1) {
      fVar10 = fStack_5c;
      if ((dStack_48 != 0.0) && (uVar7 = *(ulong *)((long)dStack_48 + 0x18), uVar7 != 0)) {
        fVar10 = 0.0;
        if (0 < (int)uVar7) {
          uVar8 = uVar7 & 0xffffffff;
          pfVar9 = (float *)((long)dStack_48 + 0x20);
          do {
            uVar8 = uVar8 - 1;
            fVar10 = fVar10 + *pfVar9;
            pfVar9 = pfVar9 + 1;
          } while (uVar8 != 0);
        }
        fVar10 = fVar10 / (float)(int)uVar7;
      }
    }
    else {
      fVar10 = 60.0;
    }
  }
  return fVar10;
}

