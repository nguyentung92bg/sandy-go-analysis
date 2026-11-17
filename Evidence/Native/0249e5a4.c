/* IL2CPP: Dino.BusSand.View.GameView$$BuildEscape
System_Collections_Generic_List_Vector3__o* Dino_BusSand_View_GameView__BuildEscape (Dino_BusSand_View_GameView_o* __this, Dino_BusSand_Core_Truck_o* t, bool trainRun, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$BuildEscape
   System_Collections_Generic_List_Vector3__o* Dino_BusSand_View_GameView__BuildEscape
   (Dino_BusSand_View_GameView_o* __this, Dino_BusSand_Core_Truck_o* t, bool trainRun, const
   MethodInfo* method); */

void Dino_BusSand_View_GameView__BuildEscape_239e5a4
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               long param_5,ulong param_6)

{
  undefined4 uVar1;
  double dVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  double dStack_98;
  double dStack_48;
  
                    /* try { // try from 0249e5cc to 0259e6a7 has its CatchHandler @ 0249e3b4 */
  if ((bRam0000000004f9c916 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cb2870);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04cbc4c0);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    bRam0000000004f9c916 = 1;
  }
  puVar5 = PTR_DAT_04cbc080;
  lVar13 = *(long *)(param_4 + 0x30);
  dStack_48 = 0.0;
  lStack_a0 = 0;
  dStack_98 = 0.0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  if ((lVar13 == 0) || (param_5 == 0)) goto LAB_0249ecfc;
  fVar20 = (float)*(undefined8 *)(param_5 + 0x20);
  fVar26 = *(float *)(lVar13 + 0xfc);
  fVar15 = (float)Dino_BusSand_View_StageLayout__YardToWorld_23e8904
                            (*(undefined8 *)(param_5 + 0x18),lVar13,0);
  uVar1 = *(undefined4 *)(param_5 + 0x28);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    /* try { // try from 0249e6a8 to 0259e6ab has its CatchHandler @ 0249e6d8 */
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0249e6ac to 0259e6af has its CatchHandler @ 0249e6d0 */
                    /* try { // try from 0249e6b0 to 0259e6b3 has its CatchHandler @ 0249e6cc */
                    /* try { // try from 0249e6b4 to 0259e6b7 has its CatchHandler @ 0249e6c0 */
                    /* try { // try from 0249e6b8 to 0259e6f7 has its CatchHandler @ 0249e3b4 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e548 with catch @ 0249e6bc
                        */
  Dino_BusSand_Core_BusGeometry__Heading_242bec8(uVar1,&dStack_48,&dStack_98,0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e6b4 with catch @ 0249e6c0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e54c with catch @ 0249e6c4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e564 with catch @ 0249e6c8
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e6b0 with catch @ 0249e6cc
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e6ac with catch @ 0249e6d0
                        */
  fVar24 = (float)dStack_48;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e530 with catch @ 0249e6d4
                        */
  fVar27 = (float)dStack_98;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e6a8 with catch @ 0249e6d8
                        */
  dVar18 = (double)Dino_BusSand_Core_BusGeometry__LengthCells_2429dc0
                             (*(undefined4 *)(param_5 + 0x2c),0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e510 with catch @ 0249e6dc
                        */
  fVar16 = (float)Dino_BusSand_View_StageLayout__get_LaneWorld_23e6e14(lVar13,0);
  puVar3 = PTR_DAT_04cb3c10;
  fVar16 = fVar16 * 0.5;
                    /* try { // try from 0249e6f8 to 0259e6fb has its CatchHandler @ 0249e71c */
                    /* try { // try from 0249e6fc to 0259e71f has its CatchHandler @ 0249e3b4 */
  fVar28 = *(float *)(param_4 + 400) - fVar16;
  fVar23 = fVar16 + *(float *)(param_4 + 0x19c);
                    /* catch() { ... } // from try @ 0249e6f8 with catch @ 0249e71c */
  if (ABS(fVar24) <= _UNK_00e20948) {
    fVar22 = 3.4028235e+38;
    iVar14 = -1;
  }
  else {
                    /* try { // try from 0249e720 to 0259e727 has its CatchHandler @ 0249e730 */
    if (fVar24 <= 0.0) {
      fVar21 = (fVar28 - fVar15) / fVar24;
      uVar10 = (uint)(fVar21 < 0.0);
      if (3.4028235e+38 <= fVar21) {
        uVar10 = 1;
      }
      fVar22 = 3.4028235e+38;
      iVar14 = -uVar10;
      if (uVar10 == 0) {
        fVar22 = fVar21;
      }
    }
    else {
                    /* try { // try from 0249e728 to 0259e733 has its CatchHandler @ 0249e3b4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0249e720 with catch @ 0249e730
                        */
                    /* try { // try from 0249e734 to 0259e88f has its CatchHandler @ 0249e734
                       catch() { ... } // from try @ 0249e734 with catch @ 0249e734
                       catch() { ... } // from try @ 0249e94c with catch @ 0249e734
                       catch() { ... } // from try @ 0249e990 with catch @ 0249e734
                       catch() { ... } // from try @ 0249e9d4 with catch @ 0249e734
                       catch() { ... } // from try @ 0249ea00 with catch @ 0249e734 */
      fVar22 = (fVar23 - fVar15) / fVar24;
      bVar7 = 0.0 <= fVar22;
      bVar6 = fVar22 < 3.4028235e+38;
      if (!bVar7 || !bVar6) {
        fVar22 = 3.4028235e+38;
      }
      iVar14 = -1;
      if (bVar7 && bVar6) {
        iVar14 = 1;
      }
    }
  }
  fVar21 = *(float *)(param_4 + 0x198) - fVar16;
  fVar16 = fVar16 + *(float *)(param_4 + 0x1a4);
  if (ABS(fVar27) <= _UNK_00e20948) {
LAB_0249e810:
    fVar25 = 0.0;
    if (0.0 <= fVar22) {
      fVar25 = fVar22;
    }
    fVar27 = param_3 + fVar25 * fVar27;
    fVar22 = fVar28;
    if ((iVar14 != 0) && (fVar22 = fVar23, iVar14 != 1)) {
      iVar14 = -1;
      goto LAB_0249e874;
    }
  }
  else {
    if (fVar27 <= 0.0) {
      fVar17 = (fVar21 - param_3) / fVar27;
      bVar7 = false;
      if ((0.0 <= fVar17) && (bVar7 = false, !NAN(fVar17) && !NAN(fVar22))) {
        bVar7 = fVar17 < fVar22;
      }
      if (!bVar7) goto LAB_0249e810;
      iVar14 = 2;
      fVar27 = fVar21;
    }
    else {
      fVar17 = (fVar16 - param_3) / fVar27;
      bVar7 = false;
      if ((0.0 <= fVar17) && (bVar7 = false, !NAN(fVar17) && !NAN(fVar22))) {
        bVar7 = fVar17 < fVar22;
      }
      if (!bVar7) goto LAB_0249e810;
      iVar14 = 3;
      fVar27 = fVar16;
    }
    fVar25 = 0.0;
    if (0.0 <= fVar17) {
      fVar25 = fVar17;
    }
LAB_0249e874:
    fVar22 = fVar15 + fVar25 * fVar24;
  }
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1d0);
  System_Collections_Generic_List_Vector3____ctor_3af944c(lVar8,*(undefined8 *)puVar3);
  puVar3 = PTR_DAT_04caa170;
  if (lVar8 == 0) goto LAB_0249ecfc;
                    /* try { // try from 0249e890 to 0259e897 has its CatchHandler @ 0249e9b4 */
  lVar11 = *(long *)(lVar8 + 0x10);
  lVar12 = *(long *)PTR_DAT_04caa170;
  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
  if (lVar11 == 0) goto LAB_0249ecfc;
                    /* try { // try from 0249e8b0 to 0259e8b7 has its CatchHandler @ 0249e9ac */
  uVar10 = *(uint *)(lVar8 + 0x18);
  if (uVar10 < *(uint *)(lVar11 + 0x18)) {
    lVar11 = lVar11 + (long)(int)uVar10 * 0xc;
                    /* try { // try from 0249e8c8 to 0259e8cb has its CatchHandler @ 0249e994 */
                    /* try { // try from 0249e8cc to 0259e8db has its CatchHandler @ 0249e99c */
    *(uint *)(lVar8 + 0x18) = uVar10 + 1;
    *(float *)(lVar11 + 0x20) = fVar15;
    *(float *)(lVar11 + 0x24) = fVar20;
    *(float *)(lVar11 + 0x28) = param_3;
  }
  else {
                    /* try { // try from 0249e8e4 to 0259e94b has its CatchHandler @ 0249e9a0 */
    System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
              (fVar15,fVar20,param_3,lVar8,
               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
  }
  lVar11 = *(long *)(lVar8 + 0x10);
  lVar12 = *(long *)puVar3;
  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
  if (lVar11 == 0) goto LAB_0249ecfc;
  uVar10 = *(uint *)(lVar8 + 0x18);
  fVar20 = fVar20 + fVar25 * 0.0;
  if (uVar10 < *(uint *)(lVar11 + 0x18)) {
    lVar11 = lVar11 + (long)(int)uVar10 * 0xc;
    *(uint *)(lVar8 + 0x18) = uVar10 + 1;
    *(float *)(lVar11 + 0x20) = fVar22;
    *(float *)(lVar11 + 0x24) = fVar20;
                    /* try { // try from 0249e94c to 0259e97f has its CatchHandler @ 0249e734 */
    *(float *)(lVar11 + 0x28) = fVar27;
  }
  else {
    System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
              (fVar22,fVar20,fVar27,lVar8,
               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
  }
  if (iVar14 == 1) {
LAB_0249ea3c:
    lVar11 = *(long *)(lVar8 + 0x10);
    lVar12 = *(long *)puVar3;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_0249ecfc;
    uVar10 = *(uint *)(lVar8 + 0x18);
    if (*(uint *)(lVar11 + 0x18) <= uVar10) {
      lVar11 = *(long *)(lVar12 + 0x20);
      fVar21 = fVar16;
      goto LAB_0249eaa8;
    }
    lVar11 = lVar11 + (long)(int)uVar10 * 0xc;
    *(uint *)(lVar8 + 0x18) = uVar10 + 1;
    *(float *)(lVar11 + 0x20) = fVar23;
    *(undefined4 *)(lVar11 + 0x24) = 0;
    *(float *)(lVar11 + 0x28) = fVar16;
  }
  else {
                    /* try { // try from 0249e980 to 0259e983 has its CatchHandler @ 0249e9b0 */
                    /* try { // try from 0249e984 to 0259e987 has its CatchHandler @ 0249e9a8 */
    if (iVar14 == 2) {
                    /* try { // try from 0249e988 to 0259e98b has its CatchHandler @ 0249e9a4 */
                    /* try { // try from 0249e98c to 0259e98f has its CatchHandler @ 0249e998 */
                    /* try { // try from 0249e990 to 0259e9cf has its CatchHandler @ 0249e734 */
      lVar12 = *(long *)puVar3;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e8c8 with catch @ 0249e994
                        */
      uVar10 = *(uint *)(lVar8 + 0x18);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e98c with catch @ 0249e998
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e8cc with catch @ 0249e99c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e8e4 with catch @ 0249e9a0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e988 with catch @ 0249e9a4
                        */
      lVar11 = *(long *)(lVar8 + 0x10);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e984 with catch @ 0249e9a8
                        */
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e8b0 with catch @ 0249e9ac
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e980 with catch @ 0249e9b0
                        */
      if ((fVar28 + fVar23) * 0.5 < fVar22) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e890 with catch @ 0249e9b4
                        */
        if (lVar11 == 0) goto LAB_0249ecfc;
        if (uVar10 < *(uint *)(lVar11 + 0x18)) {
          lVar11 = lVar11 + (long)(int)uVar10 * 0xc;
                    /* try { // try from 0249e9d0 to 0259e9d3 has its CatchHandler @ 0249e9f4 */
                    /* try { // try from 0249e9d4 to 0259e9f7 has its CatchHandler @ 0249e734 */
          *(uint *)(lVar8 + 0x18) = uVar10 + 1;
          *(float *)(lVar11 + 0x20) = fVar23;
          *(undefined4 *)(lVar11 + 0x24) = 0;
          *(float *)(lVar11 + 0x28) = fVar21;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                    (fVar23,0,lVar8,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_0249ea3c;
      }
      if (lVar11 == 0) goto LAB_0249ecfc;
                    /* catch() { ... } // from try @ 0249e9d0 with catch @ 0249e9f4 */
                    /* try { // try from 0249e9f8 to 0259e9ff has its CatchHandler @ 0249ea08 */
      if (uVar10 < *(uint *)(lVar11 + 0x18)) {
                    /* try { // try from 0249ea00 to 0259ea0b has its CatchHandler @ 0249e734 */
        lVar11 = lVar11 + (long)(int)uVar10 * 0xc;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0249e9f8 with catch @ 0249ea08
                        */
        *(uint *)(lVar8 + 0x18) = uVar10 + 1;
        *(float *)(lVar11 + 0x20) = fVar28;
        *(undefined4 *)(lVar11 + 0x24) = 0;
        *(float *)(lVar11 + 0x28) = fVar21;
        goto LAB_0249eab4;
      }
      lVar11 = *(long *)(lVar12 + 0x20);
      fVar23 = fVar28;
LAB_0249eaa8:
      System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                (fVar23,0,fVar21,lVar8,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x70));
    }
  }
LAB_0249eab4:
  lVar11 = *(long *)(lVar8 + 0x10);
  lVar12 = *(long *)puVar3;
  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
  if (lVar11 != 0) {
    uVar10 = *(uint *)(lVar8 + 0x18);
    if (uVar10 < *(uint *)(lVar11 + 0x18)) {
      lVar11 = lVar11 + (long)(int)uVar10 * 0xc;
      *(uint *)(lVar8 + 0x18) = uVar10 + 1;
      *(float *)(lVar11 + 0x20) = fVar28;
      *(undefined4 *)(lVar11 + 0x24) = 0;
      *(float *)(lVar11 + 0x28) = fVar16;
    }
    else {
      System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                (fVar28,0,fVar16,lVar8,
                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    fVar15 = 0.0;
    if ((0 < *(int *)(param_5 + 0x40)) && ((param_6 & 1) != 0)) {
      if ((*(long *)(param_4 + 0x20) == 0) ||
         ((lVar11 = *(long *)(*(long *)(param_4 + 0x20) + 0x28), lVar11 == 0 ||
          (lVar11 = Dino_BusSand_Core_TruckGrid__ChainOf_241c9f8(lVar11,param_5,0), lVar11 == 0))))
      goto LAB_0249ecfc;
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_b0,lVar11,*(undefined8 *)PTR_DAT_04cbc4c0);
      puVar4 = PTR_DAT_04cab9e8;
      dVar2 = _UNK_00e69c28;
      fVar15 = 0.0;
      while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_b0,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
        if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar1 = *(undefined4 *)(lStack_a0 + 0x2c);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        dVar19 = (double)Dino_BusSand_Core_BusGeometry__LengthCells_2429dc0(uVar1,0);
                    /* try { // try from 0249ebbc to 0259ee1b has its CatchHandler @ 0249ebbc
                       catch() { ... } // from try @ 0249ebbc with catch @ 0249ebbc
                       catch() { ... } // from try @ 0249ee38 with catch @ 0249ebbc
                       catch() { ... } // from try @ 0249f048 with catch @ 0249ebbc
                       catch() { ... } // from try @ 0249f218 with catch @ 0249ebbc
                       catch() { ... } // from try @ 0249f244 with catch @ 0249ebbc
                       catch() { ... } // from try @ 0249f270 with catch @ 0249ebbc
                       catch() { ... } // from try @ 0249f298 with catch @ 0249ebbc
                       catch() { ... } // from try @ 0249f2c4 with catch @ 0249ebbc */
        fVar15 = fVar15 + fVar26 * (float)(dVar19 + dVar2);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_b0,*(undefined8 *)PTR_DAT_04cab9e0);
    }
    fVar23 = (float)Dino_BusSand_View_StageLayout__HalfWidthAt_23e6f34(fVar16,lVar13,0);
    lVar11 = *(long *)(lVar8 + 0x10);
    lVar12 = *(long *)puVar3;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    puVar5 = PTR_DAT_04cb2870;
    fVar20 = -fVar23;
    if (fVar28 <= -fVar23) {
      fVar20 = fVar28;
    }
    if (lVar11 != 0) {
      uVar10 = *(uint *)(lVar8 + 0x18);
      fVar23 = fVar26 * (float)dVar18 * 0.5;
      fVar15 = ((fVar20 - (fVar23 + fVar23)) + fVar26 * -1.5) - fVar15;
      if (uVar10 < *(uint *)(lVar11 + 0x18)) {
        lVar11 = lVar11 + (long)(int)uVar10 * 0xc;
        *(uint *)(lVar8 + 0x18) = uVar10 + 1;
        *(float *)(lVar11 + 0x20) = fVar15;
        *(undefined4 *)(lVar11 + 0x24) = 0;
        *(float *)(lVar11 + 0x28) = fVar16;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                  (fVar15,0,fVar16,lVar8,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
      fVar15 = (float)Dino_BusSand_View_StageLayout__get_LaneWorld_23e6e14(lVar13,0);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_View_GameView__RoundCorners_23a01fc(fVar15 * _UNK_00e208e8,lVar8,10);
      return;
    }
  }
LAB_0249ecfc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

