/* IL2CPP: Dino.BusSand.Core.TruckGrid$$ApplyExit
void Dino_BusSand_Core_TruckGrid__ApplyExit (Dino_BusSand_Core_TruckGrid_o* __this, System_Collections_Generic_IReadOnlyList_Truck__o* departed, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025287fc) */
/* WARNING: Removing unreachable block (ram,0x02528a4c) */
/* WARNING: Removing unreachable block (ram,0x025288d8) */
/* WARNING: Removing unreachable block (ram,0x02528b4c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Dino.BusSand.Core.TruckGrid$$ApplyExit
   void Dino_BusSand_Core_TruckGrid__ApplyExit (Dino_BusSand_Core_TruckGrid_o* __this,
   System_Collections_Generic_IReadOnlyList_Truck__o* departed,
   System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method); */

void Dino_BusSand_Core_TruckGrid__ApplyExit_24281d8(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  long alStack_100 [2];
  undefined8 *puStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long alStack_70 [2];
  
  if ((bRam0000000004f9cbe6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cbee00);
    FUN_02132f7c(PTR_DAT_04cbee08);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cbee10);
    FUN_02132f7c(PTR_DAT_04cb58d0);
    FUN_02132f7c(PTR_DAT_04cbc4c0);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cbe6 = 1;
  }
  puVar5 = PTR_DAT_04cbee10;
  uStack_e0 = 0;
  puStack_d8 = (undefined8 *)0x0;
  lStack_d0 = 0;
  plStack_e8 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    lVar11 = *param_2;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04cbee10) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_025282fc;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_0216b7a4(param_2,*(long *)PTR_DAT_04cbee10,0);
LAB_025282fc:
    iVar7 = (*(code *)*puVar10)(param_2,puVar10[1]);
    puVar4 = PTR_DAT_04cb58d0;
    puVar3 = PTR_DAT_04cab9e8;
    puVar1 = PTR_DAT_04caa200;
    if (iVar7 < 1) goto LAB_02528a08;
    if (*(long *)(param_1 + 0x20) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_80,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cbc4c0);
      lStack_d0 = alStack_70[0];
      puStack_98 = &uStack_e0;
      puStack_d8 = puStack_78;
      uStack_e0 = uStack_80;
      uStack_a0 = 0;
      while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&uStack_e0,*(undefined8 *)puVar3), lVar11 = lStack_d0,
            puVar2 = PTR_DAT_04cab9e0, (uVar13 & 1) != 0) {
        if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        iVar7 = *(int *)(lStack_d0 + 0x30);
        if (0 < iVar7) {
          lVar12 = *param_2;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_025283d8;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_0216b7a4(param_2,*(long *)puVar5,0);
LAB_025283d8:
          iVar8 = (*(code *)*puVar10)(param_2,puVar10[1]);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = System_Math__Max_4830fc8(0,iVar7 - iVar8,0);
          *(uint *)(lVar11 + 0x30) = uVar9;
          if (param_3 != 0) {
            alStack_70[0] = 0;
            uStack_80 = CONCAT44(*(undefined4 *)(lVar11 + 0x10),0x16);
            puStack_78 = (undefined8 *)(ulong)uVar9;
            thunk_FUN_02134474(alStack_70,0);
            lVar12 = *(long *)(param_3 + 0x10);
            lVar14 = *(long *)puVar4;
            *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar9 = *(uint *)(param_3 + 0x18);
            if (uVar9 < *(uint *)(lVar12 + 0x18)) {
              lVar12 = lVar12 + (long)(int)uVar9 * 0x18;
              *(uint *)(param_3 + 0x18) = uVar9 + 1;
              *(long *)(lVar12 + 0x30) = alStack_70[0];
              *(undefined8 **)(lVar12 + 0x28) = puStack_78;
              *(undefined8 *)(lVar12 + 0x20) = uStack_80;
              thunk_FUN_02134474((long *)(lVar12 + 0x30),0);
            }
            else {
              puStack_b8 = puStack_78;
              uStack_c0 = uStack_80;
              lStack_b0 = alStack_70[0];
              System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                        (param_3,&uStack_c0,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            if ((param_3 != 0) && (*(int *)(lVar11 + 0x30) == 0)) {
              alStack_70[0] = 0;
              uStack_80 = CONCAT44(*(undefined4 *)(lVar11 + 0x10),0x17);
              puStack_78 = (undefined8 *)0x0;
              thunk_FUN_02134474(alStack_70,0);
              lVar11 = *(long *)(param_3 + 0x10);
              lVar12 = *(long *)puVar4;
              *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar9 = *(uint *)(param_3 + 0x18);
              if (uVar9 < *(uint *)(lVar11 + 0x18)) {
                lVar11 = lVar11 + (long)(int)uVar9 * 0x18;
                *(uint *)(param_3 + 0x18) = uVar9 + 1;
                *(long *)(lVar11 + 0x30) = alStack_70[0];
                *(undefined8 **)(lVar11 + 0x28) = puStack_78;
                *(undefined8 *)(lVar11 + 0x20) = uStack_80;
                thunk_FUN_02134474((long *)(lVar11 + 0x30),0);
              }
              else {
                puStack_b8 = puStack_78;
                uStack_c0 = uStack_80;
                lStack_b0 = alStack_70[0];
                System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                          (param_3,&uStack_c0,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_e0,*(undefined8 *)PTR_DAT_04cab9e0);
      puVar5 = PTR_DAT_04cbc4c0;
      lVar11 = *param_2;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04cbee00) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_025285d8;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_0216b7a4(param_2,*(long *)PTR_DAT_04cbee00,0);
LAB_025285d8:
      plStack_e8 = (long *)(*(code *)*puVar10)(param_2,puVar10[1]);
      if (plStack_e8 != (long *)0x0) {
        do {
          plVar6 = plStack_e8;
          lVar11 = *plStack_e8;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04ca9c08) {
                puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_02528658;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_0216b7a4(plStack_e8,*(long *)PTR_DAT_04ca9c08,0);
LAB_02528658:
          uVar13 = (*(code *)*puVar10)(plVar6,puVar10[1]);
          plVar6 = plStack_e8;
          if ((uVar13 & 1) == 0) {
            if (plStack_e8 == (long *)0x0) goto LAB_025288c8;
            lVar11 = *plStack_e8;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 == 0) goto LAB_025288a0;
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            goto LAB_02528888;
          }
          if (plStack_e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar11 = *plStack_e8;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04cbee08) {
                puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_025286c4;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_0216b7a4(plStack_e8,*(long *)PTR_DAT_04cbee08,0);
LAB_025286c4:
          lVar11 = (*(code *)*puVar10)(plVar6,puVar10[1]);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (0 < *(int *)(lVar11 + 0x38)) {
            if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            System_Collections_Generic_List_object___GetEnumerator_3a825f0
                      (&uStack_80,*(long *)(param_1 + 0x20),*(undefined8 *)puVar5);
            alStack_100[1] = 0;
            puStack_d8 = puStack_78;
            uStack_e0 = uStack_80;
            lStack_d0 = alStack_70[0];
            puStack_f0 = &uStack_e0;
            while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                      (&uStack_e0,*(undefined8 *)puVar3), (uVar13 & 1) != 0) {
              if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              if ((*(int *)(lStack_d0 + 0x34) == *(int *)(lVar11 + 0x38)) &&
                 (*(undefined4 *)(lStack_d0 + 0x34) = 0, param_3 != 0)) {
                alStack_70[0] = 0;
                uStack_80 = CONCAT44(*(undefined4 *)(lVar11 + 0x10),0x18);
                puStack_78 = (undefined8 *)(ulong)*(uint *)(lStack_d0 + 0x10);
                thunk_FUN_02134474(alStack_70,0);
                lVar12 = *(long *)(param_3 + 0x10);
                lVar14 = *(long *)puVar4;
                *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                uVar9 = *(uint *)(param_3 + 0x18);
                if (uVar9 < *(uint *)(lVar12 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)uVar9 * 0x18;
                  *(uint *)(param_3 + 0x18) = uVar9 + 1;
                  *(long *)(lVar12 + 0x30) = alStack_70[0];
                  *(undefined8 **)(lVar12 + 0x28) = puStack_78;
                  *(undefined8 *)(lVar12 + 0x20) = uStack_80;
                  thunk_FUN_02134474((long *)(lVar12 + 0x30),0);
                }
                else {
                  puStack_98 = puStack_78;
                  uStack_a0 = uStack_80;
                  lStack_90 = alStack_70[0];
                  System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                            (param_3,&uStack_a0,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_e0,*(undefined8 *)puVar2);
          }
        } while (plStack_e8 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  goto LAB_02528a60;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_02528888:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_025288bc;
    }
  }
LAB_025288a0:
  puVar10 = (undefined8 *)FUN_0216b7a4(plStack_e8,*(long *)PTR_DAT_04ca9b30,0);
LAB_025288bc:
  (*(code *)*puVar10)(plVar6,puVar10[1]);
LAB_025288c8:
  if (*(long *)(param_1 + 0x20) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_80,*(long *)(param_1 + 0x20),*(undefined8 *)puVar5);
    puStack_f0 = &uStack_e0;
    alStack_100[1] = 0;
    puStack_d8 = puStack_78;
    uStack_e0 = uStack_80;
    lStack_d0 = alStack_70[0];
    while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_e0,*(undefined8 *)puVar3), (uVar13 & 1) != 0) {
      if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(char *)(lStack_d0 + 0x3c) != '\0') {
        uVar9 = (*(int *)(lStack_d0 + 0x28) + 0xc) % 0x18;
        *(uint *)(lStack_d0 + 0x28) = uVar9;
        if (param_3 != 0) {
          alStack_100[0] = 0;
          uStack_110 = CONCAT44(*(undefined4 *)(lStack_d0 + 0x10),0x19);
          puStack_108 = (undefined8 *)(ulong)uVar9;
          thunk_FUN_02134474(alStack_100,0);
          lVar11 = *(long *)(param_3 + 0x10);
          lVar12 = *(long *)puVar4;
          *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar9 = *(uint *)(param_3 + 0x18);
          if (uVar9 < *(uint *)(lVar11 + 0x18)) {
            lVar11 = lVar11 + (long)(int)uVar9 * 0x18;
            *(uint *)(param_3 + 0x18) = uVar9 + 1;
            *(long *)(lVar11 + 0x30) = alStack_100[0];
            *(undefined8 **)(lVar11 + 0x28) = puStack_108;
            *(undefined8 *)(lVar11 + 0x20) = uStack_110;
            thunk_FUN_02134474((long *)(lVar11 + 0x30),0);
          }
          else {
            puStack_78 = puStack_108;
            uStack_80 = uStack_110;
            alStack_70[0] = alStack_100[0];
            System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                      (param_3,&uStack_80,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_e0,*(undefined8 *)puVar2);
LAB_02528a08:
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    return;
  }
LAB_02528a60:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

