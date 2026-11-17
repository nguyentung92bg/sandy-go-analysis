/* IL2CPP: Dino.BusSand.App.Meta.ActivityContinueFeature$$QuitList
System_Collections_Generic_List_IStakeActivity__o* Dino_BusSand_App_Meta_ActivityContinueFeature__QuitList (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023424f8) */
/* IL2CPP: Dino.BusSand.App.Meta.ActivityContinueFeature$$QuitList
   System_Collections_Generic_List_IStakeActivity__o*
   Dino_BusSand_App_Meta_ActivityContinueFeature__QuitList (const MethodInfo* method); */

long Dino_BusSand_App_Meta_ActivityContinueFeature__QuitList_221e370(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  char *pcVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  ulong uVar21;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined4 uStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  
  puVar3 = PTR_DAT_04cadaa0;
  if ((bRam0000000004f9bdb4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadaa0);
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9bdb4 = 1;
  }
  lVar10 = *(long *)puVar3;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *(long *)puVar3;
  }
  puVar4 = PTR_DAT_04cac668;
  pcVar17 = *(char **)(lVar10 + 0xb8);
  if (*pcVar17 == '\0') {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      pcVar17 = *(char **)(*(long *)puVar3 + 0xb8);
    }
    uVar15 = *(undefined8 *)(pcVar17 + 0x18);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* catch() { ... } // from try @ 0231e40c with catch @ 0231e434
                       try { // try from 0231e434 to 0241e453 has its CatchHandler @ 0231e2a8 */
                    /* catch() { ... } // from try @ 0231e2f8 with catch @ 0231e438 */
    lVar10 = Dino_BusSand_App_Meta_LiveOps__AtStake_22420d0(uVar15,0);
    if ((bRam0000000004f9bdb6 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cb28f8);
      FUN_02132f7c(PTR_DAT_04cada88);
      bRam0000000004f9bdb6 = 1;
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar1 = *(int *)(lVar10 + 0x18) + -2;
    if (iVar1 != 0 && 1 < *(int *)(lVar10 + 0x18)) {
      System_Collections_Generic_List_object___RemoveRange_3a83438
                (lVar10,2,iVar1,*(undefined8 *)PTR_DAT_04cb28f8);
    }
    return lVar10;
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    pcVar17 = *(char **)(*(long *)puVar3 + 0xb8);
  }
  lVar10 = *(long *)(pcVar17 + 8);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar6 = PTR_DAT_04cadbe0;
  puVar4 = PTR_DAT_04cadbd8;
  puVar3 = PTR_DAT_04cac668;
                    /* try { // try from 0231e40c to 0241e433 has its CatchHandler @ 0231e434 */
  if ((bRam0000000004f9bf0e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb37f8,0);
    FUN_02132f7c(PTR_DAT_04cb3800);
    FUN_02132f7c(PTR_DAT_04cb3808);
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cb37e8);
    FUN_02132f7c(PTR_DAT_04cadac0);
    FUN_02132f7c(PTR_DAT_04caf8d8);
    FUN_02132f7c(PTR_DAT_04cb3818);
    FUN_02132f7c(PTR_DAT_04cadbd8);
    FUN_02132f7c(PTR_DAT_04cadbe0);
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9bf0e = 1;
  }
  lStack_80 = 0;
  plStack_78 = (long *)0x0;
  plStack_70 = (long *)0x0;
  uStack_88 = 0;
  lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar11,*(undefined8 *)puVar4);
  lVar12 = *(long *)puVar3;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar12 = *(long *)puVar3;
  }
  puVar8 = PTR_DAT_04cb3800;
  puVar7 = PTR_DAT_04cb37e8;
  puVar6 = PTR_DAT_04caf8d8;
  puVar4 = PTR_DAT_04cadac0;
  puVar3 = PTR_DAT_04cac458;
  if (*(char *)(*(long *)(lVar12 + 0xb8) + 8) != '\0') {
    if (lVar10 == 0) {
LAB_023425cc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
      uVar21 = 0;
      uVar18 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      do {
        puVar5 = PTR_DAT_04cac668;
        if (uVar18 <= uVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        iVar1 = *(int *)(lVar10 + uVar21 * 4 + 0x20);
        lVar12 = *(long *)PTR_DAT_04cac668;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar12 = *(long *)puVar5;
        }
        if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_023425cc;
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&lStack_a8,**(long **)(lVar12 + 0xb8),*(undefined8 *)PTR_DAT_04cb3818);
        plStack_70 = plStack_98;
        plStack_78 = plStack_a0;
        lStack_80 = lStack_a8;
        lStack_a8 = 0;
        plStack_a0 = &lStack_80;
LAB_02342284:
        uVar18 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                           (&lStack_80,*(undefined8 *)puVar8);
        plVar16 = plStack_70;
        lVar12 = lStack_a8;
        if ((uVar18 & 1) != 0) {
          plVar13 = (long *)thunk_FUN_0216e7a0(plStack_70,*(undefined8 *)puVar4);
          if (plVar13 != (long *)0x0) {
            lVar12 = *plVar13;
            uVar18 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar18 != 0) {
              piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                  puVar14 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_023422f8;
                }
                uVar18 = uVar18 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar18 != 0);
            }
            puVar14 = (undefined8 *)FUN_0216b7a4(plVar13,*(long *)puVar4,0);
LAB_023422f8:
            iVar9 = (*(code *)*puVar14)(plVar13,puVar14[1]);
            if (iVar9 == iVar1) {
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar12 = *plVar16;
              uVar18 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar18 != 0) {
                piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar7) {
                    puVar14 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_0234235c;
                  }
                  uVar18 = uVar18 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar18 != 0);
              }
              puVar14 = (undefined8 *)FUN_0216b7a4(plVar16,*(long *)puVar7,0);
LAB_0234235c:
              uVar15 = (*(code *)*puVar14)(plVar16,puVar14[1]);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar18 = Dino_BusSand_App_Meta_FeatureGate__AllowsLiveFeature_220bdf0(uVar15,0);
              if ((uVar18 & 1) != 0) {
                lVar12 = *plVar13;
                uVar18 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar18 != 0) {
                  piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                      puVar14 = (undefined8 *)(lVar12 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                      goto LAB_023423dc;
                    }
                    uVar18 = uVar18 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar18 != 0);
                }
                puVar14 = (undefined8 *)FUN_0216b7a4(plVar13,*(long *)puVar4,1);
LAB_023423dc:
                uVar18 = (*(code *)*puVar14)(plVar13,puVar14[1]);
                if ((uVar18 & 1) != 0) {
                  if (lVar11 != 0) {
                    lVar12 = *(long *)(lVar11 + 0x10);
                    lVar19 = *(long *)puVar6;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar12 != 0) {
                      uVar2 = *(uint *)(lVar11 + 0x18);
                      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                        *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                        plVar16 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
                        *plVar16 = (long)plVar13;
                        thunk_FUN_02134474(plVar16,plVar13);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                  (lVar11,plVar13,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                      }
                      goto LAB_02342284;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
              }
            }
          }
          goto LAB_02342284;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (plStack_a0,*(undefined8 *)PTR_DAT_04cb37f8);
        if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213321c(lVar12);
        }
        uVar18 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar21 = uVar21 + 1;
      } while ((long)uVar21 < (long)(int)*(uint *)(lVar10 + 0x18));
    }
  }
  return lVar11;
}

