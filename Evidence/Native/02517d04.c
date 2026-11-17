/* IL2CPP: Dino.BusSand.Core.SandGrid$$Step
bool Dino_BusSand_Core_SandGrid__Step (Dino_BusSand_Core_SandGrid_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandGrid$$Step
   bool Dino_BusSand_Core_SandGrid__Step (Dino_BusSand_Core_SandGrid_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_Core_SandGrid__Step_2417d04(long param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  
  iVar5 = *(int *)(param_1 + 0x60);
  iVar6 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(int *)(param_1 + 0x60) = iVar5 + 1;
  if ((iVar6 == 1) && (*(char *)(param_1 + 0x28) != '\0')) {
    Dino_BusSand_Core_SandGrid__EnsureStraightCache_24180f8(param_1);
  }
  iVar4 = *(int *)(param_1 + 0x10);
  iVar17 = iVar4;
  if (iVar4 < 0) {
    iVar17 = iVar4 + 1;
  }
  if (-1 < *(int *)(param_1 + 0x14) + -2) {
    uVar3 = iVar17 >> 1;
    uVar16 = 0;
    iVar17 = 1;
    uVar11 = 0;
    do {
      lVar9 = *(long *)(param_1 + 0x48);
      if (lVar9 == 0) {
LAB_025180f4:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar2 = uVar11 + 1;
      if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_025180f0;
      if ((0 < *(int *)(lVar9 + 0x20 + (long)(int)uVar2 * 4)) &&
         (iVar13 = *(int *)(param_1 + 0x10),
         *(int *)(lVar9 + 0x20 + (long)(int)uVar11 * 4) != iVar13)) {
        if (iVar6 != 0) {
          lVar9 = *(long *)(param_1 + 0x58);
          if (lVar9 == 0) goto LAB_025180f4;
          if (*(uint *)(lVar9 + 0x18) <= uVar11) {
LAB_025180f0:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          if (*(int *)(lVar9 + (long)(int)uVar11 * 4 + 0x20) < iVar5) {
            if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_025180f0;
            if (*(int *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) < iVar5) goto LAB_02518090;
          }
        }
        uVar14 = iVar13 * uVar11;
        uVar12 = (ulong)uVar14;
        if (*(int *)(param_1 + 0x18) == 0) {
          uVar14 = *(uint *)(param_1 + 100);
          if (uVar14 < 2) {
            uVar14 = 1;
          }
          uVar14 = uVar14 ^ uVar14 << 0xd;
          uVar14 = uVar14 ^ uVar14 >> 0x11;
          *(uint *)(param_1 + 100) = uVar14 ^ uVar14 << 5;
          if ((uVar14 & 1) == 0) {
            if (-1 < (int)(iVar13 - 1U)) {
              uVar14 = iVar13 * iVar17;
              uVar12 = (ulong)(iVar13 - 1U);
              do {
                uVar14 = uVar14 - 1;
                lVar9 = *(long *)(param_1 + 0x38);
                if (lVar9 == 0) goto LAB_025180f4;
                if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_025180f0;
                if (*(char *)(lVar9 + (int)uVar14 + 0x20) == '\0') {
                  uVar8 = Dino_BusSand_Core_SandGrid__TryPullSandDown_2418430
                                    (param_1,uVar12 & 0xffffffff,uVar11,1);
                  uVar16 = uVar16 | uVar8;
                }
                bVar1 = 0 < (long)uVar12;
                uVar12 = uVar12 - 1;
              } while (bVar1);
            }
          }
          else if (0 < iVar13) {
            lVar9 = uVar12 << 0x20;
            uVar15 = 0;
            do {
              lVar10 = *(long *)(param_1 + 0x38);
              if (lVar10 == 0) goto LAB_025180f4;
              if ((ulong)*(uint *)(lVar10 + 0x18) <= uVar12 + uVar15) goto LAB_025180f0;
              if (*(char *)(lVar10 + (lVar9 >> 0x20) + 0x20) == '\0') {
                uVar14 = Dino_BusSand_Core_SandGrid__TryPullSandDown_2418430
                                   (param_1,uVar15 & 0xffffffff,uVar11,1);
                iVar13 = *(int *)(param_1 + 0x10);
                uVar16 = uVar16 | uVar14;
              }
              uVar15 = uVar15 + 1;
              lVar9 = lVar9 + 0x100000000;
            } while ((long)uVar15 < (long)iVar13);
          }
        }
        else if (*(int *)(param_1 + 0x18) == 1) {
          if (1 < iVar4) {
            lVar9 = uVar12 << 0x20;
            uVar15 = 0;
            do {
              lVar10 = *(long *)(param_1 + 0x38);
              if (lVar10 == 0) goto LAB_025180f4;
              if ((ulong)*(uint *)(lVar10 + 0x18) <= uVar12 + uVar15) goto LAB_025180f0;
              if (*(char *)(lVar10 + (lVar9 >> 0x20) + 0x20) == '\0') {
                uVar8 = Dino_BusSand_Core_SandGrid__PullCenterConverging_2418260
                                  (param_1,uVar15 & 0xffffffff,uVar11,uVar12);
                uVar16 = uVar8 | uVar16;
              }
              uVar15 = uVar15 + 1;
              lVar9 = lVar9 + 0x100000000;
            } while (uVar3 != uVar15);
            iVar13 = *(int *)(param_1 + 0x10);
          }
          iVar13 = iVar13 + -1;
          if ((int)uVar3 <= iVar13) {
            lVar9 = (long)iVar13 + 1;
            do {
              lVar10 = *(long *)(param_1 + 0x38);
              if (lVar10 == 0) goto LAB_025180f4;
              if (*(uint *)(lVar10 + 0x18) <= uVar14 + iVar13) goto LAB_025180f0;
              if (*(char *)(lVar10 + (int)(uVar14 + iVar13) + 0x20) == '\0') {
                uVar8 = Dino_BusSand_Core_SandGrid__PullCenterConverging_2418260
                                  (param_1,iVar13,uVar11,uVar12);
                uVar16 = uVar8 | uVar16;
              }
              lVar9 = lVar9 + -1;
              iVar13 = iVar13 + -1;
            } while ((int)uVar3 < lVar9);
          }
        }
        else {
          if (1 < iVar4) {
            lVar9 = uVar12 << 0x20;
            uVar15 = 0;
            do {
              lVar10 = *(long *)(param_1 + 0x38);
              if (lVar10 == 0) goto LAB_025180f4;
              if ((ulong)*(uint *)(lVar10 + 0x18) <= uVar12 + uVar15) goto LAB_025180f0;
              if (*(char *)(lVar10 + (lVar9 >> 0x20) + 0x20) == '\0') {
                uVar8 = Dino_BusSand_Core_SandGrid__TryPullSandDown_2418430
                                  (param_1,uVar15 & 0xffffffff,uVar11,1);
                uVar16 = uVar16 | uVar8;
              }
              uVar15 = uVar15 + 1;
              lVar9 = lVar9 + 0x100000000;
            } while (uVar3 != uVar15);
            iVar13 = *(int *)(param_1 + 0x10);
          }
          iVar13 = iVar13 + -1;
          if ((int)uVar3 <= iVar13) {
            lVar9 = (long)iVar13 + 1;
            do {
              lVar10 = *(long *)(param_1 + 0x38);
              if (lVar10 == 0) goto LAB_025180f4;
              if (*(uint *)(lVar10 + 0x18) <= uVar14 + iVar13) goto LAB_025180f0;
              if (*(char *)(lVar10 + (int)(uVar14 + iVar13) + 0x20) == '\0') {
                uVar8 = Dino_BusSand_Core_SandGrid__TryPullSandDown_2418430(param_1,iVar13,uVar11,1)
                ;
                uVar16 = uVar16 | uVar8;
              }
              lVar9 = lVar9 + -1;
              iVar13 = iVar13 + -1;
            } while ((int)uVar3 < lVar9);
          }
        }
      }
LAB_02518090:
      iVar17 = iVar17 + 1;
      uVar11 = uVar2;
    } while ((int)uVar2 <= *(int *)(param_1 + 0x14) + -2);
    if ((uVar16 & 1) != 0) {
      bVar7 = 1;
      *(undefined1 *)(param_1 + 0x74) = 1;
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
      goto LAB_025180c8;
    }
  }
  bVar7 = 0;
LAB_025180c8:
  *(byte *)(param_1 + 0x75) = bVar7 ^ 1;
  return;
}

