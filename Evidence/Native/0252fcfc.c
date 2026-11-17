/* IL2CPP: Dino.BusSand.Core.Lane$$WallsOf
System_Collections_Generic_List_BusObb__o* Dino_BusSand_Core_Lane__WallsOf (System_Collections_Generic_List_ValueTuple_double__double___o* path, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.Lane$$WallsOf
   System_Collections_Generic_List_BusObb__o* Dino_BusSand_Core_Lane__WallsOf
   (System_Collections_Generic_List_ValueTuple_double__double___o* path, const MethodInfo* method);
    */

long Dino_BusSand_Core_Lane__WallsOf_242fcfc(undefined1 param_1 [16],double param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uStack_150;
  undefined8 uStack_148;
  double dStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  puVar6 = PTR_DAT_04cbd308;
  puVar5 = PTR_DAT_04cbd2f0;
  if ((bRam0000000004f9cc0d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd2e8);
    FUN_02132f7c(PTR_DAT_04cbd2f0);
    FUN_02132f7c(PTR_DAT_04cbef60);
    FUN_02132f7c(PTR_DAT_04cbd270);
    FUN_02132f7c(PTR_DAT_04cbd308);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cc0d = 1;
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
  System_Collections_Generic_List_BusObb____ctor_39f768c(lVar8,*(undefined8 *)puVar5);
  puVar7 = PTR_DAT_04cbd2e8;
  puVar6 = PTR_DAT_04cbd270;
  puVar5 = PTR_DAT_04caa200;
  dVar4 = _UNK_00e6a520;
  dVar3 = _UNK_00e6a008;
  if (param_3 != 0) {
    if (1 < *(int *)(param_3 + 0x18)) {
      iVar13 = 0;
      iVar10 = 1;
      do {
        dVar14 = (double)System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                                   (param_3,iVar10,*(undefined8 *)puVar6);
        dVar15 = (double)System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                                   (param_3,iVar13,*(undefined8 *)puVar6);
        System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                  (param_3,iVar10,*(undefined8 *)puVar6);
        dVar19 = param_2;
        System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                  (param_3,iVar13,*(undefined8 *)puVar6);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        dVar14 = dVar14 - dVar15;
        param_2 = param_2 - dVar19;
        dVar19 = SQRT(dVar14 * dVar14 + param_2 * param_2);
        if (dVar3 <= dVar19) {
          dVar18 = param_2 / dVar19;
          dVar16 = (double)System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                                     (param_3,iVar13,*(undefined8 *)puVar6);
          dVar17 = (double)System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                                     (param_3,iVar10,*(undefined8 *)puVar6);
          System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                    (param_3,iVar13,*(undefined8 *)puVar6);
          dVar15 = param_2;
          System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                    (param_3,iVar10,*(undefined8 *)puVar6);
          dVar15 = param_2 + dVar15;
          iVar13 = -3;
          do {
            uStack_138 = 0;
            dStack_140 = 0.0;
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            Dino_BusSand_Core_BusObb___ctor_242201c
                      ((dVar16 + dVar17) * 0.5 + dVar18 * dVar4 * (double)(iVar13 + 2),
                       dVar15 * 0.5 - (dVar14 / dVar19) * dVar4 * (double)(iVar13 + 2),
                       dVar14 / dVar19,dVar18,(dVar19 + 0.25) * 0.5,0x3fc0000000000000,&uStack_150,0
                      );
            if (lVar8 == 0) goto LAB_025300ac;
            lVar11 = *(long *)(lVar8 + 0x10);
            lVar12 = *(long *)puVar7;
            uStack_e8 = uStack_148;
            uStack_f0 = uStack_150;
            uStack_d8 = uStack_138;
            dStack_e0 = dStack_140;
            uStack_c8 = uStack_128;
            uStack_d0 = uStack_130;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_025300ac;
            uVar2 = *(uint *)(lVar8 + 0x18);
            param_2 = dStack_140;
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              lVar11 = lVar11 + (long)(int)uVar2 * 0x30;
              *(uint *)(lVar8 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar11 + 0x28) = uStack_148;
              *(undefined8 *)(lVar11 + 0x20) = uStack_150;
              *(undefined8 *)(lVar11 + 0x38) = uStack_138;
              *(double *)(lVar11 + 0x30) = dStack_140;
              *(undefined8 *)(lVar11 + 0x48) = uStack_128;
              *(undefined8 *)(lVar11 + 0x40) = uStack_130;
            }
            else {
              uStack_b8 = uStack_148;
              uStack_c0 = uStack_150;
              uStack_a8 = uStack_138;
              dStack_b0 = dStack_140;
              uStack_98 = uStack_128;
              uStack_a0 = uStack_130;
              System_Collections_Generic_List_BusObb___AddWithResize_39f7f94
                        (lVar8,&uStack_c0,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            iVar13 = iVar13 + 2;
          } while (iVar13 < 0);
        }
        iVar1 = iVar10 + 1;
        iVar13 = iVar10;
        iVar10 = iVar1;
      } while (iVar1 < *(int *)(param_3 + 0x18));
    }
    uVar9 = Dino_BusSand_Core_Lane__TryEndCap_242f7dc(param_3,&uStack_120);
    if ((uVar9 & 1) == 0) {
      return lVar8;
    }
    if (lVar8 != 0) {
      lVar11 = *(long *)(lVar8 + 0x10);
      lVar12 = *(long *)PTR_DAT_04cbd2e8;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar11 != 0) {
        uVar2 = *(uint *)(lVar8 + 0x18);
        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
          lVar11 = lVar11 + (long)(int)uVar2 * 0x30;
          *(uint *)(lVar8 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar11 + 0x28) = uStack_118;
          *(undefined8 *)(lVar11 + 0x20) = uStack_120;
          *(undefined8 *)(lVar11 + 0x38) = uStack_108;
          *(undefined8 *)(lVar11 + 0x30) = uStack_110;
          *(undefined8 *)(lVar11 + 0x48) = uStack_f8;
          *(undefined8 *)(lVar11 + 0x40) = uStack_100;
          return lVar8;
        }
        uStack_b8 = uStack_118;
        uStack_c0 = uStack_120;
        uStack_a8 = uStack_108;
        dStack_b0 = (double)uStack_110;
        uStack_98 = uStack_f8;
        uStack_a0 = uStack_100;
        System_Collections_Generic_List_BusObb___AddWithResize_39f7f94
                  (lVar8,&uStack_c0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        return lVar8;
      }
    }
  }
LAB_025300ac:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

