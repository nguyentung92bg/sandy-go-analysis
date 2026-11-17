/* IL2CPP: Dino.BusSand.App.UI.ScreenCover$$set_Hiding3D
void Dino_BusSand_App_UI_ScreenCover__set_Hiding3D (bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ScreenCover$$set_Hiding3D
   void Dino_BusSand_App_UI_ScreenCover__set_Hiding3D (bool value, const MethodInfo* method); */

void Dino_BusSand_App_UI_ScreenCover__set_Hiding3D_21fc690(byte param_1)

{
  undefined *puVar1;
  long lVar2;
  
                    /* try { // try from 022fc690 to 023fc6a3 has its CatchHandler @ 022fc934 */
  puVar1 = PTR_DAT_04cb19a8;
                    /* try { // try from 022fc6ac to 023fc6b3 has its CatchHandler @ 022fc924 */
  if ((bRam0000000004f9bc6b & 1) == 0) {
                    /* try { // try from 022fc6b4 to 023fc71f has its CatchHandler @ 022fc47c */
    FUN_02132f7c(PTR_DAT_04cb19a8);
    bRam0000000004f9bc6b = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  *(byte *)(*(long *)(lVar2 + 0xb8) + 1) = param_1 & 1;
  return;
}

