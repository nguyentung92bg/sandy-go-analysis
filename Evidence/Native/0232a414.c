/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$State
int32_t Dino_BusSand_App_Meta_ClimbTowerFeature__State (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$State
   int32_t Dino_BusSand_App_Meta_ClimbTowerFeature__State
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_ClimbTowerFeature__State_222a414(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  
  if ((bRam0000000004f9be26 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf910);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9be26 = 1;
  }
  uVar4 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_HasData_2229490(param_1);
  puVar1 = PTR_DAT_04caf910;
  if ((uVar4 & 1) == 0) {
    uVar4 = Dino_BusSand_App_Meta_ClimbTowerFeature__InActivityTime_2229880();
    if ((uVar4 & 1) != 0) {
      iVar2 = Dino_BusSand_App_Meta_SystemOpen__UnlockLevel_2242f94(2,0);
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabaf8);
      }
      iVar3 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
      if (iVar3 < iVar2) {
        return 0;
      }
    }
    return 4;
  }
  uVar4 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_DataInTime_2229528(param_1);
  lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if ((uVar4 & 1) == 0) {
    if (lVar5 == 0) goto LAB_0232a520;
    if (*(char *)(lVar5 + 0x32) == '\0') {
      Dino_BusSand_App_Meta_ClimbTowerFeature__SetActivityPeriodEnd_222a59c(param_1);
    }
  }
  else {
    if (lVar5 == 0) {
LAB_0232a520:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(lVar5 + 0x32) == '\0') {
      uVar4 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsClaimAllReward_22299e4(param_1);
      if ((uVar4 & 1) != 0) {
        return 3;
      }
      return 1;
    }
  }
  if ((bRam0000000004f9be27 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be27 = 1;
  }
  uVar4 = Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaimIsClaimDone_22298d4(param_1);
  if ((uVar4 & 1) == 0) {
    uVar6 = 2;
  }
  else {
    lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)PTR_DAT_04caf910);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar6 = 3;
    if (*(char *)(lVar5 + 0x31) != '\0') {
      uVar6 = 4;
    }
  }
  return uVar6;
}

