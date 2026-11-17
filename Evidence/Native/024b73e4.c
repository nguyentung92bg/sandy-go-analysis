/* IL2CPP: Dino.BusSand.View.HighwayMesh$$Fill
void Dino_BusSand_View_HighwayMesh__Fill (UnityEngine_Mesh_o* m, UnityEngine_Transform_o* space, System_Collections_Generic_List_Vector3__o* path, UnityEngine_Mesh_o* start, UnityEngine_Mesh_o* module, UnityEngine_Mesh_o* end, float scale, float widthScale, float lift, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.HighwayMesh$$Fill
   void Dino_BusSand_View_HighwayMesh__Fill (UnityEngine_Mesh_o* m, UnityEngine_Transform_o* space,
   System_Collections_Generic_List_Vector3__o* path, UnityEngine_Mesh_o* start, UnityEngine_Mesh_o*
   module, UnityEngine_Mesh_o* end, float scale, float widthScale, float lift, const MethodInfo*
   method); */

void Dino_BusSand_View_HighwayMesh__Fill_23b73e4
               (float param_1,float param_2,ulong param_3,long param_4,long param_5,
               undefined8 param_6,long param_7,long param_8,long param_9)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  float *pfVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  double dVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  double dStack_110;
  double *pdStack_108;
  undefined4 uStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  undefined8 uStack_e0;
  float fStack_d8;
  double dStack_d0;
  double *pdStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  
  fVar32 = (float)param_3;
  if ((bRam0000000004f9c98a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbca00);
    FUN_02132f7c(PTR_DAT_04cbca08);
    FUN_02132f7c(PTR_DAT_04cbca10);
    FUN_02132f7c(PTR_DAT_04cbc9d8);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cbca18);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04caa178);
    FUN_02132f7c(PTR_DAT_04cb7338);
    FUN_02132f7c(PTR_DAT_04cb7340);
    FUN_02132f7c(PTR_DAT_04cbca20);
    FUN_02132f7c(PTR_DAT_04cad858);
    FUN_02132f7c(PTR_DAT_04cbca28);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04caa1a8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caadd0);
    bRam0000000004f9c98a = 1;
  }
  puVar7 = PTR_DAT_04cbc9d8;
  lStack_b0 = 0;
  uStack_a8 = 0;
  fStack_d8 = 0.0;
  uStack_e0 = 0;
  fStack_e8 = 0.0;
  pdStack_c8 = (double *)0x0;
  dStack_d0 = 0.0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_f0 = 0;
  if (param_4 == 0) goto LAB_024b8340;
  UnityEngine_Mesh__Clear_4395cc4(param_4,0);
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar13 = (ulong)(uint)param_1;
  lVar8 = Dino_BusSand_View_HighwayMesh__Smooth_23b8428(param_1 * _UNK_00e20178,param_6);
  if (lVar8 == 0) goto LAB_024b8340;
  if (*(int *)(lVar8 + 0x18) < 2) {
    return;
  }
  lVar9 = *(long *)puVar7;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar7;
  }
  lVar20 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x38);
  if (lVar20 == 0) goto LAB_024b8340;
                    /* try { // try from 024b75a4 to 025b75ab has its CatchHandler @ 024b79bc */
                    /* try { // try from 024b75b4 to 025b75b7 has its CatchHandler @ 024b79a8 */
  if (*(int *)(lVar20 + 0x18) < *(int *)(lVar8 + 0x18)) {
                    /* try { // try from 024b75c8 to 025b75cf has its CatchHandler @ 024b79b0 */
    uVar10 = FUN_02133068(*(undefined8 *)PTR_DAT_04caadd0,*(int *)(lVar8 + 0x18) << 1);
    lVar9 = *(long *)puVar7;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar9);
      lVar9 = *(long *)puVar7;
    }
                    /* try { // try from 024b75e8 to 025b75ef has its CatchHandler @ 024b7708 */
    puVar11 = (undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x38);
    *puVar11 = uVar10;
    thunk_FUN_02134474(puVar11,uVar10);
    lVar9 = *(long *)puVar7;
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
                    /* try { // try from 024b7604 to 025b7607 has its CatchHandler @ 024b76f0 */
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar7;
  }
                    /* try { // try from 024b760c to 025b7617 has its CatchHandler @ 024b76fc */
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x38);
  if (lVar9 == 0) goto LAB_024b8340;
  uVar14 = *(uint *)(lVar9 + 0x18);
  uVar15 = (ulong)uVar14;
                    /* try { // try from 024b761c to 025b7623 has its CatchHandler @ 024b7700 */
  if (uVar15 == 0) {
LAB_024b833c:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* try { // try from 024b7624 to 025b762f has its CatchHandler @ 024b7704 */
  *(undefined4 *)(lVar9 + 0x20) = 0;
  puVar4 = PTR_DAT_04caa200;
  puVar3 = PTR_DAT_04caa1a8;
  iVar19 = *(int *)(lVar8 + 0x18);
  if (1 < iVar19) {
    fVar36 = 0.0;
                    /* try { // try from 024b7640 to 025b764b has its CatchHandler @ 024b76f8 */
    uVar25 = 0;
    do {
      fVar33 = (float)param_3;
      fVar30 = (float)uVar13;
      if (uVar15 <= uVar25) goto LAB_024b833c;
      fVar26 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                (lVar8,uVar25 & 0xffffffff,*(undefined8 *)puVar3);
      fVar41 = fVar30;
      fVar39 = fVar33;
      fVar27 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                (lVar8,(int)uVar25 + 1,*(undefined8 *)puVar3);
                    /* try { // try from 024b7698 to 025b76a3 has its CatchHandler @ 024b76e8 */
      if (cRam0000000004f9b9df == '\0') {
        FUN_02132f7c(puVar4);
        cRam0000000004f9b9df = '\x01';
      }
                    /* try { // try from 024b76c0 to 025b76c3 has its CatchHandler @ 024b79ac */
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar14 = *(uint *)(lVar9 + 0x18);
      uVar15 = (ulong)uVar14;
                    /* try { // try from 024b76d8 to 025b76db has its CatchHandler @ 024b76f4 */
      if (uVar15 <= uVar25 + 1) goto LAB_024b833c;
                    /* try { // try from 024b76e0 to 025b76e3 has its CatchHandler @ 024b76ec */
                    /* try { // try from 024b76e4 to 025b7727 has its CatchHandler @ 024b72b8 */
                    /* catch() { ... } // from try @ 024b7698 with catch @ 024b76e8 */
                    /* catch() { ... } // from try @ 024b76e0 with catch @ 024b76ec */
      lVar20 = uVar25 + 2;
                    /* catch() { ... } // from try @ 024b7604 with catch @ 024b76f0 */
                    /* catch() { ... } // from try @ 024b76d8 with catch @ 024b76f4 */
      fVar30 = (fVar30 - fVar41) * (fVar30 - fVar41);
      uVar13 = (ulong)(uint)fVar30;
                    /* catch() { ... } // from try @ 024b7640 with catch @ 024b76f8 */
      fVar33 = (fVar33 - fVar39) * (fVar33 - fVar39);
      param_3 = (ulong)(uint)fVar33;
                    /* catch() { ... } // from try @ 024b760c with catch @ 024b76fc */
                    /* catch() { ... } // from try @ 024b761c with catch @ 024b7700 */
                    /* catch() { ... } // from try @ 024b7624 with catch @ 024b7704 */
                    /* catch() { ... } // from try @ 024b75e8 with catch @ 024b7708 */
      fVar36 = fVar36 + SQRT(fVar33 + (fVar26 - fVar27) * (fVar26 - fVar27) + fVar30);
      *(float *)(lVar9 + 0x24 + uVar25 * 4) = fVar36;
      uVar25 = uVar25 + 1;
      iVar19 = *(int *)(lVar8 + 0x18);
    } while (lVar20 < iVar19);
  }
                    /* try { // try from 024b7728 to 025b772b has its CatchHandler @ 024b7994 */
                    /* try { // try from 024b772c to 025b797f has its CatchHandler @ 024b72b8 */
  if (uVar14 <= iVar19 - 1U) goto LAB_024b833c;
  fVar36 = *(float *)(lVar9 + (long)(int)(iVar19 - 1U) * 4 + 0x20);
  if (fVar36 < _UNK_00e20948) {
    return;
  }
  if (((param_7 == 0) ||
      (UnityEngine_Mesh__get_bounds_438fac4(&dStack_110,param_7,0), fVar30 = fStack_fc, param_9 == 0
      )) || (UnityEngine_Mesh__get_bounds_438fac4(&dStack_110,param_9,0), fVar33 = fStack_fc,
            param_8 == 0)) goto LAB_024b8340;
  UnityEngine_Mesh__get_bounds_438fac4(&dStack_110,param_8,0);
  fVar41 = fStack_fc;
  lVar20 = *(long *)puVar7;
  if (*(int *)(lVar20 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar20 = *(long *)puVar7;
  }
  lVar20 = *(long *)(*(long *)(lVar20 + 0xb8) + 0x30);
  if (lVar20 == 0) goto LAB_024b8340;
  iVar19 = *(int *)(lVar20 + 0x18);
  fVar39 = (fVar30 + fVar30) * param_1;
  fVar30 = (fVar33 + fVar33) * param_1;
  *(undefined4 *)(lVar20 + 0x18) = 0;
  *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
  if (0 < iVar19) {
    System_Array__Clear_4851dc8(*(undefined8 *)(lVar20 + 0x10),0,iVar19,0);
  }
  if (fVar36 <= fVar39 + fVar30) {
    uStack_a8 = 0;
    lStack_b0 = param_7;
    thunk_FUN_02134474(&lStack_b0,param_7);
    puVar3 = PTR_DAT_04cbca18;
    fVar30 = fVar39 * (fVar36 / (fVar39 + fVar30));
    lVar16 = *(long *)(lVar20 + 0x10);
    lVar21 = *(long *)PTR_DAT_04cbca18;
    uStack_a8 = (ulong)(uint)fVar30 << 0x20;
    *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
    if (lVar16 == 0) goto LAB_024b8340;
    uVar14 = *(uint *)(lVar20 + 0x18);
    if (uVar14 < *(uint *)(lVar16 + 0x18)) {
      lVar16 = lVar16 + (long)(int)uVar14 * 0x10;
      *(uint *)(lVar20 + 0x18) = uVar14 + 1;
      plVar12 = (long *)(lVar16 + 0x20);
      *plVar12 = lStack_b0;
      *(long *)(lVar16 + 0x28) = uStack_a8;
      thunk_FUN_02134474(plVar12,0);
    }
    else {
      System_Collections_Generic_List_HighwayMesh_Piece___AddWithResize_3b403c4
                (lVar20,lStack_b0,uStack_a8,
                 *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
    }
    uStack_a8 = 0;
    lStack_b0 = param_9;
    thunk_FUN_02134474(&lStack_b0,param_9);
    iVar19 = *(int *)(lVar20 + 0x1c);
    lVar16 = *(long *)(lVar20 + 0x10);
    lVar21 = *(long *)puVar3;
  }
  else {
    fVar33 = (fVar41 + fVar41) * param_1;
    fVar41 = (fVar36 - fVar39) - fVar30;
    if (cRam0000000004f9b891 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b891 = '\x01';
    }
    fVar26 = fVar41 / fVar33;
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    dVar35 = (double)fVar26;
    dVar29 = (double)FUN_049b52f0(dVar35,&dStack_110);
    if (0.0 <= fVar26) {
      if (dVar29 == 0.5) {
        dVar29 = 1.0;
        goto LAB_024b78fc;
      }
      dVar35 = (double)(long)(dVar35 + 0.5);
    }
    else if (dVar29 == -0.5) {
      dVar29 = -1.0;
LAB_024b78fc:
      dVar35 = dStack_110;
      if (((long)dStack_110 & 1U) != 0) {
        dVar35 = dStack_110 + dVar29;
      }
    }
    else {
      dVar35 = (double)(long)(dVar35 + -0.5);
    }
    uVar14 = (uint)dVar35;
    uStack_a8 = 0;
                    /* try { // try from 024b7980 to 025b7983 has its CatchHandler @ 024b79b8 */
    if ((int)uVar14 < 2) {
      uVar14 = 1;
    }
                    /* try { // try from 024b7984 to 025b798b has its CatchHandler @ 024b79b4 */
    if (dVar35 == INFINITY) {
      uVar14 = 1;
    }
    lStack_b0 = param_7;
                    /* try { // try from 024b798c to 025b799b has its CatchHandler @ 024b72b8 */
    thunk_FUN_02134474(&lStack_b0,param_7);
    puVar3 = PTR_DAT_04cbca18;
                    /* catch() { ... } // from try @ 024b7728 with catch @ 024b7994 */
                    /* try { // try from 024b799c to 025b79a3 has its CatchHandler @ 024b79fc */
    uStack_a8 = (ulong)(uint)fVar39 << 0x20;
                    /* try { // try from 024b79a4 to 025b79db has its CatchHandler @ 024b72b8 */
    lVar16 = *(long *)(lVar20 + 0x10);
                    /* catch() { ... } // from try @ 024b75b4 with catch @ 024b79a8 */
                    /* catch() { ... } // from try @ 024b76c0 with catch @ 024b79ac */
                    /* catch() { ... } // from try @ 024b75c8 with catch @ 024b79b0 */
    lVar21 = *(long *)PTR_DAT_04cbca18;
                    /* catch() { ... } // from try @ 024b7984 with catch @ 024b79b4 */
    *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
                    /* catch() { ... } // from try @ 024b7980 with catch @ 024b79b8 */
    if (lVar16 == 0) goto LAB_024b8340;
                    /* catch() { ... } // from try @ 024b75a4 with catch @ 024b79bc */
    uVar24 = *(uint *)(lVar20 + 0x18);
    if (uVar24 < *(uint *)(lVar16 + 0x18)) {
      lVar16 = lVar16 + (long)(int)uVar24 * 0x10;
      *(uint *)(lVar20 + 0x18) = uVar24 + 1;
      plVar12 = (long *)(lVar16 + 0x20);
      *plVar12 = lStack_b0;
      *(long *)(lVar16 + 0x28) = uStack_a8;
                    /* try { // try from 024b79dc to 025b79df has its CatchHandler @ 024b79e8 */
      thunk_FUN_02134474(plVar12,0);
    }
    else {
                    /* catch() { ... } // from try @ 024b79dc with catch @ 024b79e8 */
                    /* try { // try from 024b79ec to 025b79f3 has its CatchHandler @ 024b79fc */
                    /* try { // try from 024b79f4 to 025b79ff has its CatchHandler @ 024b72b8 */
      System_Collections_Generic_List_HighwayMesh_Piece___AddWithResize_3b403c4
                (lVar20,lStack_b0,uStack_a8,
                 *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
    }
                    /* catch() { ... } // from try @ 024b799c with catch @ 024b79fc
                       catch() { ... } // from try @ 024b79ec with catch @ 024b79fc */
    uStack_a8 = 0;
    lStack_b0 = param_8;
    thunk_FUN_02134474(&lStack_b0,param_8);
    fVar41 = fVar39 + fVar33 + (fVar41 - fVar33 * (float)(int)uVar14);
    lVar16 = *(long *)(lVar20 + 0x10);
    lVar21 = *(long *)puVar3;
    *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
    uStack_a8 = CONCAT44(fVar41,fVar39);
    if (lVar16 == 0) goto LAB_024b8340;
    uVar24 = *(uint *)(lVar20 + 0x18);
    if (uVar24 < *(uint *)(lVar16 + 0x18)) {
      lVar16 = lVar16 + (long)(int)uVar24 * 0x10;
      *(uint *)(lVar20 + 0x18) = uVar24 + 1;
      plVar12 = (long *)(lVar16 + 0x20);
      *plVar12 = lStack_b0;
      *(long *)(lVar16 + 0x28) = uStack_a8;
      thunk_FUN_02134474(plVar12,0);
    }
    else {
      System_Collections_Generic_List_HighwayMesh_Piece___AddWithResize_3b403c4
                (lVar20,lStack_b0,uStack_a8,
                 *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
    }
    if (1 < uVar14) {
      uVar24 = 1;
      do {
        uStack_a8 = 0;
        lStack_b0 = param_8;
        thunk_FUN_02134474(&lStack_b0,param_8);
        lVar16 = *(long *)(lVar20 + 0x10);
        lVar21 = *(long *)puVar3;
        *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
        uStack_a8 = CONCAT44(fVar41 + fVar33 * (float)(int)uVar24,
                             fVar41 + fVar33 * (float)(int)(uVar24 - 1));
        if (lVar16 == 0) goto LAB_024b8340;
        uVar2 = *(uint *)(lVar20 + 0x18);
        if (uVar2 < *(uint *)(lVar16 + 0x18)) {
          lVar16 = lVar16 + (long)(int)uVar2 * 0x10;
          *(uint *)(lVar20 + 0x18) = uVar2 + 1;
          plVar12 = (long *)(lVar16 + 0x20);
          *plVar12 = lStack_b0;
          *(long *)(lVar16 + 0x28) = uStack_a8;
          thunk_FUN_02134474(plVar12,0);
        }
        else {
          System_Collections_Generic_List_HighwayMesh_Piece___AddWithResize_3b403c4
                    (lVar20,lStack_b0,uStack_a8,
                     *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
        }
        uVar24 = uVar24 + 1;
      } while (uVar14 != uVar24);
    }
    uStack_a8 = 0;
    lStack_b0 = param_9;
    thunk_FUN_02134474(&lStack_b0,param_9);
    fVar30 = fVar36 - fVar30;
    iVar19 = *(int *)(lVar20 + 0x1c);
    lVar16 = *(long *)(lVar20 + 0x10);
    lVar21 = *(long *)puVar3;
  }
  uStack_a8 = CONCAT44(fVar36,fVar30);
  *(int *)(lVar20 + 0x1c) = iVar19 + 1;
  if (lVar16 != 0) {
    uVar14 = *(uint *)(lVar20 + 0x18);
    if (uVar14 < *(uint *)(lVar16 + 0x18)) {
      lVar16 = lVar16 + (long)(int)uVar14 * 0x10;
      *(uint *)(lVar20 + 0x18) = uVar14 + 1;
      plVar12 = (long *)(lVar16 + 0x20);
      *plVar12 = lStack_b0;
      *(long *)(lVar16 + 0x28) = uStack_a8;
      thunk_FUN_02134474(plVar12,0);
    }
    else {
      System_Collections_Generic_List_HighwayMesh_Piece___AddWithResize_3b403c4
                (lVar20,lStack_b0,uStack_a8,
                 *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
    }
    lVar16 = *(long *)puVar7;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar16 = *(long *)puVar7;
    }
    lVar16 = *(long *)(lVar16 + 0xb8);
    lVar21 = *(long *)(lVar16 + 8);
    if (lVar21 != 0) {
      *(undefined4 *)(lVar21 + 0x18) = 0;
      *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
      lVar21 = *(long *)(lVar16 + 0x10);
      if (lVar21 != 0) {
        *(undefined4 *)(lVar21 + 0x18) = 0;
        *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
        lVar21 = *(long *)(lVar16 + 0x20);
        if (lVar21 != 0) {
          *(undefined4 *)(lVar21 + 0x18) = 0;
          *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
          puVar3 = PTR_DAT_04cbca28;
          lVar16 = *(long *)(lVar16 + 0x28);
          if (lVar16 != 0) {
            fVar30 = param_1 * _UNK_00e20094;
            *(undefined4 *)(lVar16 + 0x18) = 0;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            System_Collections_Generic_List_HighwayMesh_Piece___GetEnumerator_3b40e04
                      (&dStack_110,lVar20,*(undefined8 *)puVar3);
            dStack_d0 = dStack_110;
            puVar6 = PTR_DAT_04caa208;
            puVar4 = PTR_DAT_04caa170;
            puVar3 = PTR_DAT_04ca9ae8;
            fVar36 = _UNK_00e20a08;
            uStack_c0 = CONCAT44(fStack_fc,uStack_100);
            dStack_110 = 0.0;
            pdStack_c8 = pdStack_108;
            uStack_b8 = uStack_f8;
            pdStack_108 = &dStack_d0;
            while (uVar13 = System_Collections_Generic_List_Enumerator_HighwayMesh_Piece___MoveNext_3611334
                                      (&dStack_d0,*(undefined8 *)PTR_DAT_04cbca08),
                  uVar10 = uStack_c0, (uVar13 & 1) != 0) {
              fVar33 = (float)uStack_b8;
              fVar41 = uStack_b8._4_4_;
              if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              lVar20 = Dino_BusSand_View_HighwayMesh__Read_23b70f0(uVar10);
              lVar16 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar21 = *(long *)(lVar20 + 0x10);
              if (lVar21 == 0) {
LAB_024b8318:
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              iVar19 = *(int *)(lVar16 + 0x18);
              lVar23 = 0;
              lVar16 = 0;
              uVar13 = 0;
              while ((long)uVar13 < (long)(int)*(uint *)(lVar21 + 0x18)) {
                if (*(uint *)(lVar21 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                lVar21 = lVar21 + lVar23;
                fVar42 = *(float *)(lVar21 + 0x20);
                fVar40 = *(float *)(lVar21 + 0x24);
                fVar39 = *(float *)(lVar21 + 0x28);
                fVar26 = *(float *)(lVar20 + 0x30);
                fVar27 = *(float *)(lVar20 + 0x34);
                if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                Dino_BusSand_View_HighwayMesh__Sample_23b8c70
                          ((fVar41 - fVar33) * ((fVar39 - fVar26) / fVar27) + fVar33,fVar30,lVar8,
                           lVar9,&uStack_e0,&uStack_f0);
                fVar27 = fStack_d8;
                uVar10 = uStack_e0;
                fVar26 = fStack_e8;
                fVar39 = (float)uStack_f0;
                if (cRam0000000004f9bcf8 == '\0') {
                  FUN_02132f7c(puVar6);
                  cRam0000000004f9bcf8 = '\x01';
                }
                fVar43 = *(float *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20);
                uVar37 = *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
                lVar21 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar15 = UnityEngine_Object__op_Inequality_43c8dec(param_5,0,0);
                fVar42 = fVar42 * param_1 * param_2;
                fVar34 = fVar40 * param_1 + fVar32;
                fVar40 = fVar42 * 0.0 + (float)((ulong)uVar10 >> 0x20) +
                         (float)((ulong)uVar37 >> 0x20) * fVar34;
                uVar25 = CONCAT44(fVar40,fVar26 * fVar42 + (float)uVar10 + (float)uVar37 * fVar34);
                fVar27 = (fVar27 - fVar42 * fVar39) + fVar34 * fVar43;
                if ((uVar15 & 1) != 0) {
                  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  uVar28 = UnityEngine_Transform__InverseTransformPoint_43d3ffc(param_5,0);
                  uVar25 = CONCAT44(fVar40,uVar28);
                }
                if (lVar21 == 0) {
LAB_024b830c:
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar22 = *(long *)(lVar21 + 0x10);
                lVar17 = *(long *)puVar4;
                *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                if (lVar22 == 0) goto LAB_024b830c;
                uVar14 = *(uint *)(lVar21 + 0x18);
                if (uVar14 < *(uint *)(lVar22 + 0x18)) {
                  lVar22 = lVar22 + (long)(int)uVar14 * 0xc;
                  *(uint *)(lVar21 + 0x18) = uVar14 + 1;
                  *(ulong *)(lVar22 + 0x20) = uVar25;
                  *(float *)(lVar22 + 0x28) = fVar27;
                }
                else {
                  System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                            (uVar25,uVar25 >> 0x20,lVar21,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
                lVar21 = *(long *)(lVar20 + 0x18);
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                if ((long)uVar13 < (long)(int)*(uint *)(lVar21 + 0x18)) {
                  if (*(uint *)(lVar21 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                  lVar21 = lVar21 + lVar23;
                  fVar27 = *(float *)(lVar21 + 0x24);
                  fVar40 = *(float *)(lVar21 + 0x28);
                  fVar42 = *(float *)(lVar21 + 0x20);
                  if (cRam0000000004f9bcf8 == '\0') {
                    FUN_02132f7c(puVar6);
                    cRam0000000004f9bcf8 = '\x01';
                  }
                }
                else {
                  if (cRam0000000004f9bcf8 == '\0') {
                    FUN_02132f7c(puVar6);
                    cRam0000000004f9bcf8 = '\x01';
                  }
                  lVar21 = *(long *)(*(long *)puVar6 + 0xb8);
                  fVar27 = *(float *)(lVar21 + 0x1c);
                  fVar40 = *(float *)(lVar21 + 0x20);
                  fVar42 = *(float *)(lVar21 + 0x18);
                }
                fVar43 = uStack_f0._4_4_;
                lVar21 = *(long *)(*(long *)puVar6 + 0xb8);
                fVar34 = *(float *)(lVar21 + 0x18);
                fVar38 = *(float *)(lVar21 + 0x1c);
                fVar44 = *(float *)(lVar21 + 0x20);
                if (cRam0000000004f9b65c == '\0') {
                  FUN_02132f7c(PTR_DAT_04caa200);
                  cRam0000000004f9b65c = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                fVar34 = fVar26 * fVar42 + fVar27 * fVar34 + fVar40 * fVar39;
                fVar43 = fVar42 * 0.0 + fVar27 * fVar38 + fVar40 * fVar43;
                fVar39 = (fVar27 * fVar44 - fVar39 * fVar42) + fVar40 * fVar26;
                fVar26 = SQRT(fVar39 * fVar39 + fVar34 * fVar34 + fVar43 * fVar43);
                if (fVar26 <= fVar36) {
                  if (cRam0000000004f9b65d == '\0') {
                    FUN_02132f7c(puVar6);
                    cRam0000000004f9b65d = '\x01';
                  }
                  pfVar18 = *(float **)(*(long *)puVar6 + 0xb8);
                  fVar34 = *pfVar18;
                  fVar43 = pfVar18[1];
                  fVar39 = pfVar18[2];
                }
                else {
                  fVar34 = fVar34 / fVar26;
                  fVar43 = fVar43 / fVar26;
                  fVar39 = fVar39 / fVar26;
                }
                lVar21 = *(long *)puVar7;
                if (*(int *)(lVar21 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar21 = *(long *)puVar7;
                }
                lVar17 = *(long *)puVar3;
                lVar21 = *(long *)(*(long *)(lVar21 + 0xb8) + 0x10);
                if (*(int *)(lVar17 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar17);
                }
                    /* try { // try from 024b7ffc to 025b816f has its CatchHandler @ 024b7ffc
                       catch() { ... } // from try @ 024b7ffc with catch @ 024b7ffc
                       catch() { ... } // from try @ 024b81fc with catch @ 024b7ffc
                       catch() { ... } // from try @ 024b8230 with catch @ 024b7ffc
                       catch() { ... } // from try @ 024b8264 with catch @ 024b7ffc
                       catch() { ... } // from try @ 024b8288 with catch @ 024b7ffc */
                uVar15 = UnityEngine_Object__op_Inequality_43c8dec(param_5,0,0);
                if ((uVar15 & 1) != 0) {
                  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  fVar34 = (float)UnityEngine_Transform__InverseTransformDirection_43d311c
                                            (fVar34,param_5,0);
                }
                if (lVar21 == 0) goto LAB_024b830c;
                lVar17 = *(long *)(lVar21 + 0x10);
                lVar22 = *(long *)puVar4;
                *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                if (lVar17 == 0) goto LAB_024b830c;
                uVar14 = *(uint *)(lVar21 + 0x18);
                if (uVar14 < *(uint *)(lVar17 + 0x18)) {
                  lVar17 = lVar17 + (long)(int)uVar14 * 0xc;
                  *(uint *)(lVar21 + 0x18) = uVar14 + 1;
                  *(float *)(lVar17 + 0x20) = fVar34;
                  *(float *)(lVar17 + 0x24) = fVar43;
                  *(float *)(lVar17 + 0x28) = fVar39;
                }
                else {
                  System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                            (fVar34,fVar43,fVar39,lVar21,
                             *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                }
                lVar21 = *(long *)puVar7;
                if (*(int *)(lVar21 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar21 = *(long *)puVar7;
                }
                puVar5 = PTR_DAT_04caa178;
                lVar17 = *(long *)(lVar20 + 0x20);
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                if (*(uint *)(lVar17 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                lVar21 = *(long *)(*(long *)(lVar21 + 0xb8) + 0x20);
                if (lVar21 == 0) {
LAB_024b8310:
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar22 = *(long *)(lVar21 + 0x10);
                uVar28 = *(undefined4 *)(lVar17 + lVar16 + 0x20);
                uVar31 = *(undefined4 *)(lVar17 + lVar16 + 0x24);
                *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                if (lVar22 == 0) goto LAB_024b8310;
                uVar14 = *(uint *)(lVar21 + 0x18);
                if (uVar14 < *(uint *)(lVar22 + 0x18)) {
                  lVar22 = lVar22 + (long)(int)uVar14 * 8;
                  *(uint *)(lVar21 + 0x18) = uVar14 + 1;
                  *(undefined4 *)(lVar22 + 0x20) = uVar28;
                  *(undefined4 *)(lVar22 + 0x24) = uVar31;
                }
                else {
                  System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                            (lVar21,*(undefined8 *)
                                     (*(long *)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0) + 0x70));
                }
                lVar21 = *(long *)(lVar20 + 0x10);
                uVar13 = uVar13 + 1;
                lVar16 = lVar16 + 8;
                lVar23 = lVar23 + 0xc;
                if (lVar21 == 0) goto LAB_024b8318;
              }
              lVar20 = *(long *)(lVar20 + 0x28);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              if (0 < (int)*(ulong *)(lVar20 + 0x18)) {
                uVar13 = 0;
                uVar15 = *(ulong *)(lVar20 + 0x18) & 0xffffffff;
                do {
                  if (uVar15 <= uVar13) {
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                    /* try { // try from 024b8170 to 025b8177 has its CatchHandler @ 024b8240 */
                  lVar16 = *(long *)puVar7;
                  iVar1 = *(int *)(lVar20 + 0x20 + uVar13 * 4);
                  if (*(int *)(lVar16 + 0xe4) == 0) {
                    /* try { // try from 024b8180 to 025b818b has its CatchHandler @ 024b823c */
                    thunk_FUN_0218fdac();
                    lVar16 = *(long *)puVar7;
                  }
                    /* try { // try from 024b818c to 025b8193 has its CatchHandler @ 024b8238 */
                  lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x28);
                  if (lVar16 == 0) {
LAB_024b8314:
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  lVar21 = *(long *)(lVar16 + 0x10);
                  lVar23 = *(long *)PTR_DAT_04caa160;
                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                  if (lVar21 == 0) goto LAB_024b8314;
                  uVar14 = *(uint *)(lVar16 + 0x18);
                  iVar1 = iVar1 + iVar19;
                  if (uVar14 < *(uint *)(lVar21 + 0x18)) {
                    *(uint *)(lVar16 + 0x18) = uVar14 + 1;
                    *(int *)(lVar21 + (long)(int)uVar14 * 4 + 0x20) = iVar1;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize_3a2c06c
                              (lVar16,iVar1,
                               *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                  }
                    /* try { // try from 024b81f0 to 025b81fb has its CatchHandler @ 024b8230 */
                  uVar15 = (ulong)*(uint *)(lVar20 + 0x18);
                  uVar13 = uVar13 + 1;
                    /* try { // try from 024b81fc to 025b8227 has its CatchHandler @ 024b7ffc */
                } while ((long)uVar13 < (long)(int)*(uint *)(lVar20 + 0x18));
              }
            }
            System_Collections_Generic_List_Enumerator_HighwayMesh_Piece___Dispose_3611330
                      (&dStack_d0,*(undefined8 *)PTR_DAT_04cbca00);
            lVar8 = *(long *)puVar7;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
                    /* try { // try from 024b8228 to 025b822b has its CatchHandler @ 024b8244 */
              lVar8 = *(long *)puVar7;
            }
                    /* try { // try from 024b822c to 025b822f has its CatchHandler @ 024b8234 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024b81f0 with catch @ 024b8230
                       try { // try from 024b8230 to 025b825f has its CatchHandler @ 024b7ffc */
            lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024b822c with catch @ 024b8234
                        */
            if (lVar8 != 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024b818c with catch @ 024b8238
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024b8180 with catch @ 024b823c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024b8170 with catch @ 024b8240
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024b8228 with catch @ 024b8244
                        */
              UnityEngine_Mesh__set_indexFormat_438a024(param_4,65000 < *(int *)(lVar8 + 0x18),0);
              lVar8 = *(long *)puVar7;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                    /* try { // try from 024b8260 to 025b8263 has its CatchHandler @ 024b827c */
                thunk_FUN_0218fdac();
                    /* try { // try from 024b8264 to 025b827f has its CatchHandler @ 024b7ffc */
                lVar8 = *(long *)puVar7;
              }
                    /* catch() { ... } // from try @ 024b8260 with catch @ 024b827c */
              UnityEngine_Mesh__SetVertices_439178c
                        (param_4,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8),0);
                    /* try { // try from 024b8280 to 025b8287 has its CatchHandler @ 024b8290 */
                    /* try { // try from 024b8288 to 025b8293 has its CatchHandler @ 024b7ffc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024b8280 with catch @ 024b8290
                        */
                    /* try { // try from 024b8294 to 025b83fb has its CatchHandler @ 024b8294
                       catch() { ... } // from try @ 024b8294 with catch @ 024b8294
                       catch() { ... } // from try @ 024b8488 with catch @ 024b8294
                       catch() { ... } // from try @ 024b84b8 with catch @ 024b8294
                       catch() { ... } // from try @ 024b84ec with catch @ 024b8294
                       catch() { ... } // from try @ 024b8510 with catch @ 024b8294 */
              UnityEngine_Mesh__SetNormals_4391a7c
                        (param_4,*(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10),0);
              UnityEngine_Mesh__SetUVs_4392594
                        (param_4,0,*(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x20),0);
              UnityEngine_Mesh__SetTriangles_4394c90
                        (param_4,*(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x28),0,0);
              UnityEngine_Mesh__RecalculateBounds_4395ccc(param_4,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_024b8340:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

