/* IL2CPP: Dino.BusSand.App.UI.RewardPopup$$OnAd
void Dino_BusSand_App_UI_RewardPopup__OnAd (Dino_BusSand_App_UI_RewardPopup_o* __this, int32_t times, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RewardPopup$$OnAd
   void Dino_BusSand_App_UI_RewardPopup__OnAd (Dino_BusSand_App_UI_RewardPopup_o* __this, int32_t
   times, const MethodInfo* method); */

void Dino_BusSand_App_UI_RewardPopup__OnAd_23252dc(long *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar13;
  undefined8 *puVar14;
  int *piVar15;
  undefined8 *puVar16;
  long *plVar17;
  float fVar18;
  undefined4 uStack_58;
  uint uStack_54;
  
  puVar5 = PTR_DAT_04cb8c90;
  if ((bRam0000000004f9c5da & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420);
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cb8c98);
    FUN_02132f7c(PTR_DAT_04cb8c90);
    bRam0000000004f9c5da = 1;
  }
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Object___ctor_4870e5c(lVar10,0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(long *)(lVar10 + 0x10) = (long)param_1;
  thunk_FUN_02134474((long *)(lVar10 + 0x10),param_1);
  cVar2 = *(char *)((long)param_1 + 0x42);
  *(undefined4 *)(lVar10 + 0x18) = param_2;
  if ((((cVar2 == '\0') || ((char)param_1[8] != '\0')) || (*(char *)((long)param_1 + 0x41) != '\0'))
     || (*(char *)((long)param_1 + 0x2c) != '\0')) {
    return;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  uVar11 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
  uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
  System_Action_bool____ctor_35ee0e8(uVar12,lVar10,*(undefined8 *)PTR_DAT_04cb8c98,0);
  if (*(int *)(*(long *)PTR_DAT_04cabaa8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar5 = PTR_DAT_04cad0a0;
  if ((bRam0000000004f9b8e5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8,uVar12,0);
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
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Object___ctor_4870e5c(lVar10,0);
  puVar5 = PTR_DAT_04cabaa8;
  if (lVar10 != 0) {
    puVar16 = (undefined8 *)(lVar10 + 0x18);
    *puVar16 = uVar11;
    thunk_FUN_02134474(puVar16,uVar11);
    *(undefined8 *)(lVar10 + 0x30) = uVar12;
    thunk_FUN_02134474((undefined8 *)(lVar10 + 0x30),uVar12);
    fVar18 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    lVar8 = *(long *)puVar5;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar5;
    }
    puVar3 = PTR_DAT_04caba50;
    if (*(char *)(*(long *)(lVar8 + 0xb8) + 0x30) != '\0') {
      if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      puVar4 = PTR_DAT_04ca9ae8;
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar3;
      }
      lVar13 = *(long *)puVar4;
      uVar11 = **(undefined8 **)(lVar8 + 0xb8);
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar13);
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
      lVar8 = *(long *)puVar5;
      if ((uVar9 & 1) != 0) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar5;
        }
        uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x40);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar8 = *(long *)puVar3;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar3;
        }
        lVar13 = *(long *)puVar4;
        uVar12 = **(undefined8 **)(lVar8 + 0xb8);
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar13);
        }
        uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar11,uVar12,0);
        lVar8 = *(long *)puVar5;
        if ((uVar9 & 1) != 0) {
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar8 = *(long *)puVar5;
          }
          if (fVar18 - *(float *)(*(long *)(lVar8 + 0xb8) + 0x34) < 180.0) {
            uVar11 = System_String__Concat_46d2b84
                               (*(undefined8 *)PTR_DAT_04cad0b8,*puVar16,
                                *(undefined8 *)PTR_DAT_04cad0c0,0);
            if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
            }
            puVar5 = PTR_DAT_04ca9af8;
            uVar12 = 0;
            if ((bRam0000000004fa626c & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04ca9af8,0);
              FUN_02132f7c(PTR_DAT_04ce7050);
              bRam0000000004fa626c = 1;
              uVar12 = extraout_x1;
            }
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              uVar12 = extraout_x1_00;
            }
            if (cRam0000000004f9d848 == '\0') {
              FUN_02132f7c(PTR_DAT_04ca9af8,uVar12);
              cRam0000000004f9d848 = '\x01';
            }
            lVar10 = *(long *)puVar5;
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar10 = *(long *)puVar5;
            }
            plVar17 = *(long **)(*(long *)(lVar10 + 0xb8) + 8);
            if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar10 = *plVar17;
            uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar9 != 0) {
              piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04ce7050) {
                  puVar16 = (undefined8 *)(lVar10 + (long)(*piVar15 + 3) * 0x10 + 0x138);
                  goto LAB_04457b18;
                }
                uVar9 = uVar9 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar9 != 0);
            }
            puVar16 = (undefined8 *)FUN_0216b7a4(plVar17,*(long *)PTR_DAT_04ce7050,3);
LAB_04457b18:
                    /* WARNING: Could not recover jumptable at 0x04457b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar16)(plVar17,2,uVar11,puVar16[1]);
            return;
          }
        }
      }
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar5;
    }
    lVar13 = *(long *)puVar3;
    lVar8 = *(long *)(lVar8 + 0xb8);
    iVar1 = *(int *)(lVar13 + 0xe4);
    *(undefined1 *)(lVar8 + 0x30) = 1;
    *(float *)(lVar8 + 0x34) = fVar18;
    if (iVar1 == 0) {
      thunk_FUN_0218fdac(lVar13);
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar3;
    }
    *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40) = **(undefined8 **)(lVar8 + 0xb8);
    thunk_FUN_02134474();
    puVar14 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
    iVar1 = *(int *)(puVar14 + 7);
    plVar17 = (long *)*puVar14;
    *(int *)(puVar14 + 7) = iVar1 + 1;
    *(int *)(lVar10 + 0x20) = iVar1 + 1;
    puVar3 = PTR_DAT_04ca9c20;
    if (plVar17 != (long *)0x0) {
      lVar8 = *plVar17;
      uVar11 = *(undefined8 *)(lVar10 + 0x18);
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04cad098) {
            puVar14 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_02277104;
          }
          uVar9 = uVar9 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar9 != 0);
      }
      puVar14 = (undefined8 *)FUN_0216b7a4(plVar17,*(long *)PTR_DAT_04cad098,0);
LAB_02277104:
      uVar7 = (*(code *)*puVar14)(plVar17,uVar11,puVar14[1]);
      plVar17 = (long *)FUN_02133068(*(undefined8 *)puVar3,10);
      puVar3 = PTR_DAT_04caa858;
      if (plVar17 != (long *)0x0) {
        if ((*(long *)PTR_DAT_04caa858 != 0) &&
           (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04caa858,*(undefined8 *)(*plVar17 + 0x40)),
           lVar8 == 0)) {
LAB_022774c8:
          uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar11,0);
        }
        puVar4 = PTR_DAT_04cad0b0;
        if ((int)plVar17[3] != 0) {
          plVar17[4] = *(long *)puVar3;
          thunk_FUN_02134474();
          lVar8 = *(long *)puVar4;
          if ((lVar8 != 0) &&
             (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar17 + 0x40)), lVar8 == 0))
          goto LAB_022774c8;
          puVar3 = PTR_DAT_04cacaf8;
          if ((*(uint *)(plVar17 + 3) & 0xfffffffe) != 0) {
            plVar17[5] = *(long *)puVar4;
            thunk_FUN_02134474();
            lVar8 = *(long *)puVar3;
            if ((lVar8 != 0) &&
               (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar17 + 0x40)), lVar8 == 0))
            goto LAB_022774c8;
            if (2 < *(uint *)(plVar17 + 3)) {
              plVar17[6] = *(long *)puVar3;
              thunk_FUN_02134474();
              lVar8 = Dino_BusSand_App_Ads__RewardScene_2176a04(*puVar16);
              if ((lVar8 != 0) &&
                 (lVar13 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar17 + 0x40)), lVar13 == 0))
              goto LAB_022774c8;
              puVar3 = PTR_DAT_04cacae8;
              if ((*(uint *)(plVar17 + 3) & 0xfffffffc) != 0) {
                plVar17[7] = lVar8;
                thunk_FUN_02134474(plVar17 + 7,lVar8);
                lVar8 = *(long *)puVar3;
                if ((lVar8 != 0) &&
                   (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar17 + 0x40)), lVar8 == 0))
                goto LAB_022774c8;
                puVar4 = PTR_DAT_04cabba0;
                if (4 < *(uint *)(plVar17 + 3)) {
                  plVar17[8] = *(long *)puVar3;
                  thunk_FUN_02134474();
                  lVar8 = *(long *)puVar4;
                  if ((lVar8 != 0) &&
                     (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar17 + 0x40)), lVar8 == 0
                     )) goto LAB_022774c8;
                  puVar3 = PTR_DAT_04cacaf0;
                  if (5 < *(uint *)(plVar17 + 3)) {
                    plVar17[9] = *(long *)puVar4;
                    thunk_FUN_02134474();
                    lVar8 = *(long *)puVar3;
                    if ((lVar8 != 0) &&
                       (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar17 + 0x40)),
                       lVar8 == 0)) goto LAB_022774c8;
                    puVar4 = PTR_DAT_04cacad0;
                    if (6 < *(uint *)(plVar17 + 3)) {
                      plVar17[10] = *(long *)puVar3;
                      thunk_FUN_02134474();
                      puVar3 = PTR_DAT_04ca9ac8;
                      uStack_54 = uVar7 & 1;
                      uVar11 = *(undefined8 *)puVar4;
                      lVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_54);
                      if ((lVar8 != 0) &&
                         (lVar13 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar17 + 0x40)),
                         lVar13 == 0)) goto LAB_022774c8;
                      puVar4 = PTR_DAT_04cacab0;
                      if ((*(uint *)(plVar17 + 3) & 0xfffffff8) != 0) {
                        plVar17[0xb] = lVar8;
                        thunk_FUN_02134474(plVar17 + 0xb,lVar8);
                        lVar8 = *(long *)puVar4;
                        if ((lVar8 != 0) &&
                           (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar17 + 0x40)),
                           lVar8 == 0)) goto LAB_022774c8;
                        if (8 < *(uint *)(plVar17 + 3)) {
                          plVar17[0xc] = *(long *)puVar4;
                          thunk_FUN_02134474();
                          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uStack_58 = Dino_BusSand_App_Ads__get_SessionSeconds_2176048();
                          lVar8 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),&uStack_58);
                          if ((lVar8 != 0) &&
                             (lVar13 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar17 + 0x40)),
                             lVar13 == 0)) goto LAB_022774c8;
                          puVar3 = PTR_DAT_04cac5c0;
                          puVar5 = PTR_DAT_04cabaf8;
                          if (9 < *(uint *)(plVar17 + 3)) {
                            plVar17[0xd] = lVar8;
                            thunk_FUN_02134474(plVar17 + 0xd,lVar8);
                            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            puVar3 = PTR_DAT_04cac498;
                            Dino_BusSand_App_Analytics__Log_216d0c8(uVar11,plVar17);
                            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            puVar6 = PTR_DAT_04cad0a8;
                            puVar4 = PTR_DAT_04cacab8;
                            puVar5 = PTR_DAT_04cac450;
                            uVar11 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
                            lVar8 = *(long *)puVar3;
                            *(undefined8 *)(lVar10 + 0x28) = uVar11;
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(lVar8);
                            }
                            puVar3 = PTR_DAT_04cac790;
                            Dino_BusSand_App_Meta_GameTracking__ExternalUi_221486c(1,0);
                            uVar11 = System_String__Concat_46d2b84
                                               (*(undefined8 *)puVar6,*puVar16,*(undefined8 *)puVar4
                                                ,0);
                            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(*(long *)puVar5);
                            }
                            Dino_BusSand_App_CrashContext__Step_216db44
                                      (*(undefined8 *)puVar3,uVar11);
                            *(undefined4 *)(lVar10 + 0x10) = 0;
                            Dino_BusSand_App_Ads___c__DisplayClass35_0___ShowRewarded_g__Request_0_21774e0
                                      (lVar10);
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

