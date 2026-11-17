/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupFeature$$get_Joined
bool Dino_BusSand_App_Meta_WeeklyCupFeature__get_Joined (Dino_BusSand_App_Meta_WeeklyCupFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupFeature$$get_Joined
   bool Dino_BusSand_App_Meta_WeeklyCupFeature__get_Joined
   (Dino_BusSand_App_Meta_WeeklyCupFeature_o* __this, const MethodInfo* method); */

undefined1 Dino_BusSand_App_Meta_WeeklyCupFeature__get_Joined_22303f4(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04caf838;
  if ((bRam0000000004f9be6f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf838);
    bRam0000000004f9be6f = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar2 != 0) {
    return *(undefined1 *)(lVar2 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

