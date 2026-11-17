/* IL2CPP: Dino.BusSand.Core.SimBot$$BestTap
int32_t Dino_BusSand_Core_SimBot__BestTap (Dino_BusSand_Core_StageEngine_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0251be1c) */
/* WARNING: Removing unreachable block (ram,0x0251c2b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.SimBot$$BestTap
   int32_t Dino_BusSand_Core_SimBot__BestTap (Dino_BusSand_Core_StageEngine_o* e, const MethodInfo*
   method); */

int Dino_BusSand_Core_SimBot__BestTap_241b8b8(long param_1)

{
  undefined1 uVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  int *piVar23;
  long lVar24;
  int iVar25;
  double dVar26;
  double dVar27;
  double dVar28;
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
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x80) != '\0') {
      return -1;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      uStack_b8 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0();
      Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
                (&plStack_110,&uStack_b8,*(undefined8 *)PTR_DAT_04cab9f8);
      puVar6 = PTR_DAT_04cab9e8;
      bVar2 = false;
      pplStack_a8 = pplStack_108;
      plStack_b0 = plStack_110;
      lStack_a0 = lStack_100;
      plStack_110 = (long *)0x0;
      pplStack_108 = &plStack_b0;
      while (uVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&plStack_b0,*(undefined8 *)puVar6), lVar24 = lStack_a0,
            (uVar14 & 1) != 0) {
        if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(char *)(lStack_a0 + 0x44) != '\0') {
          if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar14 = Dino_BusSand_Core_TruckGrid__CanTap_241c41c(*(long *)(param_1 + 0x28),lStack_a0);
          bVar2 = true;
          if ((uVar14 & 1) != 0) {
            iVar25 = *(int *)(lVar24 + 0x10);
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&plStack_b0,*(undefined8 *)PTR_DAT_04cab9e0);
            return iVar25;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&plStack_b0,*(undefined8 *)PTR_DAT_04cab9e0);
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar14 = Dino_BusSand_Core_Road__get_IsFull_24121b8(*(long *)(param_1 + 0x20),0);
        if ((uVar14 & 1) != 0) {
          return -1;
        }
        if ((*(long *)(param_1 + 0x20) != 0) && (lVar24 = *(long *)(param_1 + 0x18), lVar24 != 0)) {
          iVar25 = *(int *)(*(long *)(param_1 + 0x20) + 0x3c);
          iVar13 = *(int *)(lVar24 + 0x14);
          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = System_Math__Min_4831118(iVar13 + -1,iVar25 + 0x1c,0);
          puVar7 = PTR_DAT_04cbe488;
          lVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbe488);
          puVar5 = PTR_DAT_04cbe440;
          System_Collections_Generic_Dictionary_byte__int____ctor_33a1cc8
                    (lVar15,*(undefined8 *)PTR_DAT_04cbe440);
          lVar16 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
          System_Collections_Generic_Dictionary_byte__int____ctor_33a1cc8
                    (lVar16,*(undefined8 *)puVar5);
          plVar17 = (long *)Dino_BusSand_Core_SandGrid__PresentColors_241767c(lVar24);
          if (plVar17 != (long *)0x0) {
            lVar22 = *plVar17;
            uVar14 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar14 != 0) {
              piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_04cbbf60) {
                  puVar18 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_0251bc2c;
                }
                uVar14 = uVar14 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar14 != 0);
            }
            puVar18 = (undefined8 *)FUN_0216b7a4(plVar17,*(long *)PTR_DAT_04cbbf60,0);
LAB_0251bc2c:
            plStack_c0 = (long *)(*(code *)*puVar18)(plVar17,puVar18[1]);
            puVar8 = PTR_DAT_04cbe468;
            puVar7 = PTR_DAT_04cbbf68;
            puVar5 = PTR_DAT_04ca9c08;
            pplStack_108 = &plStack_c0;
            plStack_110 = (long *)0x0;
            do {
              plVar17 = plStack_c0;
              if (plStack_c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar22 = *plStack_c0;
              uVar14 = (ulong)*(ushort *)(lVar22 + 0x12e);
              if (uVar14 != 0) {
                piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == *(long *)puVar5) {
                    puVar18 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                    goto LAB_0251bcb4;
                  }
                  uVar14 = uVar14 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar14 != 0);
              }
              puVar18 = (undefined8 *)FUN_0216b7a4(plStack_c0,*(long *)puVar5,0);
LAB_0251bcb4:
              uVar14 = (*(code *)*puVar18)(plVar17,puVar18[1]);
              plVar17 = plStack_c0;
              if ((uVar14 & 1) == 0) {
                if (plStack_c0 == (long *)0x0) goto LAB_0251be10;
                lVar16 = *plStack_c0;
                uVar14 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar14 == 0) goto LAB_0251bde8;
                piVar23 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                goto LAB_0251bdd0;
              }
              if (plStack_c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar22 = *plStack_c0;
              uVar14 = (ulong)*(ushort *)(lVar22 + 0x12e);
              if (uVar14 != 0) {
                piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == *(long *)puVar7) {
                    puVar18 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                    goto LAB_0251bd18;
                  }
                  uVar14 = uVar14 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar14 != 0);
              }
              puVar18 = (undefined8 *)FUN_0216b7a4(plStack_c0,*(long *)puVar7,0);
LAB_0251bd18:
              uVar11 = (*(code *)*puVar18)(plVar17,puVar18[1]);
              uVar12 = Dino_BusSand_Core_SandGrid__CountOf_2417b60
                                 (lVar24,uVar11,0,*(int *)(lVar24 + 0x10) + -1,0,iVar25 + -1);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              System_Collections_Generic_Dictionary_byte__int___set_Item_33a2a40
                        (lVar15,uVar11,uVar12,*(undefined8 *)puVar8);
              uVar12 = Dino_BusSand_Core_SandGrid__CountOf_2417b60
                                 (lVar24,uVar11,0,*(int *)(lVar24 + 0x10) + -1,0,uVar10);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              System_Collections_Generic_Dictionary_byte__int___set_Item_33a2a40
                        (lVar16,uVar11,uVar12,*(undefined8 *)puVar8);
            } while( true );
          }
        }
      }
    }
  }
  goto LAB_0251c1d0;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar23 = piVar23 + 4;
    if (uVar14 == 0) break;
LAB_0251bdd0:
    if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar18 = (undefined8 *)(lVar16 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_0251be04;
    }
  }
LAB_0251bde8:
  puVar18 = (undefined8 *)FUN_0216b7a4(plStack_c0,*(long *)PTR_DAT_04ca9b30,0);
LAB_0251be04:
  (*(code *)*puVar18)(plVar17,puVar18[1]);
LAB_0251be10:
  lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbe488);
  System_Collections_Generic_Dictionary_byte__int____ctor_33a1cc8
            (lVar16,*(undefined8 *)PTR_DAT_04cbe440);
  if (*(long *)(param_1 + 0x20) != 0) {
    uStack_e8 = Dino_BusSand_Core_Road__get_Buses_2411e9c(*(long *)(param_1 + 0x20),0);
    Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
              (&plStack_110,&uStack_e8,*(undefined8 *)PTR_DAT_04cb18a8);
    puVar5 = PTR_DAT_04cb1898;
    pplStack_d8 = pplStack_108;
    plStack_e0 = plStack_110;
    lStack_d0 = lStack_100;
    plStack_110 = (long *)0x0;
    pplStack_108 = &plStack_e0;
    while (uVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&plStack_e0,*(undefined8 *)puVar5), lVar22 = lStack_d0,
          (uVar14 & 1) != 0) {
      if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar14 = Dino_BusSand_Core_RoadBus__get_CountsTowardCapacity_2411848(lStack_d0,0);
      if ((uVar14 & 1) != 0) {
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar1 = *(undefined1 *)(lVar22 + 0x14);
        uVar14 = System_Collections_Generic_Dictionary_byte__int___TryGetValue_33a43cc
                           (lVar16,uVar1,(long)&uStack_f0 + 4,*(undefined8 *)PTR_DAT_04cbe518);
        iVar25 = uStack_f0._4_4_;
        iVar13 = Dino_BusSand_Core_RoadBus__get_Remaining_24118a8(lVar22,0);
        if ((uVar14 & 1) == 0) {
          iVar25 = 0;
        }
        System_Collections_Generic_Dictionary_byte__int___set_Item_33a2a40
                  (lVar16,uVar1,iVar13 + iVar25,*(undefined8 *)puVar8);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&plStack_e0,*(undefined8 *)PTR_DAT_04cb1890);
    puVar5 = PTR_DAT_04cab9f8;
    if (bVar2) {
      lVar22 = Dino_BusSand_Core_SimBot__BoxingIn_241c5ec(param_1);
    }
    else {
      lVar22 = 0;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      uStack_b8 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0();
      Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
                (&plStack_110,&uStack_b8,*(undefined8 *)puVar5);
      plStack_b0 = plStack_110;
      puVar5 = PTR_DAT_04cbc448;
      dVar4 = _UNK_00e6a9c8;
      dVar3 = _UNK_00e69d78;
      plStack_110 = (long *)0x0;
      lStack_a0 = lStack_100;
      pplStack_a8 = pplStack_108;
      iVar25 = -1;
      dVar27 = -1.7976931348623157e+308;
      pplStack_108 = &plStack_b0;
LAB_0251bfac:
      uVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                         (&plStack_b0,*(undefined8 *)puVar6);
      lVar9 = lStack_a0;
      if ((uVar14 & 1) != 0) {
        if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(char *)(lStack_a0 + 0x44) == '\0') {
          if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar14 = Dino_BusSand_Core_TruckGrid__CanTap_241c41c(*(long *)(param_1 + 0x28),lStack_a0);
          if ((uVar14 & 1) != 0) {
            if (0 < *(int *)(lVar9 + 0x40)) {
              if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar19 = Dino_BusSand_Core_TruckGrid__ChainOf_241c9f8(*(long *)(param_1 + 0x28),lVar9)
              ;
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar20 = System_Collections_Generic_List_object___get_Item_3a81924
                                 (lVar19,0,*(undefined8 *)PTR_DAT_04cbc0c8);
              if (lVar20 != lVar9) goto LAB_0251bfac;
              if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              iVar13 = Dino_BusSand_Core_Road__get_ActiveCount_2412078(*(long *)(param_1 + 0x20),0);
              if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              if (*(int *)(*(long *)(param_1 + 0x20) + 0x38) < *(int *)(lVar19 + 0x18) + iVar13)
              goto LAB_0251bfac;
            }
            if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar14 = System_Collections_Generic_Dictionary_int__TruckPayload___get_Item_3444f80
                               (*(long *)(param_1 + 0x50),*(undefined4 *)(lVar9 + 0x10),
                                *(undefined8 *)puVar5);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar21 = System_Collections_Generic_Dictionary_byte__int___TryGetValue_33a43cc
                               (lVar15,uVar14 & 0xffffffff,&uStack_f0,
                                *(undefined8 *)PTR_DAT_04cbe518);
            iVar13 = (int)uStack_f0;
            if ((uVar21 & 1) == 0) {
              iVar13 = 0;
            }
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar21 = System_Collections_Generic_Dictionary_byte__int___TryGetValue_33a43cc
                               (lVar16,uVar14 & 0xffffffff,&iStack_f4,
                                *(undefined8 *)PTR_DAT_04cbe518);
            dVar26 = (double)iStack_f4 / 4.0;
            if ((uVar21 & 1) == 0) {
              dVar26 = 0.0;
            }
            if (iVar13 == 0) {
              lVar19 = *(long *)(lVar24 + 0x50);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              if ((int)((uint)uVar14 & 0xff) < *(int *)(lVar19 + 0x18)) {
                iVar13 = *(int *)(lVar19 + (uVar14 & 0xff) * 4 + 0x20);
              }
              else {
                iVar13 = 0;
              }
              dVar26 = (double)iVar13 + dVar3;
            }
            else {
              dVar26 = (double)iVar13 - dVar26 * 1.0;
            }
            dVar28 = dVar26;
            if (lVar22 != 0) {
              uVar14 = System_Collections_Generic_HashSet_int___Contains_37db5b4
                                 (lVar22,*(undefined4 *)(lVar9 + 0x10),
                                  *(undefined8 *)PTR_DAT_04cae220);
              dVar28 = dVar26 + dVar4;
              if ((uVar14 & 1) == 0) {
                dVar28 = dVar26;
              }
            }
            if (dVar27 < dVar28) {
              iVar25 = *(int *)(lVar9 + 0x10);
              dVar27 = dVar28;
            }
          }
        }
        goto LAB_0251bfac;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&plStack_b0,*(undefined8 *)PTR_DAT_04cab9e0);
      if (iVar25 < 0) {
        return iVar25;
      }
      if (_UNK_00e698f8 <= dVar27) {
        return iVar25;
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        iVar13 = Dino_BusSand_Core_Road__get_ActiveCount_2412078(*(long *)(param_1 + 0x20),0);
        if (iVar13 < 1) {
          return iVar25;
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          uVar14 = Dino_BusSand_Core_Road__get_AnyBusHeld_2412310(*(long *)(param_1 + 0x20),0);
          if ((uVar14 & 1) != 0) {
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_0251c1d0;
            uVar14 = Dino_BusSand_Core_Road__AnyActiveBusCanCollect_24168e8
                               (*(long *)(param_1 + 0x20),lVar24,0);
            if ((uVar14 & 1) == 0) {
              return iVar25;
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

