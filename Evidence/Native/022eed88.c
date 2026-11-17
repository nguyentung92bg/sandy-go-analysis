/* IL2CPP: Dino.BusSand.App.UI.YachtRacingQuitItem$$Bind
void Dino_BusSand_App_UI_YachtRacingQuitItem__Bind (UnityEngine_Transform_o* rectYachtRacingQuitInstance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingQuitItem$$Bind
   void Dino_BusSand_App_UI_YachtRacingQuitItem__Bind (UnityEngine_Transform_o*
   rectYachtRacingQuitInstance, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingQuitItem__Bind_21eed88(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined4 uStack_34;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bc0d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
                    /* try { // try from 022eedbc to 023eedc3 has its CatchHandler @ 022eee24 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 022eedc4 to 023eee4f has its CatchHandler @ 022eed0c */
    FUN_02132f7c(PTR_DAT_04cadb60);
    FUN_02132f7c(PTR_DAT_04cb12c8);
    FUN_02132f7c(PTR_DAT_04cb12d0);
    bRam0000000004f9bc0d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  puVar1 = PTR_DAT_04ca9d18;
  if ((uVar4 & 1) != 0) {
    return;
  }
                    /* catch() { ... } // from try @ 022eedbc with catch @ 022eee24 */
  uVar5 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(param_1,*(undefined8 *)PTR_DAT_04cb12c8,0);
  lVar12 = *(long *)puVar1;
  lVar10 = *(long *)(lVar12 + 0x38);
                    /* try { // try from 022eee50 to 023eeeff has its CatchHandler @ 022eee50
                       catch() { ... } // from try @ 022eee50 with catch @ 022eee50
                       catch() { ... } // from try @ 022eef08 with catch @ 022eee50 */
  if (lVar10 == 0) {
    FUN_0216b4cc(lVar12);
    lVar10 = *(long *)(lVar12 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cb12d0;
  puVar1 = PTR_DAT_04cadb60;
  lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  uVar6 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                    (*(undefined8 *)puVar2,**(undefined8 **)(lVar10 + 0xb8),0);
  Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar5,uVar6,0);
  uVar5 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(param_1,*(undefined8 *)puVar1,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bc0e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb12d8);
    FUN_02132f7c(PTR_DAT_04cb12e0);
    FUN_02132f7c(PTR_DAT_04cb1130);
    FUN_02132f7c(PTR_DAT_04cb12e8);
    FUN_02132f7c(PTR_DAT_04cb12f0);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04cb12f8);
    bRam0000000004f9bc0e = 1;
  }
  uStack_28 = 0;
  uStack_34 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if (((uVar4 & 1) == 0) &&
     (lVar10 = Dino_BusSand_App_UI_YachtRacingUi__get_Core_21f6838(0), lVar10 != 0)) {
    iVar3 = Dino_BusSand_App_Meta_YachtRacingCore__get_CurrentStage_2255454(lVar10,0);
    uStack_28 = CONCAT44(iVar3,(undefined4)uStack_28);
    if (iVar3 < 1) {
      uVar5 = System_Int32__ToString_482d750((long)&uStack_28 + 4,0);
      uVar5 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb12d8,uVar5,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogWarning_4357a30(uVar5,0);
    }
    else {
      iVar9 = iVar3;
      if (2 < iVar3) {
        iVar9 = 3;
      }
      uStack_28 = CONCAT44(iVar3,iVar9);
      uStack_34 = Dino_BusSand_App_Meta_YachtRacingCore__get_CurrentWinCount_225546c(lVar10,0);
      uVar6 = System_Int32__ToString_482d750(&uStack_34,0);
      uStack_34 = Dino_BusSand_App_Meta_YachtRacingCore__MaxProgress_22551dc(lVar10,0xffffffff,0);
      uVar7 = System_Int32__ToString_482d750(&uStack_34,0);
      uVar6 = System_String__Concat_46d2b84(uVar6,*(undefined8 *)PTR_DAT_04cabd10,uVar7,0);
      uVar7 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar5,*(undefined8 *)PTR_DAT_04cb12e8,0)
      ;
      uVar8 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar5,*(undefined8 *)PTR_DAT_04cb12e0,0)
      ;
      lVar10 = *(long *)puVar1;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar10);
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
      if ((uVar4 & 1) == 0) {
        uVar5 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                          (uVar5,*(undefined8 *)PTR_DAT_04cb12f0,0);
        Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar5,uVar6,0);
        uVar5 = System_Int32__ToString_482d750(&uStack_28,0);
        puVar11 = (undefined8 *)PTR_DAT_04cb12f8;
      }
      else {
        Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar8,uVar6,0);
        uVar5 = System_Int32__ToString_482d750(&uStack_28,0);
        puVar11 = (undefined8 *)PTR_DAT_04cb1130;
      }
      uVar5 = System_String__Concat_46c82e0(*puVar11,uVar5,0);
      Dino_BusSand_App_UI_YachtRacingUi__SetSprite_21f8818(uVar7,uVar5,0,0);
    }
  }
  return;
}

