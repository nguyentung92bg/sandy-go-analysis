/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$WaitAnimComplete
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingRewardPanel__WaitAnimComplete (Dino_BusSand_App_UI_YachtRacingRewardPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$WaitAnimComplete
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingRewardPanel__WaitAnimComplete
   (Dino_BusSand_App_UI_YachtRacingRewardPanel_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_YachtRacingRewardPanel__WaitAnimComplete_21efa58(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb1360;
                    /* try { // try from 022efa64 to 023efa6b has its CatchHandler @ 022efacc */
                    /* try { // try from 022efa6c to 023efaf7 has its CatchHandler @ 022ef9b4 */
  if ((bRam0000000004f9bc13 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1360);
    bRam0000000004f9bc13 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  return lVar2;
}

