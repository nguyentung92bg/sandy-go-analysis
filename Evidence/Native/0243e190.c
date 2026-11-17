/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow.<GuideStep>d__13$$MoveNext
bool Dino_BusSand_App_UI_LevelEnterFlow__GuideStep_d__13__MoveNext (Dino_BusSand_App_UI_LevelEnterFlow__GuideStep_d__13_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow.<GuideStep>d__13$$MoveNext
   bool Dino_BusSand_App_UI_LevelEnterFlow__GuideStep_d__13__MoveNext
   (Dino_BusSand_App_UI_LevelEnterFlow__GuideStep_d__13_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_LevelEnterFlow__GuideStep_d__13__MoveNext_233e190(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000004f9c671 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9510);
    FUN_02132f7c(PTR_DAT_04cb1c70);
    FUN_02132f7c(PTR_DAT_04cacb20);
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04cb18c8);
    FUN_02132f7c(PTR_DAT_04cb18b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb9518);
    FUN_02132f7c(PTR_DAT_04cb9520);
    FUN_02132f7c(PTR_DAT_04cb9528);
    FUN_02132f7c(PTR_DAT_04cb1938);
    FUN_02132f7c(PTR_DAT_04cb1940);
    FUN_02132f7c(PTR_DAT_04cb1980);
    FUN_02132f7c(PTR_DAT_04cb8000);
    bRam0000000004f9c671 = 1;
  }
  puVar3 = PTR_DAT_04cb9528;
  iVar5 = *(int *)(param_1 + 0x10);
  uVar6 = 0;
  if (2 < iVar5) {
    if (iVar5 < 5) {
      if (iVar5 != 3) {
        if (iVar5 != 4) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        puVar3 = PTR_DAT_04cacb20;
        if (*(long *)(param_1 + 0x48) == 0) {
          return 0;
        }
        if (*(char *)(*(long *)(param_1 + 0x48) + 0x40) == '\0') {
          return 0;
        }
        lVar12 = *(long *)(param_1 + 0x40);
        if (lVar12 != 0) {
          uVar15 = *(undefined8 *)(lVar12 + 0x10);
          uVar11 = *(undefined4 *)(lVar12 + 0x18);
          if (*(int *)(*(long *)PTR_DAT_04cacb20 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = Dino_BusSand_App_UI_LevelEnterFlow__Alive_233d020(uVar15,uVar11);
          if ((uVar6 & 1) == 0) {
            return 0;
          }
          lVar12 = *(long *)(param_1 + 0x40);
          if (lVar12 != 0) {
            uVar15 = *(undefined8 *)(lVar12 + 0x10);
            uVar11 = *(undefined4 *)(param_1 + 0x50);
            uVar2 = *(undefined4 *)(lVar12 + 0x18);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar15 = Dino_BusSand_App_UI_LevelEnterFlow__WaitItemEffect_233da40(uVar15,uVar11,uVar2)
            ;
            *(undefined8 *)(param_1 + 0x18) = uVar15;
            thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar15);
            uVar11 = 5;
LAB_0243e8a8:
            *(undefined4 *)(param_1 + 0x10) = uVar11;
            return 1;
          }
        }
        goto LAB_0243eb08;
      }
    }
    else if ((iVar5 != 5) && (iVar5 != 6)) {
      return 0;
    }
LAB_0243e370:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    return 0;
  }
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Object___ctor_4870e5c(lVar12,0);
    plVar17 = (long *)(param_1 + 0x40);
    *plVar17 = lVar12;
    thunk_FUN_02134474(plVar17,lVar12);
    uVar6 = 0;
    if (*plVar17 != 0) {
      *(undefined8 *)(*plVar17 + 0x10) = *(undefined8 *)(param_1 + 0x20);
      uVar6 = thunk_FUN_02134474();
      if (*(long *)(param_1 + 0x40) != 0) {
        lVar12 = *(long *)PTR_DAT_04ca9ae8;
        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x18) = *(undefined4 *)(param_1 + 0x28);
        uVar15 = *(undefined8 *)(param_1 + 0x30);
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar15,0,0);
        puVar3 = PTR_DAT_04cabaf8;
        if ((uVar6 & 1) != 0) {
          return 0;
        }
        if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar15 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
        puVar4 = PTR_DAT_04cacb20;
        if ((int)uVar15 == 1) {
          uVar8 = Dino_BusSand_App_UI_GuideRequest__FromConfig_22ce980(uVar15,0);
          uVar6 = uVar8;
          if (*plVar17 != 0) {
            lVar12 = *(long *)(*plVar17 + 0x10);
            uVar6 = 0;
            if (lVar12 != 0) {
              Dino_BusSand_App_Gameplay_GameplayController__GuideWorldAnchor_229dfb0(lVar12,0);
              uStack_70 = 0;
              uStack_68 = 0;
              uVar6 = System_Nullable_Vector3____ctor_2bd0e4c
                                (&uStack_70,*(undefined8 *)PTR_DAT_04cb18b8);
              if (uVar8 != 0) {
                *(undefined8 *)(uVar8 + 0x1c) = uStack_68;
                *(undefined8 *)(uVar8 + 0x14) = uStack_70;
                uVar6 = 0;
                if (*(long *)(param_1 + 0x30) != 0) {
                  plVar7 = (long *)Dino_BusSand_App_UI_HudPanel__Find_230a038
                                             (*(long *)(param_1 + 0x30),
                                              *(undefined8 *)PTR_DAT_04cb8000,0);
                  if (plVar7 == (long *)0x0) {
                    plVar7 = (long *)0x0;
                    *(undefined8 *)(uVar8 + 0x28) = 0;
                  }
                  else {
                    lVar12 = *(long *)PTR_DAT_04cabdb0;
                    plVar1 = plVar7;
                    if (*plVar7 != lVar12) {
                      plVar1 = (long *)0x0;
                    }
                    *(long **)(uVar8 + 0x28) = plVar1;
                    if (*plVar7 != lVar12) {
                      plVar7 = (long *)0x0;
                    }
                  }
                  uVar6 = thunk_FUN_02134474(uVar8 + 0x28,plVar7);
                  if (*plVar17 != 0) {
                    lVar12 = *(long *)(*plVar17 + 0x10);
                    uVar6 = 0;
                    if (lVar12 != 0) {
                      uVar15 = Dino_BusSand_App_Gameplay_GameplayController__LotVehicles_229e734
                                         (lVar12,0);
                      *(undefined8 *)(uVar8 + 0x80) = uVar15;
                      uVar6 = thunk_FUN_02134474();
                      if (*(long *)(param_1 + 0x38) != 0) {
                        lVar12 = *(long *)(*(long *)(param_1 + 0x38) + 0x28);
                        uVar6 = 0;
                        if (lVar12 != 0) {
                          uVar15 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                                             (lVar12,*(undefined8 *)PTR_DAT_04cb1940,5,uVar8,
                                              *(undefined8 *)PTR_DAT_04cb1938);
                          puVar16 = (undefined8 *)(param_1 + 0x48);
                          *puVar16 = uVar15;
                          uVar6 = thunk_FUN_02134474(puVar16,uVar15);
                          lVar12 = *(long *)(param_1 + 0x40);
                          if (lVar12 != 0) {
                            uVar15 = *puVar16;
                            uVar18 = *(undefined8 *)(lVar12 + 0x10);
                            uVar11 = *(undefined4 *)(lVar12 + 0x18);
                            if (*(int *)(*(long *)PTR_DAT_04cacb20 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            uVar15 = Dino_BusSand_App_UI_LevelEnterFlow__WaitClosed_233d8d4
                                               (uVar15,uVar18,uVar11);
                            *(undefined8 *)(param_1 + 0x18) = uVar15;
                            thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar15);
                            *(undefined4 *)(param_1 + 0x10) = 1;
                            return 1;
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
        else {
          uVar6 = *(ulong *)PTR_DAT_04cacb20;
          if (*(int *)(uVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            uVar6 = *(ulong *)puVar4;
          }
          puVar4 = PTR_DAT_04cb1c70;
          lVar12 = *(long *)(*(long *)(uVar6 + 0xb8) + 0x18);
          if (lVar12 != 0) {
            if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
              uVar8 = 0;
              uVar13 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
              do {
                if (uVar13 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                uVar11 = *(undefined4 *)(lVar12 + 0x20 + uVar8 * 4);
                uVar13 = Dino_BusSand_App_UI_GuideRequest__FromConfig_22ce980(uVar11,0);
                uVar6 = uVar13;
                if (uVar13 == 0) goto LAB_0243eb08;
                iVar5 = *(int *)(uVar13 + 0x44);
                *(int *)(param_1 + 0x50) = iVar5;
                if (iVar5 != 0) {
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  iVar5 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
                  uVar2 = *(undefined4 *)(param_1 + 0x50);
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar4);
                  }
                  uVar6 = Dino_BusSand_App_Meta_BoosterIntro__Level_2202754(uVar2,0);
                  if (iVar5 == (int)uVar6) {
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    if (cRam0000000004f9b894 == '\0') {
                      FUN_02132f7c(puVar3);
                      cRam0000000004f9b894 = '\x01';
                    }
                    uVar6 = *(ulong *)puVar3;
                    if (*(int *)(uVar6 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      uVar6 = *(ulong *)puVar3;
                    }
                    lVar14 = *(long *)(*(long *)(uVar6 + 0xb8) + 0x10);
                    if (lVar14 == 0) goto LAB_0243eb08;
                    lVar14 = *(long *)(lVar14 + 0x48);
                    uVar6 = 0;
                    if (lVar14 == 0) goto LAB_0243eb08;
                    uVar6 = System_Collections_Generic_List_int___Contains_3a2c3ec
                                      (lVar14,uVar11,*(undefined8 *)PTR_DAT_04cad860);
                    if ((uVar6 & 1) == 0) {
                      uVar15 = System_Int32__ToString_482d750(param_1 + 0x50,0);
                      uVar15 = System_String__Concat_46c82e0
                                         (*(undefined8 *)PTR_DAT_04cb1980,uVar15,0);
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_0218fdac(*(long *)puVar3);
                      }
                      uVar6 = Dino_BusSand_App_Meta_Profile__Flag_22736a4(uVar15,0);
                      if ((uVar6 & 1) == 0) {
                        if (*(int *)(param_1 + 0x50) == 0x2714) {
                          lVar12 = *(long *)(param_1 + 0x40);
                          if (lVar12 == 0) goto LAB_0243eb08;
                          uVar15 = *(undefined8 *)(param_1 + 0x30);
                          uVar18 = *(undefined8 *)(param_1 + 0x38);
                          lVar14 = *(long *)(lVar12 + 0x20);
                          uVar10 = *(undefined8 *)(lVar12 + 0x10);
                          if (lVar14 == 0) {
                            lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb9510);
                            Dino_BusSand_App_UI_MechanicGuide_AliveFn___ctor_21fa14c
                                      (lVar14,lVar12,*(undefined8 *)PTR_DAT_04cb9520,0);
                            *(long *)(lVar12 + 0x20) = lVar14;
                            thunk_FUN_02134474((long *)(lVar12 + 0x20),lVar14);
                          }
                          if (*(int *)(*(long *)PTR_DAT_04cb18c8 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uVar15 = Dino_BusSand_App_UI_MechanicGuide__RunWand_21f98a0
                                             (uVar18,uVar15,uVar10,uVar11,lVar14,0);
                          *(undefined8 *)(param_1 + 0x18) = uVar15;
                          thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar15);
                          uVar11 = 3;
                          goto LAB_0243e8a8;
                        }
                        uVar6 = 0;
                        if (*(long *)(param_1 + 0x30) == 0) goto LAB_0243eb08;
                        lVar14 = Dino_BusSand_App_UI_HudPanel__ItemRect_230e450
                                           (*(long *)(param_1 + 0x30),*(int *)(param_1 + 0x50),0);
                        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
                        }
                        uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar14,0,0);
                        if ((uVar6 & 1) == 0) {
                          if (lVar14 == 0) goto LAB_0243eb08;
                          lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0);
                          uVar6 = 0;
                          if (lVar9 == 0) goto LAB_0243eb08;
                          uVar6 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar9,0);
                          if ((uVar6 & 1) != 0) {
                            uVar6 = 0;
                            if (*(long *)(param_1 + 0x30) == 0) goto LAB_0243eb08;
                            Dino_BusSand_App_UI_HudPanel__RefreshItems_230991c
                                      (*(long *)(param_1 + 0x30),0);
                            *(long *)(uVar13 + 0x28) = lVar14;
                            uVar6 = thunk_FUN_02134474((long *)(uVar13 + 0x28),lVar14);
                            if (*(long *)(param_1 + 0x38) == 0) goto LAB_0243eb08;
                            lVar12 = *(long *)(*(long *)(param_1 + 0x38) + 0x28);
                            uVar6 = 0;
                            if (lVar12 == 0) goto LAB_0243eb08;
                    /* try { // try from 0243ea80 to 0253ebc7 has its CatchHandler @ 0243ea80
                       catch() { ... } // from try @ 0243ea80 with catch @ 0243ea80
                       catch() { ... } // from try @ 0243ecbc with catch @ 0243ea80
                       catch() { ... } // from try @ 0243ecec with catch @ 0243ea80
                       catch() { ... } // from try @ 0243ed30 with catch @ 0243ea80
                       catch() { ... } // from try @ 0243ed54 with catch @ 0243ea80 */
                            uVar15 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                                               (lVar12,*(undefined8 *)PTR_DAT_04cb1940,5,uVar13,
                                                *(undefined8 *)PTR_DAT_04cb1938);
                            puVar16 = (undefined8 *)(param_1 + 0x48);
                            *puVar16 = uVar15;
                            uVar6 = thunk_FUN_02134474(puVar16,uVar15);
                            lVar12 = *(long *)(param_1 + 0x40);
                            if (lVar12 == 0) goto LAB_0243eb08;
                            uVar15 = *puVar16;
                            uVar18 = *(undefined8 *)(lVar12 + 0x10);
                            uVar11 = *(undefined4 *)(lVar12 + 0x18);
                            if (*(int *)(*(long *)PTR_DAT_04cacb20 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            uVar15 = Dino_BusSand_App_UI_LevelEnterFlow__WaitClosed_233d8d4
                                               (uVar15,uVar18,uVar11);
                            *(undefined8 *)(param_1 + 0x18) = uVar15;
                            thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar15);
                            uVar11 = 4;
                            goto LAB_0243e8a8;
                          }
                        }
                      }
                    }
                  }
                }
                uVar13 = (ulong)*(uint *)(lVar12 + 0x18);
                uVar8 = uVar8 + 1;
              } while ((long)uVar8 < (long)(int)*(uint *)(lVar12 + 0x18));
            }
            lVar12 = *(long *)(param_1 + 0x40);
            if (lVar12 != 0) {
              uVar15 = *(undefined8 *)(param_1 + 0x30);
              uVar18 = *(undefined8 *)(param_1 + 0x38);
              uVar19 = *(undefined8 *)(lVar12 + 0x10);
              uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb9510);
              Dino_BusSand_App_UI_MechanicGuide_AliveFn___ctor_21fa14c
                        (uVar10,lVar12,*(undefined8 *)PTR_DAT_04cb9518,0);
              if (*(int *)(*(long *)PTR_DAT_04cb18c8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar15 = Dino_BusSand_App_UI_MechanicGuide__RunMechanic_21f94a0
                                 (uVar18,uVar15,uVar19,uVar10,0);
              *(undefined8 *)(param_1 + 0x18) = uVar15;
              thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar15);
              uVar11 = 6;
              goto LAB_0243e8a8;
            }
          }
        }
      }
    }
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 != 2) {
        return 0;
      }
      goto LAB_0243e370;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar3 = PTR_DAT_04cacb20;
    if (*(long *)(param_1 + 0x48) == 0) {
      return 0;
    }
    if (*(char *)(*(long *)(param_1 + 0x48) + 0x40) == '\0') {
      return 0;
    }
    lVar12 = *(long *)(param_1 + 0x40);
    if (lVar12 != 0) {
      uVar15 = *(undefined8 *)(lVar12 + 0x10);
      uVar11 = *(undefined4 *)(lVar12 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_04cacb20 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = Dino_BusSand_App_UI_LevelEnterFlow__Alive_233d020(uVar15,uVar11);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      uVar8 = Dino_BusSand_App_UI_GuideRequest__FromConfig_22ce980(2,0);
      uVar6 = uVar8;
      if (*(long *)(param_1 + 0x40) != 0) {
        lVar12 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
        uVar6 = 0;
        if (lVar12 != 0) {
          Dino_BusSand_App_Gameplay_GameplayController__RoadCounterWorldAnchor_229ea0c(lVar12,0);
          uStack_70 = 0;
          uStack_68 = 0;
          uVar6 = System_Nullable_Vector3____ctor_2bd0e4c
                            (&uStack_70,*(undefined8 *)PTR_DAT_04cb18b8);
          if (uVar8 != 0) {
            *(undefined8 *)(uVar8 + 0x1c) = uStack_68;
            *(undefined8 *)(uVar8 + 0x14) = uStack_70;
            if (*(long *)(param_1 + 0x40) != 0) {
              lVar12 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
              uVar6 = 0;
              if (lVar12 != 0) {
                uVar15 = Dino_BusSand_App_Gameplay_GameplayController__PourHighlights_229e3b4
                                   (lVar12,0);
                *(undefined8 *)(uVar8 + 0x78) = uVar15;
                uVar6 = thunk_FUN_02134474((undefined8 *)(uVar8 + 0x78),uVar15);
                *(undefined8 *)(uVar8 + 0x5c) = _UNK_00e6a590;
                if (*(long *)(param_1 + 0x38) != 0) {
                  lVar12 = *(long *)(*(long *)(param_1 + 0x38) + 0x28);
                  uVar6 = 0;
                  if (lVar12 != 0) {
                    uVar6 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                                      (lVar12,*(undefined8 *)PTR_DAT_04cb1940,5,uVar8,
                                       *(undefined8 *)PTR_DAT_04cb1938);
                    lVar12 = *(long *)(param_1 + 0x40);
                    if (lVar12 != 0) {
                      uVar15 = *(undefined8 *)(lVar12 + 0x10);
                      uVar11 = *(undefined4 *)(lVar12 + 0x18);
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      uVar15 = Dino_BusSand_App_UI_LevelEnterFlow__WaitClosed_233d8d4
                                         (uVar6,uVar15,uVar11);
                      *(undefined8 *)(param_1 + 0x18) = uVar15;
                      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar15);
                      uVar11 = 2;
                      goto LAB_0243e8a8;
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
LAB_0243eb08:
                    /* WARNING: Subroutine does not return */
  FUN_02133224(uVar6);
}

