/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$get_IsValid
bool Dino_BusSand_App_Meta_ClimbTowerFeature__get_IsValid (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$get_IsValid
   bool Dino_BusSand_App_Meta_ClimbTowerFeature__get_IsValid
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_ClimbTowerFeature__get_IsValid_2229654(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam0000000004f9be15 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be15 = 1;
  }
  uVar2 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_DataInTime_2229528(param_1);
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)PTR_DAT_04caf910);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    bVar1 = *(char *)(lVar3 + 0x32) == '\0';
  }
  return bVar1;
}

