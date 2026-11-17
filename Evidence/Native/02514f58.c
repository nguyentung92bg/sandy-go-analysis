/* IL2CPP: Dino.BusSand.Core.Road$$ClampBeforeMerge
double Dino_BusSand_Core_Road__ClampBeforeMerge (Dino_BusSand_Core_Road_o* __this, Dino_BusSand_Core_RoadBus_o* e, double current, double desired, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.Road$$ClampBeforeMerge
   double Dino_BusSand_Core_Road__ClampBeforeMerge (Dino_BusSand_Core_Road_o* __this,
   Dino_BusSand_Core_RoadBus_o* e, double current, double desired, const MethodInfo* method); */

undefined1  [16]
Dino_BusSand_Core_Road__ClampBeforeMerge_2414f58
          (undefined8 param_1,double param_2,long param_3,long param_4)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ulong uVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  
  if ((bRam0000000004f9cb6d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe650);
    FUN_02132f7c(PTR_DAT_04cb1890);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cbe5f0);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb6d = 1;
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  dStack_b8 = 0.0;
  dVar14 = (double)Dino_BusSand_Core_Road__MergeReservationFor_2414f04(param_3,param_4);
  puVar7 = PTR_DAT_04cbe650;
  puVar6 = PTR_DAT_04cb1898;
  puVar5 = PTR_DAT_04cb1890;
  puVar4 = PTR_DAT_04caa200;
  if (*(long *)(param_3 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_d0,*(long *)(param_3 + 0x50),*(undefined8 *)PTR_DAT_04cbe5f0);
  uStack_a8 = puStack_c8;
  uStack_b0 = uStack_d0;
  dVar15 = 1.7976931348623157e+308;
  lStack_a0 = lStack_c0;
  puStack_c8 = &uStack_b0;
  dVar14 = dVar14 + _UNK_00e6a008;
  uStack_d0 = 0;
  while( true ) {
    do {
      do {
        uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                           (&uStack_b0,*(undefined8 *)puVar6);
        lVar8 = lStack_a0;
        if ((uVar12 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_b0,*(undefined8 *)puVar5);
          if (dVar15 < param_2) {
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            param_2 = (double)System_Math__Max_4830f98(dVar15,param_1,0);
          }
          auVar17._8_8_ = 0;
          auVar17._0_8_ = param_2;
          return auVar17;
        }
      } while (lStack_a0 == param_4);
      if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    } while (1 < *(int *)(lStack_a0 + 0x28) - 1U);
    if (*(long *)(param_3 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar12 = System_Collections_Generic_Dictionary_int__double___TryGetValue_34244bc
                       (*(long *)(param_3 + 0x60),*(undefined4 *)(lStack_a0 + 0x10),&dStack_b8,
                        *(undefined8 *)puVar7);
    lVar13 = *(long *)(param_3 + 0x10);
    if (lVar13 == 0) break;
    dVar19 = (double)*(int *)(lVar8 + 0x1c) / 2.0;
    pdVar1 = &dStack_b8;
    if ((uVar12 & 1) == 0) {
      pdVar1 = (double *)(lVar8 + 0x40);
    }
    dVar20 = *pdVar1;
    dVar18 = (double)(*(int *)(param_3 + 0x24) - *(int *)(lVar13 + 0x20));
    dVar16 = (double)*(int *)(param_3 + 0x24);
    bVar9 = true;
    bVar11 = false;
    if (dVar14 < dVar20 + dVar19) {
      bVar9 = false;
      bVar11 = true;
      if (!NAN(dVar20) && !NAN(dVar18)) {
        bVar9 = dVar20 < dVar18;
        bVar11 = false;
      }
    }
    bVar10 = false;
    if ((bVar9 == bVar11) && (bVar10 = false, !NAN(dVar20) && !NAN(dVar16))) {
      bVar10 = dVar20 < dVar16;
    }
    if (!bVar10) {
      dVar16 = 0.0;
    }
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar2 = *(int *)(lVar13 + 0x24);
    iVar3 = *(int *)(param_4 + 0x1c);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    dVar15 = (double)System_Math__Min_48310e8
                               (dVar15,(((dVar20 - dVar16) - dVar19) - (double)iVar2) -
                                       (double)iVar3 / 2.0,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

