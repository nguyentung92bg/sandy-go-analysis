/* IL2CPP: Dino.BusSand.App.UI.ScreenCover$$get_Hiding3D
bool Dino_BusSand_App_UI_ScreenCover__get_Hiding3D (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ScreenCover$$get_Hiding3D
   bool Dino_BusSand_App_UI_ScreenCover__get_Hiding3D (const MethodInfo* method); */

undefined1 Dino_BusSand_App_UI_ScreenCover__get_Hiding3D_21fc638(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb19a8;
                    /* try { // try from 022fc63c to 023fc643 has its CatchHandler @ 022fc928 */
                    /* try { // try from 022fc644 to 023fc68f has its CatchHandler @ 022fc47c */
  if ((bRam0000000004f9bc6a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb19a8);
    bRam0000000004f9bc6a = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined1 *)(*(long *)(lVar2 + 0xb8) + 1);
}

