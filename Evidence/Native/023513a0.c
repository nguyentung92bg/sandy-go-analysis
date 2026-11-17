/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature.<HallStreakReward>d__76$$MoveNext
bool Dino_BusSand_App_Meta_StreakRateFeature__HallStreakReward_d__76__MoveNext (Dino_BusSand_App_Meta_StreakRateFeature__HallStreakReward_d__76_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature.<HallStreakReward>d__76$$MoveNext
   bool Dino_BusSand_App_Meta_StreakRateFeature__HallStreakReward_d__76__MoveNext
   (Dino_BusSand_App_Meta_StreakRateFeature__HallStreakReward_d__76_o* __this, const MethodInfo*
   method); */

undefined4
Dino_BusSand_App_Meta_StreakRateFeature__HallStreakReward_d__76__MoveNext_22513a0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined4 uStack_54;
  
  if ((bRam0000000004f9bfcb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad8c8);
    FUN_02132f7c(PTR_DAT_04cad890);
    FUN_02132f7c(PTR_DAT_04cad898);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cad8a0);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cae9a8);
    FUN_02132f7c(PTR_DAT_04cace58);
    bRam0000000004f9bfcb = 1;
  }
  plVar9 = (long *)PTR_DAT_04cae9a8;
  uStack_54 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_023514b4:
    if (*(int *)(*plVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_StreakRateHallBar__Refresh_21dfd10(0);
    return 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  lVar10 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar10 != 0) {
    lVar5 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(lVar10);
    if (lVar5 == 0) {
      return 0;
    }
    if (*(char *)(lVar5 + 0x54) == '\0') {
      return 0;
    }
    uVar6 = Dino_BusSand_App_Meta_StreakRateFeature__IsAllScoreGot_224c18c(lVar10);
    if ((uVar6 & 1) != 0) {
      Dino_BusSand_App_Meta_StreakRateFeature__AutoExecutePendingCommand_224e360(lVar10,lVar5,1);
      plVar9 = (long *)PTR_DAT_04cae9a8;
      goto LAB_023514b4;
    }
    lVar7 = Dino_BusSand_App_Meta_StreakRateFeature__BuildWinRewards_224ed14
                      (lVar10,lVar5,1,&uStack_54);
    iVar4 = Dino_BusSand_App_Meta_StreakTowerUtil__LevelStreakRate_224c2f8
                      (*(undefined4 *)(lVar5 + 0x58));
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    uVar8 = Dino_BusSand_App_Meta_StreakRateFeature__SliderList_224fe74(lVar10,lVar5,iVar4 * 5);
    if (lVar7 != 0) {
      System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                (&uStack_78,lVar7,*(undefined8 *)PTR_DAT_04cad8a0);
      puVar3 = PTR_DAT_04cad890;
      puVar2 = PTR_DAT_04cace58;
      while (uVar6 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                               (&uStack_78,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
        Dino_BusSand_App_Meta_StreakTowerUtil__Grant_224ef30
                  (uStack_68 & 0xffffffff,*(undefined8 *)puVar2);
      }
      System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
                (&uStack_78,*(undefined8 *)PTR_DAT_04cad8c8);
      uVar1 = *(undefined4 *)(lVar7 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_GameTracking__GoldenStreakNodes_221a8d8(lVar5,uVar1,0);
      Dino_BusSand_App_Meta_StreakRateFeature__ApplyWinProgress_224f0e4(lVar10,lVar5,uStack_54,1);
      if (*(int *)(*(long *)PTR_DAT_04cae9a8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = Dino_BusSand_App_UI_StreakRateHallBar__PlayWin_21e1904(iVar4,5,iVar4 * 5,uVar8,0);
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar8);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

