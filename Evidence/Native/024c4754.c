/* IL2CPP: Dino.BusSand.View.MechanicLayer$$TailCut
System_Collections_Generic_List_Vector3__o* Dino_BusSand_View_MechanicLayer__TailCut (System_Collections_Generic_List_Vector3__o* path, float keep, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$TailCut
   System_Collections_Generic_List_Vector3__o* Dino_BusSand_View_MechanicLayer__TailCut
   (System_Collections_Generic_List_Vector3__o* path, float keep, const MethodInfo* method); */

long Dino_BusSand_View_MechanicLayer__TailCut_23c4754
               (float param_1,float param_2,ulong param_3,long param_4)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  puVar3 = PTR_DAT_04cb3c10;
  puVar4 = PTR_DAT_04caa1d0;
  if ((bRam0000000004f9c9ca & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04cbd1d8);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04caa1a8);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    bRam0000000004f9c9ca = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_Vector3____ctor_3af944c(lVar6,*(undefined8 *)puVar3);
  puVar4 = PTR_DAT_04caa1a8;
  if (param_4 != 0) {
    if ((param_1 <= _UNK_00e20948) || (*(int *)(param_4 + 0x18) < 2)) {
      return lVar6;
    }
    uVar10 = System_Collections_Generic_List_Vector3___get_Item_3af99e4
                       (param_4,*(int *)(param_4 + 0x18) + -1,*(undefined8 *)PTR_DAT_04caa1a8);
    puVar3 = PTR_DAT_04caa170;
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *(long *)PTR_DAT_04caa170;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar9 = *(uint *)(lVar6 + 0x18);
        if (uVar9 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar9 * 0xc;
          *(uint *)(lVar6 + 0x18) = uVar9 + 1;
          *(undefined4 *)(lVar7 + 0x20) = uVar10;
          *(float *)(lVar7 + 0x24) = param_2;
          *(int *)(lVar7 + 0x28) = (int)param_3;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                    (lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        puVar5 = PTR_DAT_04caa200;
        uVar9 = *(int *)(param_4 + 0x18) - 1;
        if (0 < (int)uVar9) {
          do {
            fVar15 = (float)param_3;
            fVar11 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                      (param_4,uVar9,*(undefined8 *)puVar4);
            fVar13 = param_2;
            fVar16 = fVar15;
            fVar12 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                      (param_4,uVar9 - 1,*(undefined8 *)puVar4);
            if (cRam0000000004f9b9df == '\0') {
              FUN_02132f7c(puVar5);
              cRam0000000004f9b9df = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            fVar14 = _UNK_00e20900;
            fVar17 = fVar15 - fVar16;
            param_3 = (ulong)(uint)fVar17;
            fVar18 = SQRT(fVar17 * fVar17 +
                          (fVar11 - fVar12) * (fVar11 - fVar12) +
                          (param_2 - fVar13) * (param_2 - fVar13));
            if (param_1 <= fVar18) {
              lVar7 = *(long *)(lVar6 + 0x10);
              lVar8 = *(long *)puVar3;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              fVar17 = param_1 / fVar18;
              if (fVar18 <= fVar14) {
                fVar17 = 0.0;
              }
              fVar14 = 1.0;
              if (fVar17 <= 1.0) {
                fVar14 = fVar17;
              }
              fVar18 = 0.0;
              if (0.0 <= fVar17) {
                fVar18 = fVar14;
              }
              if (lVar7 == 0) goto LAB_024c4aa8;
              uVar9 = *(uint *)(lVar6 + 0x18);
              if (uVar9 < *(uint *)(lVar7 + 0x18)) {
                lVar7 = lVar7 + (long)(int)uVar9 * 0xc;
                *(uint *)(lVar6 + 0x18) = uVar9 + 1;
                *(float *)(lVar7 + 0x20) = fVar11 + (fVar12 - fVar11) * fVar18;
                *(float *)(lVar7 + 0x24) = param_2 + (fVar13 - param_2) * fVar18;
                *(float *)(lVar7 + 0x28) = fVar15 + (fVar16 - fVar15) * fVar18;
              }
              else {
                System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                          (lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              break;
            }
            lVar7 = *(long *)(lVar6 + 0x10);
            lVar8 = *(long *)puVar3;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_024c4aa8;
            uVar2 = *(uint *)(lVar6 + 0x18);
            if (uVar2 < *(uint *)(lVar7 + 0x18)) {
              lVar7 = lVar7 + (long)(int)uVar2 * 0xc;
              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
              *(float *)(lVar7 + 0x20) = fVar12;
              *(float *)(lVar7 + 0x24) = fVar13;
              *(float *)(lVar7 + 0x28) = fVar16;
              fVar13 = fVar17 * fVar17;
            }
            else {
              param_3 = (ulong)(uint)fVar16;
              System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                        (fVar12,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            param_1 = param_1 - fVar18;
            bVar1 = 1 < uVar9;
            param_2 = fVar13;
            uVar9 = uVar9 - 1;
          } while (bVar1);
        }
        System_Collections_Generic_List_Vector3___Reverse_3afb690
                  (lVar6,*(undefined8 *)PTR_DAT_04cbd1d8);
        return lVar6;
      }
    }
  }
LAB_024c4aa8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

