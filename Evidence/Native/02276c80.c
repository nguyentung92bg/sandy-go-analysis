/* IL2CPP: Dino.BusSand.App.Ads$$ShowRewarded
void Dino_BusSand_App_Ads__ShowRewarded (System_String_o* slot, System_Action_bool__o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads$$ShowRewarded
   void Dino_BusSand_App_Ads__ShowRewarded (System_String_o* slot, System_Action_bool__o* done,
   const MethodInfo* method); */

void Dino_BusSand_App_Ads__ShowRewarded_2176c80(undefined8 param_1,undefined8 param_2)

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
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uStack_58;
  uint uStack_54;
  
  puVar4 = PTR_DAT_04cad0a0;
  if ((bRam0000000004f9b8e5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
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
    puVar13 = (undefined8 *)(lVar7 + 0x18);
    *puVar13 = param_1;
    thunk_FUN_02134474(puVar13,param_1);
    *(undefined8 *)(lVar7 + 0x30) = param_2;
    thunk_FUN_02134474((undefined8 *)(lVar7 + 0x30),param_2);
    fVar17 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
                    /* try { // try from 02276e40 to 02376f3b has its CatchHandler @ 02276e40
                       catch() { ... } // from try @ 02276e40 with catch @ 02276e40
                       catch() { ... } // from try @ 02276f48 with catch @ 02276e40 */
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
      lVar10 = *(long *)puVar3;
      uVar15 = **(undefined8 **)(lVar8 + 0xb8);
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar10);
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
      lVar8 = *(long *)puVar4;
      if ((uVar9 & 1) != 0) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar4;
        }
        uVar15 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x40);
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
        lVar10 = *(long *)puVar3;
                    /* try { // try from 02276f3c to 02376f47 has its CatchHandler @ 02276f78 */
        uVar16 = **(undefined8 **)(lVar8 + 0xb8);
                    /* try { // try from 02276f48 to 02376f93 has its CatchHandler @ 02276e40 */
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar10);
        }
        uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar15,uVar16,0);
        lVar8 = *(long *)puVar4;
        if ((uVar9 & 1) != 0) {
          if (*(int *)(lVar8 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02276f3c with catch @ 02276f78 */
            thunk_FUN_0218fdac();
            lVar8 = *(long *)puVar4;
          }
          if (fVar17 - *(float *)(*(long *)(lVar8 + 0xb8) + 0x34) < 180.0) {
            uVar15 = System_String__Concat_46d2b84
                               (*(undefined8 *)PTR_DAT_04cad0b8,*puVar13,
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
            lVar7 = *(long *)puVar4;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar7 = *(long *)puVar4;
            }
            plVar14 = *(long **)(*(long *)(lVar7 + 0xb8) + 8);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar7 = *plVar14;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04ce7050) {
                  puVar13 = (undefined8 *)(lVar7 + (long)(*piVar12 + 3) * 0x10 + 0x138);
                  goto LAB_04457b18;
                }
                uVar9 = uVar9 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar9 != 0);
            }
            puVar13 = (undefined8 *)FUN_0216b7a4(plVar14,*(long *)PTR_DAT_04ce7050,3);
LAB_04457b18:
                    /* WARNING: Could not recover jumptable at 0x04457b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar13)(plVar14,2,uVar15,puVar13[1]);
            return;
          }
        }
      }
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar4;
    }
    lVar10 = *(long *)puVar2;
    lVar8 = *(long *)(lVar8 + 0xb8);
    iVar1 = *(int *)(lVar10 + 0xe4);
    *(undefined1 *)(lVar8 + 0x30) = 1;
    *(float *)(lVar8 + 0x34) = fVar17;
    if (iVar1 == 0) {
      thunk_FUN_0218fdac(lVar10);
    }
    if (cRam0000000004f9b88f == '\0') {
                    /* try { // try from 02277044 to 023770b7 has its CatchHandler @ 02277044
                       catch() { ... } // from try @ 02277044 with catch @ 02277044
                       catch() { ... } // from try @ 022770c4 with catch @ 02277044 */
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
    puVar11 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    iVar1 = *(int *)(puVar11 + 7);
    plVar14 = (long *)*puVar11;
    *(int *)(puVar11 + 7) = iVar1 + 1;
    *(int *)(lVar7 + 0x20) = iVar1 + 1;
    puVar2 = PTR_DAT_04ca9c20;
    if (plVar14 != (long *)0x0) {
      lVar8 = *plVar14;
                    /* try { // try from 022770b8 to 023770c3 has its CatchHandler @ 022770f4 */
      uVar15 = *(undefined8 *)(lVar7 + 0x18);
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    /* try { // try from 022770c4 to 0237710f has its CatchHandler @ 02277044 */
      if (uVar9 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04cad098) {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02277104;
          }
          uVar9 = uVar9 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_0216b7a4(plVar14,*(long *)PTR_DAT_04cad098,0);
                    /* catch() { ... } // from try @ 022770b8 with catch @ 022770f4 */
LAB_02277104:
      uVar6 = (*(code *)*puVar11)(plVar14,uVar15,puVar11[1]);
      plVar14 = (long *)FUN_02133068(*(undefined8 *)puVar2,10);
      puVar2 = PTR_DAT_04caa858;
      if (plVar14 != (long *)0x0) {
        if ((*(long *)PTR_DAT_04caa858 != 0) &&
           (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04caa858,*(undefined8 *)(*plVar14 + 0x40)),
           lVar8 == 0)) {
LAB_022774c8:
          uVar15 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar15,0);
        }
        puVar3 = PTR_DAT_04cad0b0;
        if ((int)plVar14[3] != 0) {
          plVar14[4] = *(long *)puVar2;
          thunk_FUN_02134474();
          lVar8 = *(long *)puVar3;
          if ((lVar8 != 0) &&
             (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0))
          goto LAB_022774c8;
          puVar2 = PTR_DAT_04cacaf8;
          if ((*(uint *)(plVar14 + 3) & 0xfffffffe) != 0) {
            plVar14[5] = *(long *)puVar3;
            thunk_FUN_02134474();
            lVar8 = *(long *)puVar2;
            if ((lVar8 != 0) &&
               (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0))
            goto LAB_022774c8;
            if (2 < *(uint *)(plVar14 + 3)) {
              plVar14[6] = *(long *)puVar2;
              thunk_FUN_02134474();
              lVar8 = Dino_BusSand_App_Ads__RewardScene_2176a04(*puVar13);
              if ((lVar8 != 0) &&
                 (lVar10 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar14 + 0x40)), lVar10 == 0))
              goto LAB_022774c8;
              puVar2 = PTR_DAT_04cacae8;
              if ((*(uint *)(plVar14 + 3) & 0xfffffffc) != 0) {
                plVar14[7] = lVar8;
                thunk_FUN_02134474(plVar14 + 7,lVar8);
                    /* try { // try from 02277228 to 02377323 has its CatchHandler @ 02277228
                       catch() { ... } // from try @ 02277228 with catch @ 02277228
                       catch() { ... } // from try @ 02277330 with catch @ 02277228 */
                lVar8 = *(long *)puVar2;
                if ((lVar8 != 0) &&
                   (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0))
                goto LAB_022774c8;
                puVar3 = PTR_DAT_04cabba0;
                if (4 < *(uint *)(plVar14 + 3)) {
                  plVar14[8] = *(long *)puVar2;
                  thunk_FUN_02134474();
                  lVar8 = *(long *)puVar3;
                  if ((lVar8 != 0) &&
                     (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0
                     )) goto LAB_022774c8;
                  puVar2 = PTR_DAT_04cacaf0;
                  if (5 < *(uint *)(plVar14 + 3)) {
                    plVar14[9] = *(long *)puVar3;
                    thunk_FUN_02134474();
                    lVar8 = *(long *)puVar2;
                    if ((lVar8 != 0) &&
                       (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar14 + 0x40)),
                       lVar8 == 0)) goto LAB_022774c8;
                    puVar3 = PTR_DAT_04cacad0;
                    if (6 < *(uint *)(plVar14 + 3)) {
                      plVar14[10] = *(long *)puVar2;
                      thunk_FUN_02134474();
                      puVar2 = PTR_DAT_04ca9ac8;
                      uStack_54 = uVar6 & 1;
                      uVar15 = *(undefined8 *)puVar3;
                      lVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_54);
                      if ((lVar8 != 0) &&
                         (lVar10 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar14 + 0x40)),
                         lVar10 == 0)) goto LAB_022774c8;
                      puVar3 = PTR_DAT_04cacab0;
                      if ((*(uint *)(plVar14 + 3) & 0xfffffff8) != 0) {
                    /* try { // try from 02277324 to 0237732f has its CatchHandler @ 02277360 */
                    /* try { // try from 02277330 to 0237737b has its CatchHandler @ 02277228 */
                        plVar14[0xb] = lVar8;
                        thunk_FUN_02134474(plVar14 + 0xb,lVar8);
                        lVar8 = *(long *)puVar3;
                        if ((lVar8 != 0) &&
                           (lVar8 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar14 + 0x40)),
                           lVar8 == 0)) goto LAB_022774c8;
                        if (8 < *(uint *)(plVar14 + 3)) {
                    /* catch() { ... } // from try @ 02277324 with catch @ 02277360 */
                          plVar14[0xc] = *(long *)puVar3;
                          thunk_FUN_02134474();
                          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    /* try { // try from 0227737c to 023773ef has its CatchHandler @ 0227737c
                       catch() { ... } // from try @ 0227737c with catch @ 0227737c
                       catch() { ... } // from try @ 022773fc with catch @ 0227737c */
                            thunk_FUN_0218fdac();
                          }
                          uStack_58 = Dino_BusSand_App_Ads__get_SessionSeconds_2176048();
                          lVar8 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_58);
                          if ((lVar8 != 0) &&
                             (lVar10 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar14 + 0x40)),
                             lVar10 == 0)) goto LAB_022774c8;
                          puVar2 = PTR_DAT_04cac5c0;
                          puVar4 = PTR_DAT_04cabaf8;
                          if (9 < *(uint *)(plVar14 + 3)) {
                            plVar14[0xd] = lVar8;
                            thunk_FUN_02134474(plVar14 + 0xd,lVar8);
                            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                    /* try { // try from 022773f0 to 023773fb has its CatchHandler @ 0227742c */
                            puVar2 = PTR_DAT_04cac498;
                    /* try { // try from 022773fc to 02377447 has its CatchHandler @ 0227737c */
                            Dino_BusSand_App_Analytics__Log_216d0c8(uVar15,plVar14);
                            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            puVar5 = PTR_DAT_04cad0a8;
                            puVar3 = PTR_DAT_04cacab8;
                            puVar4 = PTR_DAT_04cac450;
                    /* catch() { ... } // from try @ 022773f0 with catch @ 0227742c */
                            uVar15 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
                            lVar8 = *(long *)puVar2;
                            *(undefined8 *)(lVar7 + 0x28) = uVar15;
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(lVar8);
                            }
                            puVar2 = PTR_DAT_04cac790;
                            Dino_BusSand_App_Meta_GameTracking__ExternalUi_221486c(1,0);
                    /* try { // try from 02277468 to 02377563 has its CatchHandler @ 02277468
                       catch() { ... } // from try @ 02277468 with catch @ 02277468
                       catch() { ... } // from try @ 02277570 with catch @ 02277468 */
                            uVar15 = System_String__Concat_46d2b84
                                               (*(undefined8 *)puVar5,*puVar13,*(undefined8 *)puVar3
                                                ,0);
                            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(*(long *)puVar4);
                            }
                            Dino_BusSand_App_CrashContext__Step_216db44
                                      (*(undefined8 *)puVar2,uVar15);
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

