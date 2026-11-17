/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$CanClaimPass
bool Dino_BusSand_App_Meta_PassportFeature__CanClaimPass (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$CanClaimPass
   bool Dino_BusSand_App_Meta_PassportFeature__CanClaimPass
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t i, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_PassportFeature__CanClaimPass_2247180(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf6f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    bRam0000000004f9bf6f = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(char *)(lVar2 + 0x61) == '\0') ||
     (uVar3 = Dino_BusSand_App_Meta_PassportFeature__IsPassClaimed_2247094(param_1,param_2),
     puVar1 = PTR_DAT_04cb01b0, (uVar3 & 1) != 0)) {
    return false;
  }
  if ((bRam0000000004f9bf68 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    bRam0000000004f9bf68 = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar2 != 0) {
    return param_2 < *(int *)(lVar2 + 0x2c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

