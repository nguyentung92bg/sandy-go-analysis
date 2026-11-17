/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$Purchase
void Dino_BusSand_App_UI_GiftPackUi__Purchase (int32_t storeItemId, System_Action_bool__o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$Purchase
   void Dino_BusSand_App_UI_GiftPackUi__Purchase (int32_t storeItemId, System_Action_bool__o* done,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_GiftPackUi__Purchase_21aac9c(undefined4 param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  int *piVar16;
  long *plVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  undefined4 uStack_64;
  
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
  lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar12,0);
  puVar2 = PTR_DAT_04cac7b8;
  if (lVar12 != 0) {
    plVar20 = (long *)(lVar12 + 0x18);
    *plVar20 = param_2;
    thunk_FUN_02134474(plVar20,param_2);
    lVar13 = *(long *)puVar2;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)puVar2;
    }
    lVar13 = **(long **)(lVar13 + 0xb8);
    if (lVar13 != 0) {
      uVar14 = (**(code **)(lVar13 + 0x18))
                         (*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
      if ((uVar14 & 1) == 0) {
        Dino_BusSand_App_UI_StoreTipsPanel__ShowNetworkError_22b5524(0,0);
        lVar12 = *plVar20;
        if (lVar12 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x022aaea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar12 + 0x18))
                  (*(undefined8 *)(lVar12 + 0x40),0,*(undefined8 *)(lVar12 + 0x28));
        return;
      }
      *(undefined1 *)(lVar12 + 0x10) = 0;
      lVar13 = Dino_BusSand_App_UI_StoreWaitingPanel__Open_22bb848(0);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar14 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
      if ((uVar14 & 1) != 0) {
        uVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar15,lVar12,*(undefined8 *)PTR_DAT_04caed70,0);
        if (lVar13 == 0) goto LAB_022aaeb8;
        *(undefined8 *)(lVar13 + 0x38) = uVar15;
        thunk_FUN_02134474((undefined8 *)(lVar13 + 0x38),uVar15);
      }
      lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
      System_Action_bool____ctor_35ee0e8(lVar13,lVar12,*(undefined8 *)PTR_DAT_04caed78,0);
      if (*(int *)(*(long *)PTR_DAT_04cad1f0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar2 = PTR_DAT_04cad2f0;
      if ((bRam0000000004f9b907 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cac420,lVar13,0);
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
      lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Object___ctor_4870e5c(lVar12,0);
      puVar3 = PTR_DAT_04cad200;
      puVar2 = PTR_DAT_04cac018;
      if (lVar12 != 0) {
        plVar20 = (long *)(lVar12 + 0x28);
        *plVar20 = lVar13;
        *(undefined4 *)(lVar12 + 0x10) = param_1;
        thunk_FUN_02134474(plVar20,lVar13);
        uVar1 = *(undefined4 *)(lVar12 + 0x10);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar13 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar3,uVar1,0);
        plVar19 = (long *)(lVar12 + 0x18);
        *plVar19 = lVar13;
        thunk_FUN_02134474(plVar19,lVar13);
        puVar3 = PTR_DAT_04ca9c30;
        puVar2 = PTR_DAT_04ca9c20;
        if (*plVar19 == 0) {
          lVar12 = *plVar20;
          if (lVar12 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0227c364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar12 + 0x18))
                    (*(undefined8 *)(lVar12 + 0x40),0,*(undefined8 *)(lVar12 + 0x28));
          return;
        }
        uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(*plVar19,*(undefined8 *)PTR_DAT_04cad2a8,0);
        lVar13 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar15,*(undefined8 *)puVar3,0);
        plVar17 = (long *)(lVar12 + 0x20);
        *plVar17 = lVar13;
        thunk_FUN_02134474(plVar17,lVar13);
        plVar9 = (long *)FUN_02133068(*(undefined8 *)puVar2,4);
        puVar3 = PTR_DAT_04cad268;
        if (plVar9 != (long *)0x0) {
          if ((*(long *)PTR_DAT_04cad268 != 0) &&
             (lVar13 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad268,*(undefined8 *)(*plVar9 + 0x40))
             , lVar13 == 0)) {
LAB_0227c514:
            uVar15 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar15,0);
          }
          if ((int)plVar9[3] != 0) {
            plVar9[4] = *(long *)puVar3;
            thunk_FUN_02134474();
            lVar13 = *plVar17;
            if ((lVar13 != 0) &&
               (lVar10 = thunk_FUN_0216e7a0(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
            goto LAB_0227c514;
            puVar4 = PTR_DAT_04cad328;
            if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
              plVar9[5] = lVar13;
              thunk_FUN_02134474(plVar9 + 5,lVar13);
              lVar13 = *(long *)puVar4;
              if ((lVar13 != 0) &&
                 (lVar13 = thunk_FUN_0216e7a0(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar13 == 0))
              goto LAB_0227c514;
              if (2 < *(uint *)(plVar9 + 3)) {
                plVar9[6] = *(long *)puVar4;
                thunk_FUN_02134474();
                uStack_64 = *(undefined4 *)(lVar12 + 0x10);
                lVar13 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_64);
                if ((lVar13 != 0) &&
                   (lVar10 = thunk_FUN_0216e7a0(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0
                   )) goto LAB_0227c514;
                puVar7 = PTR_DAT_04cad308;
                puVar5 = PTR_DAT_04cac5c0;
                puVar4 = PTR_DAT_04cac498;
                if ((*(uint *)(plVar9 + 3) & 0xfffffffc) != 0) {
                  plVar9[7] = lVar13;
                  thunk_FUN_02134474(plVar9 + 7,lVar13);
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  puVar6 = PTR_DAT_04cad1f0;
                  Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar7,plVar9);
                  uVar1 = *(undefined4 *)(lVar12 + 0x10);
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  Dino_BusSand_App_Meta_GameTracking__IapClick_221875c(uVar1,0);
                  uVar1 = *(undefined4 *)(lVar12 + 0x10);
                  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar14 = Dino_BusSand_App_Iap__CanPurchase_217a6e8(uVar1);
                  if ((uVar14 & 1) == 0) {
                    plVar19 = (long *)FUN_02133068(*(undefined8 *)puVar2,4);
                    if (plVar19 != (long *)0x0) {
                      if ((*(long *)puVar3 != 0) &&
                         (lVar13 = thunk_FUN_0216e7a0(*(long *)puVar3,
                                                      *(undefined8 *)(*plVar19 + 0x40)), lVar13 == 0
                         )) goto LAB_0227c514;
                      if ((int)plVar19[3] != 0) {
                        plVar19[4] = *(long *)puVar3;
                        thunk_FUN_02134474();
                        lVar13 = *plVar17;
                        if ((lVar13 != 0) &&
                           (lVar10 = thunk_FUN_0216e7a0(lVar13,*(undefined8 *)(*plVar19 + 0x40)),
                           lVar10 == 0)) goto LAB_0227c514;
                        if ((*(uint *)(plVar19 + 3) & 0xfffffffe) != 0) {
                          plVar19[5] = lVar13;
                          thunk_FUN_02134474(plVar19 + 5,lVar13);
                          puVar2 = PTR_DAT_04cad0e0;
                          if ((*(long *)PTR_DAT_04cad0e0 != 0) &&
                             (lVar13 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad0e0,
                                                          *(undefined8 *)(*plVar19 + 0x40)),
                             lVar13 == 0)) goto LAB_0227c514;
                          if (2 < *(uint *)(plVar19 + 3)) {
                            plVar19[6] = *(long *)puVar2;
                            thunk_FUN_02134474();
                            puVar2 = PTR_DAT_04cad320;
                            if ((*(long *)PTR_DAT_04cad320 != 0) &&
                               (lVar13 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad320,
                                                            *(undefined8 *)(*plVar19 + 0x40)),
                               lVar13 == 0)) goto LAB_0227c514;
                            if ((*(uint *)(plVar19 + 3) & 0xfffffffc) != 0) {
                              plVar19[7] = *(long *)puVar2;
                              thunk_FUN_02134474();
                              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                                thunk_FUN_0218fdac();
                              }
                              Dino_BusSand_App_Analytics__Log_216d0c8
                                        (*(undefined8 *)PTR_DAT_04cad310,plVar19);
                              uVar1 = *(undefined4 *)(lVar12 + 0x10);
                              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                                thunk_FUN_0218fdac();
                              }
                              Dino_BusSand_App_Meta_GameTracking__IapFailed_22189dc
                                        (uVar1,*(undefined8 *)PTR_DAT_04cad318,0,0);
                              lVar12 = *plVar20;
                              if (lVar12 == 0) {
                                return;
                              }
                              (**(code **)(lVar12 + 0x18))
                                        (*(undefined8 *)(lVar12 + 0x40),0,
                                         *(undefined8 *)(lVar12 + 0x28));
                              return;
                            }
                          }
                        }
                      }
                      goto LAB_0227c510;
                    }
                  }
                  else {
                    lVar13 = *(long *)puVar6;
                    if (*(int *)(lVar13 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar13 = *(long *)puVar6;
                    }
                    puVar11 = (undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x28);
                    *puVar11 = 0;
                    thunk_FUN_02134474(puVar11,0);
                    puVar11 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20);
                    *puVar11 = 0;
                    thunk_FUN_02134474(puVar11,0);
                    uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8
                                       (*plVar19,*(undefined8 *)PTR_DAT_04cad270,0);
                    iVar8 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
                    if (iVar8 == 9) {
                      lVar13 = *plVar17;
                      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      Dino_BusSand_App_Iap__MarkStarted_217bbbc(lVar13);
                    }
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    Dino_BusSand_App_Meta_GameTracking__ExternalUi_221486c(1,0);
                    lVar13 = *(long *)puVar6;
                    if (*(int *)(lVar13 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar13 = *(long *)puVar6;
                    }
                    uVar18 = *(undefined8 *)(lVar12 + 0x20);
                    plVar20 = (long *)**(undefined8 **)(lVar13 + 0xb8);
                    uVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
                    System_Action_bool____ctor_35ee0e8
                              (uVar15,lVar12,*(undefined8 *)PTR_DAT_04cad300,0);
                    if (plVar20 != (long *)0x0) {
                      lVar12 = *plVar20;
                      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                      if (uVar14 != 0) {
                        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_04cad2f8) {
                            puVar11 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                            goto LAB_0227c4dc;
                          }
                          uVar14 = uVar14 - 1;
                          piVar16 = piVar16 + 4;
                        } while (uVar14 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_0216b7a4(plVar20,*(long *)PTR_DAT_04cad2f8,0);
LAB_0227c4dc:
                      (*(code *)*puVar11)(plVar20,uVar18,uVar15,puVar11[1]);
                      return;
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

