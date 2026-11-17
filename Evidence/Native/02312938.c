/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$LevelEnd
void Dino_BusSand_App_Meta_GameTracking__LevelEnd (System_String_o* result, System_String_o* loseBy, int32_t carsLeft, int32_t carsRoad, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$LevelEnd
   void Dino_BusSand_App_Meta_GameTracking__LevelEnd (System_String_o* result, System_String_o*
   loseBy, int32_t carsLeft, int32_t carsRoad, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__LevelEnd_2212938
               (undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_68;
  undefined4 uStack_54;
  
  puVar3 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd43 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cac690);
    FUN_02132f7c(PTR_DAT_04cb2350);
    FUN_02132f7c(PTR_DAT_04cb2448);
    FUN_02132f7c(PTR_DAT_04cb2450);
    FUN_02132f7c(PTR_DAT_04cac620);
    FUN_02132f7c(PTR_DAT_04ca9b60);
    FUN_02132f7c(PTR_DAT_04cac6a0);
    FUN_02132f7c(PTR_DAT_04cabc00);
    FUN_02132f7c(PTR_DAT_04cb2458);
    FUN_02132f7c(PTR_DAT_04cb2460);
    FUN_02132f7c(PTR_DAT_04cb2468);
    FUN_02132f7c(PTR_DAT_04cb2470);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cabc80);
    FUN_02132f7c(PTR_DAT_04cb2478);
    FUN_02132f7c(PTR_DAT_04cb2480);
    FUN_02132f7c(PTR_DAT_04cb2488);
    bRam0000000004f9bd43 = 1;
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar3;
  }
  puVar4 = PTR_DAT_04cb2240;
  puVar1 = PTR_DAT_04caba90;
  if (**(char **)(lVar6 + 0xb8) == '\0') {
    return;
  }
  uVar7 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cac6a0,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
                    /* try { // try from 02312ae0 to 02412ae3 has its CatchHandler @ 02312ba8 */
  uVar8 = Dino_BusSand_App_Meta_JourneyTracking__LevelFinish_2213084(param_1);
                    /* try { // try from 02312ae4 to 02412ae7 has its CatchHandler @ 02312b90 */
  lVar6 = *(long *)puVar4;
                    /* try { // try from 02312ae8 to 02412aeb has its CatchHandler @ 02312ba8 */
                    /* try { // try from 02312aec to 02412b0b has its CatchHandler @ 02312b6c */
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar6);
  }
  lVar6 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
  lVar11 = *(long *)puVar3;
                    /* try { // try from 02312b0c to 02412b0f has its CatchHandler @ 02312b90 */
                    /* try { // try from 02312b10 to 02412b2f has its CatchHandler @ 02312b78 */
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar11);
    lVar11 = *(long *)puVar3;
  }
  puVar1 = PTR_DAT_04ca9ac8;
                    /* try { // try from 02312b30 to 02412bef has its CatchHandler @ 02312494 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 023128fc with catch @ 02312b34
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 023127cc with catch @ 02312b38
                        */
  uStack_68 = CONCAT44(uStack_68._4_4_,*(undefined4 *)(*(long *)(lVar11 + 0xb8) + 4));
  uVar9 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_68);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 023128bc with catch @ 02312b54
                        */
  if ((lVar6 == 0) ||
     (lVar6 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                        (lVar6,*(undefined8 *)PTR_DAT_04cabc00,uVar9,0), lVar6 == 0))
  goto LAB_02313080;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02312aec with catch @ 02312b6c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02312660 with catch @ 02312b70
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02312768 with catch @ 02312b78
                       catch(type#1 @ 00000000) { ... } // from try @ 02312b10 with catch @ 02312b78
                        */
  lVar6 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                    (lVar6,*(undefined8 *)PTR_DAT_04cac690,param_1,0);
  uStack_54 = Dino_BusSand_App_Meta_GameTracking__PlayMs_22133b8();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02312ae4 with catch @ 02312b90
                       catch(type#1 @ 00000000) { ... } // from try @ 02312b0c with catch @ 02312b90
                        */
  uVar9 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_54);
  puVar2 = PTR_DAT_04cb2458;
  if (lVar6 == 0) goto LAB_02313080;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02312ae0 with catch @ 02312ba8
                       catch(type#1 @ 00000000) { ... } // from try @ 02312ae8 with catch @ 02312ba8
                        */
  lVar6 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                    (lVar6,*(undefined8 *)PTR_DAT_04cb2470,uVar9,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02312704 with catch @ 02312bc0
                        */
  uVar9 = *(undefined8 *)puVar2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02312818 with catch @ 02312bd8
                        */
  if (((uVar7 & 1) == 0) ||
     (uVar10 = System_String__IsNullOrEmpty_46d2084(param_2,0), (uVar10 & 1) != 0)) {
    param_2 = *(undefined8 *)PTR_DAT_04ca9b60;
  }
  if (lVar6 == 0) goto LAB_02313080;
  uVar9 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4(lVar6,uVar9,param_2,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  lVar6 = Dino_BusSand_App_Meta_GameTracking__AttemptParams_22126b4(uVar9);
  if (lVar6 == 0) goto LAB_02313080;
  lVar6 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                    (lVar6,*(undefined8 *)PTR_DAT_04cb2350,
                     *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20),0);
  uStack_68 = CONCAT44(uStack_68._4_4_,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10));
  uVar9 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_68);
  if (lVar6 == 0) goto LAB_02313080;
  lVar6 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                    (lVar6,*(undefined8 *)PTR_DAT_04cb2480,uVar9,0);
  uStack_54 = Dino_BusSand_App_Meta_GameTracking__ItemsCleared_221364c();
  uVar9 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_54);
  puVar2 = PTR_DAT_04cabc80;
  if (lVar6 == 0) goto LAB_02313080;
  auVar14 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                      (lVar6,*(undefined8 *)PTR_DAT_04cb2488,uVar9,0);
  uVar13 = *(undefined8 *)puVar2;
  uVar9 = 0;
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3,auVar14._8_8_,0);
    }
    uStack_68 = Dino_BusSand_App_Meta_GameTracking__ProgressPct_2213720();
    uVar9 = FUN_02133100(*(undefined8 *)(puVar1 + 0x80),&uStack_68);
  }
  if (auVar14._0_8_ == 0) goto LAB_02313080;
  lVar6 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c(auVar14._0_8_,uVar13,uVar9,0);
  uVar10 = System_String__IsNullOrEmpty_46d2084(uVar8,0);
  puVar2 = PTR_DAT_04cb2468;
  if (lVar6 == 0) goto LAB_02313080;
  uVar9 = 0;
  if ((uVar10 & 1) == 0) {
    uVar9 = uVar8;
  }
  lVar6 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                    (lVar6,*(undefined8 *)PTR_DAT_04cb2448,uVar9,0);
  lVar11 = *(long *)puVar3;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar11);
    lVar11 = *(long *)puVar3;
  }
  uVar8 = *(undefined8 *)puVar2;
  iVar12 = *(int *)(*(long *)(lVar11 + 0xb8) + 0x40);
  if (iVar12 < 1) {
    uVar9 = 0;
  }
  else {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar11);
      iVar12 = *(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
    }
    uStack_68 = CONCAT44(uStack_68._4_4_,iVar12);
    uVar9 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_68);
  }
  if (lVar6 == 0) goto LAB_02313080;
  lVar6 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c(lVar6,uVar8,uVar9,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar8 = Dino_BusSand_App_Meta_GameTracking__SandLeftPct_221383c();
  if (lVar6 == 0) goto LAB_02313080;
  lVar6 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                    (lVar6,*(undefined8 *)PTR_DAT_04cac620,uVar8,0);
  if ((uVar7 & 1) == 0) {
    if (lVar6 == 0) goto LAB_02313080;
    lVar6 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                      (lVar6,*(undefined8 *)PTR_DAT_04cb2478,0,0);
    uVar8 = *(undefined8 *)PTR_DAT_04cb2450;
LAB_02312eb8:
    uVar9 = 0;
  }
  else {
    uVar8 = *(undefined8 *)PTR_DAT_04cb2478;
    if (param_3 < 0) {
      uVar9 = 0;
    }
    else {
      uStack_68 = CONCAT44(uStack_68._4_4_,param_3);
      uVar9 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_68);
    }
    if (lVar6 == 0) goto LAB_02313080;
    lVar6 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c(lVar6,uVar8,uVar9,0);
    uVar8 = *(undefined8 *)PTR_DAT_04cb2450;
    if (param_4 < 0) goto LAB_02312eb8;
    uStack_68 = CONCAT44(uStack_68._4_4_,param_4);
    uVar9 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_68);
  }
  puVar1 = PTR_DAT_04cabaf8;
  if (lVar6 != 0) {
    uVar8 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c(lVar6,uVar8,uVar9,0);
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar6);
      lVar6 = *(long *)puVar3;
    }
    **(undefined1 **)(lVar6 + 0xb8) = 0;
    Dino_BusSand_App_Meta_GameTracking__ResetIapTime_22112ec();
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar1;
    }
    cVar5 = cRam0000000004f9b894;
    lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x88), lVar11 != 0)) {
      *(undefined1 *)(lVar11 + 0x10) = 0;
      if (cVar5 == '\0') {
        FUN_02132f7c(puVar1);
        lVar6 = *(long *)puVar1;
        cRam0000000004f9b894 = '\x01';
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar1;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x88), lVar6 != 0)) {
        *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)PTR_DAT_04ca9c30;
        thunk_FUN_02134474();
        lVar6 = *(long *)puVar1;
        if ((uVar7 & 1) != 0) {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b894 == '\0') {
            FUN_02132f7c(PTR_DAT_04cabaf8);
            cRam0000000004f9b894 = '\x01';
          }
          lVar6 = *(long *)puVar1;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar6 = *(long *)puVar1;
          }
          lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
          if (lVar11 == 0) goto LAB_02313080;
          *(int *)(lVar11 + 0x80) = *(int *)(lVar11 + 0x80) + 1;
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar1 = PTR_DAT_04cb2460;
        Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc(*(undefined8 *)puVar1,uVar8,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_GameTracking__PushProperties_2211e88(1);
        return;
      }
    }
  }
LAB_02313080:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

