/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$get_HasData
bool Dino_BusSand_App_Meta_ClimbTowerFeature__get_HasData (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$get_HasData
   bool Dino_BusSand_App_Meta_ClimbTowerFeature__get_HasData
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_ClimbTowerFeature__get_HasData_2229490(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04caf910;
  if ((bRam0000000004f9be13 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be13 = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x1c) == 0) {
      return false;
    }
    lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)puVar1);
    if (lVar2 != 0) {
      if (*(long *)(lVar2 + 0x20) == 0) {
        return false;
      }
      lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar1);
      if (lVar2 != 0) {
        return *(long *)(lVar2 + 0x28) != 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

