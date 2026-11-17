/* IL2CPP: Dino.BusSand.App.UI.YachtRacingQuitItem$$BindProgress
void Dino_BusSand_App_UI_YachtRacingQuitItem__BindProgress (UnityEngine_Transform_o* rectYachtRacingProgress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingQuitItem$$BindProgress
   void Dino_BusSand_App_UI_YachtRacingQuitItem__BindProgress (UnityEngine_Transform_o*
   rectYachtRacingProgress, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingQuitItem__BindProgress_21eeeec(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 uStack_34;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022eef00 to 023eef07 has its CatchHandler @ 022eef68 */
                    /* try { // try from 022eef08 to 023eef93 has its CatchHandler @ 022eee50 */
  if ((bRam0000000004f9bc0e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb12d8);
    FUN_02132f7c(PTR_DAT_04cb12e0);
    FUN_02132f7c(PTR_DAT_04cb1130);
    FUN_02132f7c(PTR_DAT_04cb12e8);
    FUN_02132f7c(PTR_DAT_04cb12f0);
                    /* catch() { ... } // from try @ 022eef00 with catch @ 022eef68 */
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04cb12f8);
    bRam0000000004f9bc0e = 1;
  }
  uStack_28 = 0;
  uStack_34 = 0;
                    /* try { // try from 022eef94 to 023ef043 has its CatchHandler @ 022eef94
                       catch() { ... } // from try @ 022eef94 with catch @ 022eef94
                       catch() { ... } // from try @ 022ef04c with catch @ 022eef94 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if (((uVar3 & 1) == 0) &&
     (lVar4 = Dino_BusSand_App_UI_YachtRacingUi__get_Core_21f6838(0), lVar4 != 0)) {
    iVar2 = Dino_BusSand_App_Meta_YachtRacingCore__get_CurrentStage_2255454(lVar4,0);
    uStack_28 = CONCAT44(iVar2,(undefined4)uStack_28);
    if (iVar2 < 1) {
                    /* try { // try from 022ef0d8 to 023ef187 has its CatchHandler @ 022ef0d8
                       catch() { ... } // from try @ 022ef0d8 with catch @ 022ef0d8
                       catch() { ... } // from try @ 022ef190 with catch @ 022ef0d8 */
      uVar5 = System_Int32__ToString_482d750((long)&uStack_28 + 4,0);
      uVar5 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb12d8,uVar5,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogWarning_4357a30(uVar5,0);
    }
    else {
      iVar8 = iVar2;
      if (2 < iVar2) {
        iVar8 = 3;
      }
      uStack_28 = CONCAT44(iVar2,iVar8);
      uStack_34 = Dino_BusSand_App_Meta_YachtRacingCore__get_CurrentWinCount_225546c(lVar4,0);
      uVar5 = System_Int32__ToString_482d750(&uStack_34,0);
      uStack_34 = Dino_BusSand_App_Meta_YachtRacingCore__MaxProgress_22551dc(lVar4,0xffffffff,0);
      uVar6 = System_Int32__ToString_482d750(&uStack_34,0);
      uVar5 = System_String__Concat_46d2b84(uVar5,*(undefined8 *)PTR_DAT_04cabd10,uVar6,0);
                    /* try { // try from 022ef044 to 023ef04b has its CatchHandler @ 022ef0ac */
                    /* try { // try from 022ef04c to 023ef0d7 has its CatchHandler @ 022eef94 */
      uVar6 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                        (param_1,*(undefined8 *)PTR_DAT_04cb12e8,0);
      uVar7 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                        (param_1,*(undefined8 *)PTR_DAT_04cb12e0,0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar4);
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
      if ((uVar3 & 1) == 0) {
        uVar7 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                          (param_1,*(undefined8 *)PTR_DAT_04cb12f0,0);
        Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar7,uVar5,0);
        uVar5 = System_Int32__ToString_482d750(&uStack_28,0);
        puVar9 = (undefined8 *)PTR_DAT_04cb12f8;
      }
      else {
                    /* catch() { ... } // from try @ 022ef044 with catch @ 022ef0ac */
        Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar7,uVar5,0);
        uVar5 = System_Int32__ToString_482d750(&uStack_28,0);
        puVar9 = (undefined8 *)PTR_DAT_04cb1130;
      }
      uVar5 = System_String__Concat_46c82e0(*puVar9,uVar5,0);
      Dino_BusSand_App_UI_YachtRacingUi__SetSprite_21f8818(uVar6,uVar5,0,0);
    }
  }
                    /* try { // try from 022ef188 to 023ef18f has its CatchHandler @ 022ef1f0 */
                    /* try { // try from 022ef190 to 023ef21b has its CatchHandler @ 022ef0d8 */
  return;
}

