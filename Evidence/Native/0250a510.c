/* IL2CPP: Dino.BusSand.View.WorldView$$Rounded
System_Collections_Generic_List_Vector3__o* Dino_BusSand_View_WorldView__Rounded (System_Collections_Generic_List_Vector3__o* q, float r, int32_t seg, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.WorldView$$Rounded
   System_Collections_Generic_List_Vector3__o* Dino_BusSand_View_WorldView__Rounded
   (System_Collections_Generic_List_Vector3__o* q, float r, int32_t seg, const MethodInfo* method);
    */

long Dino_BusSand_View_WorldView__Rounded_240a510
               (undefined4 param_1,ulong param_2,ulong param_3,long param_4,int param_5)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar20;
  undefined8 uVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  
  puVar2 = PTR_DAT_04cb3c10;
  puVar3 = PTR_DAT_04caa1d0;
  if ((bRam0000000004f9cb1e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04caa1a8);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04caadd0);
    bRam0000000004f9cb1e = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_Vector3____ctor_3af944c(lVar6,*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_04caa1a8;
  if ((param_4 != 0) &&
     (uVar13 = System_Collections_Generic_List_Vector3___get_Item_3af99e4
                         (param_4,0,*(undefined8 *)PTR_DAT_04caa1a8), puVar2 = PTR_DAT_04caa170,
     lVar6 != 0)) {
    lVar8 = *(long *)(lVar6 + 0x10);
    lVar9 = *(long *)PTR_DAT_04caa170;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar7 = *(uint *)(lVar6 + 0x18);
      if (uVar7 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (long)(int)uVar7 * 0xc;
        *(uint *)(lVar6 + 0x18) = uVar7 + 1;
        *(undefined4 *)(lVar8 + 0x20) = uVar13;
        *(int *)(lVar8 + 0x24) = (int)param_2;
        *(int *)(lVar8 + 0x28) = (int)param_3;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                  (lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      puVar4 = PTR_DAT_04caa200;
      fVar1 = _UNK_00e20a08;
      uVar13 = (undefined4)param_2;
      uVar25 = (undefined4)param_3;
      iVar12 = *(int *)(param_4 + 0x18) + -1;
      if (1 < iVar12) {
                    /* try { // try from 0250a674 to 0260a67b has its CatchHandler @ 0250a7cc */
        iVar11 = 1;
        do {
          fVar29 = (float)param_2;
          fVar28 = (float)param_3;
                    /* try { // try from 0250a694 to 0260a69b has its CatchHandler @ 0250a7c0 */
          fVar14 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                    (param_4,iVar11 + -1,*(undefined8 *)puVar3);
          fVar24 = fVar28;
          fVar21 = fVar29;
          fVar15 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                    (param_4,iVar11,*(undefined8 *)puVar3);
                    /* try { // try from 0250a6b8 to 0260a6cf has its CatchHandler @ 0250a7d0 */
          iVar11 = iVar11 + 1;
          fVar23 = fVar24;
          fVar20 = fVar21;
          fVar16 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                    (param_4,iVar11,*(undefined8 *)puVar3);
                    /* try { // try from 0250a6e0 to 0260a6f7 has its CatchHandler @ 0250a7c8 */
          lVar8 = FUN_02133068(*(undefined8 *)PTR_DAT_04caadd0,3);
          cVar5 = cRam0000000004f9b9df;
          if (lVar8 == 0) goto LAB_0250aaf4;
                    /* try { // try from 0250a6f8 to 0260a7b7 has its CatchHandler @ 0250a464 */
          if (*(int *)(lVar8 + 0x18) == 0) {
LAB_0250aaf8:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          *(undefined4 *)(lVar8 + 0x20) = param_1;
          if (cVar5 == '\0') {
            FUN_02132f7c(puVar4);
            cRam0000000004f9b9df = '\x01';
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          cVar5 = cRam0000000004f9b9df;
          if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0250aaf8;
          fVar28 = fVar28 - fVar24;
          fVar14 = fVar14 - fVar15;
          fVar29 = fVar29 - fVar21;
          fVar17 = SQRT(fVar28 * fVar28 + fVar14 * fVar14 + fVar29 * fVar29);
          *(float *)(lVar8 + 0x24) = fVar17 * 0.5;
          if (cVar5 == '\0') {
            FUN_02132f7c(puVar4);
            cRam0000000004f9b9df = '\x01';
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar7 = (uint)*(ulong *)(lVar8 + 0x18);
          if (uVar7 < 3) goto LAB_0250aaf8;
                    /* try { // try from 0250a7b8 to 0260a7bb has its CatchHandler @ 0250a7c4 */
                    /* try { // try from 0250a7bc to 0260a7eb has its CatchHandler @ 0250a464 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0250a694 with catch @ 0250a7c0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0250a7b8 with catch @ 0250a7c4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0250a6e0 with catch @ 0250a7c8
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0250a674 with catch @ 0250a7cc
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0250a6b8 with catch @ 0250a7d0
                        */
          fVar22 = *(float *)(lVar8 + 0x20);
                    /* try { // try from 0250a7ec to 0260a7ef has its CatchHandler @ 0250a808 */
          *(float *)(lVar8 + 0x28) =
               SQRT((fVar24 - fVar23) * (fVar24 - fVar23) +
                    (fVar15 - fVar16) * (fVar15 - fVar16) + (fVar21 - fVar20) * (fVar21 - fVar20)) *
               0.5;
                    /* try { // try from 0250a7f0 to 0260a80b has its CatchHandler @ 0250a464 */
          if (1 < (int)uVar7) {
            lVar9 = (*(ulong *)(lVar8 + 0x18) & 0xffffffff) - 1;
            pfVar10 = (float *)(lVar8 + 0x24);
            do {
              fVar26 = *pfVar10;
                    /* catch() { ... } // from try @ 0250a7ec with catch @ 0250a808 */
              if (fVar22 <= *pfVar10) {
                fVar26 = fVar22;
              }
              fVar22 = fVar26;
                    /* try { // try from 0250a80c to 0260a813 has its CatchHandler @ 0250a81c */
              lVar9 = lVar9 + -1;
              pfVar10 = pfVar10 + 1;
            } while (lVar9 != 0);
          }
                    /* try { // try from 0250a814 to 0260a81f has its CatchHandler @ 0250a464 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0250a80c with catch @ 0250a81c
                        */
          if (cRam0000000004f9b65c == '\0') {
            FUN_02132f7c(puVar4);
            cRam0000000004f9b65c = '\x01';
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (fVar17 <= fVar1) {
            if (cRam0000000004f9b65d == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65d = '\x01';
            }
            uVar27 = **(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
            fVar28 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
          }
          else {
            fVar28 = fVar28 / fVar17;
            uVar27 = CONCAT44(fVar29 / fVar17,fVar14 / fVar17);
          }
          if (cRam0000000004f9b65c == '\0') {
            FUN_02132f7c(puVar4);
            cRam0000000004f9b65c = '\x01';
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          fVar16 = fVar16 - fVar15;
          fVar20 = fVar20 - fVar21;
          fVar23 = fVar23 - fVar24;
          fVar14 = SQRT(fVar23 * fVar23 + fVar16 * fVar16 + fVar20 * fVar20);
          param_3 = (ulong)(uint)fVar14;
          if (fVar14 <= fVar1) {
            if (cRam0000000004f9b65d == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65d = '\x01';
            }
            uVar19 = **(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
            fVar23 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
          }
          else {
            fVar23 = fVar23 / fVar14;
            uVar19 = CONCAT44(fVar20 / fVar14,fVar16 / fVar14);
          }
          param_2 = (ulong)(uint)fVar23;
          if (-1 < param_5) {
            iVar12 = 0;
            fVar20 = fVar15 + (float)uVar27 * fVar22;
            fVar14 = fVar21 + (float)((ulong)uVar27 >> 0x20) * fVar22;
            fVar16 = fVar24 + fVar22 * fVar28;
            do {
              lVar8 = *(long *)(lVar6 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              fVar28 = (float)iVar12 / (float)param_5;
              fVar29 = 1.0;
              if (fVar28 <= 1.0) {
                fVar29 = fVar28;
              }
              fVar17 = 0.0;
              if (0.0 <= fVar28) {
                fVar17 = fVar29;
              }
              if (lVar8 == 0) goto LAB_0250aaf4;
              uVar7 = *(uint *)(lVar6 + 0x18);
              fVar28 = fVar20 + (fVar15 - fVar20) * fVar17;
              fVar29 = fVar14 + (fVar21 - fVar14) * fVar17;
              param_2 = CONCAT44(fVar29,fVar28);
              fVar26 = fVar16 + (fVar24 - fVar16) * fVar17;
              fVar29 = fVar29 + ((fVar21 + ((fVar21 + (float)((ulong)uVar19 >> 0x20) * fVar22) -
                                           fVar21) * fVar17) - fVar29) * fVar17;
              fVar26 = fVar26 + fVar17 * ((fVar24 + ((fVar24 + fVar22 * fVar23) - fVar24) * fVar17)
                                         - fVar26);
              param_3 = (ulong)(uint)fVar26;
              if (uVar7 < *(uint *)(lVar8 + 0x18)) {
                lVar8 = lVar8 + (long)(int)uVar7 * 0xc;
                *(uint *)(lVar6 + 0x18) = uVar7 + 1;
                *(ulong *)(lVar8 + 0x20) =
                     CONCAT44(fVar29,fVar28 + ((fVar15 + ((fVar15 + (float)uVar19 * fVar22) - fVar15
                                                         ) * fVar17) - fVar28) * fVar17);
                *(float *)(lVar8 + 0x28) = fVar26;
              }
              else {
                param_2 = (ulong)(uint)fVar29;
                System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                          (lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 <= param_5);
          }
          uVar13 = (undefined4)param_2;
          uVar25 = (undefined4)param_3;
          iVar12 = *(int *)(param_4 + 0x18) + -1;
        } while (iVar11 < iVar12);
      }
      uVar18 = System_Collections_Generic_List_Vector3___get_Item_3af99e4
                         (param_4,iVar12,*(undefined8 *)puVar3);
      lVar8 = *(long *)(lVar6 + 0x10);
      lVar9 = *(long *)puVar2;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar7 = *(uint *)(lVar6 + 0x18);
        if (uVar7 < *(uint *)(lVar8 + 0x18)) {
          lVar8 = lVar8 + (long)(int)uVar7 * 0xc;
          *(uint *)(lVar6 + 0x18) = uVar7 + 1;
          *(undefined4 *)(lVar8 + 0x20) = uVar18;
          *(undefined4 *)(lVar8 + 0x24) = uVar13;
          *(undefined4 *)(lVar8 + 0x28) = uVar25;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                    (lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        return lVar6;
      }
    }
  }
LAB_0250aaf4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

