/* IL2CPP: Dino.BusSand.Core.Lane$$PathTail
System_Collections_Generic_List_ValueTuple_double__double___o* Dino_BusSand_Core_Lane__PathTail (Dino_BusSand_Core_Lane_o* __this, double dist, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.Lane$$PathTail
   System_Collections_Generic_List_ValueTuple_double__double___o* Dino_BusSand_Core_Lane__PathTail
   (Dino_BusSand_Core_Lane_o* __this, double dist, const MethodInfo* method); */

long Dino_BusSand_Core_Lane__PathTail_242f4a8(double param_1,double param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined8 uStack_90;
  double dStack_88;
  
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
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
  System_Collections_Generic_List_ValueTuple_double__double_____ctor_39a13e4
            (lVar8,*(undefined8 *)puVar7);
  puVar7 = PTR_DAT_04cbd270;
  puVar6 = PTR_DAT_04caa200;
  dVar5 = _UNK_00e6a7f0;
  dVar4 = _UNK_00e6a008;
  dVar15 = _UNK_00e69b78;
  if (*(long *)(param_3 + 0x18) != 0) {
    uVar1 = *(uint *)(*(long *)(param_3 + 0x18) + 0x18);
    uVar11 = uVar1;
    if ((int)(uVar1 - 1) < 1) {
LAB_0252f660:
      uVar11 = 0;
LAB_0252f664:
      puVar6 = PTR_DAT_04cbd260;
      if ((int)uVar11 < (int)uVar1) {
        do {
          if ((*(long *)(param_3 + 0x18) == 0) ||
             (uVar14 = System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                                 (*(long *)(param_3 + 0x18),uVar11,*(undefined8 *)puVar7),
             lVar8 == 0)) goto LAB_0252f7d8;
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar10 = *(long *)puVar6;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_0252f7d8;
          uVar3 = *(uint *)(lVar8 + 0x18);
          if (uVar3 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar3 * 0x10;
            *(uint *)(lVar8 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar9 + 0x20) = uVar14;
            *(double *)(lVar9 + 0x28) = param_2;
          }
          else {
            System_Collections_Generic_List_ValueTuple_double__double____AddWithResize_39a1c7c
                      (lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          uVar11 = uVar11 + 1;
        } while (uVar1 != uVar11);
      }
      return lVar8;
    }
    while (*(long *)(param_3 + 0x18) != 0) {
      uVar3 = uVar11 - 1;
      dVar12 = (double)System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                                 (*(long *)(param_3 + 0x18),uVar3,*(undefined8 *)puVar7);
      if (*(long *)(param_3 + 0x18) == 0) break;
      uVar11 = uVar11 - 2;
      dVar13 = (double)System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                                 (*(long *)(param_3 + 0x18),uVar11,*(undefined8 *)puVar7);
      if (*(long *)(param_3 + 0x18) == 0) break;
      System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                (*(long *)(param_3 + 0x18),uVar3,*(undefined8 *)puVar7);
      if (*(long *)(param_3 + 0x18) == 0) break;
      dVar16 = param_2;
      System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                (*(long *)(param_3 + 0x18),uVar11,*(undefined8 *)puVar7);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      dVar12 = dVar12 - dVar13;
      dVar16 = param_2 - dVar16;
      param_2 = dVar16 * dVar16;
      dVar13 = SQRT(dVar12 * dVar12 + param_2);
      if (dVar4 <= dVar13) {
        if (param_1 <= dVar13 + dVar5) {
          if (*(long *)(param_3 + 0x18) == 0) break;
          dVar15 = (double)System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                                     (*(long *)(param_3 + 0x18),uVar3,*(undefined8 *)puVar7);
                    /* try { // try from 0252f72c to 0262f72f has its CatchHandler @ 0252f748 */
          if (*(long *)(param_3 + 0x18) == 0) break;
                    /* try { // try from 0252f730 to 0262f763 has its CatchHandler @ 0252e578 */
          dVar12 = dVar12 * (param_1 / dVar13);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0252ef20 with catch @ 0252f740
                        */
          dVar15 = dVar15 - dVar12;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0252eebc with catch @ 0252f744
                        */
          System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                    (*(long *)(param_3 + 0x18),uVar3,*(undefined8 *)puVar7);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0252f72c with catch @ 0252f748
                        */
          uStack_90 = 0;
          dStack_88 = 0.0;
                    /* try { // try from 0252f764 to 0262f767 has its CatchHandler @ 0252f788 */
                    /* try { // try from 0252f768 to 0262f78b has its CatchHandler @ 0252e578 */
          System_ValueTuple_double__double____ctor_30d8690
                    (dVar15,dVar12 - dVar16 * (param_1 / dVar13),&uStack_90,
                     *(undefined8 *)PTR_DAT_04cbd250);
          if (lVar8 == 0) break;
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar10 = *(long *)PTR_DAT_04cbd260;
                    /* catch() { ... } // from try @ 0252f764 with catch @ 0252f788 */
                    /* try { // try from 0252f78c to 0262f793 has its CatchHandler @ 0252f79c */
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 == 0) break;
                    /* try { // try from 0252f794 to 0262f79f has its CatchHandler @ 0252e578 */
          uVar2 = *(uint *)(lVar8 + 0x18);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0252f78c with catch @ 0252f79c
                        */
          param_2 = dStack_88;
          uVar11 = uVar3;
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar2 * 0x10;
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar9 + 0x20) = uStack_90;
            *(double *)(lVar9 + 0x28) = dStack_88;
          }
          else {
            System_Collections_Generic_List_ValueTuple_double__double____AddWithResize_39a1c7c
                      (lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_0252f664;
        }
        param_1 = param_1 - dVar13;
        if (param_1 <= dVar15) goto LAB_0252f664;
      }
      uVar11 = uVar3;
      if (uVar3 < 2) goto LAB_0252f660;
    }
  }
LAB_0252f7d8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

