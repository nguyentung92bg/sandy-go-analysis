/* IL2CPP: Dino.BusSand.Core.Road$$Advance
void Dino_BusSand_Core_Road__Advance (Dino_BusSand_Core_Road_o* __this, int64_t tick, Dino_BusSand_Core_SandGrid_o* grid, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.Road$$Advance
   void Dino_BusSand_Core_Road__Advance (Dino_BusSand_Core_Road_o* __this, int64_t tick,
   Dino_BusSand_Core_SandGrid_o* grid, System_Collections_Generic_List_SimEvent__o* evts, const
   MethodInfo* method); */

void Dino_BusSand_Core_Road__Advance_2412c60(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  double dStack_130;
  double dStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  
  if ((bRam0000000004f9cb5e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe640);
    FUN_02132f7c(PTR_DAT_04cbe648);
    FUN_02132f7c(PTR_DAT_04cbe650);
    FUN_02132f7c(PTR_DAT_04cbe658);
    FUN_02132f7c(PTR_DAT_04cbe660);
    FUN_02132f7c(PTR_DAT_04cb1890);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cb8528);
    FUN_02132f7c(PTR_DAT_04cb58d0);
    FUN_02132f7c(PTR_DAT_04cbe668);
    FUN_02132f7c(PTR_DAT_04cbe670);
    FUN_02132f7c(PTR_DAT_04cbe678);
    FUN_02132f7c(PTR_DAT_04cbe5f0);
    FUN_02132f7c(PTR_DAT_04cbe680);
    FUN_02132f7c(PTR_DAT_04cbe688);
    FUN_02132f7c(PTR_DAT_04cbe600);
    FUN_02132f7c(PTR_DAT_04cbe608);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb5e = 1;
  }
  lVar17 = *(long *)(param_1 + 0x58);
  uStack_120 = 0;
  puStack_118 = (undefined8 *)0x0;
  lStack_110 = 0;
  dStack_130 = 0.0;
  dStack_128 = 0.0;
  uStack_138 = 0;
  if (lVar17 != 0) {
    iVar12 = *(int *)(lVar17 + 0x18);
    *(undefined4 *)(lVar17 + 0x18) = 0;
    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
    if (0 < iVar12) {
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar17 + 0x10),0,iVar12,0);
    }
    puVar7 = PTR_DAT_04cbe668;
    puVar6 = PTR_DAT_04cbe660;
    puVar5 = PTR_DAT_04cbe658;
    puVar4 = PTR_DAT_04cbe608;
    puVar2 = PTR_DAT_04cb8528;
    puVar3 = PTR_DAT_04cb1898;
    lVar17 = *(long *)(param_1 + 0x50);
    if (lVar17 != 0) {
      iVar12 = 0;
      do {
        if (*(int *)(lVar17 + 0x18) <= iVar12) {
          if (*(long *)(param_1 + 0x68) != 0) {
            System_Collections_Generic_HashSet_int___Clear_37db554
                      (*(long *)(param_1 + 0x68),*(undefined8 *)puVar2);
            *(long *)(param_1 + 0xb8) = param_2;
            Dino_BusSand_Core_Road__BuildTrains_241402c(param_1);
            puVar4 = PTR_DAT_04cbe5f0;
            puVar2 = PTR_DAT_04cb1890;
            if (*(long *)(param_1 + 0x58) != 0) {
              System_Collections_Generic_List_object___GetEnumerator_3a825f0
                        (&uStack_c0,*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_04cbe5f0);
              lStack_110 = lStack_b0;
              puStack_118 = puStack_b8;
              uStack_120 = uStack_c0;
              uStack_c0 = 0;
              puStack_b8 = &uStack_120;
              goto LAB_02512eec;
            }
          }
          break;
        }
        lVar19 = *(long *)(param_1 + 0x58);
        uVar15 = System_Collections_Generic_List_object___get_Item_3a81924
                           (lVar17,iVar12,*(undefined8 *)puVar4);
        if (lVar19 == 0) break;
        lVar17 = *(long *)(lVar19 + 0x10);
        lVar18 = *(long *)puVar7;
        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
        if (lVar17 == 0) break;
        uVar1 = *(uint *)(lVar19 + 0x18);
        if (uVar1 < *(uint *)(lVar17 + 0x18)) {
          *(uint *)(lVar19 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar17 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
          thunk_FUN_02134474();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar19,uVar15,
                     *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
        }
        lVar17 = *(long *)(param_1 + 0x50);
        iVar12 = iVar12 + 1;
      } while (lVar17 != 0);
    }
  }
  goto LAB_02512e90;
LAB_02512eec:
  uVar16 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                     (&uStack_120,*(undefined8 *)puVar3);
  lVar17 = lStack_110;
  if ((uVar16 & 1) != 0) goto code_r0x02512efc;
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_120,*(undefined8 *)puVar2);
  if (*(long *)(param_1 + 0x58) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_c0,*(long *)(param_1 + 0x58),*(undefined8 *)puVar4);
    lStack_110 = lStack_b0;
    puStack_118 = puStack_b8;
    uStack_120 = uStack_c0;
    uStack_c0 = 0;
    puStack_b8 = &uStack_120;
    lVar19 = 0;
    while (lVar17 = lVar19,
          uVar16 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_120,*(undefined8 *)puVar3), (uVar16 & 1) != 0) {
      if (lStack_110 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar19 = lVar17;
      if ((((*(int *)(lStack_110 + 0x28) == 0) && (*(long *)(lStack_110 + 0x30) <= param_2)) &&
          (lVar19 = lStack_110, lVar17 != 0)) &&
         (lVar19 = lVar17, *(int *)(lStack_110 + 0x38) < *(int *)(lVar17 + 0x38))) {
        lVar19 = lStack_110;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_120,*(undefined8 *)puVar2);
    if (lVar17 != 0) {
      *(undefined1 *)(lVar17 + 0x50) = 1;
      uStack_e0 = 0;
      puStack_d8 = (undefined8 *)0x0;
      lStack_d0 = 0;
      dVar21 = -((double)*(int *)(lVar17 + 0x1c) / 2.0 + (double)*(int *)(param_1 + 0x2c));
      *(double *)(lVar17 + 0x40) = dVar21;
      *(double *)(lVar17 + 0x48) = dVar21;
      Dino_BusSand_Core_SimEvent___ctor_241dc50(&uStack_e0,8,*(undefined4 *)(lVar17 + 0x10),0,0,0);
      if (param_4 == 0) goto LAB_02512e90;
      lVar19 = *(long *)(param_4 + 0x10);
      lVar18 = *(long *)PTR_DAT_04cb58d0;
      *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
      if (lVar19 == 0) goto LAB_02512e90;
      uVar1 = *(uint *)(param_4 + 0x18);
      if (uVar1 < *(uint *)(lVar19 + 0x18)) {
        lVar19 = lVar19 + (long)(int)uVar1 * 0x18;
        *(uint *)(param_4 + 0x18) = uVar1 + 1;
        *(long *)(lVar19 + 0x30) = lStack_d0;
        *(undefined8 **)(lVar19 + 0x28) = puStack_d8;
        *(undefined8 *)(lVar19 + 0x20) = uStack_e0;
        thunk_FUN_02134474((long *)(lVar19 + 0x30),0);
      }
      else {
        puStack_b8 = puStack_d8;
        uStack_c0 = uStack_e0;
        lStack_b0 = lStack_d0;
        System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                  (param_4,&uStack_c0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_02513088;
    }
    *(undefined1 *)(param_1 + 0xb0) = 0;
    goto LAB_025131bc;
  }
  goto LAB_02512e90;
code_r0x02512efc:
  if (lStack_110 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(char *)(lStack_110 + 0x50) != '\0') goto code_r0x02512f0c;
  goto LAB_02512eec;
code_r0x02512f0c:
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_120,*(undefined8 *)puVar2);
LAB_02513088:
  bVar11 = Dino_BusSand_Core_Road__LoopHasRoomFor_241261c(param_1,lVar17);
  *(byte *)(param_1 + 0xb0) = (bVar11 ^ 0xff) & 1;
  if ((~bVar11 & 1) == 0) {
    if ((double)*(int *)(lVar17 + 0x1c) * -0.5 + _UNK_00e6a480 <= *(double *)(lVar17 + 0x40)) {
      uVar16 = Dino_BusSand_Core_Road__IsSlotClear_2414ca8(param_1,lVar17);
      bVar11 = 1;
      if ((uVar16 & 1) == 0) goto LAB_025131c0;
      *(undefined1 *)(lVar17 + 0x50) = 0;
      *(undefined4 *)(lVar17 + 0x28) = 1;
      uStack_e0 = 0;
      puStack_d8 = (undefined8 *)0x0;
      lStack_d0 = 0;
      *(double *)(lVar17 + 0x40) = (double)*(int *)(lVar17 + 0x1c) * -0.5;
      Dino_BusSand_Core_SimEvent___ctor_241dc50(&uStack_e0,9,*(undefined4 *)(lVar17 + 0x10),0,0,0);
      if (param_4 == 0) goto LAB_02512e90;
      lVar17 = *(long *)(param_4 + 0x10);
      lVar19 = *(long *)PTR_DAT_04cb58d0;
      *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
      if (lVar17 == 0) goto LAB_02512e90;
      uVar1 = *(uint *)(param_4 + 0x18);
      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
        lVar17 = lVar17 + (long)(int)uVar1 * 0x18;
        *(uint *)(param_4 + 0x18) = uVar1 + 1;
        *(long *)(lVar17 + 0x30) = lStack_d0;
        *(undefined8 **)(lVar17 + 0x28) = puStack_d8;
        *(undefined8 *)(lVar17 + 0x20) = uStack_e0;
        thunk_FUN_02134474((long *)(lVar17 + 0x30),0);
      }
      else {
        puStack_b8 = puStack_d8;
        uStack_c0 = uStack_e0;
        lStack_b0 = lStack_d0;
        System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                  (param_4,&uStack_c0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
      lVar17 = 0;
      *(long *)(param_1 + 0xa0) = param_2;
    }
LAB_025131bc:
    bVar11 = 1;
  }
  else {
    bVar11 = 0;
  }
LAB_025131c0:
  if (*(long *)(param_1 + 0x60) == 0) goto LAB_02512e90;
  System_Collections_Generic_Dictionary_int__double___Clear_3422bec
            (*(long *)(param_1 + 0x60),*(undefined8 *)PTR_DAT_04cbe640);
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_02512e90;
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_c0,*(long *)(param_1 + 0x58),*(undefined8 *)puVar4);
  lStack_110 = lStack_b0;
  puStack_118 = puStack_b8;
  uStack_120 = uStack_c0;
  uStack_c0 = 0;
  puStack_b8 = &uStack_120;
  while (uVar16 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_120,*(undefined8 *)puVar3), lVar19 = lStack_110,
        (uVar16 & 1) != 0) {
    if (lStack_110 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_Dictionary_int__double___set_Item_3422a4c
              (*(undefined8 *)(lStack_110 + 0x40),*(long *)(param_1 + 0x60),
               *(undefined4 *)(lStack_110 + 0x10),*(undefined8 *)puVar6);
    *(undefined8 *)(lVar19 + 0x48) = *(undefined8 *)(lVar19 + 0x40);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_120,*(undefined8 *)puVar2);
  Dino_BusSand_Core_Road__BuildTrains_241402c(param_1);
  puVar20 = (undefined8 *)PTR_DAT_04cbe650;
  if (lVar17 == 0) {
LAB_025132bc:
    dVar25 = 1.7976931348623157e+308;
    dVar21 = 1.7976931348623157e+308;
  }
  else {
    bVar9 = (bool)(bVar11 ^ 1);
    if (*(char *)(lVar17 + 0x50) == '\0') {
      bVar9 = true;
    }
    if (bVar9) goto LAB_025132bc;
    dVar21 = (double)Dino_BusSand_Core_Road__MergeReservationFor_2414f04(param_1,lVar17);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_02512e90;
    dVar25 = (double)(*(int *)(param_1 + 0x24) - *(int *)(*(long *)(param_1 + 0x10) + 0x20));
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_c0,*(long *)(param_1 + 0x58),*(undefined8 *)puVar4);
    lStack_110 = lStack_b0;
    puStack_118 = puStack_b8;
    uStack_120 = uStack_c0;
    uStack_c0 = 0;
    puStack_b8 = &uStack_120;
LAB_025132f4:
    do {
      uVar16 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                         (&uStack_120,*(undefined8 *)puVar3);
      lVar17 = lStack_110;
      if ((uVar16 & 1) == 0) goto LAB_02513568;
      if (lStack_110 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(lStack_110 + 0x60) < 0) {
        if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        iVar12 = System_Collections_Generic_Dictionary_int__double___get_Count_34226f8
                           (*(long *)(param_1 + 0x80),*(undefined8 *)puVar5);
        if (iVar12 < 1) {
          dVar27 = 1.7976931348623157e+308;
        }
        else {
          if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar16 = System_Collections_Generic_Dictionary_int__double___TryGetValue_34244bc
                             (*(long *)(param_1 + 0x80),*(undefined4 *)(lVar17 + 0x10),&dStack_128,
                              *puVar20);
          dVar27 = dStack_128;
          if ((uVar16 & 1) == 0) {
            dVar27 = 1.7976931348623157e+308;
          }
        }
        iVar12 = *(int *)(lVar17 + 0x28);
        if (iVar12 == 3) {
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          dVar26 = *(double *)(*(long *)(param_1 + 0x10) + 0x18);
          dVar22 = (double)Dino_BusSand_Core_Road__LeavingFactor_2414f38(param_1,lVar17);
          dVar26 = dVar26 * dVar22;
          if (dVar26 <= dVar27) {
            dVar27 = dVar26;
          }
          dVar27 = dVar27 + *(double *)(lVar17 + 0x40);
        }
        else {
          if (*(char *)(lVar17 + 0x50) == '\0') {
            if (iVar12 == 2) {
              dVar22 = *(double *)(lVar17 + 0x40);
              iVar12 = *(int *)(lVar17 + 0x1c);
              uVar15 = Dino_BusSand_Core_Road__SpeedGrainsPerTickAt_2412994(dVar22,param_1);
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              dVar24 = *(double *)(*(long *)(param_1 + 0x10) + 0x18);
              dVar26 = (double)Dino_BusSand_Core_Road__LeavingFactor_2414f38(param_1,lVar17);
              if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              dVar26 = (double)System_Math__Max_4830f98(uVar15,dVar24 * dVar26,0);
            }
            else {
              if (iVar12 != 1) goto LAB_025132f4;
              dVar22 = *(double *)(lVar17 + 0x40);
              iVar12 = *(int *)(lVar17 + 0x1c);
              dVar26 = (double)Dino_BusSand_Core_Road__SpeedGrainsPerTickAt_2412994(dVar22,param_1);
            }
            dVar24 = dVar26;
            if (*(int *)(lVar17 + 0x28) == 1) {
              if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              iVar13 = System_Collections_Generic_Dictionary_int__double___get_Count_34226f8
                                 (*(long *)(param_1 + 0x88),*(undefined8 *)puVar5);
              if (0 < iVar13) {
                if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                bVar11 = System_Collections_Generic_Dictionary_int__double___TryGetValue_34244bc
                                   (*(long *)(param_1 + 0x88),*(undefined4 *)(lVar17 + 0x10),
                                    &dStack_130,*(undefined8 *)PTR_DAT_04cbe650);
                dVar24 = dStack_130;
                if ((bVar11 & dStack_130 < dVar26) == 0) {
                  dVar24 = dVar26;
                }
              }
            }
            dVar26 = (double)iVar12 / 2.0;
            if (dVar24 <= dVar27) {
              dVar27 = dVar24;
            }
            dVar24 = dVar22 + dVar26;
            bVar9 = false;
            bVar10 = true;
            if (dVar21 < dVar26 + dVar22 + dVar27) {
              bVar9 = false;
              bVar10 = true;
              if (!NAN(dVar24) && !NAN(dVar21)) {
                bVar9 = dVar24 == dVar21;
                bVar10 = dVar21 <= dVar24;
              }
            }
            bVar8 = false;
            if ((!bVar10 || bVar9) && (bVar8 = false, !NAN(dVar21))) {
              bVar8 = dVar21 < 1.7976931348623157e+308;
            }
            dVar23 = dVar21 - dVar26;
            if (!bVar8) {
              dVar23 = dVar22 + dVar27;
            }
            bVar9 = false;
            bVar10 = true;
            if (dVar25 < dVar26 + dVar23) {
              bVar9 = false;
              bVar10 = true;
              if (!NAN(dVar24) && !NAN(dVar25)) {
                bVar9 = dVar24 == dVar25;
                bVar10 = dVar25 <= dVar24;
              }
            }
            bVar8 = false;
            if ((!bVar10 || bVar9) && (bVar8 = false, !NAN(dVar25))) {
              bVar8 = dVar25 < 1.7976931348623157e+308;
            }
            dVar27 = dVar25 - dVar26;
            if (!bVar8) {
              dVar27 = dVar23;
            }
            uVar15 = Dino_BusSand_Core_Road__ClampBehindLeader_2415244
                               (dVar22,dVar27,param_1,lVar17,0);
            Dino_BusSand_Core_Road__MoveOnLoop_24155b8(dVar22,uVar15,param_1,lVar17,param_4);
            puVar20 = (undefined8 *)PTR_DAT_04cbe650;
            goto LAB_025132f4;
          }
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          dVar27 = *(double *)(lVar17 + 0x40);
          dVar22 = *(double *)(*(long *)(param_1 + 0x10) + 0x18);
          dVar26 = *(double *)(param_1 + 0x30);
          iVar12 = *(int *)(lVar17 + 0x1c);
          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar15 = System_Math__Min_48310e8(dVar27 + dVar22 * dVar26,(double)iVar12 * -0.5,0);
          dVar27 = (double)Dino_BusSand_Core_Road__ClampBeforeMerge_2414f58
                                     (*(undefined8 *)(lVar17 + 0x40),uVar15,param_1,lVar17);
        }
        *(double *)(lVar17 + 0x40) = dVar27;
      }
    } while( true );
  }
  goto LAB_02512e90;
LAB_02513568:
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_120,*(undefined8 *)puVar2);
  if (*(long *)(param_1 + 0x90) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_c0,*(long *)(param_1 + 0x90),*(undefined8 *)puVar4);
    lStack_110 = lStack_b0;
    puStack_118 = puStack_b8;
    uStack_120 = uStack_c0;
    uStack_c0 = 0;
    puStack_b8 = &uStack_120;
    while (uVar16 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_120,*(undefined8 *)puVar3), (uVar16 & 1) != 0) {
      Dino_BusSand_Core_Road__MoveFollower_2415748(dVar21,dVar25,param_1,lStack_110,param_4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_120,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x58) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_c0,*(long *)(param_1 + 0x58),*(undefined8 *)puVar4);
      dVar25 = _UNK_00e6a7f0;
      dVar21 = _UNK_00e69b78;
      puStack_118 = puStack_b8;
      uStack_120 = uStack_c0;
      lStack_110 = lStack_b0;
      uStack_c0 = 0;
      puStack_b8 = &uStack_120;
      while (uVar16 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&uStack_120,*(undefined8 *)puVar3), (uVar16 & 1) != 0) {
        if (lStack_110 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        dVar27 = *(double *)(lStack_110 + 0x40) - *(double *)(lStack_110 + 0x48);
        if (((dVar21 < dVar27) || (dVar27 < dVar25)) &&
           (*(long *)(param_1 + 0xa0) = param_2, (*(uint *)(lStack_110 + 0x28) & 0xfffffffe) == 2))
        {
          *(long *)(param_1 + 0xa8) = param_2;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_120,*(undefined8 *)puVar2);
      if (*(long *)(param_1 + 0x58) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_c0,*(long *)(param_1 + 0x58),*(undefined8 *)puVar4);
        lStack_110 = lStack_b0;
        puStack_d8 = &uStack_120;
        puStack_118 = puStack_b8;
        uStack_120 = uStack_c0;
        uStack_e0 = 0;
LAB_025136a4:
        uVar16 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                           (&uStack_120,*(undefined8 *)puVar3);
        lVar17 = lStack_110;
        puVar2 = PTR_DAT_04cb1890;
        if ((uVar16 & 1) != 0) {
          if (lStack_110 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (((*(int *)(lStack_110 + 0x28) == 1) &&
              (*(int *)(lStack_110 + 0x24) < *(int *)(lStack_110 + 0x20))) &&
             (uVar16 = Dino_BusSand_Core_Road__TryBoardFootprint_2415a10
                                 (param_1,lStack_110,(long)&uStack_138 + 4,&uStack_138),
             (uVar16 & 1) != 0)) {
            uVar14 = *(undefined4 *)(param_1 + 0x40);
            iVar12 = *(int *)(lVar17 + 0x20);
            iVar13 = *(int *)(lVar17 + 0x24);
            if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar14 = System_Math__Min_4831118(uVar14,iVar12 - iVar13,0);
            lVar19 = *(long *)(param_1 + 0x70);
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            *(undefined4 *)(lVar19 + 0x18) = 0;
            *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
            if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            iVar12 = -0x80000000;
            if ((double)(long)*(double *)(lVar17 + 0x40) != INFINITY) {
              iVar12 = (int)*(double *)(lVar17 + 0x40);
            }
            iVar12 = Dino_BusSand_Core_SandGrid__Collect_2418c50
                               (param_3,*(undefined1 *)(lVar17 + 0x14),uStack_138._4_4_,
                                uStack_138 & 0xffffffff,0,*(int *)(param_1 + 0x3c) + -1,uVar14,
                                lVar19,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x34),
                                iVar12 - *(int *)(param_1 + 0x1c),0);
            if (0 < iVar12) {
              *(int *)(lVar17 + 0x24) = *(int *)(lVar17 + 0x24) + iVar12;
              if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar14 = *(undefined4 *)(lVar17 + 0x10);
              uVar15 = System_Collections_Generic_List_GrainPoint___ToArray_3a28aa4
                                 (*(long *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_04cbe688);
              uStack_c0 = 0;
              puStack_b8 = (undefined8 *)0x0;
              lStack_b0 = 0;
              Dino_BusSand_Core_SimEvent___ctor_241dc50(&uStack_c0,0xb,uVar14,iVar12,uVar15,0);
              if (param_4 != 0) {
                lVar17 = *(long *)(param_4 + 0x10);
                lVar19 = *(long *)PTR_DAT_04cb58d0;
                *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
                if (lVar17 != 0) {
                  uVar1 = *(uint *)(param_4 + 0x18);
                  if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                    lVar17 = lVar17 + (long)(int)uVar1 * 0x18;
                    *(uint *)(param_4 + 0x18) = uVar1 + 1;
                    *(long *)(lVar17 + 0x30) = lStack_b0;
                    *(undefined8 **)(lVar17 + 0x28) = puStack_b8;
                    *(undefined8 *)(lVar17 + 0x20) = uStack_c0;
                    thunk_FUN_02134474((long *)(lVar17 + 0x30),0);
                  }
                  else {
                    puStack_f8 = puStack_b8;
                    uStack_100 = uStack_c0;
                    lStack_f0 = lStack_b0;
                    System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                              (param_4,&uStack_100,
                               *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                  }
                  goto LAB_025136a4;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
          }
          goto LAB_025136a4;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_120,*(undefined8 *)PTR_DAT_04cb1890);
        puVar6 = PTR_DAT_04cbe680;
        puVar5 = PTR_DAT_04cbe648;
        puVar4 = PTR_DAT_04cb58d0;
        if (*(long *)(param_1 + 0x58) != 0) {
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&uStack_c0,*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_04cbe5f0);
          lStack_110 = lStack_b0;
          puStack_158 = &uStack_120;
          puStack_118 = puStack_b8;
          uStack_120 = uStack_c0;
          uStack_160 = 0;
LAB_025138d4:
          uVar16 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_120,*(undefined8 *)puVar3);
          lVar17 = lStack_110;
          if ((uVar16 & 1) != 0) {
            if (lStack_110 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            iVar12 = *(int *)(lStack_110 + 0x28);
            if (iVar12 == 1) {
              if (*(int *)(lStack_110 + 0x20) <= *(int *)(lStack_110 + 0x24)) {
                if (*(int *)(lStack_110 + 0x5c) < 1) {
                  Dino_BusSand_Core_Road__Complete_2415be0(param_1,lStack_110,param_4);
                }
                else {
                  uVar16 = Dino_BusSand_Core_Road__IsChainFull_2415d9c(param_1);
                  if ((uVar16 & 1) != 0) {
                    Dino_BusSand_Core_Road__ReleaseChain_2415efc
                              (param_1,*(undefined4 *)(lVar17 + 0x5c),param_4);
                  }
                }
              }
              iVar12 = *(int *)(lVar17 + 0x28);
            }
            if (((iVar12 == 2) &&
                (uVar16 = Dino_BusSand_Core_Road__AtExitBranch_24162d0(param_1,lVar17),
                (uVar16 & 1) != 0)) &&
               (uVar16 = Dino_BusSand_Core_Road__TrainMayExit_2416398(param_1,lVar17),
               (uVar16 & 1) != 0)) {
              *(undefined4 *)(lVar17 + 0x28) = 3;
              uStack_c0 = 0;
              puStack_b8 = (undefined8 *)0x0;
              lStack_b0 = 0;
              Dino_BusSand_Core_SimEvent___ctor_241dc50
                        (&uStack_c0,0xd,*(undefined4 *)(lVar17 + 0x10),0,0,0);
              if (param_4 != 0) {
                lVar17 = *(long *)(param_4 + 0x10);
                lVar19 = *(long *)puVar4;
                *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
                if (lVar17 != 0) {
                  uVar1 = *(uint *)(param_4 + 0x18);
                  if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                    lVar17 = lVar17 + (long)(int)uVar1 * 0x18;
                    *(uint *)(param_4 + 0x18) = uVar1 + 1;
                    *(long *)(lVar17 + 0x30) = lStack_b0;
                    *(undefined8 **)(lVar17 + 0x28) = puStack_b8;
                    *(undefined8 *)(lVar17 + 0x20) = uStack_c0;
                    thunk_FUN_02134474((long *)(lVar17 + 0x30),0);
                  }
                  else {
                    puStack_d8 = puStack_b8;
                    uStack_e0 = uStack_c0;
                    lStack_d0 = lStack_b0;
                    System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                              (param_4,&uStack_e0,
                               *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                  }
                  *(long *)(param_1 + 0xa8) = param_2;
                  goto LAB_025138d4;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            goto LAB_025138d4;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_120,*(undefined8 *)puVar2);
          if (*(long *)(param_1 + 0x58) != 0) {
            System_Collections_Generic_List_object___GetEnumerator_3a825f0
                      (&uStack_c0,*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_04cbe5f0);
            lStack_110 = lStack_b0;
            puStack_140 = &uStack_120;
            puStack_118 = puStack_b8;
            uStack_120 = uStack_c0;
            uStack_148 = 0;
            while( true ) {
              do {
                uVar16 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                   (&uStack_120,*(undefined8 *)puVar3);
                lVar17 = lStack_110;
                if ((uVar16 & 1) == 0) {
                  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                            (&uStack_120,*(undefined8 *)puVar2);
                  return;
                }
                if (lStack_110 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
              } while ((*(int *)(lStack_110 + 0x28) != 3) ||
                      (*(double *)(lStack_110 + 0x40) + (double)*(int *)(lStack_110 + 0x1c) * -0.5 <
                       (double)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x20))));
              if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              System_Collections_Generic_Dictionary_int__object___Remove_34387d4
                        (*(long *)(param_1 + 0x48),*(undefined4 *)(lStack_110 + 0x10),
                         *(undefined8 *)puVar5);
              lVar19 = *(long *)(param_1 + 0x50);
              uVar16 = Dino_BusSand_Core_Road__IndexOf_2412848
                                 (param_1,*(undefined4 *)(lVar17 + 0x10));
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224(uVar16,uVar16 & 0xffffffff);
              }
              System_Collections_Generic_List_object___RemoveAt_3a833a0
                        (lVar19,uVar16 & 0xffffffff,*(undefined8 *)puVar6);
              uStack_160 = 0;
              puStack_158 = (undefined8 *)0x0;
              lStack_150 = 0;
              Dino_BusSand_Core_SimEvent___ctor_241dc50
                        (&uStack_160,0xe,*(undefined4 *)(lVar17 + 0x10),0,0,0);
              if (param_4 == 0) break;
              lVar17 = *(long *)(param_4 + 0x10);
              lVar19 = *(long *)puVar4;
              *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
              if (lVar17 == 0) break;
              uVar1 = *(uint *)(param_4 + 0x18);
              if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                lVar17 = lVar17 + (long)(int)uVar1 * 0x18;
                *(uint *)(param_4 + 0x18) = uVar1 + 1;
                *(long *)(lVar17 + 0x30) = lStack_150;
                *(undefined8 **)(lVar17 + 0x28) = puStack_158;
                *(undefined8 *)(lVar17 + 0x20) = uStack_160;
                thunk_FUN_02134474((long *)(lVar17 + 0x30),0);
              }
              else {
                puStack_b8 = puStack_158;
                uStack_c0 = uStack_160;
                lStack_b0 = lStack_150;
                System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                          (param_4,&uStack_c0,
                           *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(param_1 + 0xa0) = param_2;
              *(long *)(param_1 + 0xa8) = param_2;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        }
      }
    }
  }
LAB_02512e90:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

