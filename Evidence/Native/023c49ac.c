/* IL2CPP: Dino.BusSand.App.UI.PaiziRewardTipsPanel$$UpRootHeight
float Dino_BusSand_App_UI_PaiziRewardTipsPanel__UpRootHeight (Dino_BusSand_App_UI_PaiziRewardTipsPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PaiziRewardTipsPanel$$UpRootHeight
   float Dino_BusSand_App_UI_PaiziRewardTipsPanel__UpRootHeight
   (Dino_BusSand_App_UI_PaiziRewardTipsPanel_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_PaiziRewardTipsPanel__UpRootHeight_22c49ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 in_s3;
  
  puVar2 = PTR_DAT_04cb67d0;
                    /* try { // try from 023c49b8 to 024c49c3 has its CatchHandler @ 023c4c7c */
  if ((bRam0000000004f9c34f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 023c49dc to 024c49f3 has its CatchHandler @ 023c4cb8 */
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb67d0);
    bRam0000000004f9c34f = 1;
  }
                    /* try { // try from 023c49f8 to 024c4a17 has its CatchHandler @ 023c4ca0 */
  puVar1 = PTR_DAT_04ca9ae8;
  plVar3 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar2,0);
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
                    /* try { // try from 023c4a20 to 024c4a43 has its CatchHandler @ 023c4c78 */
    if (*plVar3 != *(long *)PTR_DAT_04cabdb0) {
      plVar3 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(plVar3,0,0);
  if ((uVar4 & 1) == 0) {
                    /* try { // try from 023c4a74 to 024c4a77 has its CatchHandler @ 023c4cb0 */
    in_s3 = 0x43960000;
  }
  else {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 023c4a64 to 024c4a6b has its CatchHandler @ 023c4c70 */
    UnityEngine_RectTransform__get_rect_43cf450(plVar3,0);
  }
  return in_s3;
}

