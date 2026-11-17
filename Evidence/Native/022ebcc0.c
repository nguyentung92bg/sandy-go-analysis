/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$InitUI
void Dino_BusSand_App_UI_YachtRacingPanel__InitUI (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$InitUI
   void Dino_BusSand_App_UI_YachtRacingPanel__InitUI (Dino_BusSand_App_UI_YachtRacingPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingPanel__InitUI_21ebcc0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  int iVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  undefined4 uVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
                    /* try { // try from 022ebcdc to 023ebce3 has its CatchHandler @ 022ebd40 */
                    /* try { // try from 022ebce4 to 023ebd6f has its CatchHandler @ 022ebc44 */
  if ((bRam0000000004f9bbf6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cb10d8);
    FUN_02132f7c(PTR_DAT_04cb10e0);
    FUN_02132f7c(PTR_DAT_04cb10e8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb10f0);
    FUN_02132f7c(PTR_DAT_04cade40);
                    /* catch() { ... } // from try @ 022ebcdc with catch @ 022ebd40 */
    FUN_02132f7c(PTR_DAT_04cadcc8);
    FUN_02132f7c(PTR_DAT_04cb10f8);
    FUN_02132f7c(PTR_DAT_04cadd80);
    FUN_02132f7c(PTR_DAT_04cb1100);
                    /* try { // try from 022ebd70 to 023ebe07 has its CatchHandler @ 022ebd70
                       catch() { ... } // from try @ 022ebd70 with catch @ 022ebd70
                       catch() { ... } // from try @ 022ebe10 with catch @ 022ebd70 */
    bRam0000000004f9bbf6 = 1;
  }
  puVar3 = PTR_DAT_04cb10f8;
  puVar2 = PTR_DAT_04ca9d18;
  bVar8 = false;
  if (*(long *)(param_1 + 0x38) != 0) {
    bVar8 = *(char *)(*(long *)(param_1 + 0x38) + 0x10) != '\0';
  }
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04cadd80,bVar8 ^ 1,0);
  uVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar3,0);
  lVar21 = *(long *)puVar2;
  lVar18 = *(long *)(lVar21 + 0x38);
  if (lVar18 == 0) {
    FUN_0216b4cc(lVar21);
    lVar18 = *(long *)(lVar21 + 0x38);
  }
  lVar18 = *(long *)(lVar18 + 0x10);
  if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = FUN_0216b470();
  }
  if (*(int *)(lVar18 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cb1100;
                    /* try { // try from 022ebe08 to 023ebe0f has its CatchHandler @ 022ebe6c */
  lVar18 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
                    /* try { // try from 022ebe10 to 023ebe9b has its CatchHandler @ 022ebd70 */
  if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = FUN_0216b470();
  }
  puVar7 = PTR_DAT_04cb10f0;
  puVar6 = PTR_DAT_04cb10e8;
  puVar5 = PTR_DAT_04cb10e0;
  puVar4 = PTR_DAT_04cb10d8;
  puVar1 = PTR_DAT_04ca9ae8;
  uVar12 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                     (*(undefined8 *)puVar3,**(undefined8 **)(lVar18 + 0xb8),0);
  Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar11,uVar12,0);
                    /* catch() { ... } // from try @ 022ebe08 with catch @ 022ebe6c */
  Dino_BusSand_App_UI_YachtRacingPanel__RefreshStage_21ec2b4(param_1);
  uVar24 = 0;
LAB_022ebe78:
  lVar18 = *(long *)puVar7;
  if (*(int *)(lVar18 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar18 = *(long *)puVar7;
  }
  lVar21 = *(long *)(*(long *)(lVar18 + 0xb8) + 8);
  if (lVar21 != 0) {
                    /* try { // try from 022ebe9c to 023ebf33 has its CatchHandler @ 022ebe9c
                       catch() { ... } // from try @ 022ebe9c with catch @ 022ebe9c
                       catch() { ... } // from try @ 022ebf3c with catch @ 022ebe9c */
    if ((long)uVar24 < (long)*(int *)(lVar21 + 0x18)) {
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar21 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
        if (lVar21 == 0) goto LAB_022ec108;
      }
      if (*(uint *)(lVar21 + 0x18) <= uVar24) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      lVar18 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                         (param_1,*(undefined8 *)(lVar21 + uVar24 * 8 + 0x20),0);
      lVar21 = *(long *)puVar1;
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar21);
      }
      uVar13 = UnityEngine_Object__op_Equality_43c6f30(lVar18,0,0);
      if ((uVar13 & 1) == 0) {
        if (lVar18 == 0) goto LAB_022ec108;
        uVar11 = UnityEngine_Component__GetComponent_object__26f97e8(lVar18,*(undefined8 *)puVar4);
        lVar21 = *(long *)puVar1;
        if (*(int *)(lVar21 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar21);
        }
                    /* try { // try from 022ebf34 to 023ebf3b has its CatchHandler @ 022ebf98 */
                    /* try { // try from 022ebf3c to 023ebfc7 has its CatchHandler @ 022ebe9c */
        uVar13 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
        if ((uVar13 & 1) != 0) {
          lVar18 = UnityEngine_Component__get_gameObject_43bcde8(lVar18,0);
          if (lVar18 == 0) goto LAB_022ec108;
          uVar11 = UnityEngine_GameObject__AddComponent_object__275a54c
                             (lVar18,*(undefined8 *)puVar5);
        }
        lVar18 = *(long *)(param_1 + 0x50);
        if (lVar18 == 0) goto LAB_022ec108;
        lVar21 = *(long *)(lVar18 + 0x10);
        lVar20 = *(long *)puVar6;
        *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
        if (lVar21 == 0) goto LAB_022ec108;
        uVar10 = *(uint *)(lVar18 + 0x18);
        if (uVar10 < *(uint *)(lVar21 + 0x18)) {
                    /* catch() { ... } // from try @ 022ebf34 with catch @ 022ebf98 */
          *(uint *)(lVar18 + 0x18) = uVar10 + 1;
          puVar19 = (undefined8 *)(lVar21 + (long)(int)uVar10 * 8 + 0x20);
          *puVar19 = uVar11;
          thunk_FUN_02134474(puVar19,uVar11);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar18,uVar11,
                     *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* try { // try from 022ebfc8 to 023ec05f has its CatchHandler @ 022ebfc8
                       catch() { ... } // from try @ 022ebfc8 with catch @ 022ebfc8
                       catch() { ... } // from try @ 022ec068 with catch @ 022ebfc8 */
      uVar24 = uVar24 + 1;
      goto LAB_022ebe78;
    }
    Dino_BusSand_App_UI_YachtRacingPanel__RefreshFlagContent_21ec7c0(param_1);
    if (*(long *)(param_1 + 0x40) != 0) {
      iVar9 = Dino_BusSand_App_Meta_YachtRacingCore__get_State_22553b4(*(long *)(param_1 + 0x40),0);
      if (iVar9 == 5) {
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_022ec108;
        Dino_BusSand_App_Meta_YachtRacingCore__OnGameLoseConfirmed_22589e8
                  (*(long *)(param_1 + 0x40),0);
      }
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_022ec108;
      uVar24 = Dino_BusSand_App_Meta_YachtRacingCore__ActivityIsHide_225556c
                         (*(long *)(param_1 + 0x40),0);
      if ((uVar24 & 1) == 0) {
        Dino_BusSand_App_UI_YachtRacingPanel__CountDownTime_21eca38(param_1);
        *(undefined1 *)(param_1 + 0x93) = 1;
                    /* catch() { ... } // from try @ 022ec060 with catch @ 022ec0c4 */
        uVar11 = Dino_BusSand_App_UI_YachtRacingPanel__CountDownLoop_21ecb9c(param_1);
        Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar11,0);
      }
      else {
        uVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                           (param_1,*(undefined8 *)PTR_DAT_04cade40,0);
        lVar21 = *(long *)puVar2;
        lVar18 = *(long *)(lVar21 + 0x38);
        if (lVar18 == 0) {
          FUN_0216b4cc(lVar21);
          lVar18 = *(long *)(lVar21 + 0x38);
        }
        lVar18 = *(long *)(lVar18 + 0x10);
        if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = FUN_0216b470();
        }
                    /* try { // try from 022ec060 to 023ec067 has its CatchHandler @ 022ec0c4 */
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 022ec068 to 023ec0f3 has its CatchHandler @ 022ebfc8 */
        lVar18 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
        if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = FUN_0216b470();
        }
        uVar12 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                           (*(undefined8 *)PTR_DAT_04cadcc8,**(undefined8 **)(lVar18 + 0xb8),0);
        Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar11,uVar12,0);
      }
      Dino_BusSand_App_UI_YachtRacingPanel__InitTrackItems_21ecc08(param_1);
      lVar18 = *(long *)(param_1 + 0x40);
      if (lVar18 != 0) {
        if ((bRam0000000004f9bfef & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04caf718,0);
          FUN_02132f7c(PTR_DAT_04caf720);
          FUN_02132f7c(PTR_DAT_04caf728);
          FUN_02132f7c(PTR_DAT_04caf730);
          FUN_02132f7c(PTR_DAT_04cb3ea0);
          FUN_02132f7c(PTR_DAT_04cb11d8);
          FUN_02132f7c(PTR_DAT_04cb3ea8);
          bRam0000000004f9bfef = 1;
        }
        lVar21 = *(long *)(lVar18 + 0x10);
        uStack_80 = 0;
        puStack_78 = (undefined8 *)0x0;
        lStack_70 = 0;
        if (lVar21 == 0) goto LAB_02355fa8;
        if (*(int *)(lVar21 + 0x2c) != 3) {
          return;
        }
        if (*(long *)(lVar21 + 0x18) == 0) goto LAB_02355fa8;
        if (*(int *)(*(long *)(lVar21 + 0x18) + 0x18) == 0) {
          return;
        }
        if (*(long *)(lVar18 + 0x58) == 0) {
          return;
        }
        lVar21 = Dino_BusSand_App_Meta_RacingRobotSession__GetRankings_2263304
                           (*(long *)(lVar18 + 0x58),0);
        if (lVar21 == 0) goto LAB_02355fa8;
        if (*(int *)(lVar21 + 0x18) == 0) {
          return;
        }
        iVar9 = Dino_BusSand_App_Meta_YachtRacingCore__MaxProgress_22551dc(lVar18,0xffffffff);
        if (*(long *)(lVar18 + 0x10) == 0) goto LAB_02355fa8;
        lVar20 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468
                           (*(long *)(lVar18 + 0x10));
        if (lVar20 == 0) {
          iVar17 = -1;
        }
        else {
          iVar17 = *(int *)(lVar20 + 0x28);
        }
        uVar10 = Dino_BusSand_App_Meta_YachtRacingCore__CheckCanActiveBots_22563b8(lVar18);
        if (*(long *)(lVar18 + 0x10) == 0) goto LAB_02355fa8;
        lVar20 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468
                           (*(long *)(lVar18 + 0x10));
        puVar3 = PTR_DAT_04caf720;
        puVar2 = PTR_DAT_04caf718;
        if (*(int *)(lVar21 + 0x18) < 1) goto LAB_02355f18;
        iVar22 = 0;
        goto LAB_02355d34;
      }
    }
  }
LAB_022ec108:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
LAB_02355d34:
  do {
    auVar25 = System_Collections_Generic_List_RacingRanking___get_Item_3a9a630
                        (lVar21,iVar22,*(undefined8 *)PTR_DAT_04cb3ea8);
    if ((*(long *)(lVar18 + 0x10) == 0) ||
       (lVar14 = *(long *)(*(long *)(lVar18 + 0x10) + 0x18), lVar14 == 0)) goto LAB_02355fa8;
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_98,lVar14,*(undefined8 *)PTR_DAT_04caf730);
    uStack_80 = uStack_98;
    uStack_98 = 0;
    puStack_78 = puStack_90;
    lStack_70 = lStack_88;
    puStack_90 = &uStack_80;
    do {
      uVar24 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                         (&uStack_80,*(undefined8 *)puVar3);
      lVar14 = lStack_70;
      if ((uVar24 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_80,*(undefined8 *)puVar2);
        goto LAB_02355ec4;
      }
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    } while (*(int *)(lStack_70 + 0x10) != auVar25._0_4_);
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_80,*(undefined8 *)puVar2);
    *(int *)(lVar14 + 0x14) = auVar25._4_4_;
    *(int *)(lVar14 + 0x28) = iVar22 + 1;
    if (iVar9 <= auVar25._4_4_) {
      if ((auVar25._8_8_ & 1) == 0) {
        if (lVar20 == 0) {
          uVar23 = 0;
        }
        else {
          uVar23 = *(undefined4 *)(lVar20 + 0x14);
        }
        if (*(long *)(lVar18 + 0x10) == 0) goto LAB_02355fa8;
        lVar15 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468();
        if (lVar15 == 0) {
          uVar16 = 0xffffffff;
        }
        else {
          uVar16 = *(undefined4 *)(lVar15 + 0x28);
        }
        Dino_BusSand_App_Meta_YachtRacingCore__Track_225659c(lVar18,3,uVar23,uVar23,iVar17,uVar16,0)
        ;
        uVar11 = 5;
      }
      else {
        Dino_BusSand_App_Meta_YachtRacingCore__Track_225659c(lVar18,1,iVar9 + -1,iVar9,iVar17,1,1);
        if (*(long *)(lVar18 + 0x10) == 0) goto LAB_02355fa8;
        uVar23 = *(undefined4 *)(*(long *)(lVar18 + 0x10) + 0x78);
        lVar15 = Dino_BusSand_App_Meta_YachtRacingCore__StageInfo_2254fe0(lVar18,uVar23);
        if (lVar15 == 0) {
          uVar16 = 0xffffffff;
        }
        else {
          uVar16 = *(undefined4 *)(lVar15 + 0x14);
        }
        Dino_BusSand_App_Meta_YachtRacingCore__TrackReward_225709c(lVar18,0,uVar23,uVar16);
        uVar11 = 6;
      }
      Dino_BusSand_App_Meta_YachtRacingCore__ApplyState_225550c(lVar18,uVar11);
    }
    if (*(char *)(lVar14 + 0x2d) == '\0' && ((uVar10 ^ 0xffffffff) & 1) == 0) {
      *(undefined1 *)(lVar14 + 0x2d) = 1;
    }
LAB_02355ec4:
    iVar22 = iVar22 + 1;
  } while (iVar22 < *(int *)(lVar21 + 0x18));
LAB_02355f18:
  if (*(long *)(lVar18 + 0x10) != 0) {
    lVar21 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468();
    if (lVar21 == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = *(int *)(lVar21 + 0x28);
    }
    if (iVar17 != iVar9) {
      if ((*(long *)(lVar18 + 0x10) == 0) ||
         (lVar21 = *(long *)(*(long *)(lVar18 + 0x10) + 0x18), lVar21 == 0)) goto LAB_02355fa8;
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_98,lVar21,*(undefined8 *)PTR_DAT_04caf730);
      puVar2 = PTR_DAT_04caf720;
      puStack_78 = puStack_90;
      uStack_80 = uStack_98;
      lStack_70 = lStack_88;
      uStack_98 = 0;
      puStack_90 = &uStack_80;
      while (uVar24 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&uStack_80,*(undefined8 *)puVar2), (uVar24 & 1) != 0) {
        if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        *(undefined1 *)(lStack_70 + 0x2d) = 1;
      }
      FUN_01e784d8(&uStack_98);
    }
    lVar21 = *(long *)(lVar18 + 0x28);
    if (lVar21 != 0) {
      (**(code **)(lVar21 + 0x18))(*(undefined8 *)(lVar21 + 0x40),*(undefined8 *)(lVar21 + 0x28));
    }
    lVar18 = *(long *)(lVar18 + 0x38);
    if (lVar18 != 0) {
      (**(code **)(lVar18 + 0x18))(*(undefined8 *)(lVar18 + 0x40),*(undefined8 *)(lVar18 + 0x28));
    }
    return;
  }
LAB_02355fa8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

