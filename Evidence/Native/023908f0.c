/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$get_Speed
float Dino_BusSand_App_UI_UiMotion__get_Speed (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$get_Speed
   float Dino_BusSand_App_UI_UiMotion__get_Speed (const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_UiMotion__get_Speed_22908f0(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cac1e8;
  if ((bRam0000000004f9c1b6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac1e8);
    bRam0000000004f9c1b6 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined4 **)(lVar2 + 0xb8);
}

