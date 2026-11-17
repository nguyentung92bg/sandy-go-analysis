/* IL2CPP: Dino.BusSand.App.UI.PaiziRewardTipsPanel$$AnchorScreenY
float Dino_BusSand_App_UI_PaiziRewardTipsPanel__AnchorScreenY (Dino_BusSand_App_UI_PaiziRewardTipsPanel_o* __this, UnityEngine_RectTransform_o* anchor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PaiziRewardTipsPanel$$AnchorScreenY
   float Dino_BusSand_App_UI_PaiziRewardTipsPanel__AnchorScreenY
   (Dino_BusSand_App_UI_PaiziRewardTipsPanel_o* __this, UnityEngine_RectTransform_o* anchor, const
   MethodInfo* method); */

undefined4
Dino_BusSand_App_UI_PaiziRewardTipsPanel__AnchorScreenY_22c481c
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
          long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
                    /* try { // try from 023c481c to 024c4827 has its CatchHandler @ 023c4c90 */
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 023c4830 to 024c4857 has its CatchHandler @ 023c4cc0 */
  if ((bRam0000000004f9c34e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabd80);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabda8);
    bRam0000000004f9c34e = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 023c4894 to 024c489b has its CatchHandler @ 023c4cb0 */
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_5,0,0);
  uVar5 = 0;
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 023c48ac to 024c48b3 has its CatchHandler @ 023c4c98 */
    lVar3 = UnityEngine_Component__GetComponentInParent_object__26f9d74
                      (0,param_4,*(undefined8 *)PTR_DAT_04cabd80);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
                    /* try { // try from 023c48dc to 024c48ff has its CatchHandler @ 023c4cbc */
    uVar4 = 0;
    if ((uVar2 & 1) != 0) {
      if (lVar3 == 0) goto LAB_023c49a8;
      uVar4 = UnityEngine_Canvas__get_rootCanvas_4680a14(lVar3,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
                    /* try { // try from 023c4914 to 024c4917 has its CatchHandler @ 023c4cac */
      uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
      uVar4 = 0;
      if ((uVar2 & 1) != 0) {
        lVar3 = UnityEngine_Canvas__get_rootCanvas_4680a14(lVar3,0);
        if (lVar3 == 0) goto LAB_023c49a8;
        uVar4 = UnityEngine_Canvas__get_worldCamera_4680f2c(lVar3,0);
      }
    }
    if (param_5 == 0) {
LAB_023c49a8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 023c49a8 to 024c49b3 has its CatchHandler @ 023c4c84 */
      FUN_02133224();
    }
    uVar5 = UnityEngine_Transform__get_position_43d0e48(param_5,0);
                    /* try { // try from 023c4950 to 024c497f has its CatchHandler @ 023c4cb4 */
    if (*(int *)(*(long *)PTR_DAT_04cabda8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 023c4980 to 024c4993 has its CatchHandler @ 023c4ca8 */
    UnityEngine_RectTransformUtility__WorldToScreenPoint_467e894(uVar5,param_2,param_3,uVar4,0);
    uVar5 = param_2;
  }
                    /* try { // try from 023c4998 to 024c49a3 has its CatchHandler @ 023c4ca4 */
  return uVar5;
}

