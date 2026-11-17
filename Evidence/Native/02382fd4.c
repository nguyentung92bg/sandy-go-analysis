/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$get_Active
int32_t Dino_BusSand_App_UI_KitTopBar__get_Active (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$get_Active
   int32_t Dino_BusSand_App_UI_KitTopBar__get_Active (const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_KitTopBar__get_Active_2282fd4(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04caf420;
  if ((bRam0000000004f9c14c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf420);
    bRam0000000004f9c14c = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined4 **)(lVar2 + 0xb8);
}

