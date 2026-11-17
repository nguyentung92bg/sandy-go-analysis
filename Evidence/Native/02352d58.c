/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature$$IsActiveInConditions
bool Dino_BusSand_App_Meta_SystemOpenFeature__IsActiveInConditions (int32_t id, bool fromGame, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature$$IsActiveInConditions
   bool Dino_BusSand_App_Meta_SystemOpenFeature__IsActiveInConditions (int32_t id, bool fromGame,
   const MethodInfo* method); */

uint Dino_BusSand_App_Meta_SystemOpenFeature__IsActiveInConditions_2252d58(int param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lStack_28;
  
  puVar1 = PTR_DAT_04cb3d00;
  if ((bRam0000000004f9bfdf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3d10);
    FUN_02132f7c(PTR_DAT_04caf7b8);
    FUN_02132f7c(PTR_DAT_04cafe20);
    FUN_02132f7c(PTR_DAT_04caf3e0);
    FUN_02132f7c(PTR_DAT_04caf788);
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04cb3d00);
    FUN_02132f7c(PTR_DAT_04cb2180);
    bRam0000000004f9bfdf = 1;
  }
  lVar3 = *(long *)puVar1;
  lStack_28 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 != 0) {
    uVar4 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                      (lVar3,param_1,&lStack_28,*(undefined8 *)PTR_DAT_04cb3d10);
    if (((uVar4 & 1) == 0) || (lStack_28 == 0)) {
      uVar2 = 0;
      if (param_1 < 4) {
        if (param_1 == 2) {
          if (*(int *)(*(long *)PTR_DAT_04cac668 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar3 = Dino_BusSand_App_Meta_LiveOps__Get_object__27ef0a4
                            (*(undefined8 *)PTR_DAT_04cafe20);
          uVar2 = 0;
          if (lVar3 != 0) {
            uVar2 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_HasData_2229490(lVar3,0);
          }
        }
        else if (param_1 == 3) {
          if (*(int *)(*(long *)PTR_DAT_04cac668 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar3 = Dino_BusSand_App_Meta_LiveOps__Get_object__27ef0a4
                            (*(undefined8 *)PTR_DAT_04caf3e0);
          uVar2 = 0;
          if ((lVar3 != 0) && ((param_2 & 1) != 0)) {
            uVar2 = Dino_BusSand_App_Meta_StreakRateFeature__HaveNewActivity_224d280(lVar3);
          }
        }
      }
      else if (param_1 == 4) {
        if (*(int *)(*(long *)PTR_DAT_04cac668 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar3 = Dino_BusSand_App_Meta_LiveOps__Get_object__27ef0a4(*(undefined8 *)PTR_DAT_04caf7b8);
        if ((param_2 & 1) == 0) {
          uVar2 = 0;
        }
        else if (lVar3 == 0) {
          uVar5 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
          uVar2 = Dino_BusSand_App_Meta_StreakTowerUtil__InActivityTime_2251994
                            (*(undefined8 *)PTR_DAT_04cb2180,1,uVar5);
        }
        else {
          lVar3 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_Core_22262b8(lVar3,0);
          if (lVar3 == 0) goto LAB_02352fb4;
          uVar2 = Dino_BusSand_App_Meta_BattleRoyaleCore__HaveValidGroup_2220f34(lVar3,0);
        }
      }
      else if (param_1 == 5) {
        if (*(int *)(*(long *)PTR_DAT_04cac668 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar3 = Dino_BusSand_App_Meta_LiveOps__Get_object__27ef0a4(*(undefined8 *)PTR_DAT_04caf788);
        uVar2 = 0;
        if (lVar3 != 0) {
          lVar3 = Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38(lVar3,0);
          if (lVar3 == 0) goto LAB_02352fb4;
          uVar2 = Dino_BusSand_App_Meta_YachtRacingCore__get_HaveData_2252fb8();
        }
      }
    }
    else {
      uVar2 = (**(code **)(lStack_28 + 0x18))
                        (*(undefined8 *)(lStack_28 + 0x40),param_2 & 1,
                         *(undefined8 *)(lStack_28 + 0x28));
    }
    return uVar2 & 1;
  }
LAB_02352fb4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

