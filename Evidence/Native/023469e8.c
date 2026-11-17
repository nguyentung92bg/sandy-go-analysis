/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_DisplayedKeysForHud
int32_t Dino_BusSand_App_Meta_PassportFeature__get_DisplayedKeysForHud (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_DisplayedKeysForHud
   int32_t Dino_BusSand_App_Meta_PassportFeature__get_DisplayedKeysForHud
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

int Dino_BusSand_App_Meta_PassportFeature__get_DisplayedKeysForHud_22469e8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf65 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    bRam0000000004f9bf65 = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar2)
  ;
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x20);
    lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)puVar2);
    if (lVar3 != 0) {
      return (*(int *)(lVar3 + 0x24) + iVar1) - *(int *)(param_1 + 0x18);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

