/* IL2CPP: Dino.BusSand.App.UI.StreakRateGameRow$$Loop
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_StreakRateGameRow__Loop (Dino_BusSand_App_UI_StreakRateGameRow_o* __this, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRateGameRow$$Loop
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_StreakRateGameRow__Loop
   (Dino_BusSand_App_UI_StreakRateGameRow_o* __this, float delay, const MethodInfo* method); */

long Dino_BusSand_App_UI_StreakRateGameRow__Loop_21de6f0(undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb0b30;
  if ((bRam0000000004f9bb9b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0b30);
    bRam0000000004f9bb9b = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_2);
  *(undefined4 *)(lVar2 + 0x20) = param_1;
  return lVar2;
}

