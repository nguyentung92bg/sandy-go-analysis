/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel.<>c__DisplayClass30_0$$<OnOpen>b__2
void Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass30_0___OnOpen_b__2 (Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass30_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel.<>c__DisplayClass30_0$$<OnOpen>b__2
   void Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass30_0___OnOpen_b__2
   (Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass30_0_o* __this, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass30_0___OnOpen_b__2_232cb24(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar15;
  undefined8 *puVar16;
  int *piVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined4 uStack_58;
  uint uStack_54;
  
  puVar6 = PTR_DAT_04cb8c90;
  plVar14 = *(long **)(param_1 + 0x10);
  if (plVar14 == (long *)0x0) {
                    /* try { // try from 0242cb3c to 0252cb43 has its CatchHandler @ 0242cc58 */
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  if ((bRam0000000004f9c5da & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420,uVar2,0);
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cb8c98);
    FUN_02132f7c(PTR_DAT_04cb8c90);
    bRam0000000004f9c5da = 1;
  }
  lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
  System_Object___ctor_4870e5c(lVar11,0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(long *)(lVar11 + 0x10) = (long)plVar14;
  thunk_FUN_02134474((long *)(lVar11 + 0x10),plVar14);
  cVar3 = *(char *)((long)plVar14 + 0x42);
  *(undefined4 *)(lVar11 + 0x18) = uVar2;
  if ((((cVar3 == '\0') || ((char)plVar14[8] != '\0')) || (*(char *)((long)plVar14 + 0x41) != '\0'))
     || (*(char *)((long)plVar14 + 0x2c) != '\0')) {
    return;
  }
  *(undefined1 *)(plVar14 + 8) = 1;
  uVar12 = (**(code **)(*plVar14 + 0x1e8))(plVar14,*(undefined8 *)(*plVar14 + 0x1f0));
  uVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
  System_Action_bool____ctor_35ee0e8(uVar13,lVar11,*(undefined8 *)PTR_DAT_04cb8c98,0);
  if (*(int *)(*(long *)PTR_DAT_04cabaa8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar6 = PTR_DAT_04cad0a0;
  if ((bRam0000000004f9b8e5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8,uVar13,0);
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
  lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
  System_Object___ctor_4870e5c(lVar11,0);
  puVar6 = PTR_DAT_04cabaa8;
  if (lVar11 != 0) {
    puVar18 = (undefined8 *)(lVar11 + 0x18);
    *puVar18 = uVar12;
    thunk_FUN_02134474(puVar18,uVar12);
    *(undefined8 *)(lVar11 + 0x30) = uVar13;
    thunk_FUN_02134474((undefined8 *)(lVar11 + 0x30),uVar13);
    fVar19 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    lVar9 = *(long *)puVar6;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar6;
    }
    puVar4 = PTR_DAT_04caba50;
    if (*(char *)(*(long *)(lVar9 + 0xb8) + 0x30) != '\0') {
      if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      puVar5 = PTR_DAT_04ca9ae8;
      lVar9 = *(long *)puVar4;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar4;
      }
      lVar15 = *(long *)puVar5;
      uVar12 = **(undefined8 **)(lVar9 + 0xb8);
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar15);
      }
      uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
      lVar9 = *(long *)puVar6;
      if ((uVar10 & 1) != 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar9 = *(long *)puVar6;
        }
        uVar12 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x40);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar4);
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar9 = *(long *)puVar4;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar9 = *(long *)puVar4;
        }
        lVar15 = *(long *)puVar5;
        uVar13 = **(undefined8 **)(lVar9 + 0xb8);
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar15);
        }
        uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar12,uVar13,0);
        lVar9 = *(long *)puVar6;
        if ((uVar10 & 1) != 0) {
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar9 = *(long *)puVar6;
          }
          if (fVar19 - *(float *)(*(long *)(lVar9 + 0xb8) + 0x34) < 180.0) {
            uVar12 = System_String__Concat_46d2b84
                               (*(undefined8 *)PTR_DAT_04cad0b8,*puVar18,
                                *(undefined8 *)PTR_DAT_04cad0c0,0);
            if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
            }
            puVar6 = PTR_DAT_04ca9af8;
            uVar13 = 0;
            if ((bRam0000000004fa626c & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04ca9af8,0);
              FUN_02132f7c(PTR_DAT_04ce7050);
              bRam0000000004fa626c = 1;
              uVar13 = extraout_x1;
            }
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              uVar13 = extraout_x1_00;
            }
            if (cRam0000000004f9d848 == '\0') {
              FUN_02132f7c(PTR_DAT_04ca9af8,uVar13);
              cRam0000000004f9d848 = '\x01';
            }
            lVar11 = *(long *)puVar6;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar11 = *(long *)puVar6;
            }
            plVar14 = *(long **)(*(long *)(lVar11 + 0xb8) + 8);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar11 = *plVar14;
            uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar10 != 0) {
              piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04ce7050) {
                  puVar18 = (undefined8 *)(lVar11 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                  goto LAB_04457b18;
                }
                uVar10 = uVar10 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar10 != 0);
            }
            puVar18 = (undefined8 *)FUN_0216b7a4(plVar14,*(long *)PTR_DAT_04ce7050,3);
LAB_04457b18:
                    /* WARNING: Could not recover jumptable at 0x04457b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar18)(plVar14,2,uVar12,puVar18[1]);
            return;
          }
        }
      }
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar6;
    }
    lVar15 = *(long *)puVar4;
    lVar9 = *(long *)(lVar9 + 0xb8);
    iVar1 = *(int *)(lVar15 + 0xe4);
    *(undefined1 *)(lVar9 + 0x30) = 1;
    *(float *)(lVar9 + 0x34) = fVar19;
    if (iVar1 == 0) {
      thunk_FUN_0218fdac(lVar15);
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar9 = *(long *)puVar4;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar4;
    }
    *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x40) = **(undefined8 **)(lVar9 + 0xb8);
    thunk_FUN_02134474();
    puVar16 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
    iVar1 = *(int *)(puVar16 + 7);
    plVar14 = (long *)*puVar16;
    *(int *)(puVar16 + 7) = iVar1 + 1;
    *(int *)(lVar11 + 0x20) = iVar1 + 1;
    puVar4 = PTR_DAT_04ca9c20;
    if (plVar14 != (long *)0x0) {
      lVar9 = *plVar14;
      uVar12 = *(undefined8 *)(lVar11 + 0x18);
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04cad098) {
            puVar16 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_02277104;
          }
          uVar10 = uVar10 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 != 0);
      }
      puVar16 = (undefined8 *)FUN_0216b7a4(plVar14,*(long *)PTR_DAT_04cad098,0);
LAB_02277104:
      uVar8 = (*(code *)*puVar16)(plVar14,uVar12,puVar16[1]);
      plVar14 = (long *)FUN_02133068(*(undefined8 *)puVar4,10);
      puVar4 = PTR_DAT_04caa858;
      if (plVar14 != (long *)0x0) {
        if ((*(long *)PTR_DAT_04caa858 != 0) &&
           (lVar9 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04caa858,*(undefined8 *)(*plVar14 + 0x40)),
           lVar9 == 0)) {
LAB_022774c8:
          uVar12 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar12,0);
        }
        puVar5 = PTR_DAT_04cad0b0;
        if ((int)plVar14[3] != 0) {
          plVar14[4] = *(long *)puVar4;
          thunk_FUN_02134474();
          lVar9 = *(long *)puVar5;
          if ((lVar9 != 0) &&
             (lVar9 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0))
          goto LAB_022774c8;
          puVar4 = PTR_DAT_04cacaf8;
          if ((*(uint *)(plVar14 + 3) & 0xfffffffe) != 0) {
            plVar14[5] = *(long *)puVar5;
            thunk_FUN_02134474();
            lVar9 = *(long *)puVar4;
            if ((lVar9 != 0) &&
               (lVar9 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0))
            goto LAB_022774c8;
            if (2 < *(uint *)(plVar14 + 3)) {
              plVar14[6] = *(long *)puVar4;
              thunk_FUN_02134474();
              lVar9 = Dino_BusSand_App_Ads__RewardScene_2176a04(*puVar18);
              if ((lVar9 != 0) &&
                 (lVar15 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar15 == 0))
              goto LAB_022774c8;
              puVar4 = PTR_DAT_04cacae8;
              if ((*(uint *)(plVar14 + 3) & 0xfffffffc) != 0) {
                plVar14[7] = lVar9;
                thunk_FUN_02134474(plVar14 + 7,lVar9);
                lVar9 = *(long *)puVar4;
                if ((lVar9 != 0) &&
                   (lVar9 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0))
                goto LAB_022774c8;
                puVar5 = PTR_DAT_04cabba0;
                if (4 < *(uint *)(plVar14 + 3)) {
                  plVar14[8] = *(long *)puVar4;
                  thunk_FUN_02134474();
                  lVar9 = *(long *)puVar5;
                  if ((lVar9 != 0) &&
                     (lVar9 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0
                     )) goto LAB_022774c8;
                  puVar4 = PTR_DAT_04cacaf0;
                  if (5 < *(uint *)(plVar14 + 3)) {
                    plVar14[9] = *(long *)puVar5;
                    thunk_FUN_02134474();
                    lVar9 = *(long *)puVar4;
                    if ((lVar9 != 0) &&
                       (lVar9 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar14 + 0x40)),
                       lVar9 == 0)) goto LAB_022774c8;
                    puVar5 = PTR_DAT_04cacad0;
                    if (6 < *(uint *)(plVar14 + 3)) {
                      plVar14[10] = *(long *)puVar4;
                      thunk_FUN_02134474();
                      puVar4 = PTR_DAT_04ca9ac8;
                      uStack_54 = uVar8 & 1;
                      uVar12 = *(undefined8 *)puVar5;
                      lVar9 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_54);
                      if ((lVar9 != 0) &&
                         (lVar15 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar14 + 0x40)),
                         lVar15 == 0)) goto LAB_022774c8;
                      puVar5 = PTR_DAT_04cacab0;
                      if ((*(uint *)(plVar14 + 3) & 0xfffffff8) != 0) {
                        plVar14[0xb] = lVar9;
                        thunk_FUN_02134474(plVar14 + 0xb,lVar9);
                        lVar9 = *(long *)puVar5;
                        if ((lVar9 != 0) &&
                           (lVar9 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar14 + 0x40)),
                           lVar9 == 0)) goto LAB_022774c8;
                        if (8 < *(uint *)(plVar14 + 3)) {
                          plVar14[0xc] = *(long *)puVar5;
                          thunk_FUN_02134474();
                          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uStack_58 = Dino_BusSand_App_Ads__get_SessionSeconds_2176048();
                          lVar9 = FUN_02133100(*(undefined8 *)(puVar4 + 0x48),&uStack_58);
                          if ((lVar9 != 0) &&
                             (lVar15 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar14 + 0x40)),
                             lVar15 == 0)) goto LAB_022774c8;
                          puVar4 = PTR_DAT_04cac5c0;
                          puVar6 = PTR_DAT_04cabaf8;
                          if (9 < *(uint *)(plVar14 + 3)) {
                            plVar14[0xd] = lVar9;
                            thunk_FUN_02134474(plVar14 + 0xd,lVar9);
                            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            puVar4 = PTR_DAT_04cac498;
                            Dino_BusSand_App_Analytics__Log_216d0c8(uVar12,plVar14);
                            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            puVar7 = PTR_DAT_04cad0a8;
                            puVar5 = PTR_DAT_04cacab8;
                            puVar6 = PTR_DAT_04cac450;
                            uVar12 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
                            lVar9 = *(long *)puVar4;
                            *(undefined8 *)(lVar11 + 0x28) = uVar12;
                            if (*(int *)(lVar9 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(lVar9);
                            }
                            puVar4 = PTR_DAT_04cac790;
                            Dino_BusSand_App_Meta_GameTracking__ExternalUi_221486c(1,0);
                            uVar12 = System_String__Concat_46d2b84
                                               (*(undefined8 *)puVar7,*puVar18,*(undefined8 *)puVar5
                                                ,0);
                            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(*(long *)puVar6);
                            }
                            Dino_BusSand_App_CrashContext__Step_216db44
                                      (*(undefined8 *)puVar4,uVar12);
                            *(undefined4 *)(lVar11 + 0x10) = 0;
                            Dino_BusSand_App_Ads___c__DisplayClass35_0___ShowRewarded_g__Request_0_21774e0
                                      (lVar11);
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

