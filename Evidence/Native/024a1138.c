/* IL2CPP: Dino.BusSand.View.GameView$$PickYard
int32_t Dino_BusSand_View_GameView__PickYard (Dino_BusSand_View_GameView_o* __this, UnityEngine_Vector2_o screen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$PickYard
   int32_t Dino_BusSand_View_GameView__PickYard (Dino_BusSand_View_GameView_o* __this,
   UnityEngine_Vector2_o screen, const MethodInfo* method); */

undefined4 Dino_BusSand_View_GameView__PickYard_23a1138(undefined4 param_1,ulong param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar16;
  double dVar14;
  double dVar15;
  float fVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar23;
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  undefined8 uStack_c8;
  double *pdStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  undefined8 uStack_90;
  float fStack_88;
  
  uVar8 = param_2;
  if ((bRam0000000004f9c922 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    uVar8 = FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c922 = 1;
  }
  fStack_88 = 0.0;
  uStack_90 = 0;
  dStack_b0 = 0.0;
  dStack_a8 = 0.0;
  dStack_a0 = 0.0;
  uStack_b8 = 0;
  if (*(long *)(param_2 + 0x30) == 0) {
LAB_024a14ac:
                    /* WARNING: Subroutine does not return */
    FUN_02133224(uVar8);
  }
  uVar8 = Dino_BusSand_View_GameView__GroundPoint_23a2940(param_1,param_2,&uStack_90);
  if ((uVar8 & 1) == 0) {
    return 0xffffffff;
  }
  lVar10 = *(long *)(param_2 + 0x30);
  if ((lVar10 == 0) || (*(long *)(param_2 + 0x20) == 0)) goto LAB_024a14ac;
  lVar9 = *(long *)(*(long *)(param_2 + 0x20) + 0x28);
  uVar8 = 0;
  if (lVar9 == 0) goto LAB_024a14ac;
  fVar17 = *(float *)(lVar10 + 0x108);
  fVar13 = (float)uStack_90;
  fVar16 = fStack_88 - *(float *)(lVar10 + 0x110);
  fVar1 = *(float *)(lVar10 + 0xfc);
  auVar20._0_8_ = (long)(int)*(undefined8 *)(lVar10 + 0x114);
  auVar20._8_8_ = (long)(int)((ulong)*(undefined8 *)(lVar10 + 0x114) >> 0x20);
  auVar24 = NEON_fmov(0x3fe0000000000000,8);
  auVar20 = NEON_scvtf(auVar20,8);
  auVar21._0_8_ = auVar20._0_8_ * auVar24._0_8_;
  auVar21._8_8_ = auVar20._8_8_ * auVar24._8_8_;
  auVar20 = NEON_ext(auVar21,auVar21,8,1);
  uStack_b8 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0(lVar9,0);
  Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
            (&dStack_100,&uStack_b8,*(undefined8 *)PTR_DAT_04cab9f8);
  puVar5 = PTR_DAT_04cab9e8;
  puVar4 = PTR_DAT_04caa200;
  dVar3 = _UNK_00e6a7a8;
  pdStack_c0 = &dStack_b0;
  uStack_c8 = 0;
  dStack_a0 = dStack_f0;
  dStack_a8 = dStack_f8;
  dStack_b0 = dStack_100;
  dVar18 = 0.0;
  dVar23 = 1.7976931348623157e+308;
  dVar15 = 0.0;
  dVar25 = 1.7976931348623157e+308;
  dVar11 = 0.0;
  while (dVar12 = dVar11, dVar2 = dVar25, dVar26 = dVar15, dVar25 = dVar23, dVar11 = dVar18,
        uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&dStack_b0,*(undefined8 *)puVar5), dVar7 = dStack_a0, (uVar8 & 1) != 0) {
    if (dStack_a0 == 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_Core_Truck__get_Obb_242cab0(&dStack_100,dStack_a0,0);
    dVar6 = dStack_d8;
    dVar14 = dStack_e0;
    dVar19 = dStack_e8;
    dVar15 = dStack_f0;
    dVar23 = dStack_f8;
    dVar18 = dStack_100;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    dVar18 = (auVar20._0_8_ + (double)((fVar13 - fVar17) / fVar1)) - dVar18;
    dVar23 = (auVar20._8_8_ + (double)(fVar16 / fVar1)) - dVar23;
    auVar24._0_8_ = ABS(dVar15 * dVar18 + dVar19 * dVar23) - dVar14;
    auVar24._8_8_ = 0;
    dVar14 = (double)System_Math__Max_4830f98(0,auVar24,0);
    auVar22._0_8_ = ABS(dVar19 * dVar18 - dVar15 * dVar23) - dVar6;
    auVar22._8_8_ = 0;
    dVar15 = (double)System_Math__Max_4830f98(0,auVar22,0);
                    /* try { // try from 024a1394 to 025a1397 has its CatchHandler @ 024a1420 */
                    /* try { // try from 024a1398 to 025a139b has its CatchHandler @ 024a1410 */
    dVar15 = SQRT(dVar14 * dVar14 + dVar15 * dVar15);
                    /* try { // try from 024a139c to 025a139f has its CatchHandler @ 024a13d0 */
                    /* try { // try from 024a13a0 to 025a13a3 has its CatchHandler @ 024a084c */
                    /* try { // try from 024a13a4 to 025a13ab has its CatchHandler @ 024a13c8 */
    dVar19 = SQRT(dVar18 * dVar18 + dVar23 * dVar23) * dVar3 + dVar15;
    dVar18 = dVar7;
    dVar23 = dVar19;
                    /* catch() { ... } // from try @ 024a0bd8 with catch @ 024a13ac */
                    /* try { // try from 024a13b0 to 025a13b7 has its CatchHandler @ 024a14c8 */
    if ((dVar25 <= dVar19) &&
       (dVar18 = dVar11, dVar23 = dVar25, dVar15 = dVar26, dVar25 = dVar2, dVar11 = dVar12,
       dVar19 < dVar2)) {
      dVar25 = dVar19;
      dVar11 = dVar7;
                    /* try { // try from 024a13b8 to 025a13f3 has its CatchHandler @ 024a084c */
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&dStack_b0,*(undefined8 *)PTR_DAT_04cab9e0);
  uVar8 = 0xffffffff;
                    /* try { // try from 024a13f4 to 025a13f7 has its CatchHandler @ 024a1400 */
  if (dVar11 == 0.0) {
    return 0xffffffff;
  }
                    /* catch() { ... } // from try @ 024a13f4 with catch @ 024a1400 */
                    /* try { // try from 024a1404 to 025a140b has its CatchHandler @ 024a14c8 */
  if (_UNK_00e6a630 < dVar25) {
    return 0xffffffff;
  }
                    /* try { // try from 024a140c to 025a1443 has its CatchHandler @ 024a084c */
                    /* catch() { ... } // from try @ 024a1398 with catch @ 024a1410 */
                    /* catch() { ... } // from try @ 024a0d98 with catch @ 024a1414 */
                    /* catch() { ... } // from try @ 024a0d84 with catch @ 024a1418 */
                    /* catch() { ... } // from try @ 024a0d30 with catch @ 024a141c */
                    /* catch() { ... } // from try @ 024a1394 with catch @ 024a1420 */
                    /* catch() { ... } // from try @ 024a0c74 with catch @ 024a1424 */
                    /* catch() { ... } // from try @ 024a0d14 with catch @ 024a1428 */
  if ((((*(long *)(param_2 + 0x88) == 0) && (0.0 < dVar26)) && (dVar12 != 0.0)) &&
     ((dVar2 <= _UNK_00e6a630 && (dVar2 - dVar25 < _UNK_00e6a660)))) {
    if (*(long *)(param_2 + 0x20) == 0) goto LAB_024a14ac;
    lVar10 = *(long *)(*(long *)(param_2 + 0x20) + 0x28);
                    /* try { // try from 024a1444 to 025a1447 has its CatchHandler @ 024a1464 */
    uVar8 = 0;
    if (lVar10 == 0) goto LAB_024a14ac;
                    /* try { // try from 024a1448 to 025a1467 has its CatchHandler @ 024a084c */
    uVar8 = Dino_BusSand_Core_TruckGrid__CanTap_241c41c(lVar10,dVar11,0);
    if ((uVar8 & 1) == 0) {
      if (*(long *)(param_2 + 0x20) == 0) goto LAB_024a14ac;
      lVar10 = *(long *)(*(long *)(param_2 + 0x20) + 0x28);
                    /* catch() { ... } // from try @ 024a1444 with catch @ 024a1464 */
      uVar8 = 0;
      if (lVar10 == 0) goto LAB_024a14ac;
                    /* try { // try from 024a1468 to 025a146f has its CatchHandler @ 024a14c8 */
                    /* try { // try from 024a1470 to 025a148f has its CatchHandler @ 024a084c */
      uVar8 = Dino_BusSand_Core_TruckGrid__CanTap_241c41c(lVar10,dVar12,0);
                    /* catch() { ... } // from try @ 024a0c5c with catch @ 024a1474 */
      if ((uVar8 & 1) != 0) goto LAB_024a147c;
    }
  }
  dVar12 = dVar11;
LAB_024a147c:
                    /* try { // try from 024a1490 to 025a1493 has its CatchHandler @ 024a14b4 */
                    /* try { // try from 024a1494 to 025a14b7 has its CatchHandler @ 024a084c */
  return *(undefined4 *)((long)dVar12 + 0x10);
}

