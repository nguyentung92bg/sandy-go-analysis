/* IL2CPP: Dino.BusSand.Core.Road$$BuildTrains
void Dino_BusSand_Core_Road__BuildTrains (Dino_BusSand_Core_Road_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02514420) */
/* WARNING: Removing unreachable block (ram,0x025149ec) */
/* WARNING: Removing unreachable block (ram,0x025144a8) */
/* WARNING: Removing unreachable block (ram,0x02514c30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.Road$$BuildTrains
   void Dino_BusSand_Core_Road__BuildTrains (Dino_BusSand_Core_Road_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_Core_Road__BuildTrains_241402c(long param_1)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  double dStack_d8;
  long lStack_d0;
  double dStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  
  if ((bRam0000000004f9cb67 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe690);
    FUN_02132f7c(PTR_DAT_04cbe640);
    FUN_02132f7c(PTR_DAT_04cbe698);
    FUN_02132f7c(PTR_DAT_04cbe620);
    FUN_02132f7c(PTR_DAT_04cbe648);
    FUN_02132f7c(PTR_DAT_04cbe5f8);
    FUN_02132f7c(PTR_DAT_04cbe650);
    FUN_02132f7c(PTR_DAT_04cbe5e8);
    FUN_02132f7c(PTR_DAT_04cbe6a0);
    FUN_02132f7c(PTR_DAT_04cbe660);
    FUN_02132f7c(PTR_DAT_04cbe6a8);
    FUN_02132f7c(PTR_DAT_04cb1890);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cbe668);
    FUN_02132f7c(PTR_DAT_04cbe670);
    FUN_02132f7c(PTR_DAT_04cbe5f0);
    FUN_02132f7c(PTR_DAT_04cbe6b0);
    FUN_02132f7c(PTR_DAT_04cbe600);
    FUN_02132f7c(PTR_DAT_04cbe6b8);
    FUN_02132f7c(PTR_DAT_04cbe6c0);
    bRam0000000004f9cb67 = 1;
  }
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  lStack_80 = 0;
  uStack_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  lStack_a0 = 0;
  lStack_c0 = 0;
  lStack_b8 = 0;
  lStack_d0 = 0;
  dStack_c8 = 0.0;
  lStack_e0 = 0;
  dStack_d8 = 0.0;
  if (*(long *)(param_1 + 0x78) != 0) {
    System_Collections_Generic_Dictionary_int__object___Clear_34374b4
              (*(long *)(param_1 + 0x78),*(undefined8 *)PTR_DAT_04cbe698);
    puVar4 = PTR_DAT_04cbe640;
    if (*(long *)(param_1 + 0x80) != 0) {
      System_Collections_Generic_Dictionary_int__double___Clear_3422bec
                (*(long *)(param_1 + 0x80),*(undefined8 *)PTR_DAT_04cbe640);
      if (*(long *)(param_1 + 0x88) != 0) {
        System_Collections_Generic_Dictionary_int__double___Clear_3422bec
                  (*(long *)(param_1 + 0x88),*(undefined8 *)puVar4);
        lVar17 = *(long *)(param_1 + 0x90);
        if (lVar17 != 0) {
          iVar12 = *(int *)(lVar17 + 0x18);
          *(undefined4 *)(lVar17 + 0x18) = 0;
          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
          if (0 < iVar12) {
            System_Array__Clear_4851dc8(*(undefined8 *)(lVar17 + 0x10),0,iVar12,0);
          }
          puVar7 = PTR_DAT_04cbe5f0;
          puVar6 = PTR_DAT_04cb1898;
          puVar4 = PTR_DAT_04cb1890;
          if (*(long *)(param_1 + 0x58) != 0) {
            System_Collections_Generic_List_object___GetEnumerator_3a825f0
                      (&uStack_f8,*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_04cbe5f0);
            bVar3 = false;
            lStack_80 = lStack_e8;
            puStack_88 = puStack_f0;
            uStack_90 = uStack_f8;
            uStack_f8 = 0;
            puStack_f0 = &uStack_90;
            while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                      (&uStack_90,*(undefined8 *)puVar6), (uVar13 & 1) != 0) {
              if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              *(undefined4 *)(lStack_80 + 0x60) = 0xffffffff;
              *(undefined1 *)(lStack_80 + 100) = 0;
              bVar3 = (bool)(0 < *(int *)(lStack_80 + 0x5c) | bVar3);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_90,*(undefined8 *)puVar4);
            if (!bVar3) {
              return;
            }
            if (*(long *)(param_1 + 0x58) != 0) {
              System_Collections_Generic_List_object___GetEnumerator_3a825f0
                        (&uStack_f8,*(long *)(param_1 + 0x58),*(undefined8 *)puVar7);
              puVar9 = PTR_DAT_04cbe6c0;
              puVar8 = PTR_DAT_04cbe6a8;
              dVar22 = _UNK_00e6a008;
              puStack_88 = puStack_f0;
              uStack_90 = uStack_f8;
              lStack_80 = lStack_e8;
              while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                        (&uStack_90,*(undefined8 *)puVar6), lVar17 = lStack_80,
                    (uVar13 & 1) != 0) {
                if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                if (((0 < *(int *)(lVar17 + 0x5c)) && (*(char *)(lVar17 + 0x50) == '\0')) &&
                   (*(int *)(lVar17 + 0x28) - 1U < 3)) {
                  if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  System_Collections_Generic_List_object___GetEnumerator_3a825f0
                            (&uStack_f8,*(long *)(param_1 + 0x58),*(undefined8 *)puVar7);
                  uStack_b0 = uStack_f8;
                  uStack_f8 = 0;
                  lStack_a0 = lStack_e8;
                  puStack_a8 = puStack_f0;
                  lVar15 = 0;
                  dVar20 = 1.7976931348623157e+308;
                  puStack_f0 = &uStack_b0;
                  while (dVar21 = dVar20, lVar14 = lVar15,
                        uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                           (&uStack_b0,*(undefined8 *)puVar6), lVar18 = lStack_a0,
                        (uVar13 & 1) != 0) {
                    lVar15 = lVar14;
                    dVar20 = dVar21;
                    if (lStack_a0 != lVar17) {
                      if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02133224();
                      }
                      iVar12 = *(int *)(lStack_a0 + 0x5c);
                      if (iVar12 == *(int *)(lVar17 + 0x5c)) {
                        if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                          iVar12 = *(int *)(lVar18 + 0x5c);
                        }
                        if (((((0 < iVar12) && (*(char *)(lVar18 + 0x50) == '\0')) &&
                             ((uVar2 = *(uint *)(lVar18 + 0x28), uVar2 - 1 < 3 &&
                              (uVar2 < 2 != 1 < *(int *)(lVar17 + 0x28))))) &&
                            ((uVar2 == 3 || (*(int *)(lVar17 + 0x28) != 3)))) &&
                           (dVar20 = (double)Dino_BusSand_Core_Road__AheadOf_2416514
                                                       (*(undefined8 *)(lVar17 + 0x40),
                                                        *(undefined8 *)(lVar18 + 0x40),param_1),
                           lVar15 = lVar18, dVar20 <= dVar22 || dVar21 <= dVar20)) {
                          lVar15 = lVar14;
                          dVar20 = dVar21;
                        }
                      }
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                            (&uStack_b0,*(undefined8 *)puVar4);
                  if (lVar14 != 0) {
                    if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    System_Collections_Generic_Dictionary_int__object___set_Item_3437318
                              (*(long *)(param_1 + 0x78),*(undefined4 *)(lVar17 + 0x10),lVar14,
                               *(undefined8 *)puVar8);
                  }
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                        (&uStack_90,*(undefined8 *)puVar4);
              if (*(long *)(param_1 + 0x58) != 0) {
                System_Collections_Generic_List_object___GetEnumerator_3a825f0
                          (&uStack_f8,*(long *)(param_1 + 0x58),*(undefined8 *)puVar7);
                puVar10 = PTR_DAT_04cbe6a0;
                puVar9 = PTR_DAT_04cbe648;
                puVar8 = PTR_DAT_04cbe620;
                puVar4 = PTR_DAT_04cbe5f8;
                puStack_88 = puStack_f0;
                uStack_90 = uStack_f8;
                lStack_80 = lStack_e8;
                puStack_f0 = &uStack_90;
                uStack_f8 = 0;
LAB_025144f8:
                uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                   (&uStack_90,*(undefined8 *)puVar6);
                lVar17 = lStack_80;
                puVar5 = PTR_DAT_04cb1890;
                if ((uVar13 & 1) != 0) {
                  if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  uVar13 = System_Collections_Generic_Dictionary_int__object___ContainsKey_3437520
                                     (*(long *)(param_1 + 0x78),*(undefined4 *)(lStack_80 + 0x10),
                                      *(undefined8 *)puVar8);
                  if ((uVar13 & 1) != 0) {
                    iVar12 = 0;
                    lVar15 = lVar17;
                    do {
                      if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02133224();
                      }
                      uVar13 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                                         (*(long *)(param_1 + 0x78),*(undefined4 *)(lVar15 + 0x10),
                                          &lStack_b8,*(undefined8 *)puVar4);
                      lVar15 = lStack_b8;
                      if ((uVar13 & 1) == 0) {
                        lVar15 = 0;
                      }
                      if ((lVar15 == 0) || (lVar15 == lVar17)) {
                        if (lVar15 == lVar17) {
                          dVar22 = -1.0;
                          lVar15 = lVar17;
                          lVar18 = 0;
                          do {
                            if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_02133224();
                            }
                            lVar14 = System_Collections_Generic_Dictionary_int__object___get_Item_343728c
                                               (*(long *)(param_1 + 0x78),
                                                *(undefined4 *)(lVar15 + 0x10),
                                                *(undefined8 *)puVar10);
                            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_02133224();
                            }
                            dVar20 = (double)Dino_BusSand_Core_Road__AheadOf_2416514
                                                       (*(undefined8 *)(lVar15 + 0x40),
                                                        *(undefined8 *)(lVar14 + 0x40),param_1);
                            lVar1 = lVar15;
                            if (dVar20 <= dVar22) {
                              lVar1 = lVar18;
                              dVar20 = dVar22;
                            }
                            dVar22 = dVar20;
                            lVar15 = lVar14;
                            lVar18 = lVar1;
                          } while (lVar14 != lVar17);
                          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02133224();
                          }
                          if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02133224();
                          }
                          System_Collections_Generic_Dictionary_int__object___Remove_34387d4
                                    (*(long *)(param_1 + 0x78),*(undefined4 *)(lVar1 + 0x10),
                                     *(undefined8 *)puVar9);
                        }
                        break;
                      }
                      if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02133224();
                      }
                      iVar12 = iVar12 + 1;
                      lVar15 = lStack_b8;
                    } while (iVar12 <= *(int *)(*(long *)(param_1 + 0x58) + 0x18));
                  }
                  goto LAB_025144f8;
                }
                System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                          (&uStack_90,*(undefined8 *)PTR_DAT_04cb1890);
                if (*(long *)(param_1 + 0x78) != 0) {
                  iVar12 = System_Collections_Generic_Dictionary_int__object___get_Count_3436fc4
                                     (*(long *)(param_1 + 0x78),*(undefined8 *)PTR_DAT_04cbe5e8);
                  if (iVar12 == 0) {
                    return;
                  }
                  if (*(long *)(param_1 + 0x58) != 0) {
                    System_Collections_Generic_List_object___GetEnumerator_3a825f0
                              (&uStack_f8,*(long *)(param_1 + 0x58),*(undefined8 *)puVar7);
                    puVar8 = PTR_DAT_04cbe668;
                    dVar22 = _UNK_00e69b78;
                    puStack_88 = puStack_f0;
                    uStack_90 = uStack_f8;
                    lStack_80 = lStack_e8;
                    puStack_f0 = &uStack_90;
                    uStack_f8 = 0;
LAB_0251465c:
                    uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                       (&uStack_90,*(undefined8 *)puVar6);
                    lVar17 = lStack_80;
                    if ((uVar13 & 1) != 0) {
                      if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02133224();
                      }
                      if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02133224();
                      }
                      uVar13 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                                         (*(long *)(param_1 + 0x78),
                                          *(undefined4 *)(lStack_80 + 0x10),&lStack_c0,
                                          *(undefined8 *)puVar4);
                      if ((uVar13 & 1) != 0) {
                        if (lStack_c0 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02133224();
                        }
                        *(undefined4 *)(lVar17 + 0x60) = *(undefined4 *)(lStack_c0 + 0x10);
                        dVar20 = (double)Dino_BusSand_Core_Road__AheadOf_2416514
                                                   (*(undefined8 *)(lVar17 + 0x40),
                                                    *(undefined8 *)(lStack_c0 + 0x40),param_1);
                        dVar21 = (double)Dino_BusSand_Core_Road__CouplingDistance_241659c
                                                   (param_1,lStack_c0,lVar17);
                        *(bool *)(lVar17 + 100) = dVar20 - dVar21 <= dVar22;
                        lVar15 = *(long *)(param_1 + 0x90);
                        if (lVar15 != 0) {
                          lVar18 = *(long *)(lVar15 + 0x10);
                          lVar14 = *(long *)puVar8;
                          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                          if (lVar18 != 0) {
                            uVar2 = *(uint *)(lVar15 + 0x18);
                            if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                              *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                              plVar19 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
                              *plVar19 = lVar17;
                              thunk_FUN_02134474(plVar19,lVar17);
                            }
                            else {
                              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                        (lVar15,lVar17,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                            }
                            goto LAB_0251465c;
                          }
                        }
                    /* WARNING: Subroutine does not return */
                        FUN_02133224();
                      }
                      goto LAB_0251465c;
                    }
                    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                              (&uStack_90,*(undefined8 *)puVar5);
                    lVar17 = *(long *)(param_1 + 0x90);
                    uVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbe690);
                    System_Comparison_object____ctor_3326afc
                              (uVar16,param_1,*(undefined8 *)PTR_DAT_04cbe6b8,0);
                    if (lVar17 != 0) {
                      System_Collections_Generic_List_object___Sort_3a83690
                                (lVar17,uVar16,*(undefined8 *)PTR_DAT_04cbe6b0);
                      if (*(long *)(param_1 + 0x90) != 0) {
                        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                                  (&uStack_f8,*(long *)(param_1 + 0x90),*(undefined8 *)puVar7);
                        puVar9 = PTR_DAT_04cbe660;
                        puVar8 = PTR_DAT_04cbe650;
                        puStack_88 = puStack_f0;
                        uStack_90 = uStack_f8;
                        lStack_80 = lStack_e8;
                        uStack_f8 = 0;
                        puStack_f0 = &uStack_90;
                        while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                                  (&uStack_90,*(undefined8 *)puVar6),
                              lVar17 = lStack_80, (uVar13 & 1) != 0) {
                          if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02133224();
                          }
                          lVar15 = lStack_80;
                          if (*(char *)(lStack_80 + 100) == '\0') {
                            while( true ) {
                              if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_02133224();
                              }
                              uVar13 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                                                 (*(long *)(param_1 + 0x78),
                                                  *(undefined4 *)(lVar15 + 0x10),&lStack_d0,
                                                  *(undefined8 *)puVar4);
                              if ((uVar13 & 1) == 0) break;
                              lVar15 = lStack_d0;
                              if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_02133224();
                              }
                            }
                            dVar22 = (double)Dino_BusSand_Core_Road__NormalStep_2416618
                                                       (*(undefined8 *)(lVar17 + 0x40),param_1,
                                                        lVar17,*(int *)(lVar17 + 0x58) + 1);
                            if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_02133224();
                            }
                            bVar11 = System_Collections_Generic_Dictionary_int__double___TryGetValue_34244bc
                                               (*(long *)(param_1 + 0x80),
                                                *(undefined4 *)(lVar15 + 0x10),&dStack_c8,
                                                *(undefined8 *)puVar8);
                            if ((bVar11 & dStack_c8 <= dVar22) == 0) {
                              if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_02133224();
                              }
                              System_Collections_Generic_Dictionary_int__double___set_Item_3422a4c
                                        (dVar22,*(long *)(param_1 + 0x80),
                                         *(undefined4 *)(lVar15 + 0x10),*(undefined8 *)puVar9);
                            }
                          }
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                                  (&uStack_90,*(undefined8 *)puVar5);
                        if (*(long *)(param_1 + 0x90) != 0) {
                          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                                    (&uStack_f8,*(long *)(param_1 + 0x90),*(undefined8 *)puVar7);
                          lStack_80 = lStack_e8;
                          puStack_88 = puStack_f0;
                          uStack_90 = uStack_f8;
                          uStack_f8 = 0;
                          puStack_f0 = &uStack_90;
                          while( true ) {
                            uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                               (&uStack_90,*(undefined8 *)puVar6);
                            lVar17 = lStack_80;
                            if ((uVar13 & 1) == 0) {
                              System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                                        (&uStack_90,*(undefined8 *)PTR_DAT_04cb1890);
                              return;
                            }
                            if (lStack_80 == 0) break;
                            lVar15 = lStack_80;
                            if (*(int *)(lStack_80 + 0x28) == 1) {
                              while( true ) {
                                if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02133224();
                                }
                                uVar13 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                                                   (*(long *)(param_1 + 0x78),
                                                    *(undefined4 *)(lVar15 + 0x10),&lStack_e0,
                                                    *(undefined8 *)puVar4);
                                if ((uVar13 & 1) == 0) break;
                                lVar15 = lStack_e0;
                                if (lStack_e0 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02133224();
                                }
                              }
                              dVar22 = (double)Dino_BusSand_Core_Road__SpeedGrainsPerTickAt_2412994
                                                         (*(undefined8 *)(lVar17 + 0x40),param_1);
                              if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_02133224();
                              }
                              bVar11 = System_Collections_Generic_Dictionary_int__double___TryGetValue_34244bc
                                                 (*(long *)(param_1 + 0x88),
                                                  *(undefined4 *)(lVar15 + 0x10),&dStack_d8,
                                                  *(undefined8 *)puVar8);
                              if ((bVar11 & dStack_d8 <= dVar22) == 0) {
                                if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02133224();
                                }
                                System_Collections_Generic_Dictionary_int__double___set_Item_3422a4c
                                          (dVar22,*(long *)(param_1 + 0x88),
                                           *(undefined4 *)(lVar15 + 0x10),*(undefined8 *)puVar9);
                              }
                            }
                          }
                    /* WARNING: Subroutine does not return */
                          FUN_02133224();
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

