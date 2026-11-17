/* IL2CPP: Dino.BusSand.App.UI.DailyView$$Rows
System_Collections_Generic_List_EventRow__o* Dino_BusSand_App_UI_DailyView__Rows (Dino_BusSand_App_UI_DailyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.DailyView$$Rows
   System_Collections_Generic_List_EventRow__o* Dino_BusSand_App_UI_DailyView__Rows
   (Dino_BusSand_App_UI_DailyView_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_DailyView__Rows_21bb478(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 uStack_64;
  
  puVar2 = PTR_DAT_04caf670;
  puVar1 = PTR_DAT_04caf668;
                    /* try { // try from 022bb4b0 to 023bb4b7 has its CatchHandler @ 022bb4b8 */
  if ((bRam0000000004f9bac1 & 1) == 0) {
                    /* catch() { ... } // from try @ 022bb4b0 with catch @ 022bb4b8
                       try { // try from 022bb4b8 to 023bb4eb has its CatchHandler @ 022bb364 */
                    /* catch() { ... } // from try @ 022bb470 with catch @ 022bb4bc */
    FUN_02132f7c(PTR_DAT_04caf808);
    FUN_02132f7c(PTR_DAT_04caf810);
    FUN_02132f7c(PTR_DAT_04caf678);
                    /* catch() { ... } // from try @ 022bb3cc with catch @ 022bb4d8 */
    FUN_02132f7c(PTR_DAT_04caf680);
                    /* catch() { ... } // from try @ 022bb564 with catch @ 022bb4ec
                       catch() { ... } // from try @ 022bb640 with catch @ 022bb4ec */
    FUN_02132f7c(PTR_DAT_04caf690);
    FUN_02132f7c(PTR_DAT_04caf670);
    FUN_02132f7c(PTR_DAT_04caf668);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04caf818);
    FUN_02132f7c(PTR_DAT_04caf820);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf828);
    FUN_02132f7c(PTR_DAT_04caf830);
                    /* try { // try from 022bb554 to 023bb563 has its CatchHandler @ 022bb660 */
    bRam0000000004f9bac1 = 1;
  }
  puVar4 = PTR_DAT_04caf808;
  puVar3 = PTR_DAT_04caf690;
                    /* try { // try from 022bb564 to 023bb5f7 has its CatchHandler @ 022bb4ec */
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar6,*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_04ca9ac8;
  uVar13 = 0;
  while( true ) {
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar4;
    }
    if (**(long **)(lVar7 + 0xb8) == 0) break;
    if ((long)*(int *)(**(long **)(lVar7 + 0xb8) + 0x18) <= (long)uVar13) {
      return lVar6;
    }
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caf820);
    System_Object___ctor_4870e5c(lVar7,0);
    if (lVar7 == 0) break;
    *(long *)(lVar7 + 0x18) = param_1;
    thunk_FUN_02134474((long *)(lVar7 + 0x18),param_1);
    lVar8 = *(long *)(param_1 + 0x10);
    *(int *)(lVar7 + 0x10) = (int)uVar13;
    if (lVar8 == 0) break;
                    /* try { // try from 022bb5f8 to 023bb5ff has its CatchHandler @ 022bb644 */
    uVar5 = Dino_BusSand_App_Meta_DailyChallengeFeature__MilestoneState_222fc18
                      (lVar8,uVar13 & 0xffffffff,0);
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caf678);
    Dino_BusSand_App_UI_EventRow___ctor_21b5adc();
    plVar9 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    lVar12 = *(long *)puVar4;
                    /* try { // try from 022bb638 to 023bb63f has its CatchHandler @ 022bb640 */
                    /* catch() { ... } // from try @ 022bb638 with catch @ 022bb640
                       try { // try from 022bb640 to 023bb673 has its CatchHandler @ 022bb4ec */
    if (*(int *)(lVar12 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 022bb5f8 with catch @ 022bb644 */
      thunk_FUN_0218fdac(lVar12);
      lVar12 = *(long *)puVar4;
    }
    lVar12 = **(long **)(lVar12 + 0xb8);
    if (lVar12 == 0) break;
                    /* catch() { ... } // from try @ 022bb554 with catch @ 022bb660 */
    if (*(uint *)(lVar12 + 0x18) <= uVar13) {
LAB_022bb830:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
                    /* catch() { ... } // from try @ 022bb6f0 with catch @ 022bb674
                       catch() { ... } // from try @ 022bb7cc with catch @ 022bb674 */
    uStack_64 = *(undefined4 *)(lVar12 + uVar13 * 4 + 0x20);
    lVar12 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_64);
    if (plVar9 == (long *)0x0) break;
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
      uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar11,0);
    }
    if ((int)plVar9[3] == 0) goto LAB_022bb830;
    plVar9[4] = lVar12;
    thunk_FUN_02134474(plVar9 + 4,lVar12);
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022bb6e0 to 023bb6ef has its CatchHandler @ 022bb7ec */
                    /* try { // try from 022bb6f0 to 023bb783 has its CatchHandler @ 022bb674 */
    uVar11 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                       (*(undefined8 *)PTR_DAT_04caf828,*(undefined8 *)PTR_DAT_04caf830,plVar9,0);
    if (lVar8 == 0) break;
    *(undefined8 *)(lVar8 + 0x10) = uVar11;
    thunk_FUN_02134474();
    uVar11 = Dino_BusSand_App_Meta_DailyChallengeModel__MilestoneReward_222e5fc
                       (uVar13 & 0xffffffff,0);
    if (*(int *)(*(long *)PTR_DAT_04caf810 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04caf810);
    }
    uVar11 = Dino_BusSand_App_Meta_Ev07Rewards__Pairs_222ebe4(uVar11,0);
    *(undefined8 *)(lVar8 + 0x20) = uVar11;
    thunk_FUN_02134474();
    if (uVar5 != 2) {
      uVar5 = (uint)(uVar5 == 1);
    }
    uVar11 = *(undefined8 *)PTR_DAT_04caf680;
    *(uint *)(lVar8 + 0x28) = uVar5;
    uVar11 = thunk_FUN_0216e89c(uVar11);
                    /* try { // try from 022bb784 to 023bb78b has its CatchHandler @ 022bb7d0 */
    System_Func_object____ctor_379de3c(uVar11,lVar7,*(undefined8 *)PTR_DAT_04caf818,0);
    *(undefined8 *)(lVar8 + 0x30) = uVar11;
    thunk_FUN_02134474((undefined8 *)(lVar8 + 0x30),uVar11);
    if (lVar6 == 0) break;
    lVar7 = *(long *)(lVar6 + 0x10);
    lVar12 = *(long *)puVar3;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar5 = *(uint *)(lVar6 + 0x18);
                    /* try { // try from 022bb7c4 to 023bb7cb has its CatchHandler @ 022bb7cc */
    if (uVar5 < *(uint *)(lVar7 + 0x18)) {
                    /* catch() { ... } // from try @ 022bb7c4 with catch @ 022bb7cc
                       try { // try from 022bb7cc to 023bb7ff has its CatchHandler @ 022bb674 */
                    /* catch() { ... } // from try @ 022bb784 with catch @ 022bb7d0 */
      *(uint *)(lVar6 + 0x18) = uVar5 + 1;
      plVar9 = (long *)(lVar7 + (long)(int)uVar5 * 8 + 0x20);
      *plVar9 = lVar8;
      thunk_FUN_02134474(plVar9,lVar8);
    }
    else {
                    /* catch() { ... } // from try @ 022bb6e0 with catch @ 022bb7ec */
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (lVar6,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
                    /* catch() { ... } // from try @ 022bb86c with catch @ 022bb800
                       catch() { ... } // from try @ 022bb930 with catch @ 022bb800 */
    uVar13 = uVar13 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

