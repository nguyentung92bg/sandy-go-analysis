/* IL2CPP: Dino.BusSand.App.UI.StreakRateGameRow$$.ctor
void Dino_BusSand_App_UI_StreakRateGameRow___ctor (Dino_BusSand_App_UI_StreakRateGameRow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRateGameRow$$.ctor
   void Dino_BusSand_App_UI_StreakRateGameRow___ctor (Dino_BusSand_App_UI_StreakRateGameRow_o*
   __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_StreakRateGameRow___ctor_21deaa8(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_04cb0b40;
  if ((bRam0000000004f9bb9f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0b40);
    bRam0000000004f9bb9f = 1;
  }
  uVar2 = FUN_02133068(*(undefined8 *)puVar1,5);
                    /* try { // try from 022deaf0 to 023deaf3 has its CatchHandler @ 022deaf4 */
  *(undefined8 *)(param_1 + 0x40) = uVar2;
                    /* catch() { ... } // from try @ 022de500 with catch @ 022deaf4
                       catch() { ... } // from try @ 022deaf0 with catch @ 022deaf4
                       try { // try from 022deaf4 to 023deb07 has its CatchHandler @ 022de488 */
  thunk_FUN_02134474();
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1;
  return auVar3;
}

