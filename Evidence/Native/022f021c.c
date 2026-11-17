/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$Claim
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingRewardPanel__Claim (Dino_BusSand_App_UI_YachtRacingRewardPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$Claim
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingRewardPanel__Claim
   (Dino_BusSand_App_UI_YachtRacingRewardPanel_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_YachtRacingRewardPanel__Claim_21f021c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb1398;
  if ((bRam0000000004f9bc19 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1398);
    bRam0000000004f9bc19 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
                    /* catch() { ... } // from try @ 022f01fc with catch @ 022f0264 */
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  return lVar2;
}

