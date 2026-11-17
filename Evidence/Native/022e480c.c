/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel$$Timer
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_StreakRatePanel__Timer (Dino_BusSand_App_UI_StreakRatePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel$$Timer
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_StreakRatePanel__Timer
   (Dino_BusSand_App_UI_StreakRatePanel_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_StreakRatePanel__Timer_21e480c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb0d88;
  if ((bRam0000000004f9bbc1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0d88);
    bRam0000000004f9bbc1 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
                    /* try { // try from 022e4858 to 023e4893 has its CatchHandler @ 022e5a60 */
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  return lVar2;
}

