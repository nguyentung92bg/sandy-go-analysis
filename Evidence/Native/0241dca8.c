/* IL2CPP: Dino.BusSand.App.UI.SettingRows.<>c$$<Build>b__0_0
bool Dino_BusSand_App_UI_SettingRows___c___Build_b__0_0 (Dino_BusSand_App_UI_SettingRows___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SettingRows.<>c$$<Build>b__0_0
   bool Dino_BusSand_App_UI_SettingRows___c___Build_b__0_0 (Dino_BusSand_App_UI_SettingRows___c_o*
   __this, const MethodInfo* method); */

undefined1 Dino_BusSand_App_UI_SettingRows___c___Build_b__0_0_231dca8(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c59b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c59b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    return *(undefined1 *)(lVar2 + 0x59);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

