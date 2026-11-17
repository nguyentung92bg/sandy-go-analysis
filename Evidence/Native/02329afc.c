/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$CanClaim
bool Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaim (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t winPoint, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$CanClaim
   bool Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaim
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t winPoint, const MethodInfo* method);
    */

bool Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaim_2229afc(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04caf910;
  if ((bRam0000000004f9be1f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be1f = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar2 != 0) {
    return param_2 <= *(int *)(lVar2 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

