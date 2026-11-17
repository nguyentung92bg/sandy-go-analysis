/* IL2CPP: Dino.BusSand.App.UI.RescueTimerWidget$$.ctor
void Dino_BusSand_App_UI_RescueTimerWidget___ctor (Dino_BusSand_App_UI_RescueTimerWidget_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RescueTimerWidget$$.ctor
   void Dino_BusSand_App_UI_RescueTimerWidget___ctor (Dino_BusSand_App_UI_RescueTimerWidget_o*
   __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_RescueTimerWidget___ctor_21fc618(ulong param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
                    /* try { // try from 022fc620 to 023fc633 has its CatchHandler @ 022fc948 */
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  puVar1 = PTR_DAT_04ca9ae8;
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

