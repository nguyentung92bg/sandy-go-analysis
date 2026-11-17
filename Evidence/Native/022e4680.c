/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel$$GuideScroll
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_StreakRatePanel__GuideScroll (Dino_BusSand_App_UI_StreakRatePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel$$GuideScroll
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_StreakRatePanel__GuideScroll
   (Dino_BusSand_App_UI_StreakRatePanel_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_StreakRatePanel__GuideScroll_21e4680(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb0d80;
                    /* try { // try from 022e4690 to 023e46c7 has its CatchHandler @ 022e4420 */
  if ((bRam0000000004f9bbc9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0d80);
    bRam0000000004f9bbc9 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
                    /* try { // try from 022e46c8 to 023e46cb has its CatchHandler @ 022e4724 */
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  return lVar2;
}

