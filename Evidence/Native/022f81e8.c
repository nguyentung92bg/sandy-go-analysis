/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$DelayedStart
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingUi__DelayedStart (bool isGuide, System_Action_o* once, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$DelayedStart
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingUi__DelayedStart (bool isGuide,
   System_Action_o* once, float delay, const MethodInfo* method); */

long Dino_BusSand_App_UI_YachtRacingUi__DelayedStart_21f81e8
               (undefined4 param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb1808;
  if ((bRam0000000004f9bc48 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1808);
    bRam0000000004f9bc48 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(byte *)(lVar2 + 0x30) = param_2 & 1;
  *(undefined8 *)(lVar2 + 0x28) = param_3;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_3);
  *(undefined4 *)(lVar2 + 0x20) = param_1;
  return lVar2;
}

