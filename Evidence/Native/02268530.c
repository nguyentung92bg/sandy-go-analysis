/* IL2CPP: Dino.BusSand.App.GameApp$$ReviveWithAd
void Dino_BusSand_App_GameApp__ReviveWithAd (Dino_BusSand_App_GameApp_o* __this, System_Action_bool__o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$ReviveWithAd
   void Dino_BusSand_App_GameApp__ReviveWithAd (Dino_BusSand_App_GameApp_o* __this,
   System_Action_bool__o* done, const MethodInfo* method); */

void Dino_BusSand_App_GameApp__ReviveWithAd_2168530(undefined8 param_1,long param_2)

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
  long lVar11;
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
  
  puVar3 = PTR_DAT_04cac7a0;
  if ((bRam0000000004f9b86c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420);
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
  plVar16 = (long *)(lVar7 + 0x10);
  *plVar16 = param_2;
  thunk_FUN_02134474(plVar16,param_2);
  *(undefined8 *)(lVar7 + 0x18) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar7 + 0x18),param_1);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = Dino_BusSand_App_Meta_Economy__get_CanRevive_2204a44(0);
                    /* try { // try from 02268610 to 0236861b has its CatchHandler @ 0226863c */
  if (((uVar8 & 1) == 0) ||
     (iVar5 = Dino_BusSand_App_GameApp__get_ReviveAdsLeft_21645f4(param_1), iVar5 < 1)) {
    lVar7 = *plVar16;
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022686a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),0,*(undefined8 *)(lVar7 + 0x28));
      return;
    }
    return;
  }
                    /* try { // try from 0226861c to 0236864f has its CatchHandler @ 022684e8 */
  uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
                    /* catch() { ... } // from try @ 02268610 with catch @ 0226863c */
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
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Object___ctor_4870e5c(lVar7,0);
  puVar3 = PTR_DAT_04cabaa8;
  if (lVar7 != 0) {
    puVar15 = (undefined8 *)(lVar7 + 0x18);
    *puVar15 = uVar10;
    thunk_FUN_02134474(puVar15,uVar10);
    *(undefined8 *)(lVar7 + 0x30) = uVar9;
    thunk_FUN_02134474((undefined8 *)(lVar7 + 0x30),uVar9);
    fVar17 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    lVar11 = *(long *)puVar3;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar3;
    }
    puVar1 = PTR_DAT_04caba50;
    if (*(char *)(*(long *)(lVar11 + 0xb8) + 0x30) != '\0') {
      if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      puVar2 = PTR_DAT_04ca9ae8;
      lVar11 = *(long *)puVar1;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar11 = *(long *)puVar1;
      }
      lVar12 = *(long *)puVar2;
      uVar9 = **(undefined8 **)(lVar11 + 0xb8);
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar12);
      }
      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
      lVar11 = *(long *)puVar3;
      if ((uVar8 & 1) != 0) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar11 = *(long *)puVar3;
        }
        uVar9 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x40);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar11 = *(long *)puVar1;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar11 = *(long *)puVar1;
        }
        lVar12 = *(long *)puVar2;
        uVar10 = **(undefined8 **)(lVar11 + 0xb8);
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar12);
        }
        uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar9,uVar10,0);
        lVar11 = *(long *)puVar3;
        if ((uVar8 & 1) != 0) {
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar11 = *(long *)puVar3;
          }
          if (fVar17 - *(float *)(*(long *)(lVar11 + 0xb8) + 0x34) < 180.0) {
            uVar9 = System_String__Concat_46d2b84
                              (*(undefined8 *)PTR_DAT_04cad0b8,*puVar15,
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
            lVar7 = *(long *)puVar3;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar7 = *(long *)puVar3;
            }
            plVar16 = *(long **)(*(long *)(lVar7 + 0xb8) + 8);
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar7 = *plVar16;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04ce7050) {
                  puVar15 = (undefined8 *)(lVar7 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                  goto LAB_04457b18;
                }
                uVar8 = uVar8 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar8 != 0);
            }
            puVar15 = (undefined8 *)FUN_0216b7a4(plVar16,*(long *)PTR_DAT_04ce7050,3);
LAB_04457b18:
                    /* WARNING: Could not recover jumptable at 0x04457b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar15)(plVar16,2,uVar9,puVar15[1]);
            return;
          }
        }
      }
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar3;
    }
    lVar12 = *(long *)puVar1;
    lVar11 = *(long *)(lVar11 + 0xb8);
    iVar5 = *(int *)(lVar12 + 0xe4);
    *(undefined1 *)(lVar11 + 0x30) = 1;
    *(float *)(lVar11 + 0x34) = fVar17;
    if (iVar5 == 0) {
      thunk_FUN_0218fdac(lVar12);
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar11 = *(long *)puVar1;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar1;
    }
    *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40) = **(undefined8 **)(lVar11 + 0xb8);
    thunk_FUN_02134474();
    puVar13 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    iVar5 = *(int *)(puVar13 + 7);
    plVar16 = (long *)*puVar13;
    *(int *)(puVar13 + 7) = iVar5 + 1;
    *(int *)(lVar7 + 0x20) = iVar5 + 1;
    puVar1 = PTR_DAT_04ca9c20;
    if (plVar16 != (long *)0x0) {
      lVar11 = *plVar16;
      uVar9 = *(undefined8 *)(lVar7 + 0x18);
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04cad098) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02277104;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar8 != 0);
      }
      puVar13 = (undefined8 *)FUN_0216b7a4(plVar16,*(long *)PTR_DAT_04cad098,0);
LAB_02277104:
      uVar6 = (*(code *)*puVar13)(plVar16,uVar9,puVar13[1]);
      plVar16 = (long *)FUN_02133068(*(undefined8 *)puVar1,10);
      puVar1 = PTR_DAT_04caa858;
      if (plVar16 != (long *)0x0) {
        if ((*(long *)PTR_DAT_04caa858 != 0) &&
           (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04caa858,*(undefined8 *)(*plVar16 + 0x40)),
           lVar11 == 0)) {
LAB_022774c8:
          uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar9,0);
        }
        puVar2 = PTR_DAT_04cad0b0;
        if ((int)plVar16[3] != 0) {
          plVar16[4] = *(long *)puVar1;
          thunk_FUN_02134474();
          lVar11 = *(long *)puVar2;
          if ((lVar11 != 0) &&
             (lVar11 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
          goto LAB_022774c8;
          puVar1 = PTR_DAT_04cacaf8;
          if ((*(uint *)(plVar16 + 3) & 0xfffffffe) != 0) {
            plVar16[5] = *(long *)puVar2;
            thunk_FUN_02134474();
            lVar11 = *(long *)puVar1;
            if ((lVar11 != 0) &&
               (lVar11 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
            goto LAB_022774c8;
            if (2 < *(uint *)(plVar16 + 3)) {
              plVar16[6] = *(long *)puVar1;
              thunk_FUN_02134474();
              lVar11 = Dino_BusSand_App_Ads__RewardScene_2176a04(*puVar15);
              if ((lVar11 != 0) &&
                 (lVar12 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0)
                 ) goto LAB_022774c8;
              puVar1 = PTR_DAT_04cacae8;
              if ((*(uint *)(plVar16 + 3) & 0xfffffffc) != 0) {
                plVar16[7] = lVar11;
                thunk_FUN_02134474(plVar16 + 7,lVar11);
                lVar11 = *(long *)puVar1;
                if ((lVar11 != 0) &&
                   (lVar11 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar16 + 0x40)),
                   lVar11 == 0)) goto LAB_022774c8;
                puVar2 = PTR_DAT_04cabba0;
                if (4 < *(uint *)(plVar16 + 3)) {
                  plVar16[8] = *(long *)puVar1;
                  thunk_FUN_02134474();
                  lVar11 = *(long *)puVar2;
                  if ((lVar11 != 0) &&
                     (lVar11 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar16 + 0x40)),
                     lVar11 == 0)) goto LAB_022774c8;
                  puVar1 = PTR_DAT_04cacaf0;
                  if (5 < *(uint *)(plVar16 + 3)) {
                    plVar16[9] = *(long *)puVar2;
                    thunk_FUN_02134474();
                    lVar11 = *(long *)puVar1;
                    if ((lVar11 != 0) &&
                       (lVar11 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar16 + 0x40)),
                       lVar11 == 0)) goto LAB_022774c8;
                    puVar2 = PTR_DAT_04cacad0;
                    if (6 < *(uint *)(plVar16 + 3)) {
                      plVar16[10] = *(long *)puVar1;
                      thunk_FUN_02134474();
                      puVar1 = PTR_DAT_04ca9ac8;
                      uStack_54 = uVar6 & 1;
                      uVar9 = *(undefined8 *)puVar2;
                      lVar11 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_54);
                      if ((lVar11 != 0) &&
                         (lVar12 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar16 + 0x40)),
                         lVar12 == 0)) goto LAB_022774c8;
                      puVar2 = PTR_DAT_04cacab0;
                      if ((*(uint *)(plVar16 + 3) & 0xfffffff8) != 0) {
                        plVar16[0xb] = lVar11;
                        thunk_FUN_02134474(plVar16 + 0xb,lVar11);
                        lVar11 = *(long *)puVar2;
                        if ((lVar11 != 0) &&
                           (lVar11 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar16 + 0x40)),
                           lVar11 == 0)) goto LAB_022774c8;
                        if (8 < *(uint *)(plVar16 + 3)) {
                          plVar16[0xc] = *(long *)puVar2;
                          thunk_FUN_02134474();
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uStack_58 = Dino_BusSand_App_Ads__get_SessionSeconds_2176048();
                          lVar11 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_58);
                          if ((lVar11 != 0) &&
                             (lVar12 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar16 + 0x40)),
                             lVar12 == 0)) goto LAB_022774c8;
                          puVar1 = PTR_DAT_04cac5c0;
                          puVar3 = PTR_DAT_04cabaf8;
                          if (9 < *(uint *)(plVar16 + 3)) {
                            plVar16[0xd] = lVar11;
                            thunk_FUN_02134474(plVar16 + 0xd,lVar11);
                            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            puVar1 = PTR_DAT_04cac498;
                            Dino_BusSand_App_Analytics__Log_216d0c8(uVar9,plVar16);
                            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            puVar4 = PTR_DAT_04cad0a8;
                            puVar2 = PTR_DAT_04cacab8;
                            puVar3 = PTR_DAT_04cac450;
                            uVar9 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
                            lVar11 = *(long *)puVar1;
                            *(undefined8 *)(lVar7 + 0x28) = uVar9;
                            if (*(int *)(lVar11 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(lVar11);
                            }
                            puVar1 = PTR_DAT_04cac790;
                            Dino_BusSand_App_Meta_GameTracking__ExternalUi_221486c(1,0);
                            uVar9 = System_String__Concat_46d2b84
                                              (*(undefined8 *)puVar4,*puVar15,*(undefined8 *)puVar2,
                                               0);
                            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(*(long *)puVar3);
                            }
                            Dino_BusSand_App_CrashContext__Step_216db44(*(undefined8 *)puVar1,uVar9)
                            ;
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

