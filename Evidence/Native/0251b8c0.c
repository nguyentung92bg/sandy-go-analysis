/* IL2CPP: Dino.BusSand.Core.SimBot$$BestTap
int32_t Dino_BusSand_Core_SimBot__BestTap (Dino_BusSand_Core_StageEngine_o* e, float greed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0251be1c) */
/* WARNING: Removing unreachable block (ram,0x0251c2b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.SimBot$$BestTap
   int32_t Dino_BusSand_Core_SimBot__BestTap (Dino_BusSand_Core_StageEngine_o* e, float greed, const
   MethodInfo* method); */

int Dino_BusSand_Core_SimBot__BestTap_241b8c0(float param_1,long param_2)

{
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  int *piVar24;
  long lVar25;
  int iVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  long *plStack_110;
  long **pplStack_108;
  long lStack_100;
  int iStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long **pplStack_d8;
  long lStack_d0;
  long *plStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long **pplStack_a8;
  long lStack_a0;
  
  if ((bRam0000000004f9cb88 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe518);
    FUN_02132f7c(PTR_DAT_04cbe440);
    FUN_02132f7c(PTR_DAT_04cbc448);
    FUN_02132f7c(PTR_DAT_04cbe468);
    FUN_02132f7c(PTR_DAT_04cbe488);
    FUN_02132f7c(PTR_DAT_04cb1890);
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cae220);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cbbf60);
    FUN_02132f7c(PTR_DAT_04cbbf68);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    FUN_02132f7c(PTR_DAT_04cb18a8);
    FUN_02132f7c(PTR_DAT_04cb1880);
    FUN_02132f7c(PTR_DAT_04cbc0c8);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb88 = 1;
  }
  plStack_b0 = (long *)0x0;
  pplStack_a8 = (long **)0x0;
  lStack_a0 = 0;
  plStack_c0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_e0 = (long *)0x0;
  pplStack_d8 = (long **)0x0;
  lStack_d0 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  iStack_f4 = 0;
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x80) != '\0') {
      return -1;
    }
    if (*(long *)(param_2 + 0x28) != 0) {
      uStack_b8 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0();
      Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
                (&plStack_110,&uStack_b8,*(undefined8 *)PTR_DAT_04cab9f8);
      puVar7 = PTR_DAT_04cab9e8;
      bVar3 = false;
      pplStack_a8 = pplStack_108;
      plStack_b0 = plStack_110;
      lStack_a0 = lStack_100;
      plStack_110 = (long *)0x0;
      pplStack_108 = &plStack_b0;
      while (uVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&plStack_b0,*(undefined8 *)puVar7), lVar25 = lStack_a0,
            (uVar15 & 1) != 0) {
        if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(char *)(lStack_a0 + 0x44) != '\0') {
          if (*(long *)(param_2 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar15 = Dino_BusSand_Core_TruckGrid__CanTap_241c41c(*(long *)(param_2 + 0x28),lStack_a0);
          bVar3 = true;
          if ((uVar15 & 1) != 0) {
            iVar26 = *(int *)(lVar25 + 0x10);
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&plStack_b0,*(undefined8 *)PTR_DAT_04cab9e0);
            return iVar26;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&plStack_b0,*(undefined8 *)PTR_DAT_04cab9e0);
      if (*(long *)(param_2 + 0x20) != 0) {
        uVar15 = Dino_BusSand_Core_Road__get_IsFull_24121b8(*(long *)(param_2 + 0x20),0);
        if ((uVar15 & 1) != 0) {
          return -1;
        }
        if ((*(long *)(param_2 + 0x20) != 0) && (lVar25 = *(long *)(param_2 + 0x18), lVar25 != 0)) {
          iVar26 = *(int *)(*(long *)(param_2 + 0x20) + 0x3c);
          iVar14 = *(int *)(lVar25 + 0x14);
          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          iVar1 = -0x80000000;
          if (param_1 * 28.0 != INFINITY) {
            iVar1 = (int)(param_1 * 28.0);
          }
          uVar11 = System_Math__Min_4831118(iVar14 + -1,iVar26 + iVar1,0);
          puVar8 = PTR_DAT_04cbe488;
          lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbe488);
          puVar6 = PTR_DAT_04cbe440;
          System_Collections_Generic_Dictionary_byte__int____ctor_33a1cc8
                    (lVar16,*(undefined8 *)PTR_DAT_04cbe440);
          lVar17 = thunk_FUN_0216e89c(*(undefined8 *)puVar8);
          System_Collections_Generic_Dictionary_byte__int____ctor_33a1cc8
                    (lVar17,*(undefined8 *)puVar6);
          plVar18 = (long *)Dino_BusSand_Core_SandGrid__PresentColors_241767c(lVar25);
          if (plVar18 != (long *)0x0) {
            lVar23 = *plVar18;
            uVar15 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar15 != 0) {
              piVar24 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_04cbbf60) {
                  puVar19 = (undefined8 *)(lVar23 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_0251bc2c;
                }
                uVar15 = uVar15 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar15 != 0);
            }
            puVar19 = (undefined8 *)FUN_0216b7a4(plVar18,*(long *)PTR_DAT_04cbbf60,0);
LAB_0251bc2c:
            plStack_c0 = (long *)(*(code *)*puVar19)(plVar18,puVar19[1]);
            puVar9 = PTR_DAT_04cbe468;
            puVar8 = PTR_DAT_04cbbf68;
            puVar6 = PTR_DAT_04ca9c08;
            pplStack_108 = &plStack_c0;
            plStack_110 = (long *)0x0;
            do {
              plVar18 = plStack_c0;
              if (plStack_c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar23 = *plStack_c0;
              uVar15 = (ulong)*(ushort *)(lVar23 + 0x12e);
              if (uVar15 != 0) {
                piVar24 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)puVar6) {
                    puVar19 = (undefined8 *)(lVar23 + (long)*piVar24 * 0x10 + 0x138);
                    goto LAB_0251bcb4;
                  }
                  uVar15 = uVar15 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar15 != 0);
              }
              puVar19 = (undefined8 *)FUN_0216b7a4(plStack_c0,*(long *)puVar6,0);
LAB_0251bcb4:
              uVar15 = (*(code *)*puVar19)(plVar18,puVar19[1]);
              plVar18 = plStack_c0;
              if ((uVar15 & 1) == 0) {
                if (plStack_c0 == (long *)0x0) goto LAB_0251be10;
                lVar17 = *plStack_c0;
                uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar15 == 0) goto LAB_0251bde8;
                piVar24 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                goto LAB_0251bdd0;
              }
              if (plStack_c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar23 = *plStack_c0;
              uVar15 = (ulong)*(ushort *)(lVar23 + 0x12e);
              if (uVar15 != 0) {
                piVar24 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)puVar8) {
                    puVar19 = (undefined8 *)(lVar23 + (long)*piVar24 * 0x10 + 0x138);
                    goto LAB_0251bd18;
                  }
                  uVar15 = uVar15 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar15 != 0);
              }
              puVar19 = (undefined8 *)FUN_0216b7a4(plStack_c0,*(long *)puVar8,0);
LAB_0251bd18:
              uVar12 = (*(code *)*puVar19)(plVar18,puVar19[1]);
              uVar13 = Dino_BusSand_Core_SandGrid__CountOf_2417b60
                                 (lVar25,uVar12,0,*(int *)(lVar25 + 0x10) + -1,0,iVar26 + -1);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              System_Collections_Generic_Dictionary_byte__int___set_Item_33a2a40
                        (lVar16,uVar12,uVar13,*(undefined8 *)puVar9);
              uVar13 = Dino_BusSand_Core_SandGrid__CountOf_2417b60
                                 (lVar25,uVar12,0,*(int *)(lVar25 + 0x10) + -1,0,uVar11);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              System_Collections_Generic_Dictionary_byte__int___set_Item_33a2a40
                        (lVar17,uVar12,uVar13,*(undefined8 *)puVar9);
            } while( true );
          }
        }
      }
    }
  }
  goto LAB_0251c1d0;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar24 = piVar24 + 4;
    if (uVar15 == 0) break;
LAB_0251bdd0:
    if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar19 = (undefined8 *)(lVar17 + (long)*piVar24 * 0x10 + 0x138);
      goto LAB_0251be04;
    }
  }
LAB_0251bde8:
  puVar19 = (undefined8 *)FUN_0216b7a4(plStack_c0,*(long *)PTR_DAT_04ca9b30,0);
LAB_0251be04:
  (*(code *)*puVar19)(plVar18,puVar19[1]);
LAB_0251be10:
  lVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbe488);
                    /* try { // try from 0251be3c to 0261bf27 has its CatchHandler @ 0251be3c
                       catch() { ... } // from try @ 0251be3c with catch @ 0251be3c
                       catch() { ... } // from try @ 0251bf94 with catch @ 0251be3c
                       catch() { ... } // from try @ 0251bfcc with catch @ 0251be3c
                       catch() { ... } // from try @ 0251c028 with catch @ 0251be3c */
  System_Collections_Generic_Dictionary_byte__int____ctor_33a1cc8
            (lVar17,*(undefined8 *)PTR_DAT_04cbe440);
  if (*(long *)(param_2 + 0x20) != 0) {
    uStack_e8 = Dino_BusSand_Core_Road__get_Buses_2411e9c(*(long *)(param_2 + 0x20),0);
    Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
              (&plStack_110,&uStack_e8,*(undefined8 *)PTR_DAT_04cb18a8);
    puVar6 = PTR_DAT_04cb1898;
    pplStack_d8 = pplStack_108;
    plStack_e0 = plStack_110;
    lStack_d0 = lStack_100;
    plStack_110 = (long *)0x0;
    pplStack_108 = &plStack_e0;
    while (uVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&plStack_e0,*(undefined8 *)puVar6), lVar23 = lStack_d0,
          (uVar15 & 1) != 0) {
      if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar15 = Dino_BusSand_Core_RoadBus__get_CountsTowardCapacity_2411848(lStack_d0,0);
      if ((uVar15 & 1) != 0) {
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar2 = *(undefined1 *)(lVar23 + 0x14);
        uVar15 = System_Collections_Generic_Dictionary_byte__int___TryGetValue_33a43cc
                           (lVar17,uVar2,(long)&uStack_f0 + 4,*(undefined8 *)PTR_DAT_04cbe518);
        iVar26 = uStack_f0._4_4_;
        iVar14 = Dino_BusSand_Core_RoadBus__get_Remaining_24118a8(lVar23,0);
        if ((uVar15 & 1) == 0) {
          iVar26 = 0;
        }
        System_Collections_Generic_Dictionary_byte__int___set_Item_33a2a40
                  (lVar17,uVar2,iVar14 + iVar26,*(undefined8 *)puVar9);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&plStack_e0,*(undefined8 *)PTR_DAT_04cb1890);
    puVar6 = PTR_DAT_04cab9f8;
                    /* try { // try from 0251bf28 to 0261bf47 has its CatchHandler @ 0251bf98 */
    if (bVar3) {
      lVar23 = Dino_BusSand_Core_SimBot__BoxingIn_241c5ec(param_2);
    }
    else {
      lVar23 = 0;
    }
                    /* try { // try from 0251bf4c to 0261bf6b has its CatchHandler @ 0251bf9c */
    if (*(long *)(param_2 + 0x28) != 0) {
      uStack_b8 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0();
      Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
                (&plStack_110,&uStack_b8,*(undefined8 *)puVar6);
      plStack_b0 = plStack_110;
      puVar6 = PTR_DAT_04cbc448;
      dVar5 = _UNK_00e6a9c8;
      dVar4 = _UNK_00e69d78;
      plStack_110 = (long *)0x0;
                    /* try { // try from 0251bf7c to 0261bf87 has its CatchHandler @ 0251bf94 */
      lStack_a0 = lStack_100;
                    /* try { // try from 0251bf90 to 0261bf93 has its CatchHandler @ 0251bf9c */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0251bf7c with catch @ 0251bf94
                       try { // try from 0251bf94 to 0261bfb3 has its CatchHandler @ 0251be3c */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0251bf28 with catch @ 0251bf98
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0251bf4c with catch @ 0251bf9c
                       catch(type#1 @ 049bb748) { ... } // from try @ 0251bf90 with catch @ 0251bf9c
                        */
      pplStack_a8 = pplStack_108;
      iVar26 = -1;
      dVar28 = -1.7976931348623157e+308;
      pplStack_108 = &plStack_b0;
LAB_0251bfac:
                    /* try { // try from 0251bfb4 to 0261bfcb has its CatchHandler @ 0251c020 */
      uVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                         (&plStack_b0,*(undefined8 *)puVar7);
      lVar10 = lStack_a0;
      if ((uVar15 & 1) != 0) {
        if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(char *)(lStack_a0 + 0x44) == '\0') {
                    /* try { // try from 0251bfcc to 0261c00f has its CatchHandler @ 0251be3c */
          if (*(long *)(param_2 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar15 = Dino_BusSand_Core_TruckGrid__CanTap_241c41c(*(long *)(param_2 + 0x28),lStack_a0);
          if ((uVar15 & 1) != 0) {
            if (0 < *(int *)(lVar10 + 0x40)) {
              if (*(long *)(param_2 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar20 = Dino_BusSand_Core_TruckGrid__ChainOf_241c9f8
                                 (*(long *)(param_2 + 0x28),lVar10);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
                    /* try { // try from 0251c010 to 0261c01f has its CatchHandler @ 0251c020 */
              lVar21 = System_Collections_Generic_List_object___get_Item_3a81924
                                 (lVar20,0,*(undefined8 *)PTR_DAT_04cbc0c8);
                    /* catch() { ... } // from try @ 0251bfb4 with catch @ 0251c020
                       catch() { ... } // from try @ 0251c010 with catch @ 0251c020 */
              if (lVar21 != lVar10) goto LAB_0251bfac;
                    /* try { // try from 0251c024 to 0261c027 has its CatchHandler @ 0251c030 */
                    /* try { // try from 0251c028 to 0261c033 has its CatchHandler @ 0251be3c */
              if (*(long *)(param_2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0251c024 with catch @ 0251c030
                        */
              iVar14 = Dino_BusSand_Core_Road__get_ActiveCount_2412078(*(long *)(param_2 + 0x20),0);
              if (*(long *)(param_2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              if (*(int *)(*(long *)(param_2 + 0x20) + 0x38) < *(int *)(lVar20 + 0x18) + iVar14)
              goto LAB_0251bfac;
            }
            if (*(long *)(param_2 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar15 = System_Collections_Generic_Dictionary_int__TruckPayload___get_Item_3444f80
                               (*(long *)(param_2 + 0x50),*(undefined4 *)(lVar10 + 0x10),
                                *(undefined8 *)puVar6);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar22 = System_Collections_Generic_Dictionary_byte__int___TryGetValue_33a43cc
                               (lVar16,uVar15 & 0xffffffff,&uStack_f0,
                                *(undefined8 *)PTR_DAT_04cbe518);
            iVar14 = (int)uStack_f0;
            if ((uVar22 & 1) == 0) {
              iVar14 = 0;
            }
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar22 = System_Collections_Generic_Dictionary_byte__int___TryGetValue_33a43cc
                               (lVar17,uVar15 & 0xffffffff,&iStack_f4,
                                *(undefined8 *)PTR_DAT_04cbe518);
            dVar27 = (double)iStack_f4 / 4.0;
            if ((uVar22 & 1) == 0) {
              dVar27 = 0.0;
            }
            if (iVar14 == 0) {
              lVar20 = *(long *)(lVar25 + 0x50);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              if ((int)((uint)uVar15 & 0xff) < *(int *)(lVar20 + 0x18)) {
                iVar14 = *(int *)(lVar20 + (uVar15 & 0xff) * 4 + 0x20);
              }
              else {
                iVar14 = 0;
              }
              dVar27 = (double)iVar14 + dVar4;
            }
            else {
              dVar27 = (double)iVar14 - dVar27 * (double)param_1;
            }
            dVar29 = dVar27;
            if (lVar23 != 0) {
              uVar15 = System_Collections_Generic_HashSet_int___Contains_37db5b4
                                 (lVar23,*(undefined4 *)(lVar10 + 0x10),
                                  *(undefined8 *)PTR_DAT_04cae220);
              dVar29 = dVar27 + dVar5;
              if ((uVar15 & 1) == 0) {
                dVar29 = dVar27;
              }
            }
            if (dVar28 < dVar29) {
              iVar26 = *(int *)(lVar10 + 0x10);
              dVar28 = dVar29;
            }
          }
        }
        goto LAB_0251bfac;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&plStack_b0,*(undefined8 *)PTR_DAT_04cab9e0);
      if (iVar26 < 0) {
        return iVar26;
      }
      if (_UNK_00e698f8 <= dVar28) {
        return iVar26;
      }
      if (*(long *)(param_2 + 0x20) != 0) {
        iVar14 = Dino_BusSand_Core_Road__get_ActiveCount_2412078(*(long *)(param_2 + 0x20),0);
        if (iVar14 < 1) {
          return iVar26;
        }
        if (*(long *)(param_2 + 0x20) != 0) {
          uVar15 = Dino_BusSand_Core_Road__get_AnyBusHeld_2412310(*(long *)(param_2 + 0x20),0);
          if ((uVar15 & 1) != 0) {
            if (*(long *)(param_2 + 0x20) == 0) goto LAB_0251c1d0;
            uVar15 = Dino_BusSand_Core_Road__AnyActiveBusCanCollect_24168e8
                               (*(long *)(param_2 + 0x20),lVar25,0);
            if ((uVar15 & 1) == 0) {
              return iVar26;
            }
          }
          return -1;
        }
      }
    }
  }
LAB_0251c1d0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

