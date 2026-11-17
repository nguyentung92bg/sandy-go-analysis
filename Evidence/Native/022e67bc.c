/* IL2CPP: Dino.BusSand.App.UI.StreakRateTipsPanel$$WaitIntro
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_StreakRateTipsPanel__WaitIntro (Dino_BusSand_App_UI_StreakRateTipsPanel_o* __this, float len, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRateTipsPanel$$WaitIntro
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_StreakRateTipsPanel__WaitIntro
   (Dino_BusSand_App_UI_StreakRateTipsPanel_o* __this, float len, const MethodInfo* method); */

long Dino_BusSand_App_UI_StreakRateTipsPanel__WaitIntro_21e67bc
               (undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb0e90;
                    /* catch() { ... } // from try @ 022e6480 with catch @ 022e67c4 */
                    /* catch() { ... } // from try @ 022e6430 with catch @ 022e67cc
                       catch() { ... } // from try @ 022e677c with catch @ 022e67cc */
                    /* catch() { ... } // from try @ 022e6630 with catch @ 022e67e0 */
  if ((bRam0000000004f9bbd1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0e90);
    bRam0000000004f9bbd1 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_2);
  *(undefined4 *)(lVar2 + 0x20) = param_1;
  return lVar2;
}

