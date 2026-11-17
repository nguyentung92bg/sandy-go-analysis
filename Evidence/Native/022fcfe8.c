/* IL2CPP: Dino.BusSand.App.UI.ScreenCover$$.ctor
void Dino_BusSand_App_UI_ScreenCover___ctor (Dino_BusSand_App_UI_ScreenCover_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ScreenCover$$.ctor
   void Dino_BusSand_App_UI_ScreenCover___ctor (Dino_BusSand_App_UI_ScreenCover_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_ScreenCover___ctor_21fcfe8(ulong param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
                    /* try { // try from 022fcfe8 to 023fcfeb has its CatchHandler @ 022fd430 */
  puVar1 = PTR_DAT_04ca9ae8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fcf78 with catch @ 022fcfec
                       try { // try from 022fcfec to 023fd453 has its CatchHandler @ 022fceec */
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}

