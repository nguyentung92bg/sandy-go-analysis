/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingGuide$$get_NeedShowGuide
bool Dino_BusSand_App_UI_PlayerSettingGuide__get_NeedShowGuide (Dino_BusSand_App_UI_PlayerSettingGuide_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingGuide$$get_NeedShowGuide
   bool Dino_BusSand_App_UI_PlayerSettingGuide__get_NeedShowGuide
   (Dino_BusSand_App_UI_PlayerSettingGuide_o* __this, const MethodInfo* method); */

undefined1 Dino_BusSand_App_UI_PlayerSettingGuide__get_NeedShowGuide_22ffba4(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb7b70;
  if ((bRam0000000004f9c4cf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7b70);
    bRam0000000004f9c4cf = 1;
  }
  Dino_BusSand_App_UI_PlayerSettingGuide__Evaluate_22ffac0(param_1);
  lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar2 != 0) {
    return *(undefined1 *)(lVar2 + 0x11);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

