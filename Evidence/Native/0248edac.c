/* IL2CPP: Dino.BusSand.View.PackPalette$$Assign
System_Int32_array* Dino_BusSand_View_PackPalette__Assign (System_Double_array* cost, int32_t n, int32_t m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PackPalette$$Assign
   System_Int32_array* Dino_BusSand_View_PackPalette__Assign (System_Double_array* cost, int32_t n,
   int32_t m, const MethodInfo* method); */

void Dino_BusSand_View_PackPalette__Assign_238edac(long param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  double *pdVar20;
  int iVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  
  puVar3 = PTR_DAT_04caec70;
  if ((bRam0000000004f9c8c1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4b88);
    FUN_02132f7c(PTR_DAT_04cbbff8);
    FUN_02132f7c(PTR_DAT_04caec70);
    bRam0000000004f9c8c1 = 1;
  }
  puVar4 = PTR_DAT_04cbbff8;
  lVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04cbbff8,param_2 + 1);
  lVar6 = FUN_02133068(*(undefined8 *)puVar4,param_3 + 1);
  lVar7 = FUN_02133068(*(undefined8 *)puVar3,param_3 + 1);
  lVar8 = FUN_02133068(*(undefined8 *)puVar3,param_3 + 1);
  if (0 < param_2) {
    if (lVar7 == 0) goto LAB_0248f1cc;
    uVar15 = (ulong)*(uint *)(lVar7 + 0x18);
    iVar21 = 1;
    do {
      puVar3 = PTR_DAT_04cbbff8;
      if ((int)uVar15 == 0) goto LAB_0248f1c8;
      *(int *)(lVar7 + 0x20) = iVar21;
      lVar9 = FUN_02133068(*(undefined8 *)puVar3,param_3 + 1);
      lVar10 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb4b88,param_3 + 1);
      if (-1 < param_3) {
        if (lVar9 == 0) goto LAB_0248f1cc;
        iVar1 = *(int *)(lVar9 + 0x18);
        iVar13 = 0;
        do {
          if (iVar1 == iVar13) goto LAB_0248f1c8;
          lVar19 = (long)iVar13;
          iVar13 = iVar13 + 1;
          *(undefined8 *)(lVar9 + lVar19 * 8 + 0x20) = 0x7fefffffffffffff;
        } while (iVar13 <= param_3);
      }
      if (lVar10 == 0) goto LAB_0248f1cc;
      uVar14 = *(uint *)(lVar10 + 0x18);
      uVar17 = 0;
      do {
        if (uVar14 <= uVar17) goto LAB_0248f1c8;
        uVar15 = *(ulong *)(lVar7 + 0x18);
        uVar12 = (uint)uVar15;
        *(undefined1 *)(lVar10 + (int)uVar17 + 0x20) = 1;
        if (uVar12 <= uVar17) goto LAB_0248f1c8;
        if (param_3 < 1) {
          dVar22 = 1.7976931348623157e+308;
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          dVar22 = 1.7976931348623157e+308;
          uVar18 = 1;
          uVar2 = *(uint *)(lVar7 + (long)(int)uVar17 * 4 + 0x20);
          do {
            if (uVar14 == uVar18) goto LAB_0248f1c8;
            lVar19 = (long)(int)uVar18;
            if (*(char *)(lVar10 + lVar19 + 0x20) == '\0') {
              if (param_1 == 0) goto LAB_0248f1cc;
              if (**(uint **)(param_1 + 0x10) <= uVar2 - 1) goto LAB_0248f1c8;
              lVar11 = *(long *)(*(uint **)(param_1 + 0x10) + 4);
              if ((uint)lVar11 <= uVar18 - 1) goto LAB_0248f1c8;
              if (lVar5 == 0) goto LAB_0248f1cc;
              if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_0248f1c8;
              if (lVar6 == 0) goto LAB_0248f1cc;
              if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_0248f1c8;
              if (lVar9 == 0) goto LAB_0248f1cc;
              if (*(uint *)(lVar9 + 0x18) <= uVar18) goto LAB_0248f1c8;
              dVar23 = (*(double *)
                         (param_1 + ((long)(int)(uVar18 - 1) + lVar11 * (int)(uVar2 - 1)) * 8 + 0x20
                         ) - *(double *)(lVar5 + (long)(int)uVar2 * 8 + 0x20)) -
                       *(double *)(lVar6 + lVar19 * 8 + 0x20);
              pdVar20 = (double *)(lVar9 + lVar19 * 8 + 0x20);
              dVar24 = *pdVar20;
              if (dVar23 < dVar24) {
                *pdVar20 = dVar23;
                if (lVar8 == 0) goto LAB_0248f1cc;
                if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_0248f1c8;
                *(uint *)(lVar8 + lVar19 * 4 + 0x20) = uVar17;
                dVar24 = dVar23;
              }
              if (dVar24 < dVar22) {
                dVar22 = dVar24;
                uVar16 = uVar18;
              }
            }
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 <= param_3);
        }
        uVar17 = uVar16;
        if (-1 < param_3) {
          uVar16 = 0;
          do {
            if (uVar14 == uVar16) goto LAB_0248f1c8;
            lVar19 = (long)(int)uVar16;
            if (*(char *)(lVar10 + lVar19 + 0x20) == '\0') {
              if (lVar9 == 0) goto LAB_0248f1cc;
              uVar18 = *(uint *)(lVar9 + 0x18);
              lVar11 = lVar9;
            }
            else {
              if (uVar12 <= uVar16) goto LAB_0248f1c8;
              if (lVar5 == 0) goto LAB_0248f1cc;
              uVar18 = *(uint *)(lVar7 + lVar19 * 4 + 0x20);
              if (*(uint *)(lVar5 + 0x18) <= uVar18) goto LAB_0248f1c8;
              *(double *)(lVar5 + 0x20 + (long)(int)uVar18 * 8) =
                   dVar22 + *(double *)(lVar5 + 0x20 + (long)(int)uVar18 * 8);
              if (lVar6 == 0) goto LAB_0248f1cc;
              uVar18 = *(uint *)(lVar6 + 0x18);
              lVar11 = lVar6;
            }
            if (uVar18 <= uVar16) goto LAB_0248f1c8;
            lVar11 = lVar11 + lVar19 * 8;
            uVar16 = uVar16 + 1;
            *(double *)(lVar11 + 0x20) = *(double *)(lVar11 + 0x20) - dVar22;
          } while ((int)uVar16 <= param_3);
        }
        if (uVar12 <= uVar17) goto LAB_0248f1c8;
      } while (*(int *)(lVar7 + (long)(int)uVar17 * 4 + 0x20) != 0);
      if (lVar8 == 0) goto LAB_0248f1cc;
      uVar14 = *(uint *)(lVar8 + 0x18);
      uVar15 = uVar15 & 0xffffffff;
      do {
        if (uVar14 <= uVar17) goto LAB_0248f1c8;
        uVar16 = *(uint *)(lVar8 + (long)(int)uVar17 * 4 + 0x20);
        if ((uVar12 <= uVar16) || (uVar12 <= uVar17)) goto LAB_0248f1c8;
        *(undefined4 *)(lVar7 + 0x20 + (long)(int)uVar17 * 4) =
             *(undefined4 *)(lVar7 + 0x20 + (long)(int)uVar16 * 4);
        uVar17 = uVar16;
      } while (uVar16 != 0);
      iVar21 = iVar21 + 1;
    } while (iVar21 <= param_2);
  }
  lVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,param_2);
  if (0 < param_3) {
    if (lVar7 == 0) {
LAB_0248f1cc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar17 = *(uint *)(lVar7 + 0x18);
    uVar14 = 1;
    if (uVar17 < 2) {
      uVar17 = 1;
    }
    do {
      if (uVar17 == uVar14) {
LAB_0248f1c8:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      iVar21 = *(int *)(lVar7 + (long)(int)uVar14 * 4 + 0x20);
      if (iVar21 != 0) {
        if (lVar5 == 0) goto LAB_0248f1cc;
        uVar12 = iVar21 - 1;
        if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_0248f1c8;
        *(uint *)(lVar5 + (long)(int)uVar12 * 4 + 0x20) = uVar14 - 1;
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 <= param_3);
  }
  return;
}

