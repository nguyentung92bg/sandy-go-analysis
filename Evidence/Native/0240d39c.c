/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$get_TabBottomScreenY
float Dino_BusSand_App_UI_HudPanel__get_TabBottomScreenY (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$get_TabBottomScreenY
   float Dino_BusSand_App_UI_HudPanel__get_TabBottomScreenY (const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_HudPanel__get_TabBottomScreenY_230d39c(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb6a88;
  if ((bRam0000000004f9c51f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a88);
    bRam0000000004f9c51f = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 8);
}

