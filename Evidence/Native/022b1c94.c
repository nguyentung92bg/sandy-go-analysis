/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$OnBuyClick
void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__OnBuyClick (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02a45de8) */
/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$OnBuyClick
   void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__OnBuyClick
   (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, const MethodInfo* method); */

long * Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__OnBuyClick_21b1c94(long *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  char cVar24;
  int *piVar25;
  long *plVar26;
  undefined8 uVar27;
  long *plVar28;
  uint uVar29;
  long lStack_c8;
  long *plStack_c0;
  undefined1 *puStack_b8;
  undefined8 *puStack_b0;
  undefined4 uStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  undefined1 auStack_70 [4];
  char acStack_6c [4];
  undefined8 uStack_68;
  
  plVar16 = param_1;
  if ((bRam0000000004f9ba8c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04caf1a0);
    FUN_02132f7c(PTR_DAT_04caed58);
    FUN_02132f7c(PTR_DAT_04caf000);
    plVar16 = (long *)FUN_02132f7c(PTR_DAT_04caed60);
    bRam0000000004f9ba8c = 1;
  }
  if ((*(char *)((long)param_1 + 0x5d) != '\0') || (*(char *)((long)param_1 + 0x5c) != '\0')) {
    return plVar16;
  }
  if ((param_1[8] == 0) ||
     (plVar16 = (long *)Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc(param_1[8],0),
     puVar2 = PTR_DAT_04cac7b8, plVar16 == (long *)0x0)) {
LAB_022b1e30:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((char)plVar16[5] != '\0') {
    return plVar16;
  }
  lVar17 = *(long *)PTR_DAT_04cac7b8;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar17 = *(long *)puVar2;
  }
  lVar17 = **(long **)(lVar17 + 0xb8);
  if (lVar17 == 0) goto LAB_022b1e30;
  uVar18 = (**(code **)(lVar17 + 0x18))
                     (*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
  puVar3 = PTR_DAT_04cb6278;
  puVar2 = PTR_DAT_04caed58;
  if ((uVar18 & 1) != 0) {
    *(undefined1 *)((long)param_1 + 0x5c) = 1;
    Dino_BusSand_App_Meta_GiftPackTrack__GiftClick_223faa0(param_1[0xc],*(undefined8 *)puVar2,0);
    Dino_BusSand_App_Meta_GiftPackTrack__IapAction_223fb44
              (*(undefined8 *)PTR_DAT_04caed60,(int)param_1[0xb],*(undefined8 *)PTR_DAT_04caf000,0);
    lVar17 = param_1[0xb];
    lVar19 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
    System_Action_bool____ctor_35ee0e8(lVar19,param_1,*(undefined8 *)PTR_DAT_04caf1a0,0);
    if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04caed68;
    if ((bRam0000000004f9ba6a & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cac420);
      FUN_02132f7c(PTR_DAT_04caa458);
      FUN_02132f7c(PTR_DAT_04cac7b8);
      FUN_02132f7c(PTR_DAT_04cad1f0);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04caed70);
      FUN_02132f7c(PTR_DAT_04caed78);
      FUN_02132f7c(PTR_DAT_04caed68);
      bRam0000000004f9ba6a = 1;
    }
    lVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Object___ctor_4870e5c(lVar14,0);
    puVar2 = PTR_DAT_04cac7b8;
    if (lVar14 != 0) {
      plVar16 = (long *)(lVar14 + 0x18);
      *plVar16 = lVar19;
      thunk_FUN_02134474(plVar16,lVar19);
      lVar19 = *(long *)puVar2;
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar19 = *(long *)puVar2;
      }
      lVar19 = **(long **)(lVar19 + 0xb8);
      if (lVar19 != 0) {
        uVar18 = (**(code **)(lVar19 + 0x18))
                           (*(undefined8 *)(lVar19 + 0x40),*(undefined8 *)(lVar19 + 0x28));
        if ((uVar18 & 1) == 0) {
          plVar28 = (long *)Dino_BusSand_App_UI_StoreTipsPanel__ShowNetworkError_22b5524(0,0);
          lVar17 = *plVar16;
          if (lVar17 == 0) {
            return plVar28;
          }
                    /* WARNING: Could not recover jumptable at 0x022aaea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar16 = (long *)(**(code **)(lVar17 + 0x18))
                                      (*(undefined8 *)(lVar17 + 0x40),0,
                                       *(undefined8 *)(lVar17 + 0x28));
          return plVar16;
        }
        *(undefined1 *)(lVar14 + 0x10) = 0;
        lVar19 = Dino_BusSand_App_UI_StoreWaitingPanel__Open_22bb848(0);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
        uVar18 = UnityEngine_Object__op_Inequality_43c8dec(lVar19,0,0);
        if ((uVar18 & 1) != 0) {
          uVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
          System_Action___ctor_47b5ed0(uVar15,lVar14,*(undefined8 *)PTR_DAT_04caed70,0);
          if (lVar19 == 0) goto LAB_022aaeb8;
          *(undefined8 *)(lVar19 + 0x38) = uVar15;
          thunk_FUN_02134474((undefined8 *)(lVar19 + 0x38),uVar15);
        }
        lVar19 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
        System_Action_bool____ctor_35ee0e8(lVar19,lVar14,*(undefined8 *)PTR_DAT_04caed78,0);
        if (*(int *)(*(long *)PTR_DAT_04cad1f0 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar2 = PTR_DAT_04cad2f0;
        if ((bRam0000000004f9b907 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cac420,lVar19,0);
          FUN_02132f7c(PTR_DAT_04cac5c0);
          FUN_02132f7c(PTR_DAT_04cac498);
          FUN_02132f7c(PTR_DAT_04cad2f8);
          FUN_02132f7c(PTR_DAT_04cad1f0);
          FUN_02132f7c(PTR_DAT_04ca9c20);
          FUN_02132f7c(PTR_DAT_04cac018);
          FUN_02132f7c(PTR_DAT_04cad300);
          FUN_02132f7c(PTR_DAT_04cad2f0);
          FUN_02132f7c(PTR_DAT_04cad0e0);
          FUN_02132f7c(PTR_DAT_04cad268);
          FUN_02132f7c(PTR_DAT_04cad308);
          FUN_02132f7c(PTR_DAT_04cad270);
          FUN_02132f7c(PTR_DAT_04cad310);
          FUN_02132f7c(PTR_DAT_04cad318);
          FUN_02132f7c(PTR_DAT_04cad2a8);
          FUN_02132f7c(PTR_DAT_04cad320);
          FUN_02132f7c(PTR_DAT_04cad328);
          FUN_02132f7c(PTR_DAT_04ca9c30);
          FUN_02132f7c(PTR_DAT_04cad200);
          bRam0000000004f9b907 = 1;
        }
        lVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
        System_Object___ctor_4870e5c(lVar14,0);
        puVar3 = PTR_DAT_04cad200;
        puVar2 = PTR_DAT_04cac018;
        if (lVar14 != 0) {
          plVar16 = (long *)(lVar14 + 0x28);
          *plVar16 = lVar19;
          *(int *)(lVar14 + 0x10) = (int)lVar17;
          thunk_FUN_02134474(plVar16,lVar19);
          uVar11 = *(undefined4 *)(lVar14 + 0x10);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar17 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar3,uVar11,0);
          plVar28 = (long *)(lVar14 + 0x18);
          *plVar28 = lVar17;
          thunk_FUN_02134474(plVar28,lVar17);
          puVar3 = PTR_DAT_04ca9c30;
          puVar2 = PTR_DAT_04ca9c20;
          if (*plVar28 == 0) {
            lVar17 = *plVar16;
            if (lVar17 == 0) {
              return (long *)0x0;
            }
                    /* WARNING: Could not recover jumptable at 0x0227c364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar16 = (long *)(**(code **)(lVar17 + 0x18))
                                        (*(undefined8 *)(lVar17 + 0x40),0,
                                         *(undefined8 *)(lVar17 + 0x28));
            return plVar16;
          }
          uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8
                             (*plVar28,*(undefined8 *)PTR_DAT_04cad2a8,0);
          lVar17 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar15,*(undefined8 *)puVar3,0);
          plVar26 = (long *)(lVar14 + 0x20);
          *plVar26 = lVar17;
          thunk_FUN_02134474(plVar26,lVar17);
          plVar12 = (long *)FUN_02133068(*(undefined8 *)puVar2,4);
          puVar3 = PTR_DAT_04cad268;
          if (plVar12 != (long *)0x0) {
            if ((*(long *)PTR_DAT_04cad268 != 0) &&
               (lVar17 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad268,
                                            *(undefined8 *)(*plVar12 + 0x40)), lVar17 == 0)) {
LAB_0227c514:
              uVar15 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar15,0);
            }
            if ((int)plVar12[3] != 0) {
              plVar12[4] = *(long *)puVar3;
              thunk_FUN_02134474();
              lVar17 = *plVar26;
              if ((lVar17 != 0) &&
                 (lVar19 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)(*plVar12 + 0x40)), lVar19 == 0)
                 ) goto LAB_0227c514;
              puVar4 = PTR_DAT_04cad328;
              if ((*(uint *)(plVar12 + 3) & 0xfffffffe) != 0) {
                plVar12[5] = lVar17;
                thunk_FUN_02134474(plVar12 + 5,lVar17);
                lVar17 = *(long *)puVar4;
                if ((lVar17 != 0) &&
                   (lVar17 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)(*plVar12 + 0x40)),
                   lVar17 == 0)) goto LAB_0227c514;
                if (2 < *(uint *)(plVar12 + 3)) {
                  plVar12[6] = *(long *)puVar4;
                  thunk_FUN_02134474();
                  uStack_68 = CONCAT44(*(undefined4 *)(lVar14 + 0x10),(undefined4)uStack_68);
                  lVar17 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),
                                        (long)&uStack_68 + 4);
                  if ((lVar17 != 0) &&
                     (lVar19 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)(*plVar12 + 0x40)),
                     lVar19 == 0)) goto LAB_0227c514;
                  puVar7 = PTR_DAT_04cad308;
                  puVar5 = PTR_DAT_04cac5c0;
                  puVar4 = PTR_DAT_04cac498;
                  if ((*(uint *)(plVar12 + 3) & 0xfffffffc) != 0) {
                    plVar12[7] = lVar17;
                    thunk_FUN_02134474(plVar12 + 7,lVar17);
                    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    puVar6 = PTR_DAT_04cad1f0;
                    Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar7,plVar12);
                    uVar11 = *(undefined4 *)(lVar14 + 0x10);
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    Dino_BusSand_App_Meta_GameTracking__IapClick_221875c(uVar11,0);
                    uVar11 = *(undefined4 *)(lVar14 + 0x10);
                    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar18 = Dino_BusSand_App_Iap__CanPurchase_217a6e8(uVar11);
                    if ((uVar18 & 1) == 0) {
                      plVar28 = (long *)FUN_02133068(*(undefined8 *)puVar2,4);
                      if (plVar28 != (long *)0x0) {
                        if ((*(long *)puVar3 != 0) &&
                           (lVar17 = thunk_FUN_0216e7a0(*(long *)puVar3,
                                                        *(undefined8 *)(*plVar28 + 0x40)),
                           lVar17 == 0)) goto LAB_0227c514;
                        if ((int)plVar28[3] != 0) {
                          plVar28[4] = *(long *)puVar3;
                          thunk_FUN_02134474();
                          lVar17 = *plVar26;
                          if ((lVar17 != 0) &&
                             (lVar19 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)(*plVar28 + 0x40)),
                             lVar19 == 0)) goto LAB_0227c514;
                          if ((*(uint *)(plVar28 + 3) & 0xfffffffe) != 0) {
                            plVar28[5] = lVar17;
                            thunk_FUN_02134474(plVar28 + 5,lVar17);
                            puVar2 = PTR_DAT_04cad0e0;
                            if ((*(long *)PTR_DAT_04cad0e0 != 0) &&
                               (lVar17 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad0e0,
                                                            *(undefined8 *)(*plVar28 + 0x40)),
                               lVar17 == 0)) goto LAB_0227c514;
                            if (2 < *(uint *)(plVar28 + 3)) {
                              plVar28[6] = *(long *)puVar2;
                              thunk_FUN_02134474();
                              puVar2 = PTR_DAT_04cad320;
                              if ((*(long *)PTR_DAT_04cad320 != 0) &&
                                 (lVar17 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad320,
                                                              *(undefined8 *)(*plVar28 + 0x40)),
                                 lVar17 == 0)) goto LAB_0227c514;
                              if ((*(uint *)(plVar28 + 3) & 0xfffffffc) != 0) {
                                plVar28[7] = *(long *)puVar2;
                                thunk_FUN_02134474();
                                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                                  thunk_FUN_0218fdac();
                                }
                                Dino_BusSand_App_Analytics__Log_216d0c8
                                          (*(undefined8 *)PTR_DAT_04cad310,plVar28);
                                uVar11 = *(undefined4 *)(lVar14 + 0x10);
                                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                                  thunk_FUN_0218fdac();
                                }
                                plVar28 = (long *)Dino_BusSand_App_Meta_GameTracking__IapFailed_22189dc
                                                            (uVar11,*(undefined8 *)PTR_DAT_04cad318,
                                                             0,0);
                                lVar17 = *plVar16;
                                if (lVar17 == 0) {
                                  return plVar28;
                                }
                                plVar16 = (long *)(**(code **)(lVar17 + 0x18))
                                                            (*(undefined8 *)(lVar17 + 0x40),0,
                                                             *(undefined8 *)(lVar17 + 0x28));
                                return plVar16;
                              }
                            }
                          }
                        }
                        goto LAB_0227c510;
                      }
                    }
                    else {
                      lVar17 = *(long *)puVar6;
                      if (*(int *)(lVar17 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar17 = *(long *)puVar6;
                      }
                      puVar13 = (undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x28);
                      *puVar13 = 0;
                      thunk_FUN_02134474(puVar13,0);
                      puVar13 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20);
                      *puVar13 = 0;
                      thunk_FUN_02134474(puVar13,0);
                      uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8
                                         (*plVar28,*(undefined8 *)PTR_DAT_04cad270,0);
                      iVar9 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
                      if (iVar9 == 9) {
                        lVar17 = *plVar26;
                        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        Dino_BusSand_App_Iap__MarkStarted_217bbbc(lVar17);
                      }
                      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      Dino_BusSand_App_Meta_GameTracking__ExternalUi_221486c(1,0);
                      lVar17 = *(long *)puVar6;
                      if (*(int *)(lVar17 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar17 = *(long *)puVar6;
                      }
                      uVar27 = *(undefined8 *)(lVar14 + 0x20);
                      plVar16 = (long *)**(undefined8 **)(lVar17 + 0xb8);
                      uVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
                      System_Action_bool____ctor_35ee0e8
                                (uVar15,lVar14,*(undefined8 *)PTR_DAT_04cad300,0);
                      if (plVar16 != (long *)0x0) {
                        lVar17 = *plVar16;
                        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                        if (uVar18 != 0) {
                          piVar25 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_04cad2f8) {
                              puVar13 = (undefined8 *)(lVar17 + (long)*piVar25 * 0x10 + 0x138);
                              goto LAB_0227c4dc;
                            }
                            uVar18 = uVar18 - 1;
                            piVar25 = piVar25 + 4;
                          } while (uVar18 != 0);
                        }
                        puVar13 = (undefined8 *)FUN_0216b7a4(plVar16,*(long *)PTR_DAT_04cad2f8,0);
LAB_0227c4dc:
                        plVar16 = (long *)(*(code *)*puVar13)(plVar16,uVar27,uVar15,puVar13[1]);
                        return plVar16;
                      }
                    }
                    goto LAB_0227c520;
                  }
                }
              }
            }
LAB_0227c510:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
        }
LAB_0227c520:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
LAB_022aaeb8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9c302 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18,0);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cb6278);
    FUN_02132f7c(PTR_DAT_04cb6280);
    FUN_02132f7c(PTR_DAT_04cb6288);
    FUN_02132f7c(PTR_DAT_04caec20);
    bRam0000000004f9c302 = 1;
  }
  lVar17 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  Dino_BusSand_App_UI_StoreTipsPanel_Request___ctor_22bb108(lVar17,0);
  puVar2 = PTR_DAT_04ca9d18;
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined4 *)(lVar17 + 0x10) = 3;
  lVar14 = *(long *)puVar2;
  lVar19 = *(long *)(lVar14 + 0x38);
  if (lVar19 == 0) {
    FUN_0216b4cc(lVar14);
    lVar19 = *(long *)(lVar14 + 0x38);
  }
  lVar19 = *(long *)(lVar19 + 0x10);
  if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = FUN_0216b470();
  }
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cab550;
  lVar19 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = FUN_0216b470();
  }
  puVar4 = PTR_DAT_04cb6288;
  uVar15 = **(undefined8 **)(lVar19 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar15 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar4,uVar15,0);
  *(undefined8 *)(lVar17 + 0x18) = uVar15;
  thunk_FUN_02134474();
  lVar14 = *(long *)puVar2;
  lVar19 = *(long *)(lVar14 + 0x38);
  if (lVar19 == 0) {
    FUN_0216b4cc(lVar14);
    lVar19 = *(long *)(lVar14 + 0x38);
  }
  lVar19 = *(long *)(lVar19 + 0x10);
  if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = FUN_0216b470();
  }
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cb6280;
  lVar19 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = FUN_0216b470();
  }
  uVar15 = Dino_BusSand_App_Lang__Get_215f9c0
                     (*(undefined8 *)puVar3,**(undefined8 **)(lVar19 + 0xb8),0);
  *(undefined8 *)(lVar17 + 0x20) = uVar15;
  thunk_FUN_02134474();
  lVar14 = *(long *)puVar2;
  lVar19 = *(long *)(lVar14 + 0x38);
  if (lVar19 == 0) {
    FUN_0216b4cc(lVar14);
    lVar19 = *(long *)(lVar14 + 0x38);
  }
  lVar19 = *(long *)(lVar19 + 0x10);
  if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = FUN_0216b470();
  }
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04caec20;
  lVar19 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
    lVar19 = FUN_0216b470();
  }
  uVar15 = Dino_BusSand_App_Lang__Get_215f9c0
                     (*(undefined8 *)puVar2,**(undefined8 **)(lVar19 + 0xb8),0);
  *(undefined8 *)(lVar17 + 0x28) = uVar15;
  thunk_FUN_02134474();
  *(undefined8 *)(lVar17 + 0x30) = 0;
  thunk_FUN_02134474((undefined8 *)(lVar17 + 0x30),0);
  if ((bRam0000000004f9c2ff & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6468);
    FUN_02132f7c(PTR_DAT_04cb6470);
    FUN_02132f7c(PTR_DAT_04cb6478);
    bRam0000000004f9c2ff = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar19 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar18 = UnityEngine_Object__op_Equality_43c6f30(lVar19,0,0);
  if ((lVar17 == 0) || ((uVar18 & 1) != 0)) {
    return (long *)0x0;
  }
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar18 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                     (lVar19,*(undefined8 *)PTR_DAT_04cb6468);
  if ((uVar18 & 1) != 0) {
    return (long *)0x0;
  }
  lVar14 = *(long *)PTR_DAT_04cb6478;
  lVar22 = *(long *)PTR_DAT_04cb6470;
  if (*(long *)(lVar22 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cae1a0);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cabab8);
    FUN_02132f7c(PTR_DAT_04cabac0);
    FUN_02132f7c(PTR_DAT_04cabac8);
    FUN_02132f7c(PTR_DAT_04cae1a8);
    FUN_02132f7c(PTR_DAT_04cacf88);
    FUN_02132f7c(PTR_DAT_04cacf90);
    FUN_02132f7c(PTR_DAT_04cad3f0);
    FUN_02132f7c(PTR_DAT_04cad3f8);
    FUN_02132f7c(PTR_DAT_04cab4a0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cc5280);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cb4ce0);
    FUN_02132f7c(PTR_DAT_04cac4f8);
    FUN_02132f7c(PTR_DAT_04cabde0);
    FUN_02132f7c(PTR_DAT_04cabae0);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cabf58);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cab188);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cc5288);
    if (*(long *)(lVar22 + 0x38) == 0) {
      FUN_0216b4cc(lVar22);
    }
  }
  puVar2 = PTR_DAT_04ca9ac8;
  uStack_68 = 0;
  acStack_6c[0] = '\0';
  auStack_70[0] = 0;
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  lStack_80 = 0;
  uVar15 = *(undefined8 *)PTR_DAT_04cc5280;
  uStack_98 = 0;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar16 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar15,0);
  uVar15 = System_Type__GetTypeFromHandle_483f0b4(**(undefined8 **)(lVar22 + 0x38),0);
  if (plVar16 == (long *)0x0) goto LAB_02a45eb0;
  uVar10 = (**(code **)(*plVar16 + 0x2b8))(plVar16,uVar15,*(undefined8 *)(*plVar16 + 0x2c0));
  puVar3 = PTR_DAT_04ca9ae8;
  if ((uVar10 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar15 = Dino_BusSand_App_UiAssets__Prefab_21513b8(lVar14,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar18 = UnityEngine_Object__op_Equality_43c6f30(uVar15,0,0);
    if ((uVar18 & 1) != 0) {
      uVar15 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cc5288,lVar14,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogError_4361614(uVar15,0);
      return (long *)0x0;
    }
    uVar27 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar19,4,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    lVar20 = UnityEngine_Object__Instantiate_object__2805310
                       (uVar15,uVar27,0,*(undefined8 *)PTR_DAT_04cad390);
LAB_02a45794:
    if (lVar20 == 0) goto LAB_02a45eb0;
  }
  else {
    uVar15 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar19,4,0);
    if (*(int *)(*(long *)PTR_DAT_04cac4f8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac4f8);
    }
    lVar20 = Dino_BusSand_App_UI_KitPrefabs__Spawn_2181840(lVar14,uVar15,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar18 = UnityEngine_Object__op_Equality_43c6f30(lVar20,0,0);
    if ((uVar18 & 1) == 0) goto LAB_02a45794;
    plVar16 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
    uVar15 = *(undefined8 *)PTR_DAT_04cad730;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(puVar2 + 0xe0));
    }
    lVar20 = System_Type__GetTypeFromHandle_483f0b4(uVar15,0);
    if (plVar16 == (long *)0x0) goto LAB_02a45eb0;
    if ((lVar20 != 0) &&
       (lVar21 = thunk_FUN_0216e7a0(lVar20,*(undefined8 *)(*plVar16 + 0x40)), lVar21 == 0)) {
      uVar15 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar15,0);
    }
    if ((int)plVar16[3] == 0) {
LAB_02a45eb4:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar16[4] = lVar20;
    thunk_FUN_02134474(plVar16 + 4,lVar20);
    lVar20 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c2310(lVar20,lVar14,plVar16,0);
    lVar21 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar19,4,0);
    if (((lVar21 == 0) ||
        (lVar21 = UnityEngine_Component__get_gameObject_43bcde8(lVar21,0), lVar21 == 0)) ||
       (uVar11 = UnityEngine_GameObject__get_layer_43c1118(lVar21,0), lVar20 == 0))
    goto LAB_02a45eb0;
    UnityEngine_GameObject__set_layer_43c11cc(lVar20,uVar11,0);
    lVar21 = UnityEngine_GameObject__get_transform_43c1048(lVar20,0);
    uVar15 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar19,4,0);
    if (lVar21 == 0) goto LAB_02a45eb0;
    UnityEngine_Transform__SetParent_43d1e34(lVar21,uVar15,0,0);
  }
  UnityEngine_Object__set_name_43c72ec(lVar20,lVar14,0);
  plVar16 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar20,0);
  if (plVar16 == (long *)0x0) {
    plVar16 = (long *)0x0;
  }
  else if (*plVar16 != *(long *)PTR_DAT_04cabdb0) {
    plVar16 = (long *)0x0;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar18 = UnityEngine_Object__op_Inequality_43c8dec(plVar16,0,0);
  if ((uVar18 & 1) != 0) {
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar2 = PTR_DAT_04cacfc0;
    if (plVar16 == (long *)0x0) goto LAB_02a45eb0;
    UnityEngine_RectTransform__set_anchorMin_43cf5e4
              (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
               (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],plVar16,0);
    if (cRam0000000004f9b949 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b949 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax_43cf768
              (*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),
               *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),plVar16,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin_43cfe84
              (**(undefined4 **)(*(long *)puVar2 + 0xb8),
               (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],plVar16,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax_43d0018
              (**(undefined4 **)(*(long *)puVar2 + 0xb8),
               (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],plVar16,0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    lVar21 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar21 + 0xc),*(undefined4 *)(lVar21 + 0x10),
               *(undefined4 *)(lVar21 + 0x14),plVar16,0);
  }
  lVar21 = UnityEngine_GameObject__GetComponent_object__275a5dc
                     (lVar20,*(undefined8 *)PTR_DAT_04cad3f0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar18 = UnityEngine_Object__op_Equality_43c6f30(lVar21,0,0);
  if ((uVar18 & 1) != 0) {
    lVar21 = UnityEngine_GameObject__AddComponent_object__275a54c
                       (lVar20,*(undefined8 *)PTR_DAT_04cacf88);
  }
  if (lVar21 != 0) {
    UnityEngine_Canvas__set_additionalShaderChannels_4680600(lVar21,0x19,0);
    if (*(long *)(lVar19 + 0x38) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&lStack_c8,*(long *)(lVar19 + 0x38),*(undefined8 *)PTR_DAT_04cabae0);
      puVar2 = PTR_DAT_04cabac0;
      iVar9 = 0;
      plStack_88 = plStack_c0;
      lStack_90 = lStack_c8;
      lStack_80 = (long)puStack_b8;
      lStack_c8 = 0;
      plStack_c0 = &lStack_90;
      while (uVar18 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&lStack_90,*(undefined8 *)puVar2), lVar8 = lStack_80,
            (uVar18 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar18 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
        if ((uVar18 & 1) != 0) {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if ((*(char *)(lVar8 + 0x2c) == '\0') && (*(int *)(lVar8 + 0x28) == 4)) {
            iVar9 = iVar9 + 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&lStack_90,*(undefined8 *)PTR_DAT_04cabab8);
      UnityEngine_Canvas__set_overrideSorting_467ff6c(lVar21,1,0);
      UnityEngine_Canvas__set_sortingOrder_46800e4(lVar21,iVar9 * 0x14 + 0xfb4,0);
      uVar15 = UnityEngine_GameObject__GetComponent_object__275a5dc
                         (lVar20,*(undefined8 *)PTR_DAT_04cad3f8);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar18 = UnityEngine_Object__op_Equality_43c6f30(uVar15,0,0);
      if ((uVar18 & 1) != 0) {
        UnityEngine_GameObject__AddComponent_object__275a54c(lVar20,*(undefined8 *)PTR_DAT_04cacf90)
        ;
      }
      Dino_BusSand_App_UI_UIManager__SubstituteSoftMasks_21fe774(lVar20,0);
      if (*(int *)(*(long *)PTR_DAT_04cab188 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UIParticleSorting__PrepareAll_217d4f4(lVar20,0);
      plVar16 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                  (lVar20,*(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x10));
      lVar22 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                         (lVar20,1,*(undefined8 *)PTR_DAT_04cab4a0);
      puVar4 = PTR_DAT_04cae1a8;
      puVar2 = PTR_DAT_04cae1a0;
      if (lVar22 != 0) {
        uVar23 = *(uint *)(lVar22 + 0x18);
        if (0 < (int)uVar23) {
          uVar29 = 0;
          do {
            if (uVar23 <= uVar29) goto LAB_02a45eb4;
            lVar21 = *(long *)(lVar22 + (long)(int)uVar29 * 8 + 0x20);
            if (lVar21 == 0) goto LAB_02a45eb0;
            uVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar21,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar3);
            }
            uVar18 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,lVar20,0);
            if ((uVar18 & 1) != 0) {
              uVar15 = UnityEngine_Component__GetComponent_object__26f97e8
                                 (lVar21,*(undefined8 *)puVar2);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar3);
              }
              uVar18 = UnityEngine_Object__op_Equality_43c6f30(uVar15,0,0);
              if ((uVar18 & 1) != 0) {
                lVar21 = UnityEngine_Component__get_gameObject_43bcde8(lVar21,0);
                if (lVar21 == 0) goto LAB_02a45eb0;
                UnityEngine_GameObject__AddComponent_object__275a54c(lVar21,*(undefined8 *)puVar4);
              }
            }
            uVar23 = *(uint *)(lVar22 + 0x18);
            uVar29 = uVar29 + 1;
          } while ((int)uVar29 < (int)uVar23);
        }
        if (plVar16 != (long *)0x0) {
          plVar16[4] = lVar14;
          thunk_FUN_02134474(plVar16 + 4,lVar14);
          *(undefined4 *)(plVar16 + 5) = 4;
          lVar19 = *(long *)(lVar19 + 0x38);
          if (lVar19 != 0) {
            lVar22 = *(long *)(lVar19 + 0x10);
            lVar21 = *(long *)PTR_DAT_04cabde0;
            *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
            if (lVar22 != 0) {
              uVar23 = *(uint *)(lVar19 + 0x18);
              if (uVar23 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar19 + 0x18) = uVar23 + 1;
                plVar28 = (long *)(lVar22 + (long)(int)uVar23 * 8 + 0x20);
                *plVar28 = (long)plVar16;
                thunk_FUN_02134474(plVar28,plVar16);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar19,plVar16,
                           *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
              }
              puVar3 = PTR_DAT_04cb4ce0;
              puVar2 = PTR_DAT_04cad7b8;
              if ((uVar10 & 1) == 0) {
                lVar19 = *(long *)PTR_DAT_04cb4ce0;
                cVar24 = '\0';
                uStack_68 = 0;
              }
              else {
                uVar15 = UnityEngine_GameObject__get_transform_43c1048(lVar20,0);
                lVar19 = *(long *)puVar2;
                if (*(int *)(lVar19 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar19);
                }
                uStack_68 = Dino_BusSand_App_UI_KitAdopt__Begin_227d2a0(uVar15,lVar14,0);
                lVar19 = *(long *)puVar3;
                if (*(int *)(lVar19 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar19);
                  lVar19 = *(long *)puVar3;
                }
                cVar24 = **(char **)(lVar19 + 0xb8);
              }
              acStack_6c[0] = cVar24 != '\0';
              if (*(int *)(lVar19 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar19);
                lVar19 = *(long *)puVar3;
              }
              lVar14 = *(long *)(lVar19 + 0xb8);
              auStack_70[0] = *(undefined1 *)(lVar14 + 1);
              if (acStack_6c[0] != '\0') {
                if (*(int *)(lVar19 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar19);
                  lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
                }
                *(undefined1 *)(lVar14 + 1) = 1;
              }
              plStack_c0 = (long *)acStack_6c;
              puStack_b8 = auStack_70;
              lStack_c8 = 0;
              puStack_b0 = &uStack_68;
              (**(code **)(*plVar16 + 0x178))(plVar16,lVar17,*(undefined8 *)(*plVar16 + 0x180));
              if ((char)*plStack_c0 != '\0') {
                lVar17 = *(long *)puVar3;
                uVar1 = *puStack_b8;
                if (*(int *)(lVar17 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar17 = *(long *)puVar3;
                }
                *(undefined1 *)(*(long *)(lVar17 + 0xb8) + 1) = uVar1;
              }
              uVar15 = *puStack_b0;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_KitAdopt__End_227e4f0(uVar15,0);
              if (lStack_c8 == 0) {
                if (acStack_6c[0] != '\0') {
                  lVar17 = *(long *)puVar3;
                  if (*(int *)(lVar17 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar17 = *(long *)puVar3;
                  }
                  lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
                  if (lVar17 != 0) {
                    (**(code **)(lVar17 + 0x18))
                              (*(undefined8 *)(lVar17 + 0x40),plVar16,*(undefined8 *)(lVar17 + 0x28)
                              );
                  }
                }
                uVar15 = UnityEngine_GameObject__get_transform_43c1048(lVar20,0);
                Dino_BusSand_App_UI_UIManager__FullScreenBackdrops_21fe258(uVar15,0);
                uVar15 = UnityEngine_GameObject__get_transform_43c1048(lVar20,0);
                if (*(int *)(*(long *)PTR_DAT_04cabf58 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabf58);
                }
                Dino_BusSand_App_SpriteSkin__Apply_215e5c0(uVar15,0);
                Dino_BusSand_App_UI_UiTweaks__Attach_22a3600(plVar16,0);
                Dino_BusSand_App_UI_UIManagerEvents__RaiseOpened_220008c(plVar16,0);
                return plVar16;
              }
                    /* WARNING: Subroutine does not return */
              FUN_0213321c();
            }
          }
        }
      }
    }
  }
LAB_02a45eb0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

