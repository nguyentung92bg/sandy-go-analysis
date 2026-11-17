/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$OnBoot
void Dino_BusSand_App_Meta_GameTracking__OnBoot (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$OnBoot
   void Dino_BusSand_App_Meta_GameTracking__OnBoot (const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__OnBoot_2213f98(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  int extraout_s0;
  undefined4 extraout_var;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  puVar4 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bd4f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caba90);
                    /* try { // try from 02313fe4 to 02414003 has its CatchHandler @ 02314004 */
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb2240);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02313fe4 with catch @ 02314004
                        */
    FUN_02132f7c(PTR_DAT_04cac690);
    FUN_02132f7c(PTR_DAT_04cb2350);
    FUN_02132f7c(PTR_DAT_04cb2498);
    FUN_02132f7c(PTR_DAT_04cb2420);
    FUN_02132f7c(PTR_DAT_04cb2448);
    FUN_02132f7c(PTR_DAT_04cac620);
    FUN_02132f7c(PTR_DAT_04ca9b60);
    FUN_02132f7c(PTR_DAT_04cb2428);
    FUN_02132f7c(PTR_DAT_04cb2430);
    FUN_02132f7c(PTR_DAT_04cacc18);
    FUN_02132f7c(PTR_DAT_04cabc00);
    FUN_02132f7c(PTR_DAT_04cb2438);
    FUN_02132f7c(PTR_DAT_04cb2458);
    FUN_02132f7c(PTR_DAT_04cb2050);
    FUN_02132f7c(PTR_DAT_04cb2460);
    FUN_02132f7c(PTR_DAT_04cb2440);
    FUN_02132f7c(PTR_DAT_04cb2468);
    FUN_02132f7c(PTR_DAT_04cb2470);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cb2480);
    FUN_02132f7c(PTR_DAT_04cb2488);
    bRam0000000004f9bd4f = 1;
  }
  puVar2 = PTR_DAT_04cabaf8;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_JourneyTracking__OnBoot_22146c4();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (((lVar5 != 0) && (lVar12 = *(long *)(lVar5 + 0x88), lVar12 != 0)) &&
     (*(char *)(lVar12 + 0x10) != '\0')) {
    uVar10 = *(undefined8 *)(lVar12 + 0x48);
    *(undefined1 *)(lVar12 + 0x10) = 0;
    uVar8 = *(undefined8 *)PTR_DAT_04ca9c30;
    *(undefined4 *)(lVar5 + 0x74) = 0;
    *(int *)(lVar5 + 0x78) = *(int *)(lVar5 + 0x78) + 1;
    *(undefined8 *)(lVar12 + 0x48) = uVar8;
    thunk_FUN_02134474();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
    puVar4 = PTR_DAT_04cb2240;
    if (0 < *(int *)(lVar12 + 0x14)) {
      if (*(int *)(*(long *)PTR_DAT_04cb2240 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar5 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
      puVar2 = PTR_DAT_04ca9ac8;
      iStack_60 = *(int *)(lVar12 + 0x14);
      uVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_60);
      if ((lVar5 != 0) &&
         (lVar5 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                            (lVar5,*(undefined8 *)PTR_DAT_04cabc00,uVar8,0), lVar5 != 0)) {
        lVar5 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                          (lVar5,*(undefined8 *)PTR_DAT_04cac690,*(undefined8 *)PTR_DAT_04cb2498,0);
        puVar3 = PTR_DAT_04caa200;
        uVar1 = *(undefined4 *)(lVar12 + 0x24);
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa200);
        }
        uStack_44 = System_Math__Max_4830fc8(0,uVar1,0);
        uVar8 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_44);
        if ((lVar5 != 0) &&
           (lVar5 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                              (lVar5,*(undefined8 *)PTR_DAT_04cb2470,uVar8,0), lVar5 != 0)) {
          lVar5 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                            (lVar5,*(undefined8 *)PTR_DAT_04cb2458,*(undefined8 *)PTR_DAT_04ca9b60,0
                            );
          uStack_48 = *(undefined4 *)(lVar12 + 0x18);
          uVar8 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_48);
          if (lVar5 != 0) {
            lVar5 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                              (lVar5,*(undefined8 *)PTR_DAT_04cb2428,uVar8,0);
            uStack_54 = System_Math__Max_4830fc8(1,*(undefined4 *)(lVar12 + 0x1c),0);
            uVar8 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_54);
            if (lVar5 != 0) {
              lVar5 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                (lVar5,*(undefined8 *)PTR_DAT_04cacc18,uVar8,0);
              uStack_58 = System_Math__Max_4830fc8(0,*(undefined4 *)(lVar12 + 0x20),0);
              uVar8 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_58);
              if ((lVar5 != 0) &&
                 (lVar5 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                    (lVar5,*(undefined8 *)PTR_DAT_04cb2440,uVar8,0), lVar5 != 0)) {
                lVar5 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                  (lVar5,*(undefined8 *)PTR_DAT_04cb2438,
                                   *(undefined8 *)PTR_DAT_04cb2050,0);
                uVar6 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar12 + 0x38),0);
                uVar8 = 0;
                if ((uVar6 & 1) == 0) {
                  uVar8 = *(undefined8 *)(lVar12 + 0x38);
                }
                if (lVar5 != 0) {
                  uVar11 = *(undefined8 *)PTR_DAT_04cb2460;
                  lVar5 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                                    (lVar5,*(undefined8 *)PTR_DAT_04cb2430,uVar8,0);
                  uVar6 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar12 + 0x30),0);
                  uVar8 = 0;
                  if ((uVar6 & 1) == 0) {
                    uVar8 = *(undefined8 *)(lVar12 + 0x30);
                  }
                  if (lVar5 != 0) {
                    lVar5 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                                      (lVar5,*(undefined8 *)PTR_DAT_04cb2350,uVar8,0);
                    lVar9 = *(long *)puVar3;
                    uVar1 = *(undefined4 *)(lVar12 + 0x28);
                    if (*(int *)(lVar9 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(lVar9);
                    }
                    iStack_60 = System_Math__Max_4830fc8(0,uVar1,0);
                    uVar8 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&iStack_60);
                    if (lVar5 != 0) {
                      lVar5 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                        (lVar5,*(undefined8 *)PTR_DAT_04cb2480,uVar8,0);
                      uStack_44 = System_Math__Max_4830fc8(0,*(undefined4 *)(lVar12 + 0x2c),0);
                      uVar8 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_44);
                      if (lVar5 != 0) {
                        lVar5 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                          (lVar5,*(undefined8 *)PTR_DAT_04cb2488,uVar8,0);
                        uVar8 = *(undefined8 *)PTR_DAT_04cb2420;
                        if (*(int *)(lVar12 + 0x40) < 1) {
                          uVar7 = 0;
                        }
                        else {
                          iStack_60 = *(int *)(lVar12 + 0x40);
                          uVar7 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&iStack_60);
                        }
                        if (lVar5 != 0) {
                          lVar5 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                                            (lVar5,uVar8,uVar7,0);
                          uVar6 = System_String__IsNullOrEmpty_46d2084(uVar10,0);
                          if (lVar5 != 0) {
                            uVar8 = 0;
                            if ((uVar6 & 1) == 0) {
                              uVar8 = uVar10;
                            }
                            lVar5 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                                              (lVar5,*(undefined8 *)PTR_DAT_04cb2448,uVar8,0);
                            uVar8 = *(undefined8 *)PTR_DAT_04cb2468;
                            if (*(char *)(lVar12 + 0x50) == '\0') {
                              uVar10 = 0;
                            }
                            else {
                              uVar1 = *(undefined4 *)(lVar12 + 0x54);
                              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                thunk_FUN_0218fdac();
                              }
                              iStack_60 = System_Math__Max_4830fc8(1,uVar1,0);
                              uVar10 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&iStack_60);
                            }
                            if (lVar5 != 0) {
                              lVar5 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                                                (lVar5,uVar8,uVar10,0);
                              uVar8 = *(undefined8 *)PTR_DAT_04cac620;
                              if (*(char *)(lVar12 + 0x51) == '\0') {
                                uVar10 = 0;
                              }
                              else {
                                uVar1 = *(undefined4 *)(lVar12 + 0x58);
                                if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
                                  thunk_FUN_0218fdac();
                                }
                                Dino_BusSand_App_Meta_GameTracking__Tenths_2213950(uVar1);
                                iStack_60 = extraout_s0;
                                uStack_5c = extraout_var;
                                uVar10 = FUN_02133100(*(undefined8 *)(puVar2 + 0x80),&iStack_60);
                              }
                              if (lVar5 != 0) {
                                uVar8 = Dino_BusSand_App_Meta_TrackingPlan_Params__Opt_229213c
                                                  (lVar5,uVar8,uVar10,0);
                                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                                  thunk_FUN_0218fdac(*(long *)puVar4);
                                }
                                Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc(uVar11,uVar8,0);
                                if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
                                  thunk_FUN_0218fdac();
                                }
                                Dino_BusSand_App_Meta_GameTracking__PushProperties_2211e88(1);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

