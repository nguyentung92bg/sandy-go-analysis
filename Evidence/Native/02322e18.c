/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$LoseOnce
void Dino_BusSand_App_Meta_BattleRoyaleCore__LoseOnce (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$LoseOnce
   void Dino_BusSand_App_Meta_BattleRoyaleCore__LoseOnce (Dino_BusSand_App_Meta_BattleRoyaleCore_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleCore__LoseOnce_2222e18(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  
  Dino_BusSand_App_Meta_BattleRoyaleCore__AddFinishedGameNum_22239f4();
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) goto LAB_02322ff8;
  if (*(int *)(lVar6 + 0x48) == 1) {
    iVar2 = *(int *)(lVar6 + 0x20);
    iVar3 = Dino_BusSand_App_Meta_BattleRoyaleRules__LiveBots_22212e4();
    iVar4 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurStageDeadPersonNum_22213d0(param_1);
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) goto LAB_02322ff8;
    iVar1 = *(int *)(lVar6 + 0x14) + 1;
    *(int *)(lVar6 + 0x14) = iVar1;
    lVar6 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config_22206d8(param_1);
    if (lVar6 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(lVar6 + 0x20);
    }
    lVar6 = *(long *)(param_1 + 0x10);
    if (iVar1 < iVar8) {
      if (lVar6 == 0) {
LAB_02322ff8:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      *(undefined4 *)(lVar6 + 0x48) = 0;
      *(undefined4 *)(lVar6 + 0x20) = 0;
      Dino_BusSand_App_Meta_BattleRoyaleRules__ClearGroup_22224c4(lVar6);
      Dino_BusSand_App_Meta_BattleRoyaleCore__AutoAddStartCommand_2223fd8(param_1,1);
      lVar9 = *(long *)(param_1 + 0x10);
      if (lVar9 == 0) goto LAB_02322ff8;
    }
    else {
      if (lVar6 == 0) goto LAB_02322ff8;
      if (*(char *)(lVar6 + 0xa8) == '\0') {
        lVar9 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config_22206d8(param_1);
        if (lVar9 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(lVar9 + 0x2c);
        }
        lVar9 = *(long *)(param_1 + 0x10);
        *(undefined4 *)(lVar6 + 0x4c) = uVar11;
        if (lVar9 == 0) goto LAB_02322ff8;
        *(undefined4 *)(lVar9 + 0x48) = 3;
      }
      else {
        lVar9 = *(long *)(param_1 + 0x20);
        if (lVar9 == 0) goto LAB_02322ff8;
        lVar9 = (**(code **)(lVar9 + 0x18))
                          (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
        lVar7 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config_22206d8(param_1);
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = (long)*(int *)(lVar7 + 0x24) * 1000;
        }
        lVar10 = *(long *)(param_1 + 0x10);
        *(long *)(lVar6 + 0x18) = lVar7 + lVar9;
        if (lVar10 == 0) goto LAB_02322ff8;
        if (*(long *)(lVar10 + 0x70) < *(long *)(lVar10 + 0x18)) {
          uVar11 = 6;
          *(undefined8 *)(lVar10 + 0x18) = 0;
        }
        else {
          uVar11 = 4;
        }
        *(undefined4 *)(lVar10 + 0x48) = uVar11;
        lVar9 = *(long *)(param_1 + 0x10);
        if (lVar9 == 0) goto LAB_02322ff8;
      }
      *(undefined4 *)(lVar9 + 0x14) = 0;
    }
    uVar11 = *(undefined4 *)(lVar9 + 0x7c);
    uVar5 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_RemainDurationSeconds_222127c(param_1);
    Dino_BusSand_App_Meta_BattleRoyaleTrack__StageAdvance_22250c0
              (uVar11,2,iVar2,0,iVar3 + 1 + iVar4,iVar3 + 1,iVar2 + 1,uVar5,0);
  }
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02322fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
  return;
}

