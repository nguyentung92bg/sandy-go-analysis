/* IL2CPP: Dino.BusSand.Core.BoardBuilder$$AssignCapacities
System_Int32_array* Dino_BusSand_Core_BoardBuilder__AssignCapacities (Dino_BusSand_Core_SandGrid_o* grid, System_Collections_Generic_IReadOnlyList_ValueTuple_int__byte__BusKind___o* buses, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0250d564) */
/* WARNING: Removing unreachable block (ram,0x0250d2b4) */
/* WARNING: Removing unreachable block (ram,0x0250d400) */
/* WARNING: Removing unreachable block (ram,0x0250d554) */
/* WARNING: Removing unreachable block (ram,0x0250d56c) */
/* IL2CPP: Dino.BusSand.Core.BoardBuilder$$AssignCapacities
   System_Int32_array* Dino_BusSand_Core_BoardBuilder__AssignCapacities
   (Dino_BusSand_Core_SandGrid_o* grid,
   System_Collections_Generic_IReadOnlyList_ValueTuple_int__byte__BusKind___o* buses, const
   MethodInfo* method); */

long Dino_BusSand_Core_BoardBuilder__AssignCapacities_240cc38(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  int extraout_w1;
  int extraout_w1_00;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  long *plVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  ulong uStack_a0;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar2 = PTR_DAT_04cbe3a0;
  if ((bRam0000000004f9cb2e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1c80);
    FUN_02132f7c(PTR_DAT_04cbe3a8);
    FUN_02132f7c(PTR_DAT_04cbe3b0);
    FUN_02132f7c(PTR_DAT_04cbe3b8);
    FUN_02132f7c(PTR_DAT_04cbe3c0);
    FUN_02132f7c(PTR_DAT_04cbe3c8);
    FUN_02132f7c(PTR_DAT_04cad8c8);
    FUN_02132f7c(PTR_DAT_04cbe3d0);
    FUN_02132f7c(PTR_DAT_04cad890);
    FUN_02132f7c(PTR_DAT_04cbe3d8);
    FUN_02132f7c(PTR_DAT_04cbe3e0);
    FUN_02132f7c(PTR_DAT_04cad898);
    FUN_02132f7c(PTR_DAT_04cbe3e8);
    FUN_02132f7c(PTR_DAT_04cbe3f0);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cbe3f8);
    FUN_02132f7c(PTR_DAT_04cbe400);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad8a0);
    FUN_02132f7c(PTR_DAT_04cb30e8);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cae230);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cbe408);
    FUN_02132f7c(PTR_DAT_04cbe3a0);
    bRam0000000004f9cb2e = 1;
  }
  uStack_70 = 0;
  lStack_68 = 0;
  uStack_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar11,0);
  if (lVar11 != 0) {
    puVar22 = (undefined8 *)(lVar11 + 0x10);
    *puVar22 = param_2;
    thunk_FUN_02134474(puVar22,param_2);
    puVar6 = PTR_DAT_04cbe3e8;
    puVar4 = PTR_DAT_04cbe3c8;
    puVar3 = PTR_DAT_04cbe3b8;
    puVar2 = PTR_DAT_04caec70;
    plVar21 = (long *)*puVar22;
    if (plVar21 != (long *)0x0) {
      lVar15 = *plVar21;
      uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_04cbe3e8) {
            puVar12 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_0250ce74;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_0216b7a4(plVar21,*(long *)PTR_DAT_04cbe3e8,0);
LAB_0250ce74:
      uVar7 = (*(code *)*puVar12)(plVar21,puVar12[1]);
      lVar15 = FUN_02133068(*(undefined8 *)puVar2,uVar7);
      lVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
      System_Collections_Generic_Dictionary_byte__object____ctor_33a5294
                (lVar13,*(undefined8 *)puVar3);
      puVar5 = PTR_DAT_04cbe3c0;
      puVar4 = PTR_DAT_04cbe3b0;
      puVar3 = PTR_DAT_04cad6e8;
      puVar2 = PTR_DAT_04caa160;
      plVar21 = (long *)*puVar22;
      if (plVar21 != (long *)0x0) {
        iVar9 = 0;
        do {
          lVar16 = *plVar21;
          uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar18 != 0) {
            piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
                puVar12 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_0250cf24;
              }
              uVar18 = uVar18 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar18 != 0);
          }
          puVar12 = (undefined8 *)FUN_0216b7a4(plVar21,*(long *)puVar6,0);
LAB_0250cf24:
          iVar8 = (*(code *)*puVar12)(plVar21,puVar12[1]);
          if (iVar8 <= iVar9) {
            if (lVar13 != 0) {
              System_Collections_Generic_Dictionary_byte__object___GetEnumerator_33a6470
                        (&uStack_d8,lVar13,*(undefined8 *)PTR_DAT_04cbe3a8);
              puStack_88 = puStack_d0;
              uStack_90 = uStack_d8;
              lStack_78 = lStack_c0;
              uStack_80 = uStack_c8;
              uStack_70 = uStack_b8;
              do {
                uVar18 = System_Collections_Generic_Dictionary_Enumerator_byte__object___MoveNext_3622dc4
                                   (&uStack_90,*(undefined8 *)PTR_DAT_04cbe3d8);
                lVar13 = lStack_78;
                if ((uVar18 & 1) == 0) {
                  System_Collections_Generic_Dictionary_Enumerator_byte__object___Dispose_3622ee8
                            (&uStack_90,*(undefined8 *)PTR_DAT_04cbe3d0);
                  return lVar15;
                }
                uVar18 = uStack_80 & 0xff;
                lVar16 = *(long *)(lVar11 + 0x18);
                if (lVar16 == 0) {
                  lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb1c80);
                  System_Comparison_int____ctor_3325d5c
                            (lVar16,lVar11,*(undefined8 *)PTR_DAT_04cbe408,0);
                  *(long *)(lVar11 + 0x18) = lVar16;
                  thunk_FUN_02134474(lVar11 + 0x18,lVar16);
                }
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                System_Collections_Generic_List_int___Sort_3a2da68
                          (lVar13,lVar16,*(undefined8 *)PTR_DAT_04cb30e8);
                if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                iVar9 = Dino_BusSand_Core_SandGrid__CountOf_241764c(param_1,uVar18,0);
                System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                          (&uStack_d8,lVar13,*(undefined8 *)PTR_DAT_04cad8a0);
                lVar16 = 0;
                uStack_a0 = uStack_c8;
                puStack_a8 = puStack_d0;
                uStack_b0 = uStack_d8;
                uStack_d8 = 0;
                puStack_d0 = &uStack_b0;
                while (uVar14 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                                          (&uStack_b0,*(undefined8 *)PTR_DAT_04cad890),
                      uVar18 = uStack_a0, (uVar14 & 1) != 0) {
                  plVar21 = (long *)*puVar22;
                  if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  lVar19 = *plVar21;
                  uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
                  if (uVar14 != 0) {
                    piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_04cbe3f0) {
                        puVar12 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
                        goto LAB_0250d260;
                      }
                      uVar14 = uVar14 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_0216b7a4(plVar21,*(long *)PTR_DAT_04cbe3f0,0);
LAB_0250d260:
                  (*(code *)*puVar12)(plVar21,uVar18 & 0xffffffff,puVar12[1]);
                  lVar19 = 0xc3dc;
                  if (extraout_w1 != 1) {
                    lVar19 = 0xf8c7;
                  }
                  lVar17 = 0x999c;
                  if (extraout_w1 != 0) {
                    lVar17 = lVar19;
                  }
                  lVar16 = lVar17 + lVar16;
                }
                System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
                          (&uStack_b0,*(undefined8 *)PTR_DAT_04cad8c8);
                System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                          (&uStack_d8,lVar13,*(undefined8 *)PTR_DAT_04cad8a0);
                lVar19 = 0;
                uStack_a0 = uStack_c8;
                puStack_a8 = puStack_d0;
                uStack_b0 = uStack_d8;
                uStack_d8 = 0;
                puStack_d0 = &uStack_b0;
                while (uVar14 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                                          (&uStack_b0,*(undefined8 *)PTR_DAT_04cad890),
                      uVar18 = uStack_a0, (uVar14 & 1) != 0) {
                  plVar21 = (long *)*puVar22;
                  if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  lVar17 = *plVar21;
                  uVar10 = (uint)uStack_a0;
                  lVar23 = (long)(int)(uint)uStack_a0;
                  uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar14 != 0) {
                    piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_04cbe3f0) {
                        puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                        goto LAB_0250d364;
                      }
                      uVar14 = uVar14 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_0216b7a4(plVar21,*(long *)PTR_DAT_04cbe3f0,0);
LAB_0250d364:
                  (*(code *)*puVar12)(plVar21,uVar18 & 0xffffffff,puVar12[1]);
                  iVar8 = 0xc3dc;
                  if (extraout_w1_00 != 1) {
                    iVar8 = 0xf8c7;
                  }
                  iVar1 = 0x999c;
                  if (extraout_w1_00 != 0) {
                    iVar1 = iVar8;
                  }
                  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  lVar17 = System_Math__Max_4830fd4(1,lVar16,0);
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  if (*(uint *)(lVar15 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                  iVar8 = 0;
                  if (lVar17 != 0) {
                    iVar8 = (int)(((long)iVar1 * (long)iVar9) / lVar17);
                  }
                  lVar19 = lVar19 + iVar8;
                  *(int *)(lVar15 + lVar23 * 4 + 0x20) = iVar8;
                }
                System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
                          (&uStack_b0,*(undefined8 *)PTR_DAT_04cad8c8);
                puVar2 = PTR_DAT_04cae230;
                if (0 < iVar9 - lVar19) {
                  iVar8 = 0;
                  lVar16 = (iVar9 - lVar19) + 1;
                  do {
                    uVar10 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                       (lVar13,iVar8,*(undefined8 *)puVar2);
                    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    if (*(uint *)(lVar15 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                      FUN_0213322c();
                    }
                    lVar16 = lVar16 + -1;
                    *(int *)(lVar15 + 0x20 + (long)(int)uVar10 * 4) =
                         *(int *)(lVar15 + 0x20 + (long)(int)uVar10 * 4) + 1;
                    iVar9 = *(int *)(lVar13 + 0x18);
                    iVar1 = 0;
                    if (iVar9 != 0) {
                      iVar1 = (iVar8 + 1) / iVar9;
                    }
                    iVar8 = (iVar8 + 1) - iVar1 * iVar9;
                  } while (1 < lVar16);
                }
              } while( true );
            }
            break;
          }
          plVar21 = (long *)*puVar22;
          if (plVar21 == (long *)0x0) break;
          lVar16 = *plVar21;
          uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar18 != 0) {
            piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_04cbe3f0) {
                puVar12 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_0250cf94;
              }
              uVar18 = uVar18 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar18 != 0);
          }
          puVar12 = (undefined8 *)FUN_0216b7a4(plVar21,*(long *)PTR_DAT_04cbe3f0,0);
LAB_0250cf94:
          uVar18 = (*(code *)*puVar12)(plVar21,iVar9,puVar12[1]);
          if (lVar13 == 0) break;
          uVar18 = System_Collections_Generic_Dictionary_byte__object___TryGetValue_33a7b18
                             (lVar13,uVar18 >> 0x20,&lStack_68,*(undefined8 *)puVar4);
          if ((uVar18 & 1) == 0) {
            plVar21 = (long *)*puVar22;
            if (plVar21 == (long *)0x0) break;
            lVar16 = *plVar21;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar18 != 0) {
              piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_04cbe3f0) {
                  puVar12 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_0250d01c;
                }
                uVar18 = uVar18 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar18 != 0);
            }
            puVar12 = (undefined8 *)FUN_0216b7a4(plVar21,*(long *)PTR_DAT_04cbe3f0,0);
LAB_0250d01c:
            uVar18 = (*(code *)*puVar12)(plVar21,iVar9,puVar12[1]);
            lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
            System_Collections_Generic_List_int____ctor_3a2b7dc(lVar16,*(undefined8 *)puVar3);
            lStack_68 = lVar16;
            System_Collections_Generic_Dictionary_byte__object___set_Item_33a6020
                      (lVar13,uVar18 >> 0x20,lVar16,*(undefined8 *)puVar5);
          }
          if (lStack_68 == 0) break;
          lVar16 = *(long *)(lStack_68 + 0x10);
          lVar19 = *(long *)puVar2;
          *(int *)(lStack_68 + 0x1c) = *(int *)(lStack_68 + 0x1c) + 1;
          if (lVar16 == 0) break;
          uVar10 = *(uint *)(lStack_68 + 0x18);
          if (uVar10 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lStack_68 + 0x18) = uVar10 + 1;
            *(int *)(lVar16 + (long)(int)uVar10 * 4 + 0x20) = iVar9;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                      (lStack_68,iVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          plVar21 = (long *)*puVar22;
          iVar9 = iVar9 + 1;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

