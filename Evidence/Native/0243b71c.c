/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel.<Intro>d__45$$MoveNext
bool Dino_BusSand_App_UI_WinStreakPanel__Intro_d__45__MoveNext (Dino_BusSand_App_UI_WinStreakPanel__Intro_d__45_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel.<Intro>d__45$$MoveNext
   bool Dino_BusSand_App_UI_WinStreakPanel__Intro_d__45__MoveNext
   (Dino_BusSand_App_UI_WinStreakPanel__Intro_d__45_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_WinStreakPanel__Intro_d__45__MoveNext_233b71c(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  float fVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_40;
  long *plStack_38;
  long lStack_28;
  
                    /* try { // try from 0243b724 to 0253b72b has its CatchHandler @ 0243b76c */
                    /* try { // try from 0243b72c to 0253b787 has its CatchHandler @ 0243b634 */
  lStack_28 = param_1;
  if ((bRam0000000004f9c65c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9358);
    FUN_02132f7c(PTR_DAT_04cb9360);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cb9368);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243b724 with catch @ 0243b76c
                        */
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cafb30);
                    /* try { // try from 0243b788 to 0253b78b has its CatchHandler @ 0243b7c4 */
    bRam0000000004f9c65c = 1;
  }
                    /* try { // try from 0243b78c to 0253b7c7 has its CatchHandler @ 0243b634 */
  iVar1 = *(int *)(param_1 + 0x10);
  lVar9 = *(long *)(param_1 + 0x20);
  lVar4 = 0;
  plStack_38 = &lStack_28;
  lStack_40 = 0;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      puVar3 = PTR_DAT_04caca88;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224(0);
      }
      *(undefined1 *)(lVar9 + 0xb4) = 1;
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e20590,uVar5,0);
      *(undefined8 *)(lStack_28 + 0x18) = uVar5;
      thunk_FUN_02134474((undefined8 *)(lStack_28 + 0x18),uVar5);
      uVar8 = 1;
      goto LAB_0243baf8;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      lVar4 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      *(undefined4 *)(lStack_28 + 0x28) = *(undefined4 *)(lVar4 + 0x18);
      lVar4 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      iVar1 = *(int *)(lVar4 + 0x30);
      if (iVar1 < 0) goto LAB_0243ba9c;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      fVar10 = *(float *)(lVar9 + 0xb0);
      if (((float)iVar1 < fVar10) && (iVar1 < *(int *)(lStack_28 + 0x28))) {
        uVar5 = Dino_BusSand_App_UI_WinStreakPanel__Fall_2338e6c(lVar9);
                    /* try { // try from 0243ba84 to 0253baab has its CatchHandler @ 0243bd54 */
        *(undefined8 *)(lStack_28 + 0x18) = uVar5;
        thunk_FUN_02134474();
        uVar8 = 2;
        goto LAB_0243baf8;
      }
    }
    else {
      if (iVar1 != 2) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_0243ba9c:
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224(lVar4);
      }
      fVar10 = *(float *)(lVar9 + 0xb0);
    }
    if (fVar10 < (float)*(int *)(lStack_28 + 0x28)) {
      uVar5 = Dino_BusSand_App_UI_WinStreakPanel__Climb_2338dc8(lVar9);
      *(undefined8 *)(lStack_28 + 0x18) = uVar5;
      thunk_FUN_02134474();
      uVar8 = 3;
      goto LAB_0243baf8;
    }
    param_1 = lStack_28;
    if ((float)*(int *)(lStack_28 + 0x28) < fVar10) {
      uVar5 = Dino_BusSand_App_UI_WinStreakPanel__Fall_2338e6c(lVar9);
      *(undefined8 *)(lStack_28 + 0x18) = uVar5;
                    /* try { // try from 0243baf0 to 0253bb17 has its CatchHandler @ 0243bd50 */
      thunk_FUN_02134474();
      uVar8 = 4;
      goto LAB_0243baf8;
    }
  }
  else {
    if (5 < iVar1) {
      if (iVar1 != 6) {
        if (iVar1 != 7) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
LAB_0243b890:
        Dino_BusSand_App_UI_WinStreakPanel__Intro_d__45____m__Finally1_233bbf0(param_1);
        *(undefined8 *)(lStack_28 + 0x38) = 0;
        *(undefined8 *)(lStack_28 + 0x40) = 0;
        *(undefined8 *)(lStack_28 + 0x30) = 0;
        if (*(char *)(lStack_28 + 0x2c) != '\0') {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          Dino_BusSand_App_UI_WinStreakPanel__OnInfo_2339cd4();
        }
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0243bb30 to 0253bb3b has its CatchHandler @ 0243bd48 */
        FUN_02133224(0);
      }
      if (*(long *)(lVar9 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_78,*(long *)(lVar9 + 0xa8),*(undefined8 *)PTR_DAT_04cb9368);
      uStack_58 = uStack_70;
      uStack_60 = uStack_78;
      uStack_50 = uStack_68;
      *(undefined8 *)(lStack_28 + 0x38) = uStack_70;
      *(undefined8 *)(lStack_28 + 0x30) = uStack_78;
      *(undefined8 *)(lStack_28 + 0x40) = uStack_68;
      thunk_FUN_02134474(lStack_28 + 0x30,0);
      puVar3 = PTR_DAT_04cb9358;
      *(undefined4 *)(lStack_28 + 0x10) = 0xfffffffd;
      do {
        uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (lStack_28 + 0x30,*(undefined8 *)puVar3);
        param_1 = lStack_28;
        if ((uVar6 & 1) == 0) goto LAB_0243b890;
        lVar4 = *(long *)(lStack_28 + 0x40);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        iVar1 = *(int *)(*(long *)(lVar4 + 0x10) + 0x14);
        lVar7 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      } while (iVar1 <= *(int *)(lVar7 + 0x18));
      uVar5 = Dino_BusSand_App_UI_WinStreakPanel__FocusThenTip_23392f4(lVar9,lVar4);
      *(undefined8 *)(lStack_28 + 0x18) = uVar5;
      thunk_FUN_02134474();
      uVar8 = 7;
      goto LAB_0243baf8;
    }
    if (1 < iVar1 - 3U) {
      if (iVar1 != 5) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_0243b8cc;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
                    /* catch() { ... } // from try @ 0243b788 with catch @ 0243b7c4 */
                    /* try { // try from 0243b7c8 to 0253b7cf has its CatchHandler @ 0243b7d8 */
  Dino_BusSand_App_Meta_WinStreak__MarkShown_2294ff4(*(undefined4 *)(param_1 + 0x28),0);
                    /* try { // try from 0243b7d0 to 0253b7db has its CatchHandler @ 0243b634 */
  Dino_BusSand_App_Meta_WinStreak__ConsumePlus_2295024(0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0243b7c8 with catch @ 0243b7d8
                        */
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined1 *)(lVar9 + 0xb4) = 0;
  lVar4 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0243bb28 to 0253bb2f has its CatchHandler @ 0243bd40 */
    FUN_02133224();
  }
  bVar2 = *(byte *)(lVar4 + 0x28);
  *(byte *)(lStack_28 + 0x2c) = bVar2 ^ 1;
  param_1 = lStack_28;
  if (bVar2 != 0) {
LAB_0243b8cc:
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    lVar4 = lStack_40;
    *(undefined4 *)(lStack_28 + 0x10) = 6;
    if (lStack_40 == 0) {
      return 1;
    }
    FUN_01e7a3f0(&plStack_38);
                    /* WARNING: Subroutine does not return */
    FUN_0213321c(lVar4);
  }
  Dino_BusSand_App_Meta_WinStreak__MarkTutorial_2295058(0);
  if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_GameTracking__TowerBusImpression_221a0a0
            (*(undefined8 *)PTR_DAT_04cafb30,*(undefined8 *)PTR_DAT_04cafb30,0);
                    /* try { // try from 0243b83c to 0253ba83 has its CatchHandler @ 0243b83c
                       catch() { ... } // from try @ 0243b83c with catch @ 0243b83c
                       catch() { ... } // from try @ 0243bca8 with catch @ 0243b83c
                       catch() { ... } // from try @ 0243bd04 with catch @ 0243b83c
                       catch() { ... } // from try @ 0243bd18 with catch @ 0243b83c
                       catch() { ... } // from try @ 0243bd6c with catch @ 0243b83c
                       catch() { ... } // from try @ 0243be14 with catch @ 0243b83c */
  uVar5 = Dino_BusSand_App_UI_WinStreakPanel__Tour_2338fb8(lVar9);
  *(undefined8 *)(lStack_28 + 0x18) = uVar5;
  thunk_FUN_02134474();
  uVar8 = 5;
LAB_0243baf8:
  *(undefined4 *)(lStack_28 + 0x10) = uVar8;
  return 1;
}

