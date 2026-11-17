/* IL2CPP: Dino.BusSand.Core.Lane$$ActivePath
System_Collections_Generic_List_ValueTuple_double__double___o* Dino_BusSand_Core_Lane__ActivePath (Dino_BusSand_Core_Lane_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.Lane$$ActivePath
   System_Collections_Generic_List_ValueTuple_double__double___o* Dino_BusSand_Core_Lane__ActivePath
   (Dino_BusSand_Core_Lane_o* __this, const MethodInfo* method); */

long Dino_BusSand_Core_Lane__ActivePath_242fa08(undefined1 param_1 [16],double param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_90;
  double dStack_88;
  
  if ((bRam0000000004f9cc08 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd240);
    FUN_02132f7c(PTR_DAT_04cbef60);
    FUN_02132f7c(PTR_DAT_04cbd238);
    bRam0000000004f9cc08 = 1;
  }
  uVar8 = Dino_BusSand_Core_Lane__get_IsSpent_242ee9c(param_3);
  puVar6 = PTR_DAT_04cbd240;
  if ((uVar8 & 1) == 0) {
    if (*(long *)(param_3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (1 < *(int *)(*(long *)(param_3 + 0x18) + 0x18)) {
      dVar17 = (double)Dino_BusSand_Core_Lane__get_CutDistance_242f1fc(param_3);
      puVar7 = PTR_DAT_04cbd240;
      puVar6 = PTR_DAT_04cbd238;
      if ((bRam0000000004f9cc09 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cbd260);
        FUN_02132f7c(PTR_DAT_04cbd240);
        FUN_02132f7c(PTR_DAT_04cbef60);
        FUN_02132f7c(PTR_DAT_04cbd270);
        FUN_02132f7c(PTR_DAT_04cbd238);
        FUN_02132f7c(PTR_DAT_04caa200);
        FUN_02132f7c(PTR_DAT_04cbd250);
        bRam0000000004f9cc09 = 1;
      }
      lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
      System_Collections_Generic_List_ValueTuple_double__double_____ctor_39a13e4
                (lVar9,*(undefined8 *)puVar7);
      puVar7 = PTR_DAT_04cbd270;
      puVar6 = PTR_DAT_04caa200;
      dVar5 = _UNK_00e6a7f0;
      dVar4 = _UNK_00e6a008;
      dVar16 = _UNK_00e69b78;
      if (*(long *)(param_3 + 0x18) != 0) {
        uVar1 = *(uint *)(*(long *)(param_3 + 0x18) + 0x18);
        uVar12 = uVar1;
        if ((int)(uVar1 - 1) < 1) {
LAB_0252f660:
          uVar12 = 0;
LAB_0252f664:
          puVar6 = PTR_DAT_04cbd260;
          if ((int)uVar12 < (int)uVar1) {
            do {
              if ((*(long *)(param_3 + 0x18) == 0) ||
                 (uVar15 = System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                                     (*(long *)(param_3 + 0x18),uVar12,*(undefined8 *)puVar7),
                 lVar9 == 0)) goto LAB_0252f7d8;
              lVar10 = *(long *)(lVar9 + 0x10);
              lVar11 = *(long *)puVar6;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar10 == 0) goto LAB_0252f7d8;
              uVar3 = *(uint *)(lVar9 + 0x18);
              if (uVar3 < *(uint *)(lVar10 + 0x18)) {
                lVar10 = lVar10 + (long)(int)uVar3 * 0x10;
                *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                *(undefined8 *)(lVar10 + 0x20) = uVar15;
                *(double *)(lVar10 + 0x28) = param_2;
              }
              else {
                System_Collections_Generic_List_ValueTuple_double__double____AddWithResize_39a1c7c
                          (lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                ;
              }
              uVar12 = uVar12 + 1;
            } while (uVar1 != uVar12);
          }
          return lVar9;
        }
        while (*(long *)(param_3 + 0x18) != 0) {
          uVar3 = uVar12 - 1;
          dVar13 = (double)System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                                     (*(long *)(param_3 + 0x18),uVar3,*(undefined8 *)puVar7);
          if (*(long *)(param_3 + 0x18) == 0) break;
          uVar12 = uVar12 - 2;
          dVar14 = (double)System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                                     (*(long *)(param_3 + 0x18),uVar12,*(undefined8 *)puVar7);
          if (*(long *)(param_3 + 0x18) == 0) break;
          System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                    (*(long *)(param_3 + 0x18),uVar3,*(undefined8 *)puVar7);
          if (*(long *)(param_3 + 0x18) == 0) break;
          dVar18 = param_2;
          System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                    (*(long *)(param_3 + 0x18),uVar12,*(undefined8 *)puVar7);
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          dVar13 = dVar13 - dVar14;
          dVar18 = param_2 - dVar18;
          param_2 = dVar18 * dVar18;
          dVar14 = SQRT(dVar13 * dVar13 + param_2);
          if (dVar4 <= dVar14) {
            if (dVar17 <= dVar14 + dVar5) {
              if (*(long *)(param_3 + 0x18) == 0) break;
              dVar16 = (double)System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                                         (*(long *)(param_3 + 0x18),uVar3,*(undefined8 *)puVar7);
              if (*(long *)(param_3 + 0x18) == 0) break;
              dVar13 = dVar13 * (dVar17 / dVar14);
              dVar16 = dVar16 - dVar13;
              System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                        (*(long *)(param_3 + 0x18),uVar3,*(undefined8 *)puVar7);
              uStack_90 = 0;
              dStack_88 = 0.0;
              System_ValueTuple_double__double____ctor_30d8690
                        (dVar16,dVar13 - dVar18 * (dVar17 / dVar14),&uStack_90,
                         *(undefined8 *)PTR_DAT_04cbd250);
              if (lVar9 == 0) break;
              lVar10 = *(long *)(lVar9 + 0x10);
              lVar11 = *(long *)PTR_DAT_04cbd260;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar10 == 0) break;
              uVar2 = *(uint *)(lVar9 + 0x18);
              param_2 = dStack_88;
              uVar12 = uVar3;
              if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                lVar10 = lVar10 + (long)(int)uVar2 * 0x10;
                *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar10 + 0x20) = uStack_90;
                *(double *)(lVar10 + 0x28) = dStack_88;
              }
              else {
                System_Collections_Generic_List_ValueTuple_double__double____AddWithResize_39a1c7c
                          (lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                ;
              }
              goto LAB_0252f664;
            }
            dVar17 = dVar17 - dVar14;
            if (dVar17 <= dVar16) goto LAB_0252f664;
          }
          uVar12 = uVar3;
          if (uVar3 < 2) goto LAB_0252f660;
        }
      }
LAB_0252f7d8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbd238);
  System_Collections_Generic_List_ValueTuple_double__double_____ctor_39a13e4
            (lVar9,*(undefined8 *)puVar6);
  return lVar9;
}

