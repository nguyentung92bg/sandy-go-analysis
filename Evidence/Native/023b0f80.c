/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel$$OnAdClick
void Dino_BusSand_App_UI_PowerBuyPanel__OnAdClick (Dino_BusSand_App_UI_PowerBuyPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel$$OnAdClick
   void Dino_BusSand_App_UI_PowerBuyPanel__OnAdClick (Dino_BusSand_App_UI_PowerBuyPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_PowerBuyPanel__OnAdClick_22b0f80(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  int *piVar19;
  undefined8 *puVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  uint uStack_54;
  
  if ((bRam0000000004f9c2cd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420);
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb60b8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cad078);
    FUN_02132f7c(PTR_DAT_04cb60a8);
    FUN_02132f7c(PTR_DAT_04cac888);
    FUN_02132f7c(PTR_DAT_04cac790);
    FUN_02132f7c(PTR_DAT_04cb60b0);
    bRam0000000004f9c2cd = 1;
  }
  puVar2 = PTR_DAT_04cac7b8;
  if ((*(char *)(param_1 + 0x2c) != '\0') || (*(char *)(param_1 + 0x44) != '\0')) {
    return;
  }
  lVar9 = *(long *)PTR_DAT_04cac7b8;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar2;
  }
  lVar9 = **(long **)(lVar9 + 0xb8);
  if (lVar9 == 0) {
LAB_023b1328:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar10 = (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
  puVar2 = PTR_DAT_04caba50;
  if ((uVar10 & 1) != 0) {
    plVar11 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
    puVar2 = PTR_DAT_04cb60a8;
    if (plVar11 != (long *)0x0) {
      if ((*(long *)PTR_DAT_04cb60a8 != 0) &&
         (lVar9 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb60a8,*(undefined8 *)(*plVar11 + 0x40)),
         lVar9 == 0)) {
LAB_023b1330:
        uVar12 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar12,0);
      }
      if ((int)plVar11[3] != 0) {
        plVar11[4] = *(long *)puVar2;
        thunk_FUN_02134474();
        puVar2 = PTR_DAT_04cac790;
        if ((*(long *)PTR_DAT_04cac790 != 0) &&
           (lVar9 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac790,*(undefined8 *)(*plVar11 + 0x40)),
           lVar9 == 0)) goto LAB_023b1330;
        if ((*(uint *)(plVar11 + 3) & 0xfffffffe) != 0) {
          plVar11[5] = *(long *)puVar2;
          thunk_FUN_02134474();
          if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb60b0,plVar11,0);
          if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          iVar6 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0(0);
          iVar7 = Dino_BusSand_App_Meta_Profile__get_Hearts_22724e0(0);
          puVar2 = PTR_DAT_04cac420;
          if (iVar6 - iVar7 < 1) {
            plVar11 = (long *)(param_1 + 0x38);
            lVar9 = *plVar11;
            *plVar11 = 0;
            thunk_FUN_02134474(plVar11,0);
            Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
            if (lVar9 == 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x023b083c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar9 + 0x18))
                      (*(undefined8 *)(lVar9 + 0x40),1,*(undefined8 *)(lVar9 + 0x28));
            return;
          }
          *(undefined1 *)(param_1 + 0x44) = 1;
          uVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
          System_Action_bool____ctor_35ee0e8(uVar12,param_1,*(undefined8 *)PTR_DAT_04cb60b8,0);
          if (*(int *)(*(long *)PTR_DAT_04cabaa8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          puVar2 = PTR_DAT_04cad0a0;
          uVar13 = *(undefined8 *)PTR_DAT_04cad078;
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
          lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
          System_Object___ctor_4870e5c(lVar9,0);
          puVar2 = PTR_DAT_04cabaa8;
          if (lVar9 != 0) {
            puVar20 = (undefined8 *)(lVar9 + 0x18);
            *puVar20 = uVar13;
            thunk_FUN_02134474(puVar20,uVar13);
            *(undefined8 *)(lVar9 + 0x30) = uVar12;
            thunk_FUN_02134474((undefined8 *)(lVar9 + 0x30),uVar12);
            fVar21 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
            lVar8 = *(long *)puVar2;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar8 = *(long *)puVar2;
            }
            puVar1 = PTR_DAT_04caba50;
            if (*(char *)(*(long *)(lVar8 + 0xb8) + 0x30) != '\0') {
              if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (cRam0000000004f9b88f == '\0') {
                FUN_02132f7c(PTR_DAT_04caba50);
                cRam0000000004f9b88f = '\x01';
              }
              puVar3 = PTR_DAT_04ca9ae8;
              lVar8 = *(long *)puVar1;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar8 = *(long *)puVar1;
              }
              lVar16 = *(long *)puVar3;
              uVar12 = **(undefined8 **)(lVar8 + 0xb8);
              if (*(int *)(lVar16 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar16);
              }
              uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
              lVar8 = *(long *)puVar2;
              if ((uVar10 & 1) != 0) {
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar8 = *(long *)puVar2;
                }
                uVar12 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x40);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar1);
                }
                if (cRam0000000004f9b88f == '\0') {
                  FUN_02132f7c(PTR_DAT_04caba50);
                  cRam0000000004f9b88f = '\x01';
                }
                lVar8 = *(long *)puVar1;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar8 = *(long *)puVar1;
                }
                lVar16 = *(long *)puVar3;
                uVar13 = **(undefined8 **)(lVar8 + 0xb8);
                if (*(int *)(lVar16 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar16);
                }
                uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar12,uVar13,0);
                lVar8 = *(long *)puVar2;
                if ((uVar10 & 1) != 0) {
                  if (*(int *)(lVar8 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar8 = *(long *)puVar2;
                  }
                  if (fVar21 - *(float *)(*(long *)(lVar8 + 0xb8) + 0x34) < 180.0) {
                    uVar12 = System_String__Concat_46d2b84
                                       (*(undefined8 *)PTR_DAT_04cad0b8,*puVar20,
                                        *(undefined8 *)PTR_DAT_04cad0c0,0);
                    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
                    }
                    puVar2 = PTR_DAT_04ca9af8;
                    uVar13 = 0;
                    if ((bRam0000000004fa626c & 1) == 0) {
                      FUN_02132f7c(PTR_DAT_04ca9af8,0);
                      FUN_02132f7c(PTR_DAT_04ce7050);
                      bRam0000000004fa626c = 1;
                      uVar13 = extraout_x1;
                    }
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      uVar13 = extraout_x1_00;
                    }
                    if (cRam0000000004f9d848 == '\0') {
                      FUN_02132f7c(PTR_DAT_04ca9af8,uVar13);
                      cRam0000000004f9d848 = '\x01';
                    }
                    lVar9 = *(long *)puVar2;
                    if (*(int *)(lVar9 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar9 = *(long *)puVar2;
                    }
                    plVar11 = *(long **)(*(long *)(lVar9 + 0xb8) + 8);
                    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    lVar9 = *plVar11;
                    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar10 != 0) {
                      piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_04ce7050) {
                          puVar20 = (undefined8 *)(lVar9 + (long)(*piVar19 + 3) * 0x10 + 0x138);
                          goto LAB_04457b18;
                        }
                        uVar10 = uVar10 - 1;
                        piVar19 = piVar19 + 4;
                      } while (uVar10 != 0);
                    }
                    puVar20 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)PTR_DAT_04ce7050,3);
LAB_04457b18:
                    /* WARNING: Could not recover jumptable at 0x04457b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)*puVar20)(plVar11,2,uVar12,puVar20[1]);
                    return;
                  }
                }
              }
            }
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar8 = *(long *)puVar2;
            }
            lVar16 = *(long *)puVar1;
            lVar8 = *(long *)(lVar8 + 0xb8);
            iVar6 = *(int *)(lVar16 + 0xe4);
            *(undefined1 *)(lVar8 + 0x30) = 1;
            *(float *)(lVar8 + 0x34) = fVar21;
            if (iVar6 == 0) {
              thunk_FUN_0218fdac(lVar16);
            }
            if (cRam0000000004f9b88f == '\0') {
              FUN_02132f7c(PTR_DAT_04caba50);
              cRam0000000004f9b88f = '\x01';
            }
            lVar8 = *(long *)puVar1;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar8 = *(long *)puVar1;
            }
            *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40) =
                 **(undefined8 **)(lVar8 + 0xb8);
            thunk_FUN_02134474();
            puVar17 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
            iVar6 = *(int *)(puVar17 + 7);
            plVar11 = (long *)*puVar17;
            *(int *)(puVar17 + 7) = iVar6 + 1;
            *(int *)(lVar9 + 0x20) = iVar6 + 1;
            puVar1 = PTR_DAT_04ca9c20;
            if (plVar11 != (long *)0x0) {
              lVar8 = *plVar11;
              uVar12 = *(undefined8 *)(lVar9 + 0x18);
              uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar10 != 0) {
                piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_04cad098) {
                    puVar17 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
                    goto LAB_02277104;
                  }
                  uVar10 = uVar10 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar10 != 0);
              }
              puVar17 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)PTR_DAT_04cad098,0);
LAB_02277104:
              uVar5 = (*(code *)*puVar17)(plVar11,uVar12,puVar17[1]);
              plVar11 = (long *)FUN_02133068(*(undefined8 *)puVar1,10);
              puVar1 = PTR_DAT_04caa858;
              if (plVar11 != (long *)0x0) {
                if ((*(long *)PTR_DAT_04caa858 != 0) &&
                   (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04caa858,
                                               *(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0)) {
LAB_022774c8:
                  uVar12 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                  FUN_021330e8(uVar12,0);
                }
                puVar3 = PTR_DAT_04cad0b0;
                if ((int)plVar11[3] != 0) {
                  plVar11[4] = *(long *)puVar1;
                  thunk_FUN_02134474();
                  lVar8 = *(long *)puVar3;
                  if ((lVar8 != 0) &&
                     (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0
                     )) goto LAB_022774c8;
                  puVar1 = PTR_DAT_04cacaf8;
                  if ((*(uint *)(plVar11 + 3) & 0xfffffffe) != 0) {
                    plVar11[5] = *(long *)puVar3;
                    thunk_FUN_02134474();
                    lVar8 = *(long *)puVar1;
                    if ((lVar8 != 0) &&
                       (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar11 + 0x40)),
                       lVar8 == 0)) goto LAB_022774c8;
                    if (2 < *(uint *)(plVar11 + 3)) {
                      plVar11[6] = *(long *)puVar1;
                      thunk_FUN_02134474();
                      lVar8 = Dino_BusSand_App_Ads__RewardScene_2176a04(*puVar20);
                      if ((lVar8 != 0) &&
                         (lVar16 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar11 + 0x40)),
                         lVar16 == 0)) goto LAB_022774c8;
                      puVar1 = PTR_DAT_04cacae8;
                      if ((*(uint *)(plVar11 + 3) & 0xfffffffc) != 0) {
                        plVar11[7] = lVar8;
                        thunk_FUN_02134474(plVar11 + 7,lVar8);
                        lVar8 = *(long *)puVar1;
                        if ((lVar8 != 0) &&
                           (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar11 + 0x40)),
                           lVar8 == 0)) goto LAB_022774c8;
                        puVar3 = PTR_DAT_04cabba0;
                        if (4 < *(uint *)(plVar11 + 3)) {
                          plVar11[8] = *(long *)puVar1;
                          thunk_FUN_02134474();
                          lVar8 = *(long *)puVar3;
                          if ((lVar8 != 0) &&
                             (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar11 + 0x40)),
                             lVar8 == 0)) goto LAB_022774c8;
                          puVar1 = PTR_DAT_04cacaf0;
                          if (5 < *(uint *)(plVar11 + 3)) {
                            plVar11[9] = *(long *)puVar3;
                            thunk_FUN_02134474();
                            lVar8 = *(long *)puVar1;
                            if ((lVar8 != 0) &&
                               (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar11 + 0x40)),
                               lVar8 == 0)) goto LAB_022774c8;
                            puVar3 = PTR_DAT_04cacad0;
                            if (6 < *(uint *)(plVar11 + 3)) {
                              plVar11[10] = *(long *)puVar1;
                              thunk_FUN_02134474();
                              puVar1 = PTR_DAT_04ca9ac8;
                              uStack_54 = uVar5 & 1;
                              uVar12 = *(undefined8 *)puVar3;
                              lVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),
                                                   &uStack_54);
                              if ((lVar8 != 0) &&
                                 (lVar16 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar11 + 0x40)
                                                             ), lVar16 == 0)) goto LAB_022774c8;
                              puVar3 = PTR_DAT_04cacab0;
                              if ((*(uint *)(plVar11 + 3) & 0xfffffff8) != 0) {
                                plVar11[0xb] = lVar8;
                                thunk_FUN_02134474(plVar11 + 0xb,lVar8);
                                lVar8 = *(long *)puVar3;
                                if ((lVar8 != 0) &&
                                   (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)
                                                                      (*plVar11 + 0x40)), lVar8 == 0
                                   )) goto LAB_022774c8;
                                if (8 < *(uint *)(plVar11 + 3)) {
                                  plVar11[0xc] = *(long *)puVar3;
                                  thunk_FUN_02134474();
                                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                    thunk_FUN_0218fdac();
                                  }
                                  uStack_58 = Dino_BusSand_App_Ads__get_SessionSeconds_2176048();
                                  lVar8 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_58);
                                  if ((lVar8 != 0) &&
                                     (lVar16 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)
                                                                         (*plVar11 + 0x40)),
                                     lVar16 == 0)) goto LAB_022774c8;
                                  puVar1 = PTR_DAT_04cac5c0;
                                  puVar2 = PTR_DAT_04cabaf8;
                                  if (9 < *(uint *)(plVar11 + 3)) {
                                    plVar11[0xd] = lVar8;
                                    thunk_FUN_02134474(plVar11 + 0xd,lVar8);
                                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                      thunk_FUN_0218fdac();
                                    }
                                    puVar1 = PTR_DAT_04cac498;
                                    Dino_BusSand_App_Analytics__Log_216d0c8(uVar12,plVar11);
                                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                      thunk_FUN_0218fdac();
                                    }
                                    puVar4 = PTR_DAT_04cad0a8;
                                    puVar3 = PTR_DAT_04cacab8;
                                    puVar2 = PTR_DAT_04cac450;
                                    uVar12 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
                                    lVar8 = *(long *)puVar1;
                                    *(undefined8 *)(lVar9 + 0x28) = uVar12;
                                    if (*(int *)(lVar8 + 0xe4) == 0) {
                                      thunk_FUN_0218fdac(lVar8);
                                    }
                                    puVar1 = PTR_DAT_04cac790;
                                    Dino_BusSand_App_Meta_GameTracking__ExternalUi_221486c(1,0);
                                    uVar12 = System_String__Concat_46d2b84
                                                       (*(undefined8 *)puVar4,*puVar20,
                                                        *(undefined8 *)puVar3,0);
                                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                      thunk_FUN_0218fdac(*(long *)puVar2);
                                    }
                                    Dino_BusSand_App_CrashContext__Step_216db44
                                              (*(undefined8 *)puVar1,uVar12);
                                    *(undefined4 *)(lVar9 + 0x10) = 0;
                                    Dino_BusSand_App_Ads___c__DisplayClass35_0___ShowRewarded_g__Request_0_21774e0
                                              (lVar9);
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
      FUN_0213322c();
    }
    goto LAB_023b1328;
  }
  if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar2;
  }
  lVar16 = *(long *)PTR_DAT_04ca9d18;
  lVar8 = **(long **)(lVar9 + 0xb8);
  lVar9 = *(long *)(lVar16 + 0x38);
  if (lVar9 == 0) {
    FUN_0216b4cc(lVar16);
    lVar9 = *(long *)(lVar16 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0216b470();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar9 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0216b470();
  }
  uVar12 = **(undefined8 **)(lVar9 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
  }
  lVar9 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cac888,uVar12,0);
  puVar2 = PTR_DAT_04cabb08;
  if (lVar8 == 0) goto LAB_023b1328;
  if ((bRam0000000004f9b87c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabb08,lVar9,0);
    bRam0000000004f9b87c = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04ca9ae8;
  uVar23 = _UNK_00e20094;
  if ((bRam0000000004f9c314 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568,lVar9,0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cabb08);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb4e20);
    FUN_02132f7c(PTR_DAT_04cafbb8);
    FUN_02132f7c(PTR_DAT_04cb6578);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cb64b8);
    FUN_02132f7c(PTR_DAT_04cad4a8);
    bRam0000000004f9c314 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
  puVar1 = PTR_DAT_04cabb08;
  if ((uVar10 & 1) != 0) {
    return;
  }
  lVar14 = *(long *)PTR_DAT_04cabb08;
  lVar16 = *(long *)PTR_DAT_04ca9c30;
  if (lVar9 != 0) {
    lVar16 = lVar9;
  }
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar14 = *(long *)puVar1;
  }
  **(long **)(lVar14 + 0xb8) = lVar16;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar16);
  uVar22 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar22;
  if (lVar8 == 0) goto LAB_023bd530;
  uVar12 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar8,4,0);
  plVar11 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
  uVar13 = *(undefined8 *)PTR_DAT_04cad730;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar8 = System_Type__GetTypeFromHandle_483f0b4(uVar13,0);
  if (plVar11 == (long *)0x0) goto LAB_023bd530;
  if ((lVar8 != 0) &&
     (lVar16 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar16 == 0)) {
    uVar12 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar12,0);
  }
  if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  plVar11[4] = lVar8;
  thunk_FUN_02134474(plVar11 + 4,lVar8);
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
  UnityEngine_GameObject___ctor_43c2310(lVar8,*(undefined8 *)PTR_DAT_04cb6578,plVar11,0);
  if ((lVar8 == 0) || (lVar16 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0), lVar16 == 0)
     ) goto LAB_023bd530;
  UnityEngine_Transform__SetParent_43d1e34(lVar16,uVar12,0,0);
  plVar11 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
  if (plVar11 == (long *)0x0) goto LAB_023bd530;
  if (*plVar11 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
    FUN_021335a4(plVar11);
  }
  UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,uVar23,plVar11,0);
  UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,uVar23,plVar11,0);
  puVar3 = PTR_DAT_04cad330;
  lVar16 = *(long *)PTR_DAT_04cad330;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar16 = *(long *)puVar3;
  }
  puVar18 = *(undefined4 **)(lVar16 + 0xb8);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  System_Nullable_Color____ctor_2bc9090
            (*puVar18,puVar18[1],puVar18[2],puVar18[3],&uStack_68,*(undefined8 *)PTR_DAT_04cac878);
  uStack_70 = uStack_58;
  uStack_78 = uStack_60;
  uStack_80 = uStack_68;
  lVar16 = Dino_BusSand_App_UI_UiKit__Text_2282314
                     (0x42480000,0x444d0000,0x42c80000,0,0x40800000,plVar11,
                      *(undefined8 *)PTR_DAT_04cb4e20,lVar9,*(undefined8 *)PTR_DAT_04cad4a8,
                      &uStack_80,0x202,0);
  if (lVar16 == 0) goto LAB_023bd530;
  TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar16,1,0);
  fVar24 = 0.0;
  TMPro_TMP_Text__GetPreferredValues_42d1a10(0x444d0000,lVar16,lVar9,0);
  fVar21 = 150.0;
  if (150.0 <= fVar24 + 70.0) {
    fVar21 = fVar24 + 70.0;
  }
  lVar9 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar16,0);
  if (lVar9 == 0) goto LAB_023bd530;
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x444d0000,fVar21 + -50.0,lVar9,0);
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x44660000,fVar21,plVar11,0);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  fVar24 = 1.0;
  if (fVar21 / 241.0 <= 1.0) {
    fVar24 = fVar21 / 241.0;
  }
  lVar9 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                    (0x44660000,fVar21,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                     (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],fVar24,plVar11,
                     *(undefined8 *)PTR_DAT_04cafbb8,*(undefined8 *)PTR_DAT_04cb64b8,&uStack_98,0);
  if (lVar9 == 0) goto LAB_023bd530;
  UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar9,0);
  uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
  if ((uVar10 & 1) == 0) {
    fVar21 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar1;
    }
    if (_UNK_00e200f8 < fVar21 - *(float *)(*(long *)(lVar9 + 0xb8) + 0x18)) goto LAB_023bd36c;
  }
  else {
LAB_023bd36c:
    puVar3 = PTR_DAT_04cad568;
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar9 = *(long *)puVar3;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar3;
    }
    if (**(long **)(lVar9 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__Toast_2383580(**(long **)(lVar9 + 0xb8),0);
    }
  }
  lVar9 = *(long *)puVar1;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar1;
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
  if ((uVar10 & 1) != 0) {
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar1;
    }
    Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
              (_UNK_00e201f4,0,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10));
  }
  lVar9 = *(long *)puVar1;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar1;
  }
  plVar15 = (long *)(*(long *)(lVar9 + 0xb8) + 0x10);
  *plVar15 = lVar8;
  thunk_FUN_02134474(plVar15,lVar8);
  uVar23 = UnityEngine_Time__get_unscaledTime_43cd610(0);
  iVar6 = *(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = uVar23;
  if (iVar6 == 0) {
    thunk_FUN_0218fdac();
  }
  lVar9 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar8,0);
  if (lVar9 != 0) {
    UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar9,0,0);
    Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
              (0,_UNK_00e1fde8,_UNK_00e204e8,_UNK_00e203f0,plVar11,0,0,0);
    Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0xc1c00000,0,_UNK_00e207cc,plVar11,0,0);
    Dino_BusSand_App_UI_TipsToast__Leave_22bd54c(_UNK_00e208d0,_UNK_00e1fdec,lVar8);
    return;
  }
LAB_023bd530:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

