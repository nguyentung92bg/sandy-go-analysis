/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$AtStake
System_Collections_Generic_List_IStakeActivity__o* Dino_BusSand_App_Meta_LiveOps__AtStake (System_Int32_array* order, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023424f8) */
/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$AtStake
   System_Collections_Generic_List_IStakeActivity__o* Dino_BusSand_App_Meta_LiveOps__AtStake
   (System_Int32_array* order, const MethodInfo* method); */

long Dino_BusSand_App_Meta_LiveOps__AtStake_22420d0(long param_1)

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
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  ulong uVar19;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined4 uStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  
  puVar6 = PTR_DAT_04cadbe0;
  puVar5 = PTR_DAT_04cadbd8;
  puVar3 = PTR_DAT_04cac668;
  if ((bRam0000000004f9bf0e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb37f8);
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
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar10,*(undefined8 *)puVar5);
  lVar11 = *(long *)puVar3;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar11 = *(long *)puVar3;
  }
  puVar8 = PTR_DAT_04cb3800;
  puVar7 = PTR_DAT_04cb37e8;
  puVar6 = PTR_DAT_04caf8d8;
  puVar5 = PTR_DAT_04cadac0;
  puVar3 = PTR_DAT_04cac458;
  if (*(char *)(*(long *)(lVar11 + 0xb8) + 8) != '\0') {
    if (param_1 == 0) {
LAB_023425cc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (0 < (int)*(ulong *)(param_1 + 0x18)) {
      uVar19 = 0;
      uVar16 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
      do {
        puVar4 = PTR_DAT_04cac668;
        if (uVar16 <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        iVar1 = *(int *)(param_1 + uVar19 * 4 + 0x20);
        lVar11 = *(long *)PTR_DAT_04cac668;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar11 = *(long *)puVar4;
        }
        if (**(long **)(lVar11 + 0xb8) == 0) goto LAB_023425cc;
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&lStack_a8,**(long **)(lVar11 + 0xb8),*(undefined8 *)PTR_DAT_04cb3818);
        plStack_70 = plStack_98;
        plStack_78 = plStack_a0;
        lStack_80 = lStack_a8;
        lStack_a8 = 0;
        plStack_a0 = &lStack_80;
LAB_02342284:
        uVar16 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                           (&lStack_80,*(undefined8 *)puVar8);
        plVar15 = plStack_70;
        lVar11 = lStack_a8;
        if ((uVar16 & 1) != 0) {
          plVar12 = (long *)thunk_FUN_0216e7a0(plStack_70,*(undefined8 *)puVar5);
          if (plVar12 != (long *)0x0) {
            lVar11 = *plVar12;
            uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
                  puVar13 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_023422f8;
                }
                uVar16 = uVar16 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar16 != 0);
            }
            puVar13 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)puVar5,0);
LAB_023422f8:
            iVar9 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            if (iVar9 == iVar1) {
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar11 = *plVar15;
              uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)puVar7) {
                    puVar13 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_0234235c;
                  }
                  uVar16 = uVar16 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar16 != 0);
              }
              puVar13 = (undefined8 *)FUN_0216b7a4(plVar15,*(long *)puVar7,0);
LAB_0234235c:
              uVar14 = (*(code *)*puVar13)(plVar15,puVar13[1]);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar16 = Dino_BusSand_App_Meta_FeatureGate__AllowsLiveFeature_220bdf0(uVar14,0);
              if ((uVar16 & 1) != 0) {
                lVar11 = *plVar12;
                uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar16 != 0) {
                  piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
                      puVar13 = (undefined8 *)(lVar11 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                      goto LAB_023423dc;
                    }
                    uVar16 = uVar16 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar16 != 0);
                }
                puVar13 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)puVar5,1);
LAB_023423dc:
                uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
                if ((uVar16 & 1) != 0) {
                  if (lVar10 != 0) {
                    lVar11 = *(long *)(lVar10 + 0x10);
                    lVar17 = *(long *)puVar6;
                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    if (lVar11 != 0) {
                      uVar2 = *(uint *)(lVar10 + 0x18);
                      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                        plVar15 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
                        *plVar15 = (long)plVar12;
                        thunk_FUN_02134474(plVar15,plVar12);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                  (lVar10,plVar12,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
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
        if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213321c(lVar11);
        }
        uVar16 = (ulong)*(uint *)(param_1 + 0x18);
        uVar19 = uVar19 + 1;
      } while ((long)uVar19 < (long)(int)*(uint *)(param_1 + 0x18));
    }
  }
  return lVar10;
}

