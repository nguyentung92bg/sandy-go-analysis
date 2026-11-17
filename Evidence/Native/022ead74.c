/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$OnOpen
void Dino_BusSand_App_UI_YachtRacingPanel__OnOpen (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$OnOpen
   void Dino_BusSand_App_UI_YachtRacingPanel__OnOpen (Dino_BusSand_App_UI_YachtRacingPanel_o*
   __this, Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingPanel__OnOpen_21ead74(long param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined4 uVar20;
  int iVar21;
  undefined8 *puVar22;
  long lVar23;
  int *piVar24;
  long *plVar25;
  long lVar26;
  int iVar27;
  ulong uVar28;
  undefined1 auVar29 [16];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  puVar4 = PTR_DAT_04cb1018;
  if ((bRam0000000004f9bbf2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
                    /* catch() { ... } // from try @ 022ead48 with catch @ 022eadac */
    FUN_02132f7c(PTR_DAT_04cb1018);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb1020);
    FUN_02132f7c(PTR_DAT_04cb1028);
                    /* try { // try from 022eaddc to 023eae73 has its CatchHandler @ 022eaddc
                       catch() { ... } // from try @ 022eaddc with catch @ 022eaddc
                       catch() { ... } // from try @ 022eae7c with catch @ 022eaddc */
    FUN_02132f7c(PTR_DAT_04cb1030);
    FUN_02132f7c(PTR_DAT_04cb1038);
    FUN_02132f7c(PTR_DAT_04cb1040);
    FUN_02132f7c(PTR_DAT_04cb1048);
    FUN_02132f7c(PTR_DAT_04cb1050);
    FUN_02132f7c(PTR_DAT_04cadf50);
    FUN_02132f7c(PTR_DAT_04cb1058);
    FUN_02132f7c(PTR_DAT_04cb1060);
    bRam0000000004f9bbf2 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((bVar2 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar4))
    goto LAB_022eae80;
  }
  param_2 = (long *)thunk_FUN_0216e89c();
                    /* try { // try from 022eae74 to 023eae7b has its CatchHandler @ 022eaed8 */
                    /* try { // try from 022eae7c to 023eaf07 has its CatchHandler @ 022eaddc */
  System_Object___ctor_4870e5c(param_2,0);
LAB_022eae80:
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(long *)(param_1 + 0x38) = (long)param_2;
  thunk_FUN_02134474((long *)(param_1 + 0x38),param_2);
  lVar14 = Dino_BusSand_App_UI_YachtRacingUi__get_Core_21f6838(0);
  plVar25 = (long *)(param_1 + 0x40);
  *plVar25 = lVar14;
  thunk_FUN_02134474(plVar25,lVar14);
  puVar5 = PTR_DAT_04cb1058;
  puVar4 = PTR_DAT_04cb1048;
  if (*plVar25 == 0) {
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar4 = PTR_DAT_04ca9af8;
    uVar19 = 0;
    uVar15 = *(undefined8 *)PTR_DAT_04cb1028;
    if ((bRam0000000004fa626c & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9af8,0);
      FUN_02132f7c(PTR_DAT_04ce7050);
      bRam0000000004fa626c = 1;
      uVar19 = extraout_x1;
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      uVar19 = extraout_x1_00;
    }
    if (cRam0000000004f9d848 == '\0') {
      FUN_02132f7c(PTR_DAT_04ca9af8,uVar19);
      cRam0000000004f9d848 = '\x01';
    }
    lVar14 = *(long *)puVar4;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar14 = *(long *)puVar4;
    }
    plVar25 = *(long **)(*(long *)(lVar14 + 0xb8) + 8);
    if (plVar25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar14 = *plVar25;
    uVar28 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar28 != 0) {
      piVar24 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_04ce7050) {
          puVar22 = (undefined8 *)(lVar14 + (long)(*piVar24 + 3) * 0x10 + 0x138);
          goto LAB_04457b18;
        }
        uVar28 = uVar28 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar28 != 0);
    }
    puVar22 = (undefined8 *)FUN_0216b7a4(plVar25,*(long *)PTR_DAT_04ce7050,3);
LAB_04457b18:
                    /* WARNING: Could not recover jumptable at 0x04457b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar22)(plVar25,2,uVar15,puVar22[1]);
    return;
  }
  uVar11 = Dino_BusSand_App_Meta_YachtRacingCore__get_CurrentStage_2255454(*plVar25,0);
  uVar19 = *(undefined8 *)puVar4;
  *(undefined4 *)(param_1 + 0x48) = uVar11;
                    /* catch() { ... } // from try @ 022eae74 with catch @ 022eaed8 */
  plVar25 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,uVar19,0);
  if (plVar25 == (long *)0x0) {
    plVar25 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  else {
    lVar14 = *(long *)PTR_DAT_04cabdb0;
    plVar1 = plVar25;
    if (*plVar25 != lVar14) {
      plVar1 = (long *)0x0;
    }
                    /* catch() { ... } // from try @ 022eaff0 with catch @ 022eaf08
                       catch() { ... } // from try @ 022eb450 with catch @ 022eaf08
                       catch() { ... } // from try @ 022eb50c with catch @ 022eaf08
                       catch() { ... } // from try @ 022eb564 with catch @ 022eaf08 */
    *(long **)(param_1 + 0x60) = plVar1;
    if (*plVar25 != lVar14) {
      plVar25 = (long *)0x0;
    }
  }
  puVar4 = PTR_DAT_04cadf50;
  thunk_FUN_02134474(param_1 + 0x60,plVar25);
  plVar25 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar5,0);
  if (plVar25 == (long *)0x0) {
    plVar25 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    lVar14 = *(long *)PTR_DAT_04cabdb0;
    plVar1 = plVar25;
    if (*plVar25 != lVar14) {
      plVar1 = (long *)0x0;
    }
    *(long **)(param_1 + 0x68) = plVar1;
    if (*plVar25 != lVar14) {
      plVar25 = (long *)0x0;
    }
  }
  puVar5 = PTR_DAT_04cb1038;
  thunk_FUN_02134474(param_1 + 0x68,plVar25);
  plVar25 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
  if (plVar25 == (long *)0x0) {
    plVar25 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  else {
                    /* try { // try from 022eafe8 to 023eafef has its CatchHandler @ 022eb4f0 */
                    /* try { // try from 022eaff0 to 023eb037 has its CatchHandler @ 022eaf08 */
    lVar14 = *(long *)PTR_DAT_04cabdb0;
    plVar1 = plVar25;
    if (*plVar25 != lVar14) {
      plVar1 = (long *)0x0;
    }
    *(long **)(param_1 + 0x70) = plVar1;
    if (*plVar25 != lVar14) {
      plVar25 = (long *)0x0;
    }
  }
  puVar4 = PTR_DAT_04cb1030;
  thunk_FUN_02134474(param_1 + 0x70,plVar25);
                    /* try { // try from 022eb038 to 023eb03f has its CatchHandler @ 022eb4f0 */
  plVar25 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar5,0);
  if (plVar25 == (long *)0x0) {
                    /* try { // try from 022eb074 to 023eb087 has its CatchHandler @ 022eb4f0 */
    plVar25 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
                    /* try { // try from 022eb040 to 023eb04f has its CatchHandler @ 022eb4dc */
                    /* try { // try from 022eb050 to 023eb063 has its CatchHandler @ 022eb4f0 */
    lVar14 = *(long *)PTR_DAT_04cabdb0;
    plVar1 = plVar25;
    if (*plVar25 != lVar14) {
      plVar1 = (long *)0x0;
    }
    *(long **)(param_1 + 0x78) = plVar1;
                    /* try { // try from 022eb064 to 023eb073 has its CatchHandler @ 022eb4d8 */
    if (*plVar25 != lVar14) {
      plVar25 = (long *)0x0;
    }
  }
  puVar5 = PTR_DAT_04cb1060;
                    /* try { // try from 022eb088 to 023eb097 has its CatchHandler @ 022eb4d4 */
  thunk_FUN_02134474(param_1 + 0x78,plVar25);
                    /* try { // try from 022eb098 to 023eb0ab has its CatchHandler @ 022eb4f0 */
  plVar25 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
  if (plVar25 == (long *)0x0) {
    plVar25 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  else {
                    /* try { // try from 022eb0ac to 023eb0bb has its CatchHandler @ 022eb4d0 */
    lVar14 = *(long *)PTR_DAT_04cabdb0;
    plVar1 = plVar25;
    if (*plVar25 != lVar14) {
      plVar1 = (long *)0x0;
    }
                    /* try { // try from 022eb0bc to 023eb0f7 has its CatchHandler @ 022eb4f0 */
    *(long **)(param_1 + 0x80) = plVar1;
    if (*plVar25 != lVar14) {
      plVar25 = (long *)0x0;
    }
  }
  puVar6 = PTR_DAT_04cb1050;
  puVar3 = PTR_DAT_04cb1040;
  puVar4 = PTR_DAT_04cb1020;
  thunk_FUN_02134474(param_1 + 0x80,plVar25);
  plVar25 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar5,0);
  if (plVar25 == (long *)0x0) {
    plVar25 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  else {
                    /* try { // try from 022eb110 to 023eb117 has its CatchHandler @ 022eb4c0 */
    lVar14 = *(long *)PTR_DAT_04cabdb0;
    plVar1 = plVar25;
                    /* try { // try from 022eb128 to 023eb1db has its CatchHandler @ 022eb4f0 */
    if (*plVar25 != lVar14) {
      plVar1 = (long *)0x0;
    }
    *(long **)(param_1 + 0x88) = plVar1;
    if (*plVar25 != lVar14) {
      plVar25 = (long *)0x0;
    }
  }
  thunk_FUN_02134474(param_1 + 0x88,plVar25);
  uVar19 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar3,0);
  uVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  Dino_BusSand_App_UI_YachtRacingRewardTips___ctor_21eb1d8(uVar15,uVar19);
  *(undefined8 *)(param_1 + 0x58) = uVar15;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x58),uVar15);
  Dino_BusSand_App_UI_YachtRacingPanel__AddListeners_21eb80c(param_1);
  Dino_BusSand_App_UI_YachtRacingPanel__AdaptBackTop_21ebb1c(param_1);
  uVar19 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
  Dino_BusSand_App_UI_YachtRacingUi__PlayLoop_21f8914(uVar19,*(undefined8 *)puVar6,0);
  if ((bRam0000000004f9bbf6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cb10d8);
    FUN_02132f7c(PTR_DAT_04cb10e0);
    FUN_02132f7c(PTR_DAT_04cb10e8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb10f0);
    FUN_02132f7c(PTR_DAT_04cade40);
    FUN_02132f7c(PTR_DAT_04cadcc8);
    FUN_02132f7c(PTR_DAT_04cb10f8);
    FUN_02132f7c(PTR_DAT_04cadd80);
    FUN_02132f7c(PTR_DAT_04cb1100);
    bRam0000000004f9bbf6 = 1;
  }
  puVar5 = PTR_DAT_04cb10f8;
  puVar4 = PTR_DAT_04ca9d18;
  bVar10 = false;
  if (*(long *)(param_1 + 0x38) != 0) {
    bVar10 = *(char *)(*(long *)(param_1 + 0x38) + 0x10) != '\0';
  }
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04cadd80,bVar10 ^ 1,0);
  uVar19 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar5,0);
  lVar26 = *(long *)puVar4;
  lVar14 = *(long *)(lVar26 + 0x38);
  if (lVar14 == 0) {
    FUN_0216b4cc(lVar26);
    lVar14 = *(long *)(lVar26 + 0x38);
  }
  lVar14 = *(long *)(lVar14 + 0x10);
  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_0216b470();
  }
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar5 = PTR_DAT_04cb1100;
  lVar14 = *(long *)(*(long *)(lVar26 + 0x38) + 0x10);
  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_0216b470();
  }
  puVar9 = PTR_DAT_04cb10f0;
  puVar8 = PTR_DAT_04cb10e8;
  puVar7 = PTR_DAT_04cb10e0;
  puVar6 = PTR_DAT_04cb10d8;
  puVar3 = PTR_DAT_04ca9ae8;
  uVar15 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                     (*(undefined8 *)puVar5,**(undefined8 **)(lVar14 + 0xb8),0);
  Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar19,uVar15,0);
  Dino_BusSand_App_UI_YachtRacingPanel__RefreshStage_21ec2b4(param_1);
  uVar28 = 0;
LAB_022ebe78:
  lVar14 = *(long *)puVar9;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar14 = *(long *)puVar9;
  }
  lVar26 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
  if (lVar26 != 0) {
    if ((long)uVar28 < (long)*(int *)(lVar26 + 0x18)) {
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar26 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 8);
        if (lVar26 == 0) goto LAB_022ec108;
      }
      if (*(uint *)(lVar26 + 0x18) <= uVar28) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      lVar14 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                         (param_1,*(undefined8 *)(lVar26 + uVar28 * 8 + 0x20),0);
      lVar26 = *(long *)puVar3;
      if (*(int *)(lVar26 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar26);
      }
      uVar16 = UnityEngine_Object__op_Equality_43c6f30(lVar14,0,0);
      if ((uVar16 & 1) == 0) {
        if (lVar14 == 0) goto LAB_022ec108;
        uVar19 = UnityEngine_Component__GetComponent_object__26f97e8(lVar14,*(undefined8 *)puVar6);
        lVar26 = *(long *)puVar3;
        if (*(int *)(lVar26 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar26);
        }
        uVar16 = UnityEngine_Object__op_Equality_43c6f30(uVar19,0,0);
        if ((uVar16 & 1) != 0) {
          lVar14 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0);
          if (lVar14 == 0) goto LAB_022ec108;
          uVar19 = UnityEngine_GameObject__AddComponent_object__275a54c
                             (lVar14,*(undefined8 *)puVar7);
        }
        lVar14 = *(long *)(param_1 + 0x50);
        if (lVar14 == 0) goto LAB_022ec108;
        lVar26 = *(long *)(lVar14 + 0x10);
        lVar23 = *(long *)puVar8;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar26 == 0) goto LAB_022ec108;
        uVar13 = *(uint *)(lVar14 + 0x18);
        if (uVar13 < *(uint *)(lVar26 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar13 + 1;
          puVar22 = (undefined8 *)(lVar26 + (long)(int)uVar13 * 8 + 0x20);
          *puVar22 = uVar19;
          thunk_FUN_02134474(puVar22,uVar19);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar14,uVar19,
                     *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar28 = uVar28 + 1;
      goto LAB_022ebe78;
    }
    Dino_BusSand_App_UI_YachtRacingPanel__RefreshFlagContent_21ec7c0(param_1);
    if (*(long *)(param_1 + 0x40) != 0) {
      iVar12 = Dino_BusSand_App_Meta_YachtRacingCore__get_State_22553b4(*(long *)(param_1 + 0x40),0)
      ;
      if (iVar12 == 5) {
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_022ec108;
        Dino_BusSand_App_Meta_YachtRacingCore__OnGameLoseConfirmed_22589e8
                  (*(long *)(param_1 + 0x40),0);
      }
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_022ec108;
      uVar28 = Dino_BusSand_App_Meta_YachtRacingCore__ActivityIsHide_225556c
                         (*(long *)(param_1 + 0x40),0);
      if ((uVar28 & 1) == 0) {
        Dino_BusSand_App_UI_YachtRacingPanel__CountDownTime_21eca38(param_1);
        *(undefined1 *)(param_1 + 0x93) = 1;
        uVar19 = Dino_BusSand_App_UI_YachtRacingPanel__CountDownLoop_21ecb9c(param_1);
        Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar19,0);
      }
      else {
        uVar19 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                           (param_1,*(undefined8 *)PTR_DAT_04cade40,0);
        lVar26 = *(long *)puVar4;
        lVar14 = *(long *)(lVar26 + 0x38);
        if (lVar14 == 0) {
          FUN_0216b4cc(lVar26);
          lVar14 = *(long *)(lVar26 + 0x38);
        }
        lVar14 = *(long *)(lVar14 + 0x10);
        if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_0216b470();
        }
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar14 = *(long *)(*(long *)(lVar26 + 0x38) + 0x10);
        if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_0216b470();
        }
        uVar15 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                           (*(undefined8 *)PTR_DAT_04cadcc8,**(undefined8 **)(lVar14 + 0xb8),0);
        Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar19,uVar15,0);
      }
      Dino_BusSand_App_UI_YachtRacingPanel__InitTrackItems_21ecc08(param_1);
      lVar14 = *(long *)(param_1 + 0x40);
      if (lVar14 != 0) {
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
        lVar26 = *(long *)(lVar14 + 0x10);
        uStack_80 = 0;
        puStack_78 = (undefined8 *)0x0;
        lStack_70 = 0;
        if (lVar26 == 0) goto LAB_02355fa8;
        if (*(int *)(lVar26 + 0x2c) != 3) {
          return;
        }
        if (*(long *)(lVar26 + 0x18) == 0) goto LAB_02355fa8;
        if (*(int *)(*(long *)(lVar26 + 0x18) + 0x18) == 0) {
          return;
        }
        if (*(long *)(lVar14 + 0x58) == 0) {
          return;
        }
        lVar26 = Dino_BusSand_App_Meta_RacingRobotSession__GetRankings_2263304
                           (*(long *)(lVar14 + 0x58),0);
        if (lVar26 == 0) goto LAB_02355fa8;
        if (*(int *)(lVar26 + 0x18) == 0) {
          return;
        }
        iVar12 = Dino_BusSand_App_Meta_YachtRacingCore__MaxProgress_22551dc(lVar14,0xffffffff);
        if (*(long *)(lVar14 + 0x10) == 0) goto LAB_02355fa8;
        lVar23 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468
                           (*(long *)(lVar14 + 0x10));
        if (lVar23 == 0) {
          iVar21 = -1;
        }
        else {
          iVar21 = *(int *)(lVar23 + 0x28);
        }
        uVar13 = Dino_BusSand_App_Meta_YachtRacingCore__CheckCanActiveBots_22563b8(lVar14);
        if (*(long *)(lVar14 + 0x10) == 0) goto LAB_02355fa8;
        lVar23 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468
                           (*(long *)(lVar14 + 0x10));
        puVar5 = PTR_DAT_04caf720;
        puVar4 = PTR_DAT_04caf718;
        if (*(int *)(lVar26 + 0x18) < 1) goto LAB_02355f18;
        iVar27 = 0;
        goto LAB_02355d34;
      }
    }
  }
LAB_022ec108:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
LAB_02355d34:
  do {
    auVar29 = System_Collections_Generic_List_RacingRanking___get_Item_3a9a630
                        (lVar26,iVar27,*(undefined8 *)PTR_DAT_04cb3ea8);
    if ((*(long *)(lVar14 + 0x10) == 0) ||
       (lVar17 = *(long *)(*(long *)(lVar14 + 0x10) + 0x18), lVar17 == 0)) goto LAB_02355fa8;
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_98,lVar17,*(undefined8 *)PTR_DAT_04caf730);
    uStack_80 = uStack_98;
    uStack_98 = 0;
    puStack_78 = puStack_90;
    lStack_70 = lStack_88;
    puStack_90 = &uStack_80;
    do {
      uVar28 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                         (&uStack_80,*(undefined8 *)puVar5);
      lVar17 = lStack_70;
      if ((uVar28 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_80,*(undefined8 *)puVar4);
        goto LAB_02355ec4;
      }
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    } while (*(int *)(lStack_70 + 0x10) != auVar29._0_4_);
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_80,*(undefined8 *)puVar4);
    *(int *)(lVar17 + 0x14) = auVar29._4_4_;
    *(int *)(lVar17 + 0x28) = iVar27 + 1;
    if (iVar12 <= auVar29._4_4_) {
      if ((auVar29._8_8_ & 1) == 0) {
        if (lVar23 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(lVar23 + 0x14);
        }
        if (*(long *)(lVar14 + 0x10) == 0) goto LAB_02355fa8;
        lVar18 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468();
        if (lVar18 == 0) {
          uVar20 = 0xffffffff;
        }
        else {
          uVar20 = *(undefined4 *)(lVar18 + 0x28);
        }
        Dino_BusSand_App_Meta_YachtRacingCore__Track_225659c(lVar14,3,uVar11,uVar11,iVar21,uVar20,0)
        ;
        uVar19 = 5;
      }
      else {
        Dino_BusSand_App_Meta_YachtRacingCore__Track_225659c(lVar14,1,iVar12 + -1,iVar12,iVar21,1,1)
        ;
        if (*(long *)(lVar14 + 0x10) == 0) goto LAB_02355fa8;
        uVar11 = *(undefined4 *)(*(long *)(lVar14 + 0x10) + 0x78);
        lVar18 = Dino_BusSand_App_Meta_YachtRacingCore__StageInfo_2254fe0(lVar14,uVar11);
        if (lVar18 == 0) {
          uVar20 = 0xffffffff;
        }
        else {
          uVar20 = *(undefined4 *)(lVar18 + 0x14);
        }
        Dino_BusSand_App_Meta_YachtRacingCore__TrackReward_225709c(lVar14,0,uVar11,uVar20);
        uVar19 = 6;
      }
      Dino_BusSand_App_Meta_YachtRacingCore__ApplyState_225550c(lVar14,uVar19);
    }
    if (*(char *)(lVar17 + 0x2d) == '\0' && ((uVar13 ^ 0xffffffff) & 1) == 0) {
      *(undefined1 *)(lVar17 + 0x2d) = 1;
    }
LAB_02355ec4:
    iVar27 = iVar27 + 1;
  } while (iVar27 < *(int *)(lVar26 + 0x18));
LAB_02355f18:
  if (*(long *)(lVar14 + 0x10) != 0) {
    lVar26 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468();
    if (lVar26 == 0) {
      iVar12 = -1;
    }
    else {
      iVar12 = *(int *)(lVar26 + 0x28);
    }
    if (iVar21 != iVar12) {
      if ((*(long *)(lVar14 + 0x10) == 0) ||
         (lVar26 = *(long *)(*(long *)(lVar14 + 0x10) + 0x18), lVar26 == 0)) goto LAB_02355fa8;
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_98,lVar26,*(undefined8 *)PTR_DAT_04caf730);
      puVar4 = PTR_DAT_04caf720;
      puStack_78 = puStack_90;
      uStack_80 = uStack_98;
      lStack_70 = lStack_88;
      uStack_98 = 0;
      puStack_90 = &uStack_80;
      while (uVar28 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&uStack_80,*(undefined8 *)puVar4), (uVar28 & 1) != 0) {
        if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        *(undefined1 *)(lStack_70 + 0x2d) = 1;
      }
      FUN_01e784d8(&uStack_98);
    }
    lVar26 = *(long *)(lVar14 + 0x28);
    if (lVar26 != 0) {
      (**(code **)(lVar26 + 0x18))(*(undefined8 *)(lVar26 + 0x40),*(undefined8 *)(lVar26 + 0x28));
    }
    lVar14 = *(long *)(lVar14 + 0x38);
    if (lVar14 != 0) {
      (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(lVar14 + 0x28));
    }
    return;
  }
LAB_02355fa8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

