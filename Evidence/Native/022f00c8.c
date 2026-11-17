/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$MoveItem
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingRewardPanel__MoveItem (Dino_BusSand_App_UI_YachtRacingRewardPanel_o* __this, UnityEngine_RectTransform_o* item, UnityEngine_RectTransform_o* target, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$MoveItem
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingRewardPanel__MoveItem
   (Dino_BusSand_App_UI_YachtRacingRewardPanel_o* __this, UnityEngine_RectTransform_o* item,
   UnityEngine_RectTransform_o* target, float delay, const MethodInfo* method); */

long Dino_BusSand_App_UI_YachtRacingRewardPanel__MoveItem_21f00c8
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb1388;
  if ((bRam0000000004f9bc17 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1388);
    bRam0000000004f9bc17 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
                    /* catch() { ... } // from try @ 022f00b8 with catch @ 022f0120 */
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_3);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_4);
  *(undefined4 *)(lVar2 + 0x30) = param_1;
                    /* try { // try from 022f014c to 023f01fb has its CatchHandler @ 022f014c
                       catch() { ... } // from try @ 022f014c with catch @ 022f014c
                       catch() { ... } // from try @ 022f0204 with catch @ 022f014c */
  return lVar2;
}

