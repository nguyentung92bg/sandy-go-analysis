/* IL2CPP: Dino.BusSand.View.GameView$$RoundCorners
System_Collections_Generic_List_Vector3__o* Dino_BusSand_View_GameView__RoundCorners (System_Collections_Generic_List_Vector3__o* p, float radius, int32_t seg, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$RoundCorners
   System_Collections_Generic_List_Vector3__o* Dino_BusSand_View_GameView__RoundCorners
   (System_Collections_Generic_List_Vector3__o* p, float radius, int32_t seg, const MethodInfo*
   method); */

long Dino_BusSand_View_GameView__RoundCorners_23a01fc
               (undefined4 param_1,ulong param_2,ulong param_3,long param_4,int param_5)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar22;
  undefined8 uVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined8 uVar31;
  
  puVar3 = PTR_DAT_04cb3c10;
  puVar4 = PTR_DAT_04caa1d0;
                    /* try { // try from 024a0204 to 025a0207 has its CatchHandler @ 024a0220 */
                    /* try { // try from 024a0208 to 025a0223 has its CatchHandler @ 0249fed0 */
                    /* catch() { ... } // from try @ 024a0204 with catch @ 024a0220 */
                    /* try { // try from 024a0224 to 025a022b has its CatchHandler @ 024a0234 */
                    /* try { // try from 024a022c to 025a0237 has its CatchHandler @ 0249fed0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024a0224 with catch @ 024a0234
                        */
  if ((bRam0000000004f9c917 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04caa1a8);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04caadd0);
    bRam0000000004f9c917 = 1;
  }
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_Vector3____ctor_3af944c(lVar7,*(undefined8 *)puVar3);
  puVar3 = PTR_DAT_04caa1a8;
  if ((param_4 != 0) &&
     (uVar15 = System_Collections_Generic_List_Vector3___get_Item_3af99e4
                         (param_4,0,*(undefined8 *)PTR_DAT_04caa1a8), puVar2 = PTR_DAT_04caa170,
     lVar7 != 0)) {
    lVar9 = *(long *)(lVar7 + 0x10);
    lVar10 = *(long *)PTR_DAT_04caa170;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar9 != 0) {
      uVar8 = *(uint *)(lVar7 + 0x18);
      if (uVar8 < *(uint *)(lVar9 + 0x18)) {
        lVar9 = lVar9 + (long)(int)uVar8 * 0xc;
        *(uint *)(lVar7 + 0x18) = uVar8 + 1;
        *(undefined4 *)(lVar9 + 0x20) = uVar15;
        *(int *)(lVar9 + 0x24) = (int)param_2;
        *(int *)(lVar9 + 0x28) = (int)param_3;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                  (lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      puVar5 = PTR_DAT_04caa200;
      fVar1 = _UNK_00e20a7c;
      if (1 < *(int *)(param_4 + 0x18)) {
        iVar14 = 1;
        do {
          fVar26 = (float)param_3;
          fVar19 = (float)param_2;
          fVar16 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                    (lVar7,*(int *)(lVar7 + 0x18) + -1,*(undefined8 *)puVar3);
          fVar28 = fVar19;
          fVar25 = fVar26;
          fVar17 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                    (param_4,iVar14,*(undefined8 *)puVar3);
          if (cRam0000000004f9b9df == '\0') {
            FUN_02132f7c(puVar5);
            cRam0000000004f9b9df = '\x01';
          }
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          fVar26 = fVar26 - fVar25;
          param_3 = (ulong)(uint)fVar26;
          param_2 = (ulong)(uint)(fVar26 * fVar26);
          if (fVar1 < SQRT(fVar26 * fVar26 +
                           (fVar16 - fVar17) * (fVar16 - fVar17) +
                           (fVar19 - fVar28) * (fVar19 - fVar28))) {
            uVar15 = System_Collections_Generic_List_Vector3___get_Item_3af99e4
                               (param_4,iVar14,*(undefined8 *)puVar3);
            lVar9 = *(long *)(lVar7 + 0x10);
            lVar10 = *(long *)puVar2;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_024a09a0;
            uVar8 = *(uint *)(lVar7 + 0x18);
            if (uVar8 < *(uint *)(lVar9 + 0x18)) {
              lVar9 = lVar9 + (long)(int)uVar8 * 0xc;
              *(uint *)(lVar7 + 0x18) = uVar8 + 1;
              *(undefined4 *)(lVar9 + 0x20) = uVar15;
              *(int *)(lVar9 + 0x24) = (int)param_2;
              *(int *)(lVar9 + 0x28) = (int)param_3;
            }
            else {
              System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                        (lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < *(int *)(param_4 + 0x18));
      }
      if (*(int *)(lVar7 + 0x18) < 3) {
        return lVar7;
      }
      lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
      System_Collections_Generic_List_Vector3____ctor_3af944c(lVar9,*(undefined8 *)PTR_DAT_04cb3c10)
      ;
      uVar15 = System_Collections_Generic_List_Vector3___get_Item_3af99e4
                         (lVar7,0,*(undefined8 *)puVar3);
      if (lVar9 != 0) {
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar11 = *(long *)puVar2;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar8 = *(uint *)(lVar9 + 0x18);
          if (uVar8 < *(uint *)(lVar10 + 0x18)) {
            lVar10 = lVar10 + (long)(int)uVar8 * 0xc;
            *(uint *)(lVar9 + 0x18) = uVar8 + 1;
            *(undefined4 *)(lVar10 + 0x20) = uVar15;
            *(int *)(lVar10 + 0x24) = (int)param_2;
            *(int *)(lVar10 + 0x28) = (int)param_3;
          }
          else {
            System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                      (lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          puVar4 = PTR_DAT_04caa200;
          fVar1 = _UNK_00e20a08;
          uVar15 = (undefined4)param_2;
          uVar29 = (undefined4)param_3;
          iVar14 = *(int *)(lVar7 + 0x18) + -1;
          if (1 < iVar14) {
            iVar13 = 1;
            do {
              fVar22 = (float)param_2;
              fVar23 = (float)param_3;
              fVar18 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                        (lVar7,iVar13 + -1,*(undefined8 *)puVar3);
              fVar25 = fVar23;
              fVar17 = fVar22;
              fVar19 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                        (lVar7,iVar13,*(undefined8 *)puVar3);
              iVar13 = iVar13 + 1;
              fVar28 = fVar25;
              fVar16 = fVar17;
              fVar26 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                        (lVar7,iVar13,*(undefined8 *)puVar3);
              if (cRam0000000004f9b65c == '\0') {
                FUN_02132f7c(puVar4);
                cRam0000000004f9b65c = '\x01';
              }
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              fVar23 = fVar23 - fVar25;
              fVar18 = fVar18 - fVar19;
              fVar22 = fVar22 - fVar17;
              fVar30 = SQRT(fVar23 * fVar23 + fVar18 * fVar18 + fVar22 * fVar22);
              if (fVar30 <= fVar1) {
                if (cRam0000000004f9b65d == '\0') {
                  FUN_02132f7c(PTR_DAT_04caa208);
                  cRam0000000004f9b65d = '\x01';
                }
                uVar21 = **(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
                fVar23 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
              }
              else {
                fVar23 = fVar23 / fVar30;
                uVar21 = CONCAT44(fVar22 / fVar30,fVar18 / fVar30);
              }
              if (cRam0000000004f9b65c == '\0') {
                FUN_02132f7c(puVar4);
                cRam0000000004f9b65c = '\x01';
              }
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              fVar18 = fVar26 - fVar19;
              fVar22 = fVar16 - fVar17;
              fVar24 = fVar28 - fVar25;
              fVar27 = SQRT(fVar24 * fVar24 + fVar18 * fVar18 + fVar22 * fVar22);
              if (fVar27 <= fVar1) {
                if (cRam0000000004f9b65d == '\0') {
                  FUN_02132f7c(PTR_DAT_04caa208);
                  cRam0000000004f9b65d = '\x01';
                }
                uVar31 = **(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
                fVar24 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
              }
              else {
                fVar24 = fVar24 / fVar27;
                uVar31 = CONCAT44(fVar22 / fVar27,fVar18 / fVar27);
              }
              lVar10 = FUN_02133068(*(undefined8 *)PTR_DAT_04caadd0,3);
              cVar6 = cRam0000000004f9b9df;
              if (lVar10 == 0) goto LAB_024a09a0;
              if (*(int *)(lVar10 + 0x18) == 0) {
LAB_024a09a4:
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              *(undefined4 *)(lVar10 + 0x20) = param_1;
              if (cVar6 == '\0') {
                FUN_02132f7c(puVar4);
                cRam0000000004f9b9df = '\x01';
              }
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              cVar6 = cRam0000000004f9b9df;
              if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) goto LAB_024a09a4;
              *(float *)(lVar10 + 0x24) = fVar30 * 0.5;
              if (cVar6 == '\0') {
                FUN_02132f7c(puVar4);
                cRam0000000004f9b9df = '\x01';
              }
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar8 = (uint)*(ulong *)(lVar10 + 0x18);
              if (uVar8 < 3) goto LAB_024a09a4;
              fVar28 = (fVar25 - fVar28) * (fVar25 - fVar28);
              param_3 = (ulong)(uint)fVar28;
              fVar16 = SQRT(fVar28 + (fVar19 - fVar26) * (fVar19 - fVar26) +
                                     (fVar17 - fVar16) * (fVar17 - fVar16)) * 0.5;
              fVar28 = *(float *)(lVar10 + 0x20);
              *(float *)(lVar10 + 0x28) = fVar16;
              if (1 < (int)uVar8) {
                lVar11 = (*(ulong *)(lVar10 + 0x18) & 0xffffffff) - 1;
                pfVar12 = (float *)(lVar10 + 0x24);
                do {
                  fVar16 = *pfVar12;
                  fVar26 = fVar16;
                  if (fVar28 <= fVar16) {
                    fVar26 = fVar28;
                  }
                  fVar28 = fVar26;
                  lVar11 = lVar11 + -1;
                  pfVar12 = pfVar12 + 1;
                } while (lVar11 != 0);
              }
              param_2 = (ulong)(uint)fVar16;
              if (-1 < param_5) {
                iVar14 = 0;
                fVar18 = fVar25 + fVar23 * fVar28;
                fVar16 = fVar19 + (float)uVar21 * fVar28;
                fVar26 = fVar17 + (float)((ulong)uVar21 >> 0x20) * fVar28;
                do {
                  lVar10 = *(long *)(lVar9 + 0x10);
                  lVar11 = *(long *)puVar2;
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    /* try { // try from 024a084c to 025a0b27 has its CatchHandler @ 024a084c
                       catch() { ... } // from try @ 024a084c with catch @ 024a084c
                       catch() { ... } // from try @ 024a0bb8 with catch @ 024a084c
                       catch() { ... } // from try @ 024a0bdc with catch @ 024a084c
                       catch() { ... } // from try @ 024a0c7c with catch @ 024a084c
                       catch() { ... } // from try @ 024a0da4 with catch @ 024a084c
                       catch() { ... } // from try @ 024a13a0 with catch @ 024a084c
                       catch() { ... } // from try @ 024a13b8 with catch @ 024a084c
                       catch() { ... } // from try @ 024a140c with catch @ 024a084c
                       catch() { ... } // from try @ 024a1448 with catch @ 024a084c
                       catch() { ... } // from try @ 024a1470 with catch @ 024a084c
                       catch() { ... } // from try @ 024a1494 with catch @ 024a084c
                       catch() { ... } // from try @ 024a14c0 with catch @ 024a084c */
                  fVar23 = (float)iVar14 / (float)param_5;
                  fVar22 = 1.0;
                  if (fVar23 <= 1.0) {
                    fVar22 = fVar23;
                  }
                  fVar30 = 0.0;
                  if (0.0 <= fVar23) {
                    fVar30 = fVar22;
                  }
                  if (lVar10 == 0) goto LAB_024a09a0;
                  uVar8 = *(uint *)(lVar9 + 0x18);
                  fVar23 = fVar16 + (fVar19 - fVar16) * fVar30;
                  fVar22 = fVar26 + (fVar17 - fVar26) * fVar30;
                  param_2 = CONCAT44(fVar22,fVar23);
                  fVar27 = fVar18 + (fVar25 - fVar18) * fVar30;
                  fVar22 = fVar22 + ((fVar17 + ((fVar17 + (float)((ulong)uVar31 >> 0x20) * fVar28) -
                                               fVar17) * fVar30) - fVar22) * fVar30;
                  fVar27 = fVar27 + fVar30 * ((fVar25 + ((fVar25 + fVar24 * fVar28) - fVar25) *
                                                        fVar30) - fVar27);
                  param_3 = (ulong)(uint)fVar27;
                  if (uVar8 < *(uint *)(lVar10 + 0x18)) {
                    lVar10 = lVar10 + (long)(int)uVar8 * 0xc;
                    *(uint *)(lVar9 + 0x18) = uVar8 + 1;
                    *(ulong *)(lVar10 + 0x20) =
                         CONCAT44(fVar22,fVar23 + ((fVar19 + ((fVar19 + (float)uVar31 * fVar28) -
                                                             fVar19) * fVar30) - fVar23) * fVar30);
                    *(float *)(lVar10 + 0x28) = fVar27;
                  }
                  else {
                    param_2 = (ulong)(uint)fVar22;
                    System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                              (lVar9,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 <= param_5);
              }
              uVar15 = (undefined4)param_2;
              uVar29 = (undefined4)param_3;
              iVar14 = *(int *)(lVar7 + 0x18) + -1;
            } while (iVar13 < iVar14);
          }
          uVar20 = System_Collections_Generic_List_Vector3___get_Item_3af99e4
                             (lVar7,iVar14,*(undefined8 *)puVar3);
          lVar7 = *(long *)(lVar9 + 0x10);
          lVar10 = *(long *)puVar2;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar8 = *(uint *)(lVar9 + 0x18);
            if (uVar8 < *(uint *)(lVar7 + 0x18)) {
              lVar7 = lVar7 + (long)(int)uVar8 * 0xc;
              *(uint *)(lVar9 + 0x18) = uVar8 + 1;
              *(undefined4 *)(lVar7 + 0x20) = uVar20;
              *(undefined4 *)(lVar7 + 0x24) = uVar15;
              *(undefined4 *)(lVar7 + 0x28) = uVar29;
              return lVar9;
            }
            System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                      (lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            return lVar9;
          }
        }
      }
    }
  }
LAB_024a09a0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

