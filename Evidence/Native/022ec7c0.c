/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$RefreshFlagContent
void Dino_BusSand_App_UI_YachtRacingPanel__RefreshFlagContent (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$RefreshFlagContent
   void Dino_BusSand_App_UI_YachtRacingPanel__RefreshFlagContent
   (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingPanel__RefreshFlagContent_21ec7c0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uStack_24;
  
                    /* catch() { ... } // from try @ 022ec820 with catch @ 022ec7c0 */
  if ((bRam0000000004f9bbf9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb1180);
    FUN_02132f7c(PTR_DAT_04cb1188);
    FUN_02132f7c(PTR_DAT_04cb1190);
                    /* try { // try from 022ec81c to 023ec81f has its CatchHandler @ 022ec834 */
                    /* try { // try from 022ec820 to 023ec8af has its CatchHandler @ 022ec7c0 */
    FUN_02132f7c(PTR_DAT_04cb1198);
    bRam0000000004f9bbf9 = 1;
  }
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_022eca24;
                    /* catch() { ... } // from try @ 022ec81c with catch @ 022ec834 */
  uVar1 = Dino_BusSand_App_Meta_YachtRacingCore__get_State_22553b4(*(long *)(param_1 + 0x40),0);
  if (uVar1 == 5) {
    lVar6 = *(long *)PTR_DAT_04ca9d18;
    lVar3 = *(long *)(lVar6 + 0x38);
    if (lVar3 == 0) {
      FUN_0216b4cc(lVar6);
      lVar3 = *(long *)(lVar6 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0216b470();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0216b470();
    }
    plVar4 = *(long **)(lVar3 + 0xb8);
    puVar5 = (undefined8 *)PTR_DAT_04cb1190;
LAB_022ec91c:
    plVar4 = (long *)*plVar4;
    uVar2 = *puVar5;
  }
  else {
                    /* try { // try from 022ec8b0 to 023ec947 has its CatchHandler @ 022ec8b0
                       catch() { ... } // from try @ 022ec8b0 with catch @ 022ec8b0
                       catch() { ... } // from try @ 022ec950 with catch @ 022ec8b0 */
    if ((uVar1 & 0xfffffffe) == 6) {
      lVar6 = *(long *)PTR_DAT_04ca9d18;
      lVar3 = *(long *)(lVar6 + 0x38);
      if (lVar3 == 0) {
        FUN_0216b4cc(lVar6);
        lVar3 = *(long *)(lVar6 + 0x38);
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0216b470();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar3 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0216b470();
      }
      plVar4 = *(long **)(lVar3 + 0xb8);
      puVar5 = (undefined8 *)PTR_DAT_04cb1188;
      goto LAB_022ec91c;
    }
    plVar4 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_022eca24;
                    /* try { // try from 022ec948 to 023ec94f has its CatchHandler @ 022ec9ac */
                    /* try { // try from 022ec950 to 023ec9db has its CatchHandler @ 022ec8b0 */
    uStack_24 = Dino_BusSand_App_Meta_YachtRacingCore__MaxProgress_22551dc
                          (*(long *)(param_1 + 0x40),0xffffffff,0);
    lVar3 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_24);
    if (plVar4 == (long *)0x0) goto LAB_022eca24;
    if ((lVar3 != 0) &&
       (lVar6 = thunk_FUN_0216e7a0(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar2 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar2,0);
    }
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar4[4] = lVar3;
    thunk_FUN_02134474(plVar4 + 4,lVar3);
                    /* catch() { ... } // from try @ 022ec948 with catch @ 022ec9ac */
    uVar2 = *(undefined8 *)PTR_DAT_04cb1180;
  }
  lVar3 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10(uVar2,plVar4,0);
                    /* catch() { ... } // from try @ 022eca3c with catch @ 022ec9dc */
  uVar2 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cb1198,0);
  Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar2,lVar3,0);
  if (lVar3 != 0) {
    uVar7 = 0x41e00000;
    if (9 < *(int *)(lVar3 + 0x10)) {
      uVar7 = 0x41d00000;
    }
    Dino_BusSand_App_UI_YachtRacingUi__SetAutoSize_21f8718(uVar7,uVar2,0);
    return;
  }
LAB_022eca24:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

