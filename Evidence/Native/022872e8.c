/* IL2CPP: Dino.BusSand.App.UI.ActivityContinuePanel$$OnAd
void Dino_BusSand_App_UI_ActivityContinuePanel__OnAd (Dino_BusSand_App_UI_ActivityContinuePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ActivityContinuePanel$$OnAd
   void Dino_BusSand_App_UI_ActivityContinuePanel__OnAd
   (Dino_BusSand_App_UI_ActivityContinuePanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ActivityContinuePanel__OnAd_21872e8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar12;
  undefined8 *puVar13;
  int *piVar14;
  undefined8 *puVar15;
  long *plVar16;
  float fVar17;
  undefined4 uStack_58;
  uint uStack_54;
  
  if ((bRam0000000004f9b958 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420);
    FUN_02132f7c(PTR_DAT_04cada28);
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cac740);
    bRam0000000004f9b958 = 1;
  }
  if ((*(char *)(param_1 + 0x40) != '\0') || (*(char *)(param_1 + 0x2c) != '\0')) {
    return;
  }
  uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
  System_Action_bool____ctor_35ee0e8(uVar10,param_1,*(undefined8 *)PTR_DAT_04cada28,0);
                    /* catch() { ... } // from try @ 022873dc with catch @ 02287388 */
  if (*(int *)(*(long *)PTR_DAT_04cabaa8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cad0a0;
  uVar11 = *(undefined8 *)PTR_DAT_04cac740;
  if ((bRam0000000004f9b8e5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8,uVar10,0);
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
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Object___ctor_4870e5c(lVar7,0);
  puVar4 = PTR_DAT_04cabaa8;
  if (lVar7 != 0) {
    puVar15 = (undefined8 *)(lVar7 + 0x18);
    *puVar15 = uVar11;
    thunk_FUN_02134474(puVar15,uVar11);
    *(undefined8 *)(lVar7 + 0x30) = uVar10;
    thunk_FUN_02134474((undefined8 *)(lVar7 + 0x30),uVar10);
    fVar17 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar4;
    }
    puVar2 = PTR_DAT_04caba50;
    if (*(char *)(*(long *)(lVar8 + 0xb8) + 0x30) != '\0') {
      if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      puVar3 = PTR_DAT_04ca9ae8;
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar2;
      }
      lVar12 = *(long *)puVar3;
      uVar10 = **(undefined8 **)(lVar8 + 0xb8);
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar12);
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
      lVar8 = *(long *)puVar4;
      if ((uVar9 & 1) != 0) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar4;
        }
        uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x40);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar8 = *(long *)puVar2;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar2;
        }
        lVar12 = *(long *)puVar3;
        uVar11 = **(undefined8 **)(lVar8 + 0xb8);
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar12);
        }
        uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar10,uVar11,0);
        lVar8 = *(long *)puVar4;
        if ((uVar9 & 1) != 0) {
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar8 = *(long *)puVar4;
          }
          if (fVar17 - *(float *)(*(long *)(lVar8 + 0xb8) + 0x34) < 180.0) {
            uVar10 = System_String__Concat_46d2b84
                               (*(undefined8 *)PTR_DAT_04cad0b8,*puVar15,
                                *(undefined8 *)PTR_DAT_04cad0c0,0);
            if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
            }
            puVar4 = PTR_DAT_04ca9af8;
            uVar11 = 0;
            if ((bRam0000000004fa626c & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04ca9af8,0);
              FUN_02132f7c(PTR_DAT_04ce7050);
              bRam0000000004fa626c = 1;
              uVar11 = extraout_x1;
            }
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              uVar11 = extraout_x1_00;
            }
            if (cRam0000000004f9d848 == '\0') {
              FUN_02132f7c(PTR_DAT_04ca9af8,uVar11);
              cRam0000000004f9d848 = '\x01';
            }
            lVar7 = *(long *)puVar4;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar7 = *(long *)puVar4;
            }
            plVar16 = *(long **)(*(long *)(lVar7 + 0xb8) + 8);
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar7 = *plVar16;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04ce7050) {
                  puVar15 = (undefined8 *)(lVar7 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                  goto LAB_04457b18;
                }
                uVar9 = uVar9 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar9 != 0);
            }
            puVar15 = (undefined8 *)FUN_0216b7a4(plVar16,*(long *)PTR_DAT_04ce7050,3);
LAB_04457b18:
                    /* WARNING: Could not recover jumptable at 0x04457b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar15)(plVar16,2,uVar10,puVar15[1]);
            return;
          }
        }
      }
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar4;
    }
    lVar12 = *(long *)puVar2;
    lVar8 = *(long *)(lVar8 + 0xb8);
    iVar1 = *(int *)(lVar12 + 0xe4);
    *(undefined1 *)(lVar8 + 0x30) = 1;
    *(float *)(lVar8 + 0x34) = fVar17;
    if (iVar1 == 0) {
      thunk_FUN_0218fdac(lVar12);
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar2;
    }
    *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40) = **(undefined8 **)(lVar8 + 0xb8);
    thunk_FUN_02134474();
    puVar13 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    iVar1 = *(int *)(puVar13 + 7);
    plVar16 = (long *)*puVar13;
    *(int *)(puVar13 + 7) = iVar1 + 1;
    *(int *)(lVar7 + 0x20) = iVar1 + 1;
    puVar2 = PTR_DAT_04ca9c20;
    if (plVar16 != (long *)0x0) {
      lVar8 = *plVar16;
      uVar10 = *(undefined8 *)(lVar7 + 0x18);
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04cad098) {
            puVar13 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02277104;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar13 = (undefined8 *)FUN_0216b7a4(plVar16,*(long *)PTR_DAT_04cad098,0);
LAB_02277104:
      uVar6 = (*(code *)*puVar13)(plVar16,uVar10,puVar13[1]);
      plVar16 = (long *)FUN_02133068(*(undefined8 *)puVar2,10);
      puVar2 = PTR_DAT_04caa858;
      if (plVar16 != (long *)0x0) {
        if ((*(long *)PTR_DAT_04caa858 != 0) &&
           (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04caa858,*(undefined8 *)(*plVar16 + 0x40)),
           lVar8 == 0)) {
LAB_022774c8:
          uVar10 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar10,0);
        }
        puVar3 = PTR_DAT_04cad0b0;
        if ((int)plVar16[3] != 0) {
          plVar16[4] = *(long *)puVar2;
          thunk_FUN_02134474();
          lVar8 = *(long *)puVar3;
          if ((lVar8 != 0) &&
             (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar16 + 0x40)), lVar8 == 0))
          goto LAB_022774c8;
          puVar2 = PTR_DAT_04cacaf8;
          if ((*(uint *)(plVar16 + 3) & 0xfffffffe) != 0) {
            plVar16[5] = *(long *)puVar3;
            thunk_FUN_02134474();
            lVar8 = *(long *)puVar2;
            if ((lVar8 != 0) &&
               (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar16 + 0x40)), lVar8 == 0))
            goto LAB_022774c8;
            if (2 < *(uint *)(plVar16 + 3)) {
              plVar16[6] = *(long *)puVar2;
              thunk_FUN_02134474();
              lVar8 = Dino_BusSand_App_Ads__RewardScene_2176a04(*puVar15);
              if ((lVar8 != 0) &&
                 (lVar12 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0))
              goto LAB_022774c8;
              puVar2 = PTR_DAT_04cacae8;
              if ((*(uint *)(plVar16 + 3) & 0xfffffffc) != 0) {
                plVar16[7] = lVar8;
                thunk_FUN_02134474(plVar16 + 7,lVar8);
                lVar8 = *(long *)puVar2;
                if ((lVar8 != 0) &&
                   (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar16 + 0x40)), lVar8 == 0))
                goto LAB_022774c8;
                puVar3 = PTR_DAT_04cabba0;
                if (4 < *(uint *)(plVar16 + 3)) {
                  plVar16[8] = *(long *)puVar2;
                  thunk_FUN_02134474();
                  lVar8 = *(long *)puVar3;
                  if ((lVar8 != 0) &&
                     (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar16 + 0x40)), lVar8 == 0
                     )) goto LAB_022774c8;
                  puVar2 = PTR_DAT_04cacaf0;
                  if (5 < *(uint *)(plVar16 + 3)) {
                    plVar16[9] = *(long *)puVar3;
                    thunk_FUN_02134474();
                    lVar8 = *(long *)puVar2;
                    if ((lVar8 != 0) &&
                       (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar16 + 0x40)),
                       lVar8 == 0)) goto LAB_022774c8;
                    puVar3 = PTR_DAT_04cacad0;
                    if (6 < *(uint *)(plVar16 + 3)) {
                      plVar16[10] = *(long *)puVar2;
                      thunk_FUN_02134474();
                      puVar2 = PTR_DAT_04ca9ac8;
                      uStack_54 = uVar6 & 1;
                      uVar10 = *(undefined8 *)puVar3;
                      lVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_54);
                      if ((lVar8 != 0) &&
                         (lVar12 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar16 + 0x40)),
                         lVar12 == 0)) goto LAB_022774c8;
                      puVar3 = PTR_DAT_04cacab0;
                      if ((*(uint *)(plVar16 + 3) & 0xfffffff8) != 0) {
                        plVar16[0xb] = lVar8;
                        thunk_FUN_02134474(plVar16 + 0xb,lVar8);
                        lVar8 = *(long *)puVar3;
                        if ((lVar8 != 0) &&
                           (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar16 + 0x40)),
                           lVar8 == 0)) goto LAB_022774c8;
                        if (8 < *(uint *)(plVar16 + 3)) {
                          plVar16[0xc] = *(long *)puVar3;
                          thunk_FUN_02134474();
                          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uStack_58 = Dino_BusSand_App_Ads__get_SessionSeconds_2176048();
                          lVar8 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_58);
                          if ((lVar8 != 0) &&
                             (lVar12 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar16 + 0x40)),
                             lVar12 == 0)) goto LAB_022774c8;
                          puVar2 = PTR_DAT_04cac5c0;
                          puVar4 = PTR_DAT_04cabaf8;
                          if (9 < *(uint *)(plVar16 + 3)) {
                            plVar16[0xd] = lVar8;
                            thunk_FUN_02134474(plVar16 + 0xd,lVar8);
                            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            puVar2 = PTR_DAT_04cac498;
                            Dino_BusSand_App_Analytics__Log_216d0c8(uVar10,plVar16);
                            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            puVar5 = PTR_DAT_04cad0a8;
                            puVar3 = PTR_DAT_04cacab8;
                            puVar4 = PTR_DAT_04cac450;
                            uVar10 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
                            lVar8 = *(long *)puVar2;
                            *(undefined8 *)(lVar7 + 0x28) = uVar10;
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(lVar8);
                            }
                            puVar2 = PTR_DAT_04cac790;
                            Dino_BusSand_App_Meta_GameTracking__ExternalUi_221486c(1,0);
                            uVar10 = System_String__Concat_46d2b84
                                               (*(undefined8 *)puVar5,*puVar15,*(undefined8 *)puVar3
                                                ,0);
                            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(*(long *)puVar4);
                            }
                            Dino_BusSand_App_CrashContext__Step_216db44
                                      (*(undefined8 *)puVar2,uVar10);
                            *(undefined4 *)(lVar7 + 0x10) = 0;
                            Dino_BusSand_App_Ads___c__DisplayClass35_0___ShowRewarded_g__Request_0_21774e0
                                      (lVar7);
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

