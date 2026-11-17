/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotLineup$$FillThreatRobots
void Dino_BusSand_App_Meta_RacingRobotLineup__FillThreatRobots (System_Collections_Generic_List_RacingRobotAgent__o* agents, Dino_BusSand_App_Meta_RacingRobotGroupConfig_o* group, System_Collections_Generic_List_int__o* templates, float userScore, float userAvgTime, Dino_BusSand_App_Meta_RacingStageConfig_o* stageCfg, System_Random_o* rng, float s1, float s2, float s3, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotLineup$$FillThreatRobots
   void Dino_BusSand_App_Meta_RacingRobotLineup__FillThreatRobots
   (System_Collections_Generic_List_RacingRobotAgent__o* agents,
   Dino_BusSand_App_Meta_RacingRobotGroupConfig_o* group, System_Collections_Generic_List_int__o*
   templates, float userScore, float userAvgTime, Dino_BusSand_App_Meta_RacingStageConfig_o*
   stageCfg, System_Random_o* rng, float s1, float s2, float s3, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotLineup__FillThreatRobots_2265034
               (float param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
               ,long param_6,long param_7,long param_8,long param_9,undefined8 param_10)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  
  if ((bRam0000000004f9c052 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4460);
    FUN_02132f7c(PTR_DAT_04cb4468);
    FUN_02132f7c(PTR_DAT_04cb4470);
    FUN_02132f7c(PTR_DAT_04cb4400);
    FUN_02132f7c(PTR_DAT_04cb4478);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cae230);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cb4418);
    bRam0000000004f9c052 = 1;
  }
  puVar5 = PTR_DAT_04cb4468;
  puVar4 = PTR_DAT_04cb4460;
  uStack_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  lStack_b0 = 0;
  if ((param_7 != 0) && (param_6 != 0)) {
    iVar1 = *(int *)(param_7 + 0x24);
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_d8,param_6,*(undefined8 *)PTR_DAT_04cb4478);
    iVar13 = 0;
    fVar16 = 0.0;
    lStack_b0 = lStack_c8;
    puStack_b8 = puStack_d0;
    uStack_c0 = uStack_d8;
    uStack_d8 = 0;
    puStack_d0 = &uStack_c0;
LAB_02365164:
    uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_c0,*(undefined8 *)puVar5);
    if ((uVar8 & 1) != 0) {
      if (iVar1 != 1) goto code_r0x02365180;
      if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_02365194;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_c0,*(undefined8 *)puVar4);
    puVar6 = PTR_DAT_04cb4400;
    puVar5 = PTR_DAT_04cae230;
    puVar4 = PTR_DAT_04caa200;
    iVar1 = *(int *)(param_7 + 0x1c);
    if (0 < iVar1 + iVar13) {
      if (param_8 == 0) goto LAB_02365364;
      if ((*(int *)(param_8 + 0x18) != 0) && (0 < iVar1)) {
        iVar14 = 0;
        do {
          iVar2 = *(int *)(param_8 + 0x18);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar7 = System_Math__Min_4831118(iVar14,iVar2 + -1,0);
          System_Collections_Generic_List_int___get_Item_3a2bd74
                    (param_8,uVar7,*(undefined8 *)puVar5);
          lVar9 = Dino_BusSand_App_Meta_RacingRobotConfig__Load_225cfe8();
          if (lVar9 != 0) {
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            fVar15 = (float)System_Math__Max_4830ff4
                                      (0x3f800000,
                                       ((float)(iVar1 + iVar13) * param_1 - fVar16) / (float)iVar1,0
                                      );
            if (param_9 == 0) goto LAB_02365364;
            uVar7 = *(undefined4 *)(param_9 + 0x18);
            uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4418);
            Dino_BusSand_App_Meta_RacingRobotAgent___ctor_225ed6c
                      (param_1,fVar15,((param_2 + 60.0) * 25.0) / fVar15,param_3,param_4,param_5,
                       uVar10,lVar9,uVar7,param_10,0);
            lVar9 = *(long *)(param_6 + 0x10);
            lVar12 = *(long *)puVar6;
            *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_02365364;
            uVar3 = *(uint *)(param_6 + 0x18);
            if (uVar3 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(param_6 + 0x18) = uVar3 + 1;
              puVar11 = (undefined8 *)(lVar9 + (long)(int)uVar3 * 8 + 0x20);
              *puVar11 = uVar10;
              thunk_FUN_02134474(puVar11,uVar10);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (param_6,uVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
          }
          iVar14 = iVar14 + 1;
        } while (iVar1 != iVar14);
      }
    }
    return;
  }
LAB_02365364:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
code_r0x02365180:
  if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(char *)(lStack_b0 + 0xa4) != '\0') {
LAB_02365194:
    iVar13 = iVar13 + 1;
    fVar16 = fVar16 + *(float *)(lStack_b0 + 0xa8);
  }
  goto LAB_02365164;
}

