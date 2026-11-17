/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar$$PlayWin
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_StreakRateHallBar__PlayWin (int32_t rate, int32_t baseScore, int32_t add, System_Collections_Generic_List_Vector3__o* segments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar$$PlayWin
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_StreakRateHallBar__PlayWin (int32_t rate,
   int32_t baseScore, int32_t add, System_Collections_Generic_List_Vector3__o* segments, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_StreakRateHallBar__PlayWin_21e1904
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb0c78;
  if ((bRam0000000004f9bbaf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0c78);
    bRam0000000004f9bbaf = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined4 *)(lVar2 + 0x20) = param_2;
  *(undefined4 *)(lVar2 + 0x24) = param_1;
  *(undefined4 *)(lVar2 + 0x28) = param_3;
  *(undefined8 *)(lVar2 + 0x30) = param_4;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x30),param_4);
  return lVar2;
}

