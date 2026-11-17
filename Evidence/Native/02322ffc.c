/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$WinOnce
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_Meta_BattleRoyaleCore__WinOnce (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, bool* finished, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$WinOnce
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_Meta_BattleRoyaleCore__WinOnce (Dino_BusSand_App_Meta_BattleRoyaleCore_o*
   __this, bool* finished, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_BattleRoyaleCore__WinOnce_2222ffc(long param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  *param_2 = 0;
  Dino_BusSand_App_Meta_BattleRoyaleCore__AddFinishedGameNum_22239f4();
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) goto LAB_02323258;
  if (*(int *)(lVar6 + 0x48) != 1) {
    return 0;
  }
  iVar2 = *(int *)(lVar6 + 0x20) + 1;
  *(int *)(lVar6 + 0x20) = iVar2;
  iVar1 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc(param_1);
  if (iVar2 < iVar1) {
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) goto LAB_02323258;
    uVar9 = 0;
    *(int *)(param_1 + 0x34) = *(int *)(lVar6 + 0x20) + -1;
  }
  else {
    *param_2 = 1;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) goto LAB_02323258;
    if (*(long *)(lVar6 + 0x28) / 86400000 < *(long *)(lVar6 + 0x40)) {
LAB_023230b0:
      uVar7 = 0;
    }
    else {
      iVar2 = *(int *)(lVar6 + 0x38) + 1;
      *(int *)(lVar6 + 0x38) = iVar2;
      lVar6 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config_22206d8(param_1);
      if (lVar6 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(lVar6 + 0x14);
      }
      if (iVar2 < iVar1) {
        lVar6 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config_22206d8(param_1);
        if ((lVar6 == 0) || (*(int *)(lVar6 + 0x30) < 1)) {
          lVar6 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config_22206d8(param_1);
          if ((lVar6 == 0) || (*(int *)(lVar6 + 0x34) < 1)) {
            lVar6 = *(long *)(param_1 + 0x10);
            if (lVar6 == 0) goto LAB_02323258;
            goto LAB_023230b0;
          }
          lVar6 = *(long *)(param_1 + 0x20);
          if (lVar6 == 0) goto LAB_02323258;
          lVar11 = *(long *)(param_1 + 0x10);
          lVar10 = (**(code **)(lVar6 + 0x18))
                             (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
          lVar6 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config_22206d8(param_1);
          if (lVar6 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = (long)*(int *)(lVar6 + 0x34) * 1000;
          }
          if (lVar11 == 0) goto LAB_02323258;
          lVar6 = *(long *)(param_1 + 0x10);
          *(long *)(lVar11 + 0x18) = lVar8 + lVar10;
          if (lVar6 == 0) goto LAB_02323258;
          uVar7 = 5;
        }
        else {
          lVar10 = *(long *)(param_1 + 0x10);
          lVar6 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config_22206d8(param_1);
          if (lVar6 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined4 *)(lVar6 + 0x30);
          }
          if (lVar10 == 0) goto LAB_02323258;
          lVar6 = *(long *)(param_1 + 0x10);
          *(undefined4 *)(lVar10 + 0x4c) = uVar7;
          if (lVar6 == 0) goto LAB_02323258;
          uVar7 = 3;
        }
      }
      else {
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 == 0) goto LAB_02323258;
        uVar7 = 2;
      }
    }
    *(undefined4 *)(lVar6 + 0x48) = uVar7;
    uVar9 = Dino_BusSand_App_Meta_BattleRoyaleCore__GiveReward_2223a44(param_1);
    lVar6 = *(long *)(param_1 + 0x10);
  }
  iVar2 = Dino_BusSand_App_Meta_BattleRoyaleRules__LiveBots_22212e4(lVar6);
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    uVar7 = *(undefined4 *)(lVar6 + 0x7c);
    iVar1 = *(int *)(lVar6 + 0x20);
    iVar3 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc(param_1);
    iVar4 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurStageDeadPersonNum_22213d0(param_1);
    uVar5 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_RemainDurationSeconds_222127c(param_1);
    Dino_BusSand_App_Meta_BattleRoyaleTrack__StageAdvance_22250c0
              (uVar7,1,iVar1 + -1,iVar1,iVar4 + iVar2 + 1,iVar2 + 1,iVar1,uVar5,iVar3 <= iVar1);
    return uVar9;
  }
LAB_02323258:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

