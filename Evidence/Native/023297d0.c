/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$get_EndMs
int64_t Dino_BusSand_App_Meta_ClimbTowerFeature__get_EndMs (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$get_EndMs
   int64_t Dino_BusSand_App_Meta_ClimbTowerFeature__get_EndMs
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_ClimbTowerFeature__get_EndMs_22297d0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04caf910;
  if ((bRam0000000004f9be19 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be19 = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar2 != 0) {
    return *(undefined8 *)(lVar2 + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

