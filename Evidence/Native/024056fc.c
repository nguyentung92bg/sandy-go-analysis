/* IL2CPP: Dino.BusSand.App.UI.SettingPanel$$get_QaVisible
bool Dino_BusSand_App_UI_SettingPanel__get_QaVisible (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SettingPanel$$get_QaVisible
   bool Dino_BusSand_App_UI_SettingPanel__get_QaVisible (const MethodInfo* method); */

bool Dino_BusSand_App_UI_SettingPanel__get_QaVisible_23056fc(void)

{
  undefined *puVar1;
  bool bVar2;
  
  puVar1 = PTR_DAT_04cb7e80;
  if ((bRam0000000004f9c4f9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab380);
    FUN_02132f7c(PTR_DAT_04cb7e80);
    bRam0000000004f9c4f9 = 1;
  }
  if (**(char **)(*(long *)puVar1 + 0xb8) == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = *(long *)(*(long *)(*(long *)PTR_DAT_04cab380 + 0xb8) + 8) != 0;
  }
  return bVar2;
}

