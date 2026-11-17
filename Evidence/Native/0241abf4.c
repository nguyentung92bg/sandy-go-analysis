/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel.<>c__DisplayClass7_0$$<BuildStuckHelp>b__0
void Dino_BusSand_App_UI_LevelEnterPanel___c__DisplayClass7_0___BuildStuckHelp_b__0 (Dino_BusSand_App_UI_LevelEnterPanel___c__DisplayClass7_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel.<>c__DisplayClass7_0$$<BuildStuckHelp>b__0
   void Dino_BusSand_App_UI_LevelEnterPanel___c__DisplayClass7_0___BuildStuckHelp_b__0
   (Dino_BusSand_App_UI_LevelEnterPanel___c__DisplayClass7_0_o* __this, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_LevelEnterPanel___c__DisplayClass7_0___BuildStuckHelp_b__0_231abf4
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uStack_58;
  uint uStack_54;
  
  if ((bRam0000000004f9c588 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420);
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cb8690);
    FUN_02132f7c(PTR_DAT_04cb1e60);
    bRam0000000004f9c588 = 1;
  }
  puVar4 = PTR_DAT_04cb1e60;
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0241ad00 to 0251ad03 has its CatchHandler @ 0241adac */
    FUN_02133224();
  }
  if ((*(char *)(lVar10 + 0x48) != '\0') || (*(char *)(lVar10 + 0x2c) != '\0')) {
    return;
  }
                    /* try { // try from 0241ac70 to 0251ac77 has its CatchHandler @ 0241adbc */
  lVar15 = *(long *)(param_1 + 0x38);
  *(undefined1 *)(lVar10 + 0x48) = 1;
  uVar13 = *(undefined8 *)puVar4;
  if (lVar15 == 0) {
    lVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
    System_Action_bool____ctor_35ee0e8(lVar15,param_1,*(undefined8 *)PTR_DAT_04cb8690,0);
    *(long *)(param_1 + 0x38) = lVar15;
    thunk_FUN_02134474((long *)(param_1 + 0x38),lVar15);
  }
                    /* try { // try from 0241acd0 to 0251aceb has its CatchHandler @ 0241adc0 */
  if (*(int *)(*(long *)PTR_DAT_04cabaa8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cad0a0;
  if ((bRam0000000004f9b8e5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8,lVar15,0);
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
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Object___ctor_4870e5c(lVar10,0);
  puVar4 = PTR_DAT_04cabaa8;
  if (lVar10 != 0) {
    puVar12 = (undefined8 *)(lVar10 + 0x18);
    *puVar12 = uVar13;
    thunk_FUN_02134474(puVar12,uVar13);
    *(long *)(lVar10 + 0x30) = lVar15;
    thunk_FUN_02134474((long *)(lVar10 + 0x30),lVar15);
    fVar17 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    lVar15 = *(long *)puVar4;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar15 = *(long *)puVar4;
    }
    puVar2 = PTR_DAT_04caba50;
    if (*(char *)(*(long *)(lVar15 + 0xb8) + 0x30) != '\0') {
      if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      puVar3 = PTR_DAT_04ca9ae8;
      lVar15 = *(long *)puVar2;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar15 = *(long *)puVar2;
      }
      lVar8 = *(long *)puVar3;
      uVar13 = **(undefined8 **)(lVar15 + 0xb8);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar8);
      }
      uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
      lVar15 = *(long *)puVar4;
      if ((uVar7 & 1) != 0) {
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar15 = *(long *)puVar4;
        }
        uVar13 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x40);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar15 = *(long *)puVar2;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar15 = *(long *)puVar2;
        }
        lVar8 = *(long *)puVar3;
        uVar16 = **(undefined8 **)(lVar15 + 0xb8);
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar8);
        }
        uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar13,uVar16,0);
        lVar15 = *(long *)puVar4;
        if ((uVar7 & 1) != 0) {
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar15 = *(long *)puVar4;
          }
          if (fVar17 - *(float *)(*(long *)(lVar15 + 0xb8) + 0x34) < 180.0) {
            uVar13 = System_String__Concat_46d2b84
                               (*(undefined8 *)PTR_DAT_04cad0b8,*puVar12,
                                *(undefined8 *)PTR_DAT_04cad0c0,0);
            if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
            }
            puVar4 = PTR_DAT_04ca9af8;
            uVar16 = 0;
            if ((bRam0000000004fa626c & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04ca9af8,0);
              FUN_02132f7c(PTR_DAT_04ce7050);
              bRam0000000004fa626c = 1;
              uVar16 = extraout_x1;
            }
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              uVar16 = extraout_x1_00;
            }
            if (cRam0000000004f9d848 == '\0') {
              FUN_02132f7c(PTR_DAT_04ca9af8,uVar16);
              cRam0000000004f9d848 = '\x01';
            }
            lVar10 = *(long *)puVar4;
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar10 = *(long *)puVar4;
            }
            plVar14 = *(long **)(*(long *)(lVar10 + 0xb8) + 8);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar10 = *plVar14;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04ce7050) {
                  puVar12 = (undefined8 *)(lVar10 + (long)(*piVar11 + 3) * 0x10 + 0x138);
                  goto LAB_04457b18;
                }
                uVar7 = uVar7 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar7 != 0);
            }
            puVar12 = (undefined8 *)FUN_0216b7a4(plVar14,*(long *)PTR_DAT_04ce7050,3);
LAB_04457b18:
                    /* WARNING: Could not recover jumptable at 0x04457b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar12)(plVar14,2,uVar13,puVar12[1]);
            return;
          }
        }
      }
    }
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar15 = *(long *)puVar4;
    }
    lVar8 = *(long *)puVar2;
    lVar15 = *(long *)(lVar15 + 0xb8);
    iVar1 = *(int *)(lVar8 + 0xe4);
    *(undefined1 *)(lVar15 + 0x30) = 1;
    *(float *)(lVar15 + 0x34) = fVar17;
    if (iVar1 == 0) {
      thunk_FUN_0218fdac(lVar8);
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar15 = *(long *)puVar2;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar15 = *(long *)puVar2;
    }
    *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40) = **(undefined8 **)(lVar15 + 0xb8);
    thunk_FUN_02134474();
    puVar9 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    iVar1 = *(int *)(puVar9 + 7);
    plVar14 = (long *)*puVar9;
    *(int *)(puVar9 + 7) = iVar1 + 1;
    *(int *)(lVar10 + 0x20) = iVar1 + 1;
    puVar2 = PTR_DAT_04ca9c20;
    if (plVar14 != (long *)0x0) {
      lVar15 = *plVar14;
      uVar13 = *(undefined8 *)(lVar10 + 0x18);
      uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04cad098) {
            puVar9 = (undefined8 *)(lVar15 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02277104;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_0216b7a4(plVar14,*(long *)PTR_DAT_04cad098,0);
LAB_02277104:
      uVar6 = (*(code *)*puVar9)(plVar14,uVar13,puVar9[1]);
      plVar14 = (long *)FUN_02133068(*(undefined8 *)puVar2,10);
      puVar2 = PTR_DAT_04caa858;
      if (plVar14 != (long *)0x0) {
        if ((*(long *)PTR_DAT_04caa858 != 0) &&
           (lVar15 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04caa858,*(undefined8 *)(*plVar14 + 0x40)),
           lVar15 == 0)) {
LAB_022774c8:
          uVar13 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar13,0);
        }
        puVar3 = PTR_DAT_04cad0b0;
        if ((int)plVar14[3] != 0) {
          plVar14[4] = *(long *)puVar2;
          thunk_FUN_02134474();
          lVar15 = *(long *)puVar3;
          if ((lVar15 != 0) &&
             (lVar15 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar14 + 0x40)), lVar15 == 0))
          goto LAB_022774c8;
          puVar2 = PTR_DAT_04cacaf8;
          if ((*(uint *)(plVar14 + 3) & 0xfffffffe) != 0) {
            plVar14[5] = *(long *)puVar3;
            thunk_FUN_02134474();
            lVar15 = *(long *)puVar2;
            if ((lVar15 != 0) &&
               (lVar15 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar14 + 0x40)), lVar15 == 0))
            goto LAB_022774c8;
            if (2 < *(uint *)(plVar14 + 3)) {
              plVar14[6] = *(long *)puVar2;
              thunk_FUN_02134474();
              lVar15 = Dino_BusSand_App_Ads__RewardScene_2176a04(*puVar12);
              if ((lVar15 != 0) &&
                 (lVar8 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0))
              goto LAB_022774c8;
              puVar2 = PTR_DAT_04cacae8;
              if ((*(uint *)(plVar14 + 3) & 0xfffffffc) != 0) {
                plVar14[7] = lVar15;
                thunk_FUN_02134474(plVar14 + 7,lVar15);
                lVar15 = *(long *)puVar2;
                if ((lVar15 != 0) &&
                   (lVar15 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar14 + 0x40)),
                   lVar15 == 0)) goto LAB_022774c8;
                puVar3 = PTR_DAT_04cabba0;
                if (4 < *(uint *)(plVar14 + 3)) {
                  plVar14[8] = *(long *)puVar2;
                  thunk_FUN_02134474();
                  lVar15 = *(long *)puVar3;
                  if ((lVar15 != 0) &&
                     (lVar15 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar14 + 0x40)),
                     lVar15 == 0)) goto LAB_022774c8;
                  puVar2 = PTR_DAT_04cacaf0;
                  if (5 < *(uint *)(plVar14 + 3)) {
                    plVar14[9] = *(long *)puVar3;
                    thunk_FUN_02134474();
                    lVar15 = *(long *)puVar2;
                    if ((lVar15 != 0) &&
                       (lVar15 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar14 + 0x40)),
                       lVar15 == 0)) goto LAB_022774c8;
                    puVar3 = PTR_DAT_04cacad0;
                    if (6 < *(uint *)(plVar14 + 3)) {
                      plVar14[10] = *(long *)puVar2;
                      thunk_FUN_02134474();
                      puVar2 = PTR_DAT_04ca9ac8;
                      uStack_54 = uVar6 & 1;
                      uVar13 = *(undefined8 *)puVar3;
                      lVar15 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_54);
                      if ((lVar15 != 0) &&
                         (lVar8 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar14 + 0x40)),
                         lVar8 == 0)) goto LAB_022774c8;
                      puVar3 = PTR_DAT_04cacab0;
                      if ((*(uint *)(plVar14 + 3) & 0xfffffff8) != 0) {
                        plVar14[0xb] = lVar15;
                        thunk_FUN_02134474(plVar14 + 0xb,lVar15);
                        lVar15 = *(long *)puVar3;
                        if ((lVar15 != 0) &&
                           (lVar15 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar14 + 0x40)),
                           lVar15 == 0)) goto LAB_022774c8;
                        if (8 < *(uint *)(plVar14 + 3)) {
                          plVar14[0xc] = *(long *)puVar3;
                          thunk_FUN_02134474();
                          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uStack_58 = Dino_BusSand_App_Ads__get_SessionSeconds_2176048();
                          lVar15 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_58);
                          if ((lVar15 != 0) &&
                             (lVar8 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar14 + 0x40)),
                             lVar8 == 0)) goto LAB_022774c8;
                          puVar2 = PTR_DAT_04cac5c0;
                          puVar4 = PTR_DAT_04cabaf8;
                          if (9 < *(uint *)(plVar14 + 3)) {
                            plVar14[0xd] = lVar15;
                            thunk_FUN_02134474(plVar14 + 0xd,lVar15);
                            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            puVar2 = PTR_DAT_04cac498;
                            Dino_BusSand_App_Analytics__Log_216d0c8(uVar13,plVar14);
                            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            puVar5 = PTR_DAT_04cad0a8;
                            puVar3 = PTR_DAT_04cacab8;
                            puVar4 = PTR_DAT_04cac450;
                            uVar13 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
                            lVar15 = *(long *)puVar2;
                            *(undefined8 *)(lVar10 + 0x28) = uVar13;
                            if (*(int *)(lVar15 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(lVar15);
                            }
                            puVar2 = PTR_DAT_04cac790;
                            Dino_BusSand_App_Meta_GameTracking__ExternalUi_221486c(1,0);
                            uVar13 = System_String__Concat_46d2b84
                                               (*(undefined8 *)puVar5,*puVar12,*(undefined8 *)puVar3
                                                ,0);
                            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(*(long *)puVar4);
                            }
                            Dino_BusSand_App_CrashContext__Step_216db44
                                      (*(undefined8 *)puVar2,uVar13);
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

