/* IL2CPP: Dino.BusSand.App.UI.ScreenSafe$$get_Area
UnityEngine_Rect_o Dino_BusSand_App_UI_ScreenSafe__get_Area (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ScreenSafe$$get_Area
   UnityEngine_Rect_o Dino_BusSand_App_UI_ScreenSafe__get_Area (const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_ScreenSafe__get_Area_21ff9f4(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  
  puVar1 = PTR_DAT_04cafcc0;
  if ((bRam0000000004f9bc86 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cafcc0);
    bRam0000000004f9bc86 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_UI_ScreenSafe__get_Raw_21ff5ac();
  iVar2 = UnityEngine_Screen__get_width_436a6a0(0);
  if ((0 < iVar2) && (iVar2 = UnityEngine_Screen__get_height_436a6c8(0), 0 < iVar2)) {
    iVar2 = UnityEngine_Screen__get_width_436a6a0(0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    fVar4 = (float)Dino_BusSand_App_UI_ScreenSafe__TopClearPx_21ff838(0,(float)iVar2);
                    /* try { // try from 022ffaa8 to 023ffadf has its CatchHandler @ 022ffaa8
                       catch() { ... } // from try @ 022ffaa8 with catch @ 022ffaa8
                       catch() { ... } // from try @ 022ffddc with catch @ 022ffaa8 */
    UnityEngine_Screen__get_height_436a6c8(0);
    if (0.0 < fVar4) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_ScreenSafe__get_Unit_21ff7a8();
                    /* try { // try from 022ffae0 to 023ffae7 has its CatchHandler @ 022ffeb8 */
    }
  }
                    /* try { // try from 022ffafc to 023ffb03 has its CatchHandler @ 022ffe40 */
                    /* try { // try from 022ffb08 to 023ffb47 has its CatchHandler @ 022ffeb8 */
  return uVar3;
}

