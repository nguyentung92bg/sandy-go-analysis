/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$get_DataInTime
bool Dino_BusSand_App_Meta_ClimbTowerFeature__get_DataInTime (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$get_DataInTime
   bool Dino_BusSand_App_Meta_ClimbTowerFeature__get_DataInTime
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_ClimbTowerFeature__get_DataInTime_2229528(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam0000000004f9be14 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be14 = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
  uVar3 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_HasData_2229490(param_1);
  puVar1 = PTR_DAT_04caf910;
  if ((uVar3 & 1) == 0) {
    return false;
  }
  lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                    (param_1,*(undefined8 *)PTR_DAT_04caf910);
  if (lVar4 != 0) {
    if (lVar2 < *(long *)(lVar4 + 0x20)) {
      return false;
    }
    lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      return lVar2 <= *(long *)(lVar4 + 0x28);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

