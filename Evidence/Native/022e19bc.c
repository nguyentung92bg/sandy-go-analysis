/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar$$DelayedSfx
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_StreakRateHallBar__DelayedSfx (System_String_o* sfx, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar$$DelayedSfx
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_StreakRateHallBar__DelayedSfx
   (System_String_o* sfx, float delay, const MethodInfo* method); */

long Dino_BusSand_App_UI_StreakRateHallBar__DelayedSfx_21e19bc
               (undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb0c80;
  if ((bRam0000000004f9bbb0 & 1) == 0) {
                    /* try { // try from 022e19e4 to 023e1a57 has its CatchHandler @ 022e19e4
                       catch() { ... } // from try @ 022e19e4 with catch @ 022e19e4
                       catch() { ... } // from try @ 022e1a70 with catch @ 022e19e4
                       catch() { ... } // from try @ 022e1c80 with catch @ 022e19e4 */
    FUN_02132f7c(PTR_DAT_04cb0c80);
    bRam0000000004f9bbb0 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_2);
  *(undefined4 *)(lVar2 + 0x20) = param_1;
  return lVar2;
}

