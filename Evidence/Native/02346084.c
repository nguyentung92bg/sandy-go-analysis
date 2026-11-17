/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_HasSnapshot
bool Dino_BusSand_App_Meta_PassportFeature__get_HasSnapshot (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_HasSnapshot
   bool Dino_BusSand_App_Meta_PassportFeature__get_HasSnapshot
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_PassportFeature__get_HasSnapshot_2246084(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf54 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    bRam0000000004f9bf54 = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar3 != 0) {
    uVar2 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar3 + 0x48),0);
    return (uVar2 ^ 0xffffffff) & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

