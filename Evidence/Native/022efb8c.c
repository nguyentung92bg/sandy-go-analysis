/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$InitReward
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingRewardPanel__InitReward (Dino_BusSand_App_UI_YachtRacingRewardPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$InitReward
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingRewardPanel__InitReward
   (Dino_BusSand_App_UI_YachtRacingRewardPanel_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_YachtRacingRewardPanel__InitReward_21efb8c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb1368;
                    /* try { // try from 022efba8 to 023efbaf has its CatchHandler @ 022efc10 */
  if ((bRam0000000004f9bc14 & 1) == 0) {
                    /* try { // try from 022efbb0 to 023efc3b has its CatchHandler @ 022efaf8 */
    FUN_02132f7c(PTR_DAT_04cb1368);
    bRam0000000004f9bc14 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  return lVar2;
}

