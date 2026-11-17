/* IL2CPP: Dino.BusSand.App.UI.FailPanel.<>c__DisplayClass10_0$$<OnOffer>b__1
void Dino_BusSand_App_UI_FailPanel___c__DisplayClass10_0___OnOffer_b__1 (Dino_BusSand_App_UI_FailPanel___c__DisplayClass10_0_o* __this, bool ok, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023b5524) */
/* WARNING: Removing unreachable block (ram,0x023b5548) */
/* WARNING: Removing unreachable block (ram,0x023b5598) */
/* WARNING: Removing unreachable block (ram,0x023b5778) */
/* WARNING: Removing unreachable block (ram,0x023b55b0) */
/* WARNING: Removing unreachable block (ram,0x023b55cc) */
/* WARNING: Removing unreachable block (ram,0x023b55d8) */
/* WARNING: Removing unreachable block (ram,0x023b55e8) */
/* WARNING: Removing unreachable block (ram,0x023b55ec) */
/* WARNING: Removing unreachable block (ram,0x023b55f4) */
/* WARNING: Removing unreachable block (ram,0x023b55f8) */
/* WARNING: Removing unreachable block (ram,0x023b5614) */
/* WARNING: Removing unreachable block (ram,0x023b5618) */
/* WARNING: Removing unreachable block (ram,0x023b5634) */
/* WARNING: Removing unreachable block (ram,0x023b563c) */
/* WARNING: Removing unreachable block (ram,0x023b5668) */
/* WARNING: Removing unreachable block (ram,0x023b5674) */
/* WARNING: Removing unreachable block (ram,0x023b5684) */
/* WARNING: Removing unreachable block (ram,0x023b5688) */
/* WARNING: Removing unreachable block (ram,0x023b5690) */
/* WARNING: Removing unreachable block (ram,0x023b5694) */
/* WARNING: Removing unreachable block (ram,0x023b56b0) */
/* WARNING: Removing unreachable block (ram,0x023b56b4) */
/* WARNING: Removing unreachable block (ram,0x023b56e4) */
/* WARNING: Removing unreachable block (ram,0x023b56f0) */
/* WARNING: Removing unreachable block (ram,0x023b5700) */
/* WARNING: Removing unreachable block (ram,0x023b5704) */
/* WARNING: Removing unreachable block (ram,0x023b570c) */
/* WARNING: Removing unreachable block (ram,0x023b5710) */
/* WARNING: Removing unreachable block (ram,0x023b572c) */
/* WARNING: Removing unreachable block (ram,0x023b5730) */
/* WARNING: Removing unreachable block (ram,0x02a45de8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.FailPanel.<>c__DisplayClass10_0$$<OnOffer>b__1
   void Dino_BusSand_App_UI_FailPanel___c__DisplayClass10_0___OnOffer_b__1
   (Dino_BusSand_App_UI_FailPanel___c__DisplayClass10_0_o* __this, bool ok, const MethodInfo*
   method); */

long * Dino_BusSand_App_UI_FailPanel___c__DisplayClass10_0___OnOffer_b__1_23181e8
                 (long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  char cVar21;
  undefined8 uVar22;
  uint uVar23;
  int iVar24;
  long lStack_c8;
  long *plStack_c0;
  undefined1 *puStack_b8;
  undefined8 *puStack_b0;
  undefined4 uStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  undefined1 auStack_70 [4];
  char acStack_6c [4];
  undefined8 uStack_68;
  
  plVar15 = *(long **)(param_1 + 0x10);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar8 = *(undefined4 *)(param_1 + 0x18);
  plVar13 = plVar15;
  if ((bRam0000000004f9c56e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    plVar13 = (long *)FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c56e = 1;
  }
  cVar21 = *(char *)((long)plVar15 + 0x39);
  *(undefined1 *)((long)plVar15 + 0x39) = 0;
  if ((cVar21 == '\0') && ((param_2 & 1) == 0)) {
    return plVar13;
  }
  *(undefined1 *)(plVar15 + 7) = 0;
  if (cVar21 != '\0') {
    Dino_BusSand_App_UI_StoreWaitingPanel__Hide_22bb980(0);
  }
  puVar4 = PTR_DAT_04caba50;
  if ((param_2 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar14 = *(long *)puVar4;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar14 = *(long *)puVar4;
    }
    uVar22 = **(undefined8 **)(lVar14 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    plVar15 = (long *)UnityEngine_Object__op_Inequality_43c8dec(uVar22,0,0);
    if (((ulong)plVar15 & 1) == 0) {
      return plVar15;
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar14 = *(long *)puVar4;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar14 = *(long *)puVar4;
    }
    puVar4 = PTR_DAT_04ca9ae8;
    lVar14 = **(long **)(lVar14 + 0xb8);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((bRam0000000004f9b86e & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cac7b0,uVar8,0);
      FUN_02132f7c(PTR_DAT_04cac7b8);
      FUN_02132f7c(PTR_DAT_04cac7c0);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cac678);
      FUN_02132f7c(PTR_DAT_04cac7c8);
      FUN_02132f7c(PTR_DAT_04cac7d0);
      FUN_02132f7c(PTR_DAT_04cac7d8);
      FUN_02132f7c(PTR_DAT_04cac788);
      bRam0000000004f9b86e = 1;
    }
    uVar22 = *(undefined8 *)(lVar14 + 0x20);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar22,0,0);
    if ((uVar11 & 1) == 0) {
LAB_022687b4:
      bVar3 = true;
    }
    else {
      if (*(long *)(lVar14 + 0x20) == 0) goto LAB_022688dc;
      if (*(int *)(*(long *)(lVar14 + 0x20) + 0x20) != 3) goto LAB_022687b4;
      if (*(long *)(lVar14 + 0x28) == 0) goto LAB_022688dc;
      Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                (*(long *)(lVar14 + 0x28),*(undefined8 *)PTR_DAT_04cac678);
      bVar3 = false;
    }
    if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar22 = Dino_BusSand_App_UI_CommerceUi__StoreGet_22abc70(uVar8,0);
    if (*(long *)(lVar14 + 0x28) != 0) {
      plVar15 = (long *)Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                                  (*(long *)(lVar14 + 0x28),*(undefined8 *)PTR_DAT_04cac7c8);
      if (((ulong)plVar15 & 1) == 0) {
        if (*(long *)(lVar14 + 0x28) == 0) goto LAB_022688dc;
        plVar13 = (long *)Dino_BusSand_App_UI_UIManager__Open_object__2945314
                                    (*(long *)(lVar14 + 0x28),*(undefined8 *)PTR_DAT_04cac7d8,4,
                                     uVar22,*(undefined8 *)PTR_DAT_04cac7d0);
        plVar15 = plVar13;
      }
      else {
        plVar13 = (long *)0x0;
      }
      if (bVar3) {
        return plVar15;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = UnityEngine_Object__op_Inequality_43c8dec(plVar13,0,0);
      puVar4 = PTR_DAT_04cac440;
      if ((uVar11 & 1) == 0) {
        lVar12 = *(long *)PTR_DAT_04cac788;
        if ((bRam0000000004f9b86f & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cac5c0);
          FUN_02132f7c(PTR_DAT_04cab1e8);
          FUN_02132f7c(PTR_DAT_04cac440);
          FUN_02132f7c(PTR_DAT_04cac498);
          FUN_02132f7c(PTR_DAT_04ca9c20);
          FUN_02132f7c(PTR_DAT_04cac678);
          FUN_02132f7c(PTR_DAT_04cac768);
          FUN_02132f7c(PTR_DAT_04cac770);
          FUN_02132f7c(PTR_DAT_04cac778);
          FUN_02132f7c(PTR_DAT_04cac780);
          FUN_02132f7c(PTR_DAT_04cac788);
          FUN_02132f7c(PTR_DAT_04cac790);
          FUN_02132f7c(PTR_DAT_04cac798);
          bRam0000000004f9b86f = 1;
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = Dino_BusSand_App_Meta_Economy__ReviveBuses_2204aa8(0);
        puVar5 = PTR_DAT_04cac788;
        if (*(long *)(lVar14 + 0x28) != 0) {
          Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                    (*(long *)(lVar14 + 0x28),*(undefined8 *)PTR_DAT_04cac678);
          uVar11 = System_String__op_Equality_46d1108(lVar12,*(undefined8 *)puVar5,0);
          if ((uVar11 & 1) != 0) {
            uVar1 = *(undefined4 *)(lVar14 + 0x58);
            if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_Meta_GameTracking__ContinueOffer_22193d0
                      (uVar1,*(undefined8 *)puVar5,0,0,0);
          }
          if (*(long *)(lVar14 + 0x20) != 0) {
            plVar15 = (long *)Dino_BusSand_App_Gameplay_GameplayController__TryCompleteRevive_229f824
                                        (*(long *)(lVar14 + 0x20),uVar8,0);
            if (((ulong)plVar15 & 1) == 0) {
              return plVar15;
            }
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_Meta_Economy__OnReviveSuccess_2204db4(0);
            uVar22 = *(undefined8 *)PTR_DAT_04ca9c20;
            *(int *)(lVar14 + 0x58) = *(int *)(lVar14 + 0x58) + 1;
            *(undefined4 *)(lVar14 + 0x5c) = 0;
            plVar15 = (long *)FUN_02133068(uVar22,4);
            puVar4 = PTR_DAT_04cac768;
            if (plVar15 != (long *)0x0) {
              if ((*(long *)PTR_DAT_04cac768 != 0) &&
                 (lVar14 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac768,
                                              *(undefined8 *)(*plVar15 + 0x40)), lVar14 == 0)) {
LAB_02268524:
                uVar22 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                FUN_021330e8(uVar22,0);
              }
              if ((int)plVar15[3] != 0) {
                plVar15[4] = *(long *)puVar4;
                thunk_FUN_02134474();
                uVar11 = System_String__op_Equality_46d1108
                                   (lVar12,*(undefined8 *)PTR_DAT_04cac790,0);
                uVar22 = *(undefined8 *)PTR_DAT_04cac778;
                if ((uVar11 & 1) == 0) {
                  uVar11 = System_String__op_Equality_46d1108(lVar12,*(undefined8 *)puVar5,0);
                  if ((uVar11 & 1) == 0) {
                    lVar12 = *(long *)PTR_DAT_04cac798;
                  }
                }
                if ((lVar12 != 0) &&
                   (lVar14 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar15 + 0x40)),
                   lVar14 == 0)) goto LAB_02268524;
                if ((*(uint *)(plVar15 + 3) & 0xfffffffe) != 0) {
                  plVar15[5] = lVar12;
                  thunk_FUN_02134474(plVar15 + 5,lVar12);
                  puVar4 = PTR_DAT_04cac780;
                  if ((*(long *)PTR_DAT_04cac780 != 0) &&
                     (lVar14 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac780,
                                                  *(undefined8 *)(*plVar15 + 0x40)), lVar14 == 0))
                  goto LAB_02268524;
                  if (2 < *(uint *)(plVar15 + 3)) {
                    plVar15[6] = *(long *)puVar4;
                    thunk_FUN_02134474();
                    lVar14 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),
                                          &stack0xffffffffffffffcc);
                    if ((lVar14 != 0) &&
                       (lVar12 = thunk_FUN_0216e7a0(lVar14,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar12 == 0)) goto LAB_02268524;
                    if ((*(uint *)(plVar15 + 3) & 0xfffffffc) != 0) {
                      plVar15[7] = lVar14;
                      thunk_FUN_02134474(plVar15 + 7,lVar14);
                      if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      uVar10 = Dino_BusSand_App_Analytics__L_216fff0(plVar15,0);
                      Dino_BusSand_App_Analytics__Log_216d0c8(uVar22,uVar10,0);
                      if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      plVar15 = (long *)Dino_BusSand_App_Audio__PlayMusic_214db34
                                                  (_UNK_00e20094,*(undefined8 *)PTR_DAT_04cac770);
                      return plVar15;
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
      lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac7b0);
      System_Action_Vector3____ctor_35f2828(lVar12,lVar14,*(undefined8 *)PTR_DAT_04cac7c0,0);
      if (plVar13 != (long *)0x0) {
        plVar13 = plVar13 + 10;
        *plVar13 = lVar12;
        if (iRam00000000051c1b10 != 0) {
          plVar13 = (long *)FUN_02220bf0(1L << ((ulong)plVar13 >> 0xc & 0x3f),
                                         ((ulong)plVar13 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
        }
        return plVar13;
      }
    }
LAB_022688dc:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(*(long *)PTR_DAT_04cad1f0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar15 = (long *)Dino_BusSand_App_Iap__get_QuietFail_217bd74(0);
  puVar4 = PTR_DAT_04cb6278;
  if (((ulong)plVar15 & 1) != 0) {
    return plVar15;
  }
  if ((bRam0000000004f9c300 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18,0);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cb6278);
    FUN_02132f7c(PTR_DAT_04cb62a8);
    FUN_02132f7c(PTR_DAT_04cb62b0);
    FUN_02132f7c(PTR_DAT_04caec20);
    bRam0000000004f9c300 = 1;
  }
  lVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  Dino_BusSand_App_UI_StoreTipsPanel_Request___ctor_22bb108(lVar14,0);
  puVar4 = PTR_DAT_04ca9d18;
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined4 *)(lVar14 + 0x10) = 2;
  lVar18 = *(long *)puVar4;
  lVar12 = *(long *)(lVar18 + 0x38);
  if (lVar12 == 0) {
    FUN_0216b4cc(lVar18);
    lVar12 = *(long *)(lVar18 + 0x38);
  }
  lVar12 = *(long *)(lVar12 + 0x10);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_0216b470();
  }
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar5 = PTR_DAT_04cab550;
  lVar12 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_0216b470();
  }
  puVar6 = PTR_DAT_04cb62a8;
  uVar22 = **(undefined8 **)(lVar12 + 0xb8);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar5);
  }
  uVar22 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar6,uVar22,0);
  *(undefined8 *)(lVar14 + 0x18) = uVar22;
  thunk_FUN_02134474();
  lVar18 = *(long *)puVar4;
  lVar12 = *(long *)(lVar18 + 0x38);
  if (lVar12 == 0) {
    FUN_0216b4cc(lVar18);
    lVar12 = *(long *)(lVar18 + 0x38);
  }
  lVar12 = *(long *)(lVar12 + 0x10);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_0216b470();
  }
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar5 = PTR_DAT_04cb62b0;
  lVar12 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_0216b470();
  }
  uVar22 = Dino_BusSand_App_Lang__Get_215f9c0
                     (*(undefined8 *)puVar5,**(undefined8 **)(lVar12 + 0xb8),0);
  *(undefined8 *)(lVar14 + 0x20) = uVar22;
  thunk_FUN_02134474();
  lVar18 = *(long *)puVar4;
  lVar12 = *(long *)(lVar18 + 0x38);
  if (lVar12 == 0) {
    FUN_0216b4cc(lVar18);
    lVar12 = *(long *)(lVar18 + 0x38);
  }
  lVar12 = *(long *)(lVar12 + 0x10);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_0216b470();
  }
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04caec20;
  lVar12 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_0216b470();
  }
  uVar22 = Dino_BusSand_App_Lang__Get_215f9c0
                     (*(undefined8 *)puVar4,**(undefined8 **)(lVar12 + 0xb8),0);
  *(undefined8 *)(lVar14 + 0x28) = uVar22;
  thunk_FUN_02134474();
  *(undefined8 *)(lVar14 + 0x30) = 0;
  thunk_FUN_02134474((undefined8 *)(lVar14 + 0x30),0);
  if ((bRam0000000004f9c2ff & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6468);
    FUN_02132f7c(PTR_DAT_04cb6470);
    FUN_02132f7c(PTR_DAT_04cb6478);
    bRam0000000004f9c2ff = 1;
  }
  puVar4 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar12 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar12,0,0);
  if ((lVar14 == 0) || ((uVar11 & 1) != 0)) {
    return (long *)0x0;
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar11 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                     (lVar12,*(undefined8 *)PTR_DAT_04cb6468);
  if ((uVar11 & 1) != 0) {
    return (long *)0x0;
  }
  lVar18 = *(long *)PTR_DAT_04cb6478;
  lVar19 = *(long *)PTR_DAT_04cb6470;
  if (*(long *)(lVar19 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cae1a0);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cabab8);
    FUN_02132f7c(PTR_DAT_04cabac0);
    FUN_02132f7c(PTR_DAT_04cabac8);
    FUN_02132f7c(PTR_DAT_04cae1a8);
    FUN_02132f7c(PTR_DAT_04cacf88);
    FUN_02132f7c(PTR_DAT_04cacf90);
    FUN_02132f7c(PTR_DAT_04cad3f0);
    FUN_02132f7c(PTR_DAT_04cad3f8);
    FUN_02132f7c(PTR_DAT_04cab4a0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cc5280);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cb4ce0);
    FUN_02132f7c(PTR_DAT_04cac4f8);
    FUN_02132f7c(PTR_DAT_04cabde0);
    FUN_02132f7c(PTR_DAT_04cabae0);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cabf58);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cab188);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cc5288);
    if (*(long *)(lVar19 + 0x38) == 0) {
      FUN_0216b4cc(lVar19);
    }
  }
  puVar4 = PTR_DAT_04ca9ac8;
  uStack_68 = 0;
  acStack_6c[0] = '\0';
  auStack_70[0] = 0;
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  lStack_80 = 0;
  uVar22 = *(undefined8 *)PTR_DAT_04cc5280;
  uStack_98 = 0;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar15 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar22,0);
  uVar22 = System_Type__GetTypeFromHandle_483f0b4(**(undefined8 **)(lVar19 + 0x38),0);
  if (plVar15 == (long *)0x0) goto LAB_02a45eb0;
  uVar9 = (**(code **)(*plVar15 + 0x2b8))(plVar15,uVar22,*(undefined8 *)(*plVar15 + 0x2c0));
  puVar5 = PTR_DAT_04ca9ae8;
  if ((uVar9 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar22 = Dino_BusSand_App_UiAssets__Prefab_21513b8(lVar18,0);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar5);
    }
    uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar22,0,0);
    if ((uVar11 & 1) != 0) {
      uVar22 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cc5288,lVar18,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogError_4361614(uVar22,0);
      return (long *)0x0;
    }
    uVar10 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar12,4,0);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar5);
    }
    lVar16 = UnityEngine_Object__Instantiate_object__2805310
                       (uVar22,uVar10,0,*(undefined8 *)PTR_DAT_04cad390);
LAB_02a45794:
    if (lVar16 == 0) goto LAB_02a45eb0;
  }
  else {
    uVar22 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar12,4,0);
    if (*(int *)(*(long *)PTR_DAT_04cac4f8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac4f8);
    }
    lVar16 = Dino_BusSand_App_UI_KitPrefabs__Spawn_2181840(lVar18,uVar22,0);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar5);
    }
    uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar16,0,0);
    if ((uVar11 & 1) == 0) goto LAB_02a45794;
    plVar15 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
    uVar22 = *(undefined8 *)PTR_DAT_04cad730;
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(puVar4 + 0xe0));
    }
    lVar16 = System_Type__GetTypeFromHandle_483f0b4(uVar22,0);
    if (plVar15 == (long *)0x0) goto LAB_02a45eb0;
    if ((lVar16 != 0) &&
       (lVar17 = thunk_FUN_0216e7a0(lVar16,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0)) {
      uVar22 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar22,0);
    }
    if ((int)plVar15[3] == 0) {
LAB_02a45eb4:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar15[4] = lVar16;
    thunk_FUN_02134474(plVar15 + 4,lVar16);
    lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c2310(lVar16,lVar18,plVar15,0);
    lVar17 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar12,4,0);
    if (((lVar17 == 0) ||
        (lVar17 = UnityEngine_Component__get_gameObject_43bcde8(lVar17,0), lVar17 == 0)) ||
       (uVar8 = UnityEngine_GameObject__get_layer_43c1118(lVar17,0), lVar16 == 0))
    goto LAB_02a45eb0;
    UnityEngine_GameObject__set_layer_43c11cc(lVar16,uVar8,0);
    lVar17 = UnityEngine_GameObject__get_transform_43c1048(lVar16,0);
    uVar22 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar12,4,0);
    if (lVar17 == 0) goto LAB_02a45eb0;
    UnityEngine_Transform__SetParent_43d1e34(lVar17,uVar22,0,0);
  }
  UnityEngine_Object__set_name_43c72ec(lVar16,lVar18,0);
  plVar15 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar16,0);
  if (plVar15 == (long *)0x0) {
    plVar15 = (long *)0x0;
  }
  else if (*plVar15 != *(long *)PTR_DAT_04cabdb0) {
    plVar15 = (long *)0x0;
  }
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(plVar15,0,0);
  if ((uVar11 & 1) != 0) {
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar4 = PTR_DAT_04cacfc0;
    if (plVar15 == (long *)0x0) goto LAB_02a45eb0;
    UnityEngine_RectTransform__set_anchorMin_43cf5e4
              (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
               (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],plVar15,0);
    if (cRam0000000004f9b949 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b949 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax_43cf768
              (*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8),
               *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc),plVar15,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin_43cfe84
              (**(undefined4 **)(*(long *)puVar4 + 0xb8),
               (*(undefined4 **)(*(long *)puVar4 + 0xb8))[1],plVar15,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax_43d0018
              (**(undefined4 **)(*(long *)puVar4 + 0xb8),
               (*(undefined4 **)(*(long *)puVar4 + 0xb8))[1],plVar15,0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    lVar17 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar17 + 0xc),*(undefined4 *)(lVar17 + 0x10),
               *(undefined4 *)(lVar17 + 0x14),plVar15,0);
  }
  lVar17 = UnityEngine_GameObject__GetComponent_object__275a5dc
                     (lVar16,*(undefined8 *)PTR_DAT_04cad3f0);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar5);
  }
  uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar17,0,0);
  if ((uVar11 & 1) != 0) {
    lVar17 = UnityEngine_GameObject__AddComponent_object__275a54c
                       (lVar16,*(undefined8 *)PTR_DAT_04cacf88);
  }
  if (lVar17 != 0) {
    UnityEngine_Canvas__set_additionalShaderChannels_4680600(lVar17,0x19,0);
    if (*(long *)(lVar12 + 0x38) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&lStack_c8,*(long *)(lVar12 + 0x38),*(undefined8 *)PTR_DAT_04cabae0);
      puVar4 = PTR_DAT_04cabac0;
      iVar24 = 0;
      plStack_88 = plStack_c0;
      lStack_90 = lStack_c8;
      lStack_80 = (long)puStack_b8;
      lStack_c8 = 0;
      plStack_c0 = &lStack_90;
      while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&lStack_90,*(undefined8 *)puVar4), lVar7 = lStack_80,
            (uVar11 & 1) != 0) {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
        if ((uVar11 & 1) != 0) {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if ((*(char *)(lVar7 + 0x2c) == '\0') && (*(int *)(lVar7 + 0x28) == 4)) {
            iVar24 = iVar24 + 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&lStack_90,*(undefined8 *)PTR_DAT_04cabab8);
      UnityEngine_Canvas__set_overrideSorting_467ff6c(lVar17,1,0);
      UnityEngine_Canvas__set_sortingOrder_46800e4(lVar17,iVar24 * 0x14 + 0xfb4,0);
      uVar22 = UnityEngine_GameObject__GetComponent_object__275a5dc
                         (lVar16,*(undefined8 *)PTR_DAT_04cad3f8);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar5);
      }
      uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar22,0,0);
      if ((uVar11 & 1) != 0) {
        UnityEngine_GameObject__AddComponent_object__275a54c(lVar16,*(undefined8 *)PTR_DAT_04cacf90)
        ;
      }
      Dino_BusSand_App_UI_UIManager__SubstituteSoftMasks_21fe774(lVar16,0);
      if (*(int *)(*(long *)PTR_DAT_04cab188 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UIParticleSorting__PrepareAll_217d4f4(lVar16,0);
      plVar15 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                  (lVar16,*(undefined8 *)(*(long *)(lVar19 + 0x38) + 0x10));
      lVar19 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                         (lVar16,1,*(undefined8 *)PTR_DAT_04cab4a0);
      puVar6 = PTR_DAT_04cae1a8;
      puVar4 = PTR_DAT_04cae1a0;
      if (lVar19 != 0) {
        uVar20 = *(uint *)(lVar19 + 0x18);
        if (0 < (int)uVar20) {
          uVar23 = 0;
          do {
            if (uVar20 <= uVar23) goto LAB_02a45eb4;
            lVar17 = *(long *)(lVar19 + (long)(int)uVar23 * 8 + 0x20);
            if (lVar17 == 0) goto LAB_02a45eb0;
            uVar22 = UnityEngine_Component__get_gameObject_43bcde8(lVar17,0);
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar5);
            }
            uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar22,lVar16,0);
            if ((uVar11 & 1) != 0) {
              uVar22 = UnityEngine_Component__GetComponent_object__26f97e8
                                 (lVar17,*(undefined8 *)puVar4);
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar5);
              }
              uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar22,0,0);
              if ((uVar11 & 1) != 0) {
                lVar17 = UnityEngine_Component__get_gameObject_43bcde8(lVar17,0);
                if (lVar17 == 0) goto LAB_02a45eb0;
                UnityEngine_GameObject__AddComponent_object__275a54c(lVar17,*(undefined8 *)puVar6);
              }
            }
            uVar20 = *(uint *)(lVar19 + 0x18);
            uVar23 = uVar23 + 1;
          } while ((int)uVar23 < (int)uVar20);
        }
        if (plVar15 != (long *)0x0) {
          plVar15[4] = lVar18;
          thunk_FUN_02134474(plVar15 + 4,lVar18);
          *(undefined4 *)(plVar15 + 5) = 4;
          lVar12 = *(long *)(lVar12 + 0x38);
          if (lVar12 != 0) {
            lVar19 = *(long *)(lVar12 + 0x10);
            lVar17 = *(long *)PTR_DAT_04cabde0;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar19 != 0) {
              uVar20 = *(uint *)(lVar12 + 0x18);
              if (uVar20 < *(uint *)(lVar19 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar20 + 1;
                plVar13 = (long *)(lVar19 + (long)(int)uVar20 * 8 + 0x20);
                *plVar13 = (long)plVar15;
                thunk_FUN_02134474(plVar13,plVar15);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar12,plVar15,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              puVar5 = PTR_DAT_04cb4ce0;
              puVar4 = PTR_DAT_04cad7b8;
              if ((uVar9 & 1) == 0) {
                lVar12 = *(long *)PTR_DAT_04cb4ce0;
                cVar21 = '\0';
                uStack_68 = 0;
              }
              else {
                uVar22 = UnityEngine_GameObject__get_transform_43c1048(lVar16,0);
                lVar12 = *(long *)puVar4;
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar12);
                }
                uStack_68 = Dino_BusSand_App_UI_KitAdopt__Begin_227d2a0(uVar22,lVar18,0);
                lVar12 = *(long *)puVar5;
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar12);
                  lVar12 = *(long *)puVar5;
                }
                cVar21 = **(char **)(lVar12 + 0xb8);
              }
              acStack_6c[0] = cVar21 != '\0';
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar12);
                lVar12 = *(long *)puVar5;
              }
              lVar18 = *(long *)(lVar12 + 0xb8);
              auStack_70[0] = *(undefined1 *)(lVar18 + 1);
              if (acStack_6c[0] != '\0') {
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar12);
                  lVar18 = *(long *)(*(long *)puVar5 + 0xb8);
                }
                *(undefined1 *)(lVar18 + 1) = 1;
              }
              plStack_c0 = (long *)acStack_6c;
              puStack_b8 = auStack_70;
              lStack_c8 = 0;
              puStack_b0 = &uStack_68;
              (**(code **)(*plVar15 + 0x178))(plVar15,lVar14,*(undefined8 *)(*plVar15 + 0x180));
              if ((char)*plStack_c0 != '\0') {
                lVar14 = *(long *)puVar5;
                uVar2 = *puStack_b8;
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar14 = *(long *)puVar5;
                }
                *(undefined1 *)(*(long *)(lVar14 + 0xb8) + 1) = uVar2;
              }
              uVar22 = *puStack_b0;
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_KitAdopt__End_227e4f0(uVar22,0);
              if (lStack_c8 == 0) {
                if (acStack_6c[0] != '\0') {
                  lVar14 = *(long *)puVar5;
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar14 = *(long *)puVar5;
                  }
                  lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
                  if (lVar14 != 0) {
                    (**(code **)(lVar14 + 0x18))
                              (*(undefined8 *)(lVar14 + 0x40),plVar15,*(undefined8 *)(lVar14 + 0x28)
                              );
                  }
                }
                uVar22 = UnityEngine_GameObject__get_transform_43c1048(lVar16,0);
                Dino_BusSand_App_UI_UIManager__FullScreenBackdrops_21fe258(uVar22,0);
                uVar22 = UnityEngine_GameObject__get_transform_43c1048(lVar16,0);
                if (*(int *)(*(long *)PTR_DAT_04cabf58 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabf58);
                }
                Dino_BusSand_App_SpriteSkin__Apply_215e5c0(uVar22,0);
                Dino_BusSand_App_UI_UiTweaks__Attach_22a3600(plVar15,0);
                Dino_BusSand_App_UI_UIManagerEvents__RaiseOpened_220008c(plVar15,0);
                return plVar15;
              }
                    /* WARNING: Subroutine does not return */
              FUN_0213321c();
            }
          }
        }
      }
    }
  }
LAB_02a45eb0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

