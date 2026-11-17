/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$ContinueOffer
void Dino_BusSand_App_Meta_GameTracking__ContinueOffer (int32_t index, System_String_o* action, int32_t price, int32_t ads, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$ContinueOffer
   void Dino_BusSand_App_Meta_GameTracking__ContinueOffer (int32_t index, System_String_o* action,
   int32_t price, int32_t ads, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__ContinueOffer_22193d0
               (undefined4 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  puVar4 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bd71 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cb2720);
    FUN_02132f7c(PTR_DAT_04cb2728);
    FUN_02132f7c(PTR_DAT_04cb2730);
    FUN_02132f7c(PTR_DAT_04cb2738);
    FUN_02132f7c(PTR_DAT_04cad1f8);
    FUN_02132f7c(PTR_DAT_04cb2450);
    FUN_02132f7c(PTR_DAT_04cac620);
    FUN_02132f7c(PTR_DAT_04cb2740);
    FUN_02132f7c(PTR_DAT_04cabc00);
    FUN_02132f7c(PTR_DAT_04cb2478);
    FUN_02132f7c(PTR_DAT_04cb2480);
    FUN_02132f7c(PTR_DAT_04cb0370);
    FUN_02132f7c(PTR_DAT_04cb2488);
    bRam0000000004f9bd71 = 1;
  }
  puVar6 = PTR_DAT_04cb2240;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cac498;
  Dino_BusSand_App_Meta_JourneyTracking__NoteContinue_2219b14(param_2);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cabc00;
  lVar8 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
  lVar11 = *(long *)puVar4;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar11);
    lVar11 = *(long *)puVar4;
  }
  puVar5 = PTR_DAT_04cabaf8;
  puVar3 = PTR_DAT_04caa200;
  pcVar14 = *(char **)(lVar11 + 0xb8);
  uVar15 = *(undefined8 *)puVar2;
  if (*pcVar14 == '\0') {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar5;
    }
    if (*(long *)(*(long *)(lVar11 + 0xb8) + 0x10) == 0) {
      uVar7 = 1;
    }
    else {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar11 = *(long *)puVar5;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar11 = *(long *)puVar5;
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
      if (lVar11 == 0) goto LAB_02319b10;
      uVar7 = *(undefined4 *)(lVar11 + 0x14);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = System_Math__Max_4830fc8(1,uVar7,0);
  }
  else {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar11);
      pcVar14 = *(char **)(*(long *)puVar4 + 0xb8);
    }
    uVar7 = *(undefined4 *)(pcVar14 + 4);
  }
  puVar2 = PTR_DAT_04ca9ac8;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
  uVar9 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_70);
  if (lVar8 != 0) {
    lVar8 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4(lVar8,uVar15,uVar9,0);
    lVar11 = *(long *)puVar3;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar11);
    }
    uStack_64 = System_Math__Max_4830fc8(0,param_1,0);
    uVar15 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_64);
    if ((lVar8 != 0) &&
       (lVar8 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                          (lVar8,*(undefined8 *)PTR_DAT_04cb2728,uVar15,0), lVar8 != 0)) {
      lVar8 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                        (lVar8,*(undefined8 *)PTR_DAT_04cb0370,param_2,0);
      lVar11 = *(long *)puVar4;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar11);
        lVar11 = *(long *)puVar4;
      }
      if (**(char **)(lVar11 + 0xb8) != '\0') {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar11);
        }
        Dino_BusSand_App_Meta_GameTracking__AttemptParams_22126b4(lVar8);
        lVar11 = *(long *)puVar4;
      }
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar11);
        lVar11 = *(long *)puVar4;
      }
      pcVar14 = *(char **)(lVar11 + 0xb8);
      if (*pcVar14 != '\0') {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar11);
          lVar11 = *(long *)puVar4;
          pcVar14 = *(char **)(lVar11 + 0xb8);
        }
        if (pcVar14[0x44] != '\0') {
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar11);
            pcVar14 = *(char **)(*(long *)puVar4 + 0xb8);
          }
          uVar15 = *(undefined8 *)PTR_DAT_04cb2740;
          if (pcVar14[0x45] == '\0') {
            uVar9 = 0;
          }
          else {
            uStack_70 = CONCAT44(uStack_70._4_4_,1);
            uVar9 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_70);
          }
          if (lVar8 == 0) goto LAB_02319b10;
          lVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c(lVar8,uVar15,uVar9,0);
          lVar12 = *(long *)puVar4;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar12);
            lVar12 = *(long *)puVar4;
          }
          uStack_70 = Dino_BusSand_App_Meta_GameTracking__Tenths_2213950
                                (*(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x48));
                    /* catch() { ... } // from try @ 023199d0 with catch @ 02319820 */
          uVar15 = FUN_02133100(*(undefined8 *)(puVar2 + 0x80),&uStack_70);
          if (lVar11 == 0) goto LAB_02319b10;
          lVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                             (lVar11,*(undefined8 *)PTR_DAT_04cac620,uVar15,0);
          uStack_64 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
          uVar15 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_64);
          if (lVar11 == 0) goto LAB_02319b10;
          lVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                             (lVar11,*(undefined8 *)PTR_DAT_04cb2480,uVar15,0);
          uStack_74 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x4c);
          uVar15 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_74);
          if (lVar11 == 0) goto LAB_02319b10;
          lVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                             (lVar11,*(undefined8 *)PTR_DAT_04cb2488,uVar15,0);
          auVar16 = System_String__IsNullOrEmpty_46d2084
                              (*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58),0);
          uVar15 = 0;
          uVar9 = *(undefined8 *)PTR_DAT_04cb2738;
          if ((auVar16._0_8_ & 1) == 0) {
            lVar12 = *(long *)puVar4;
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar12,auVar16._8_8_,0);
              lVar12 = *(long *)puVar4;
            }
            uVar15 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x58);
          }
          if (lVar11 == 0) goto LAB_02319b10;
          lVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c(lVar11,uVar9,uVar15,0);
                    /* try { // try from 02319924 to 02419933 has its CatchHandler @ 023199d8 */
          lVar12 = *(long *)puVar4;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar12);
            lVar12 = *(long *)puVar4;
          }
          iVar13 = *(int *)(*(long *)(lVar12 + 0xb8) + 0x50);
          uVar15 = *(undefined8 *)PTR_DAT_04cb2478;
          if (iVar13 < 0) {
            uVar9 = 0;
          }
          else {
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar12);
              iVar13 = *(int *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
            }
            uStack_70 = CONCAT44(uStack_70._4_4_,iVar13);
            uVar9 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_70);
          }
          if (lVar11 == 0) goto LAB_02319b10;
          lVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c(lVar11,uVar15,uVar9,0);
          lVar12 = *(long *)puVar4;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar12);
            lVar12 = *(long *)puVar4;
          }
                    /* try { // try from 023199c4 to 024199cf has its CatchHandler @ 023199d0 */
                    /* catch() { ... } // from try @ 023199c4 with catch @ 023199d0
                       try { // try from 023199d0 to 024199df has its CatchHandler @ 02319820 */
          iVar13 = *(int *)(*(long *)(lVar12 + 0xb8) + 0x54);
          uVar15 = *(undefined8 *)PTR_DAT_04cb2450;
                    /* catch() { ... } // from try @ 02319924 with catch @ 023199d8 */
          if (iVar13 < 0) {
            uVar9 = 0;
          }
          else {
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar12);
              iVar13 = *(int *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x54);
            }
            uStack_70 = CONCAT44(uStack_70._4_4_,iVar13);
            uVar9 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_70);
          }
          if (lVar11 == 0) goto LAB_02319b10;
          Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c(lVar11,uVar15,uVar9,0);
        }
      }
      uVar9 = *(undefined8 *)PTR_DAT_04cad1f8;
      uVar15 = *(undefined8 *)PTR_DAT_04cb2720;
      if (param_3 < 1) {
        uVar10 = 0;
        puVar1 = (undefined8 *)PTR_DAT_04cb2730;
      }
      else {
        uStack_70 = CONCAT44(uStack_70._4_4_,param_3);
        uVar10 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_70);
        puVar1 = (undefined8 *)PTR_DAT_04cb2730;
      }
      PTR_DAT_04cb2730 = (undefined *)puVar1;
      if (lVar8 != 0) {
        lVar8 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c(lVar8,uVar9,uVar10,0);
        uVar9 = *puVar1;
        if (param_4 < 1) {
          uVar10 = 0;
        }
        else {
          uStack_70 = CONCAT44(uStack_70._4_4_,param_4);
          uVar10 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_70);
        }
        if (lVar8 != 0) {
          uVar9 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c(lVar8,uVar9,uVar10,0);
          lVar8 = *(long *)puVar6;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar8);
          }
          Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc(uVar15,uVar9,0);
          return;
        }
      }
    }
  }
LAB_02319b10:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

