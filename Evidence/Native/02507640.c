/* IL2CPP: Dino.BusSand.View.WorldView$$Ribbon
UnityEngine_Mesh_o* Dino_BusSand_View_WorldView__Ribbon (System_Collections_Generic_List_ValueTuple_Vector3__float__float___o* pts, float width, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.WorldView$$Ribbon
   UnityEngine_Mesh_o* Dino_BusSand_View_WorldView__Ribbon
   (System_Collections_Generic_List_ValueTuple_Vector3__float__float___o* pts, float width, const
   MethodInfo* method); */

long Dino_BusSand_View_WorldView__Ribbon_2407640(float param_1,long param_2)

{
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  
  puVar10 = PTR_DAT_04cbc390;
  puVar9 = PTR_DAT_04cbc380;
  puVar8 = PTR_DAT_04cb7270;
  puVar7 = PTR_DAT_04cb3c10;
  puVar6 = PTR_DAT_04cad6e8;
  puVar5 = PTR_DAT_04caa1d8;
  puVar4 = PTR_DAT_04caa1d0;
  puVar3 = PTR_DAT_04caa1c8;
  if ((bRam0000000004f9cb26 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cbc9f0);
    FUN_02132f7c(PTR_DAT_04cbc360);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04caa178);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cb7270);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04cbc380);
    FUN_02132f7c(PTR_DAT_04cbe2d0);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cbe178);
    FUN_02132f7c(PTR_DAT_04cae230);
    FUN_02132f7c(PTR_DAT_04cad718);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cbc390);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04caa1d8);
    FUN_02132f7c(PTR_DAT_04caa148);
    bRam0000000004f9cb26 = 1;
  }
  lVar16 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_Vector3____ctor_3af944c(lVar16,*(undefined8 *)puVar7);
  lVar17 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_List_Vector2____ctor_3af6bb0(lVar17,*(undefined8 *)puVar8);
  lVar18 = thunk_FUN_0216e89c(*(undefined8 *)puVar10);
  System_Collections_Generic_List_Color____ctor_3a01b34(lVar18,*(undefined8 *)puVar9);
  lVar19 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_int____ctor_3a2b7dc(lVar19,*(undefined8 *)puVar6);
  puVar5 = PTR_DAT_04cbc360;
  puVar4 = PTR_DAT_04caa178;
  puVar3 = PTR_DAT_04caa170;
  fVar2 = _UNK_00e20a74;
  if (param_2 != 0) {
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar22 = 0;
      iVar23 = 1;
      fVar26 = param_1 * 0.0 * 0.5;
      auVar24 = NEON_fmov(0x3f800000,4);
      do {
        System_Collections_Generic_List_ValueTuple_Vector3__float__float____get_Item_39d9560
                  (&fStack_b4,param_2,iVar22,*(undefined8 *)PTR_DAT_04cbe178);
        uVar14 = uStack_a4;
        fVar13 = fStack_ac;
        fVar12 = fStack_b0;
        fVar11 = fStack_b4;
        sincosf(fStack_a8 * fVar2,fVar2,&fStack_b8,&fStack_bc);
        if (lVar16 == 0) goto LAB_02507d2c;
        lVar20 = *(long *)(lVar16 + 0x10);
        lVar21 = *(long *)puVar3;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (lVar20 == 0) goto LAB_02507d2c;
        uVar1 = *(uint *)(lVar16 + 0x18);
        fVar27 = fStack_b8 * param_1 * 0.5;
        fVar25 = fStack_bc * param_1 * 0.5;
        if (uVar1 < *(uint *)(lVar20 + 0x18)) {
          lVar20 = lVar20 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar16 + 0x18) = uVar1 + 1;
          *(float *)(lVar20 + 0x20) = fVar11 - fVar27;
          *(float *)(lVar20 + 0x24) = fVar12 - fVar26;
          *(float *)(lVar20 + 0x28) = fVar13 - fVar25;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                    (lVar16,*(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
        }
        if (lVar17 == 0) goto LAB_02507d2c;
        lVar20 = *(long *)(lVar17 + 0x10);
        lVar21 = *(long *)puVar4;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
        if (lVar20 == 0) goto LAB_02507d2c;
        uVar1 = *(uint *)(lVar17 + 0x18);
        if (uVar1 < *(uint *)(lVar20 + 0x18)) {
          lVar20 = lVar20 + (long)(int)uVar1 * 8;
          *(uint *)(lVar17 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar20 + 0x20) = uVar14;
          *(undefined4 *)(lVar20 + 0x24) = 0;
        }
        else {
          System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                    (uVar14,0,lVar17,
                     *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
        }
        if (lVar18 == 0) goto LAB_02507d2c;
        lVar20 = *(long *)(lVar18 + 0x10);
        lVar21 = *(long *)puVar5;
        *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
        if (lVar20 == 0) goto LAB_02507d2c;
        uVar1 = *(uint *)(lVar18 + 0x18);
        if (uVar1 < *(uint *)(lVar20 + 0x18)) {
          lVar20 = lVar20 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar18 + 0x18) = uVar1 + 1;
          *(long *)(lVar20 + 0x28) = auVar24._8_8_;
          *(long *)(lVar20 + 0x20) = auVar24._0_8_;
        }
        else {
                    /* try { // try from 025079b8 to 02607bf3 has its CatchHandler @ 025079b8
                       catch() { ... } // from try @ 025079b8 with catch @ 025079b8
                       catch() { ... } // from try @ 02507e10 with catch @ 025079b8
                       catch() { ... } // from try @ 02507e80 with catch @ 025079b8
                       catch() { ... } // from try @ 02507eec with catch @ 025079b8 */
          System_Collections_Generic_List_Color___AddWithResize_3a023f0
                    (ZEXT816(0x3f800000),0x3f800000,0x3f800000,0x3f800000,lVar18,
                     *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
        }
        lVar20 = *(long *)(lVar16 + 0x10);
        lVar21 = *(long *)puVar3;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (lVar20 == 0) goto LAB_02507d2c;
        uVar1 = *(uint *)(lVar16 + 0x18);
        if (uVar1 < *(uint *)(lVar20 + 0x18)) {
          lVar20 = lVar20 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar16 + 0x18) = uVar1 + 1;
          *(float *)(lVar20 + 0x20) = fVar11 + fVar27;
          *(float *)(lVar20 + 0x24) = fVar26 + fVar12;
          *(float *)(lVar20 + 0x28) = fVar13 + fVar25;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                    (lVar16,*(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
        }
        lVar20 = *(long *)(lVar17 + 0x10);
        lVar21 = *(long *)puVar4;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
        if (lVar20 == 0) goto LAB_02507d2c;
        uVar1 = *(uint *)(lVar17 + 0x18);
        if (uVar1 < *(uint *)(lVar20 + 0x18)) {
          lVar20 = lVar20 + (long)(int)uVar1 * 8;
          *(uint *)(lVar17 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar20 + 0x20) = uVar14;
          *(undefined4 *)(lVar20 + 0x24) = 0x3f800000;
        }
        else {
          System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                    (uVar14,0x3f800000,lVar17,
                     *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
        }
        lVar20 = *(long *)(lVar18 + 0x10);
        lVar21 = *(long *)puVar5;
        *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
        if (lVar20 == 0) goto LAB_02507d2c;
        uVar1 = *(uint *)(lVar18 + 0x18);
        if (uVar1 < *(uint *)(lVar20 + 0x18)) {
          lVar20 = lVar20 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar18 + 0x18) = uVar1 + 1;
          *(long *)(lVar20 + 0x28) = auVar24._8_8_;
          *(long *)(lVar20 + 0x20) = auVar24._0_8_;
        }
        else {
          System_Collections_Generic_List_Color___AddWithResize_3a023f0
                    (ZEXT816(0x3f800000),0x3f800000,0x3f800000,0x3f800000,lVar18,
                     *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
        }
        if (iVar22 != 0) {
          lVar20 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,6);
          if (lVar20 == 0) goto LAB_02507d2c;
          uVar1 = *(uint *)(lVar20 + 0x18);
          if ((uVar1 == 0) || (*(int *)(lVar20 + 0x20) = iVar23 + -3, uVar1 == 1))
          goto LAB_02507d30;
          *(int *)(lVar20 + 0x24) = iVar23 + -2;
          if (uVar1 < 3) goto LAB_02507d30;
          *(int *)(lVar20 + 0x28) = iVar23 + -1;
          if (((uVar1 == 3) || (*(int *)(lVar20 + 0x2c) = iVar23 + -2, uVar1 < 5)) ||
             (*(int *)(lVar20 + 0x30) = iVar23, uVar1 == 5)) goto LAB_02507d30;
          *(int *)(lVar20 + 0x34) = iVar23 + -1;
          if (lVar19 == 0) goto LAB_02507d2c;
          System_Collections_Generic_List_int___AddRange_3a2c278
                    (lVar19,lVar20,*(undefined8 *)PTR_DAT_04cbc9f0);
        }
        iVar22 = iVar22 + 1;
        iVar23 = iVar23 + 2;
      } while (iVar22 < *(int *)(param_2 + 0x18));
    }
    lVar20 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa148);
    UnityEngine_Mesh___ctor_4389e48(lVar20,0);
    if (lVar20 != 0) {
      UnityEngine_Mesh__SetVertices_439178c(lVar20,lVar16,0);
      UnityEngine_Mesh__SetUVs_4392594(lVar20,0,lVar17,0);
      UnityEngine_Mesh__SetColors_439205c(lVar20,lVar18,0);
                    /* try { // try from 02507bf4 to 02607c13 has its CatchHandler @ 02507eb4 */
      UnityEngine_Mesh__SetTriangles_4394c90(lVar20,lVar19,0,0);
      UnityEngine_Mesh__RecalculateNormals_4395d8c(lVar20,0);
      lVar16 = UnityEngine_Mesh__get_normals_4390ea8(lVar20,0);
                    /* try { // try from 02507c1c to 02607c4b has its CatchHandler @ 02507eac */
      if (lVar16 != 0) {
        if (*(long *)(lVar16 + 0x18) != 0) {
          lVar16 = UnityEngine_Mesh__get_normals_4390ea8(lVar20,0);
          puVar4 = PTR_DAT_04cae230;
          puVar3 = PTR_DAT_04cad718;
          if (lVar16 == 0) goto LAB_02507d2c;
          if (*(int *)(lVar16 + 0x18) == 0) {
LAB_02507d30:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          if (*(float *)(lVar16 + 0x24) < 0.0) {
                    /* try { // try from 02507c4c to 02607c6b has its CatchHandler @ 02507e98 */
            if (lVar19 == 0) goto LAB_02507d2c;
            if (0 < *(int *)(lVar19 + 0x18)) {
              iVar22 = 0;
              do {
                    /* try { // try from 02507c78 to 02607c93 has its CatchHandler @ 02507e90 */
                uVar14 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                   (lVar19,iVar22,*(undefined8 *)puVar4);
                uVar15 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                   (lVar19,iVar22 + 1,*(undefined8 *)puVar4);
                    /* try { // try from 02507c9c to 02607ca7 has its CatchHandler @ 02507ea8 */
                System_Collections_Generic_List_int___set_Item_3a2bdc8
                          (lVar19,iVar22,uVar15,*(undefined8 *)puVar3);
                    /* try { // try from 02507cb8 to 02607cbb has its CatchHandler @ 02507e88 */
                System_Collections_Generic_List_int___set_Item_3a2bdc8
                          (lVar19,iVar22 + 1,uVar14,*(undefined8 *)puVar3);
                iVar22 = iVar22 + 3;
              } while (iVar22 < *(int *)(lVar19 + 0x18));
            }
                    /* try { // try from 02507ccc to 02607ce3 has its CatchHandler @ 02507ea4 */
            UnityEngine_Mesh__SetTriangles_4394c90(lVar20,lVar19,0,0);
                    /* try { // try from 02507ce4 to 02607cff has its CatchHandler @ 02507eb0 */
            UnityEngine_Mesh__RecalculateNormals_4395d8c(lVar20,0);
          }
        }
        UnityEngine_Mesh__RecalculateBounds_4395ccc(lVar20,0);
                    /* try { // try from 02507d18 to 02607d1b has its CatchHandler @ 02507e80 */
                    /* try { // try from 02507d1c to 02607d2b has its CatchHandler @ 02507e84 */
        return lVar20;
      }
    }
  }
LAB_02507d2c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

