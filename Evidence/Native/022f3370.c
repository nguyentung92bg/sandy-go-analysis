/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel$$SetStageButton
void Dino_BusSand_App_UI_YachtRacingStartPanel__SetStageButton (UnityEngine_Transform_o* btn, int32_t stage, bool passed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel$$SetStageButton
   void Dino_BusSand_App_UI_YachtRacingStartPanel__SetStageButton (UnityEngine_Transform_o* btn,
   int32_t stage, bool passed, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingStartPanel__SetStageButton_21f3370
               (long param_1,undefined4 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 uStack_34;
  
  uStack_34 = param_2;
  if ((bRam0000000004f9bc2d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cb1588);
    FUN_02132f7c(PTR_DAT_04cb1590);
    FUN_02132f7c(PTR_DAT_04cb1598);
    FUN_02132f7c(PTR_DAT_04cb0f98);
    bRam0000000004f9bc2d = 1;
  }
  puVar2 = PTR_DAT_04cb0f98;
  puVar1 = PTR_DAT_04ca9d18;
  if (param_1 != 0) {
    uVar3 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)PTR_DAT_04cb1598,0);
    uVar4 = System_Int32__ToString_482d750(&uStack_34,0);
                    /* catch() { ... } // from try @ 022f34ac with catch @ 022f3418 */
    uVar4 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,uVar4,0);
    lVar6 = *(long *)puVar1;
    lVar5 = *(long *)(lVar6 + 0x38);
    if (lVar5 == 0) {
      FUN_0216b4cc(lVar6);
      lVar5 = *(long *)(lVar6 + 0x38);
    }
                    /* try { // try from 022f3448 to 023f3453 has its CatchHandler @ 022f351c */
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0216b470();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04cb1590;
    puVar1 = PTR_DAT_04cb1588;
                    /* try { // try from 022f3470 to 023f347b has its CatchHandler @ 022f3508 */
    lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
                    /* try { // try from 022f347c to 023f3493 has its CatchHandler @ 022f34e4 */
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0216b470();
    }
    uVar4 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10(uVar4,**(undefined8 **)(lVar5 + 0xb8),0);
                    /* try { // try from 022f34a8 to 023f34ab has its CatchHandler @ 022f34ac */
                    /* catch() { ... } // from try @ 022f34a8 with catch @ 022f34ac
                       try { // try from 022f34ac to 023f352f has its CatchHandler @ 022f3418 */
    Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar3,uVar4,0);
    uVar3 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)puVar1,0);
    Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(uVar3,(param_3 ^ 0xffffffff) & 1,0);
    uVar3 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)puVar2,0);
                    /* catch() { ... } // from try @ 022f347c with catch @ 022f34e4 */
    Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(uVar3,param_3 & 1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

