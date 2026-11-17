/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$Begin
Dino_BusSand_App_Meta_RacingRobotSession_o* Dino_BusSand_App_Meta_RacingRobotSession__Begin (int32_t stage, int64_t startMs, int64_t expMs, Dino_BusSand_App_Meta_RacingRobotSave_o* data, float userScore, System_Single_array* stageScores, float stageThreshold, float userAvgTime, System_Random_o* rng, System_Func_long__o* now, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$Begin
   Dino_BusSand_App_Meta_RacingRobotSession_o* Dino_BusSand_App_Meta_RacingRobotSession__Begin
   (int32_t stage, int64_t startMs, int64_t expMs, Dino_BusSand_App_Meta_RacingRobotSave_o* data,
   float userScore, System_Single_array* stageScores, float stageThreshold, float userAvgTime,
   System_Random_o* rng, System_Func_long__o* now, const MethodInfo* method); */

long Dino_BusSand_App_Meta_RacingRobotSession__Begin_2260320
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
               undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9,
               undefined8 param_10)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uStack_94;
  
  if ((bRam0000000004f9c03c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4400);
    FUN_02132f7c(PTR_DAT_04cb4408);
    FUN_02132f7c(PTR_DAT_04caead0);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cae230);
    FUN_02132f7c(PTR_DAT_04caea30);
    FUN_02132f7c(PTR_DAT_04cb4410);
    FUN_02132f7c(PTR_DAT_04cb4418);
    FUN_02132f7c(PTR_DAT_04cb4420);
    bRam0000000004f9c03c = 1;
  }
  uStack_94 = 0;
  lVar7 = Dino_BusSand_App_Meta_RacingStageConfig__Load_225d05c(param_4);
  lVar8 = Dino_BusSand_App_Meta_RacingRobotGlobalConfig__Load_225d264();
  if (((lVar7 == 0) || (lVar8 == 0)) || (param_7 == 0)) {
    return 0;
  }
  uVar16 = 0;
  if ((param_8 == 0) || (*(long *)(param_8 + 0x18) == 0)) {
    uVar18 = 0;
    uVar17 = 0;
  }
  else {
    iVar14 = (int)*(long *)(param_8 + 0x18);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    uVar17 = *(undefined4 *)(param_8 + 0x20);
    if (iVar14 < 2) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined4 *)(param_8 + 0x24);
      if (iVar14 != 2) {
        uVar16 = *(undefined4 *)(param_8 + 0x28);
      }
    }
  }
  bVar5 = Dino_BusSand_App_Meta_RacingRobotSave__get_HasAgentSnapshot_225facc(param_7);
  if ((bVar5 & 1) == 0) {
    uVar12 = Dino_BusSand_App_Meta_RacingRobotGroupConfig__LoadAll_225d5b0();
    lVar9 = Dino_BusSand_App_Meta_RacingRobotLineup__Build_2260700
                      (param_1,param_3,uVar17,uVar18,uVar16,param_4,lVar7,uVar12,param_9,&uStack_94)
    ;
LAB_02360624:
    puVar3 = PTR_DAT_04cb4420;
    *(undefined8 *)(param_7 + 0x20) = param_5;
    *(undefined8 *)(param_7 + 0x28) = param_6;
    lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    Dino_BusSand_App_Meta_RacingRobotSession___ctor_226010c
              (param_2,lVar10,param_4,lVar7,lVar8,lVar9,param_7,param_5,param_6,bVar5 & 1,param_9,
               param_10);
    if (lVar10 != 0) {
      *(undefined4 *)(lVar10 + 0x80) = param_1;
      *(undefined4 *)(lVar10 + 0x84) = uStack_94;
      if ((bVar5 & 1) != 0) {
        *(undefined1 *)(lVar10 + 0x6c) = *(undefined1 *)(param_7 + 0x48);
        if (param_4 == 3) {
          uVar16 = *(undefined4 *)(param_7 + 0x1c);
        }
        else if (param_4 == 2) {
          uVar16 = *(undefined4 *)(param_7 + 0x18);
        }
        else {
          uVar16 = 0;
          if (param_4 == 1) {
            uVar16 = *(undefined4 *)(param_7 + 0x14);
          }
        }
        *(undefined4 *)(lVar10 + 0x54) = uVar16;
        return lVar10;
      }
      Dino_BusSand_App_Meta_RacingRobotSession__SaveSnapshot_2260e0c(lVar10);
      return lVar10;
    }
  }
  else {
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4410);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar9,*(undefined8 *)PTR_DAT_04cb4408);
    puVar4 = PTR_DAT_04cb4400;
    puVar3 = PTR_DAT_04cae230;
    lVar10 = *(long *)(param_7 + 0x30);
    if (lVar10 != 0) {
      iVar14 = 0;
      do {
        if (*(int *)(lVar10 + 0x18) <= iVar14) {
          uStack_94 = *(undefined4 *)(param_7 + 0x50);
          goto LAB_02360624;
        }
        System_Collections_Generic_List_int___get_Item_3a2bd74(lVar10,iVar14,*(undefined8 *)puVar3);
        lVar10 = Dino_BusSand_App_Meta_RacingRobotConfig__Load_225cfe8();
        if (lVar10 != 0) {
          uVar15 = 0;
          lVar11 = *(long *)(param_7 + 0x40);
          if ((lVar11 != 0) && (iVar14 < *(int *)(lVar11 + 0x18))) {
            uVar15 = System_Collections_Generic_List_float___get_Item_3ac25c4
                               (lVar11,iVar14,*(undefined8 *)PTR_DAT_04caea30);
          }
          if (*(long *)(param_7 + 0x38) == 0) break;
          uVar1 = *(undefined4 *)(lVar7 + 0x18);
          uVar6 = System_Collections_Generic_List_int___get_Item_3a2bd74
                            (*(long *)(param_7 + 0x38),iVar14,*(undefined8 *)puVar3);
          uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4418);
          Dino_BusSand_App_Meta_RacingRobotAgent___ctor_225ed6c
                    (param_1,0,uVar15,uVar17,uVar18,uVar16,uVar12,lVar10,uVar1,param_9,uVar6);
          if (lVar9 == 0) break;
          lVar10 = *(long *)(lVar9 + 0x10);
          lVar11 = *(long *)puVar4;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) break;
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            puVar13 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
            *puVar13 = uVar12;
            thunk_FUN_02134474(puVar13,uVar12);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar9,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar10 = *(long *)(param_7 + 0x30);
        iVar14 = iVar14 + 1;
      } while (lVar10 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

