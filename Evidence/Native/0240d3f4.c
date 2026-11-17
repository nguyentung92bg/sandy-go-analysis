/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$set_TabBottomScreenY
void Dino_BusSand_App_UI_HudPanel__set_TabBottomScreenY (float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$set_TabBottomScreenY
   void Dino_BusSand_App_UI_HudPanel__set_TabBottomScreenY (float value, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_HudPanel__set_TabBottomScreenY_230d3f4(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb6a88;
  if ((bRam0000000004f9c520 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a88);
    bRam0000000004f9c520 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
                    /* try { // try from 0240d444 to 0250d44b has its CatchHandler @ 0240d4a4 */
  *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 8) = param_1;
  return;
}

