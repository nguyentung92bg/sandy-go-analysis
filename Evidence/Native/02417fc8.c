/* IL2CPP: Dino.BusSand.App.UI.FailPanel.<>c__DisplayClass0_0$$<OnOpen>b__3
void Dino_BusSand_App_UI_FailPanel___c__DisplayClass0_0___OnOpen_b__3 (Dino_BusSand_App_UI_FailPanel___c__DisplayClass0_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.FailPanel.<>c__DisplayClass0_0$$<OnOpen>b__3
   void Dino_BusSand_App_UI_FailPanel___c__DisplayClass0_0___OnOpen_b__3
   (Dino_BusSand_App_UI_FailPanel___c__DisplayClass0_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_FailPanel___c__DisplayClass0_0___OnOpen_b__3_2317fc8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  float fVar17;
  undefined4 uStack_58;
  uint uStack_54;
  
  if ((bRam0000000004f9c575 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cb8510);
    bRam0000000004f9c575 = 1;
  }
  puVar3 = PTR_DAT_04caba50;
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 != 0) {
    if (*(char *)(lVar12 + 0x38) != '\0') {
      return;
    }
    *(undefined1 *)(lVar12 + 0x38) = 1;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar12 = *(long *)puVar3;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar12 = *(long *)puVar3;
    }
    lVar16 = *(long *)(param_1 + 0x20);
    lVar12 = **(long **)(lVar12 + 0xb8);
    if (lVar16 == 0) {
      lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
      System_Action_bool____ctor_35ee0e8(lVar16,param_1,*(undefined8 *)PTR_DAT_04cb8510,0);
      *(long *)(param_1 + 0x20) = lVar16;
      thunk_FUN_02134474((long *)(param_1 + 0x20),lVar16);
    }
    puVar3 = PTR_DAT_04cac7a0;
    if (lVar12 != 0) {
      if ((bRam0000000004f9b86c & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cac420,lVar16,0);
        FUN_02132f7c(PTR_DAT_04cabaa8);
        FUN_02132f7c(PTR_DAT_04cac440);
        FUN_02132f7c(PTR_DAT_04cac7a8);
        FUN_02132f7c(PTR_DAT_04cac7a0);
        FUN_02132f7c(PTR_DAT_04cac740);
        bRam0000000004f9b86c = 1;
      }
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      Dino_BusSand_App_GameApp___c__DisplayClass106_0___ctor_216a9ac(lVar7,0);
      puVar3 = PTR_DAT_04cac440;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      plVar15 = (long *)(lVar7 + 0x10);
      *plVar15 = lVar16;
      thunk_FUN_02134474(plVar15,lVar16);
      *(long *)(lVar7 + 0x18) = lVar12;
      thunk_FUN_02134474((long *)(lVar7 + 0x18),lVar12);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = Dino_BusSand_App_Meta_Economy__get_CanRevive_2204a44(0);
      if (((uVar8 & 1) == 0) ||
         (iVar5 = Dino_BusSand_App_GameApp__get_ReviveAdsLeft_21645f4(lVar12), iVar5 < 1)) {
        lVar12 = *plVar15;
        if (lVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022686a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar12 + 0x18))
                    (*(undefined8 *)(lVar12 + 0x40),0,*(undefined8 *)(lVar12 + 0x28));
          return;
        }
        return;
      }
      uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
      System_Action_bool____ctor_35ee0e8(uVar9,lVar7,*(undefined8 *)PTR_DAT_04cac7a8,0);
      if (*(int *)(*(long *)PTR_DAT_04cabaa8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar3 = PTR_DAT_04cad0a0;
      uVar10 = *(undefined8 *)PTR_DAT_04cac740;
      if ((bRam0000000004f9b8e5 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cabaa8,uVar9,0);
        FUN_02132f7c(PTR_DAT_04cac5c0);
        FUN_02132f7c(PTR_DAT_04cac450);
        FUN_02132f7c(PTR_DAT_04ca9af8);
        FUN_02132f7c(PTR_DAT_04caba50);
        FUN_02132f7c(PTR_DAT_04cac498);
        FUN_02132f7c(PTR_DAT_04cad098);
        FUN_02132f7c(PTR_DAT_04ca9c20);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04cabaf8);
        FUN_02132f7c(PTR_DAT_04cad0a0);
        FUN_02132f7c(PTR_DAT_04cacab0);
        FUN_02132f7c(PTR_DAT_04cacab8);
        FUN_02132f7c(PTR_DAT_04cad0a8);
        FUN_02132f7c(PTR_DAT_04cacad0);
        FUN_02132f7c(PTR_DAT_04cabba0);
        FUN_02132f7c(PTR_DAT_04cad0b0);
        FUN_02132f7c(PTR_DAT_04cad0b8);
        FUN_02132f7c(PTR_DAT_04cacae8);
        FUN_02132f7c(PTR_DAT_04cacaf0);
        FUN_02132f7c(PTR_DAT_04cacaf8);
        FUN_02132f7c(PTR_DAT_04cac790);
        FUN_02132f7c(PTR_DAT_04caa858);
        FUN_02132f7c(PTR_DAT_04cad0c0);
        bRam0000000004f9b8e5 = 1;
      }
      lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Object___ctor_4870e5c(lVar12,0);
      puVar3 = PTR_DAT_04cabaa8;
      if (lVar12 != 0) {
        puVar14 = (undefined8 *)(lVar12 + 0x18);
        *puVar14 = uVar10;
        thunk_FUN_02134474(puVar14,uVar10);
        *(undefined8 *)(lVar12 + 0x30) = uVar9;
        thunk_FUN_02134474((undefined8 *)(lVar12 + 0x30),uVar9);
        fVar17 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
        lVar16 = *(long *)puVar3;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar16 = *(long *)puVar3;
        }
        puVar1 = PTR_DAT_04caba50;
        if (*(char *)(*(long *)(lVar16 + 0xb8) + 0x30) != '\0') {
          if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b88f == '\0') {
            FUN_02132f7c(PTR_DAT_04caba50);
            cRam0000000004f9b88f = '\x01';
          }
          puVar2 = PTR_DAT_04ca9ae8;
          lVar16 = *(long *)puVar1;
          if (*(int *)(lVar16 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar16 = *(long *)puVar1;
          }
          lVar7 = *(long *)puVar2;
          uVar9 = **(undefined8 **)(lVar16 + 0xb8);
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar7);
          }
          uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
          lVar16 = *(long *)puVar3;
          if ((uVar8 & 1) != 0) {
            if (*(int *)(lVar16 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar16 = *(long *)puVar3;
            }
            uVar9 = *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x40);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            if (cRam0000000004f9b88f == '\0') {
              FUN_02132f7c(PTR_DAT_04caba50);
              cRam0000000004f9b88f = '\x01';
            }
            lVar16 = *(long *)puVar1;
            if (*(int *)(lVar16 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar16 = *(long *)puVar1;
            }
            lVar7 = *(long *)puVar2;
            uVar10 = **(undefined8 **)(lVar16 + 0xb8);
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar7);
            }
            uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar9,uVar10,0);
            lVar16 = *(long *)puVar3;
            if ((uVar8 & 1) != 0) {
              if (*(int *)(lVar16 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar16 = *(long *)puVar3;
              }
              if (fVar17 - *(float *)(*(long *)(lVar16 + 0xb8) + 0x34) < 180.0) {
                uVar9 = System_String__Concat_46d2b84
                                  (*(undefined8 *)PTR_DAT_04cad0b8,*puVar14,
                                   *(undefined8 *)PTR_DAT_04cad0c0,0);
                if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
                }
                puVar3 = PTR_DAT_04ca9af8;
                uVar10 = 0;
                if ((bRam0000000004fa626c & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04ca9af8,0);
                  FUN_02132f7c(PTR_DAT_04ce7050);
                  bRam0000000004fa626c = 1;
                  uVar10 = extraout_x1;
                }
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  uVar10 = extraout_x1_00;
                }
                if (cRam0000000004f9d848 == '\0') {
                  FUN_02132f7c(PTR_DAT_04ca9af8,uVar10);
                  cRam0000000004f9d848 = '\x01';
                }
                lVar12 = *(long *)puVar3;
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar12 = *(long *)puVar3;
                }
                plVar15 = *(long **)(*(long *)(lVar12 + 0xb8) + 8);
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar12 = *plVar15;
                uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar8 != 0) {
                  piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04ce7050) {
                      puVar14 = (undefined8 *)(lVar12 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                      goto LAB_04457b18;
                    }
                    uVar8 = uVar8 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar8 != 0);
                }
                puVar14 = (undefined8 *)FUN_0216b7a4(plVar15,*(long *)PTR_DAT_04ce7050,3);
LAB_04457b18:
                    /* WARNING: Could not recover jumptable at 0x04457b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)*puVar14)(plVar15,2,uVar9,puVar14[1]);
                return;
              }
            }
          }
        }
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar16 = *(long *)puVar3;
        }
        lVar7 = *(long *)puVar1;
        lVar16 = *(long *)(lVar16 + 0xb8);
        iVar5 = *(int *)(lVar7 + 0xe4);
        *(undefined1 *)(lVar16 + 0x30) = 1;
        *(float *)(lVar16 + 0x34) = fVar17;
        if (iVar5 == 0) {
          thunk_FUN_0218fdac(lVar7);
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar16 = *(long *)puVar1;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar16 = *(long *)puVar1;
        }
        *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40) = **(undefined8 **)(lVar16 + 0xb8)
        ;
        thunk_FUN_02134474();
        puVar11 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        iVar5 = *(int *)(puVar11 + 7);
        plVar15 = (long *)*puVar11;
        *(int *)(puVar11 + 7) = iVar5 + 1;
        *(int *)(lVar12 + 0x20) = iVar5 + 1;
        puVar1 = PTR_DAT_04ca9c20;
        if (plVar15 != (long *)0x0) {
          lVar16 = *plVar15;
          uVar9 = *(undefined8 *)(lVar12 + 0x18);
          uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04cad098) {
                puVar11 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_02277104;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)FUN_0216b7a4(plVar15,*(long *)PTR_DAT_04cad098,0);
LAB_02277104:
          uVar6 = (*(code *)*puVar11)(plVar15,uVar9,puVar11[1]);
          plVar15 = (long *)FUN_02133068(*(undefined8 *)puVar1,10);
          puVar1 = PTR_DAT_04caa858;
          if (plVar15 != (long *)0x0) {
            if ((*(long *)PTR_DAT_04caa858 != 0) &&
               (lVar16 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04caa858,
                                            *(undefined8 *)(*plVar15 + 0x40)), lVar16 == 0)) {
LAB_022774c8:
              uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar9,0);
            }
            puVar2 = PTR_DAT_04cad0b0;
            if ((int)plVar15[3] != 0) {
              plVar15[4] = *(long *)puVar1;
              thunk_FUN_02134474();
              lVar16 = *(long *)puVar2;
              if ((lVar16 != 0) &&
                 (lVar16 = thunk_FUN_0216e7a0(lVar16,*(undefined8 *)(*plVar15 + 0x40)), lVar16 == 0)
                 ) goto LAB_022774c8;
              puVar1 = PTR_DAT_04cacaf8;
              if ((*(uint *)(plVar15 + 3) & 0xfffffffe) != 0) {
                plVar15[5] = *(long *)puVar2;
                thunk_FUN_02134474();
                lVar16 = *(long *)puVar1;
                if ((lVar16 != 0) &&
                   (lVar16 = thunk_FUN_0216e7a0(lVar16,*(undefined8 *)(*plVar15 + 0x40)),
                   lVar16 == 0)) goto LAB_022774c8;
                if (2 < *(uint *)(plVar15 + 3)) {
                  plVar15[6] = *(long *)puVar1;
                  thunk_FUN_02134474();
                  lVar16 = Dino_BusSand_App_Ads__RewardScene_2176a04(*puVar14);
                  if ((lVar16 != 0) &&
                     (lVar7 = thunk_FUN_0216e7a0(lVar16,*(undefined8 *)(*plVar15 + 0x40)),
                     lVar7 == 0)) goto LAB_022774c8;
                  puVar1 = PTR_DAT_04cacae8;
                  if ((*(uint *)(plVar15 + 3) & 0xfffffffc) != 0) {
                    plVar15[7] = lVar16;
                    thunk_FUN_02134474(plVar15 + 7,lVar16);
                    lVar16 = *(long *)puVar1;
                    if ((lVar16 != 0) &&
                       (lVar16 = thunk_FUN_0216e7a0(lVar16,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar16 == 0)) goto LAB_022774c8;
                    puVar2 = PTR_DAT_04cabba0;
                    if (4 < *(uint *)(plVar15 + 3)) {
                      plVar15[8] = *(long *)puVar1;
                      thunk_FUN_02134474();
                      lVar16 = *(long *)puVar2;
                      if ((lVar16 != 0) &&
                         (lVar16 = thunk_FUN_0216e7a0(lVar16,*(undefined8 *)(*plVar15 + 0x40)),
                         lVar16 == 0)) goto LAB_022774c8;
                      puVar1 = PTR_DAT_04cacaf0;
                      if (5 < *(uint *)(plVar15 + 3)) {
                        plVar15[9] = *(long *)puVar2;
                        thunk_FUN_02134474();
                        lVar16 = *(long *)puVar1;
                        if ((lVar16 != 0) &&
                           (lVar16 = thunk_FUN_0216e7a0(lVar16,*(undefined8 *)(*plVar15 + 0x40)),
                           lVar16 == 0)) goto LAB_022774c8;
                        puVar2 = PTR_DAT_04cacad0;
                        if (6 < *(uint *)(plVar15 + 3)) {
                          plVar15[10] = *(long *)puVar1;
                          thunk_FUN_02134474();
                          puVar1 = PTR_DAT_04ca9ac8;
                          uStack_54 = uVar6 & 1;
                          uVar9 = *(undefined8 *)puVar2;
                          lVar16 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_54)
                          ;
                          if ((lVar16 != 0) &&
                             (lVar7 = thunk_FUN_0216e7a0(lVar16,*(undefined8 *)(*plVar15 + 0x40)),
                             lVar7 == 0)) goto LAB_022774c8;
                          puVar2 = PTR_DAT_04cacab0;
                          if ((*(uint *)(plVar15 + 3) & 0xfffffff8) != 0) {
                            plVar15[0xb] = lVar16;
                            thunk_FUN_02134474(plVar15 + 0xb,lVar16);
                            lVar16 = *(long *)puVar2;
                            if ((lVar16 != 0) &&
                               (lVar16 = thunk_FUN_0216e7a0(lVar16,*(undefined8 *)(*plVar15 + 0x40))
                               , lVar16 == 0)) goto LAB_022774c8;
                            if (8 < *(uint *)(plVar15 + 3)) {
                              plVar15[0xc] = *(long *)puVar2;
                              thunk_FUN_02134474();
                              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                thunk_FUN_0218fdac();
                              }
                              uStack_58 = Dino_BusSand_App_Ads__get_SessionSeconds_2176048();
                              lVar16 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_58);
                              if ((lVar16 != 0) &&
                                 (lVar7 = thunk_FUN_0216e7a0(lVar16,*(undefined8 *)(*plVar15 + 0x40)
                                                            ), lVar7 == 0)) goto LAB_022774c8;
                              puVar1 = PTR_DAT_04cac5c0;
                              puVar3 = PTR_DAT_04cabaf8;
                              if (9 < *(uint *)(plVar15 + 3)) {
                                plVar15[0xd] = lVar16;
                                thunk_FUN_02134474(plVar15 + 0xd,lVar16);
                                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                  thunk_FUN_0218fdac();
                                }
                                puVar1 = PTR_DAT_04cac498;
                                Dino_BusSand_App_Analytics__Log_216d0c8(uVar9,plVar15);
                                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                  thunk_FUN_0218fdac();
                                }
                                puVar4 = PTR_DAT_04cad0a8;
                                puVar2 = PTR_DAT_04cacab8;
                                puVar3 = PTR_DAT_04cac450;
                                uVar9 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
                                lVar16 = *(long *)puVar1;
                                *(undefined8 *)(lVar12 + 0x28) = uVar9;
                                if (*(int *)(lVar16 + 0xe4) == 0) {
                                  thunk_FUN_0218fdac(lVar16);
                                }
                                puVar1 = PTR_DAT_04cac790;
                                Dino_BusSand_App_Meta_GameTracking__ExternalUi_221486c(1,0);
                                uVar9 = System_String__Concat_46d2b84
                                                  (*(undefined8 *)puVar4,*puVar14,
                                                   *(undefined8 *)puVar2,0);
                                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                  thunk_FUN_0218fdac(*(long *)puVar3);
                                }
                                Dino_BusSand_App_CrashContext__Step_216db44
                                          (*(undefined8 *)puVar1,uVar9);
                                *(undefined4 *)(lVar12 + 0x10) = 0;
                                Dino_BusSand_App_Ads___c__DisplayClass35_0___ShowRewarded_g__Request_0_21774e0
                                          (lVar12);
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
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

