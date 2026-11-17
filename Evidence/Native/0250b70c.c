/* IL2CPP: Dino.BusSand.View.WorldView$$RoundedRing
UnityEngine_Mesh_o* Dino_BusSand_View_WorldView__RoundedRing (float x0, float z0, float x1, float z1, float r, float width, float height, int32_t seg, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.WorldView$$RoundedRing
   UnityEngine_Mesh_o* Dino_BusSand_View_WorldView__RoundedRing (float x0, float z0, float x1, float
   z1, float r, float width, float height, int32_t seg, const MethodInfo* method); */

long Dino_BusSand_View_WorldView__RoundedRing_240b70c
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,undefined4 param_8)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float *pfVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  int iStack_c0;
  
  puVar2 = PTR_DAT_04cbc2b8;
  if ((bRam0000000004f9cb24 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cbc9f0);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04caa1a8);
    FUN_02132f7c(PTR_DAT_04cae230);
    FUN_02132f7c(PTR_DAT_04cad718);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc2b8);
    bRam0000000004f9cb24 = 1;
  }
  puVar5 = PTR_DAT_04cb3c10;
  puVar6 = PTR_DAT_04cad6e8;
  puVar4 = PTR_DAT_04caa1d0;
  puVar3 = PTR_DAT_04caa1c8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar9 = Dino_BusSand_View_WorldView__RoundedRectRing_240acd4
                    (param_1,param_2,param_3,param_4,param_5,param_8);
  lVar10 = Dino_BusSand_View_WorldView__RoundedRectRing_240acd4
                     (param_1 - param_6,param_2 - param_6,param_3 + param_6,param_4 + param_6,
                      param_5 + param_6,param_8);
  lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_Vector3____ctor_3af944c(lVar11,*(undefined8 *)puVar5);
  lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_int____ctor_3a2b7dc(lVar12,*(undefined8 *)puVar6);
  lVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_Vector3____ctor_3af944c(lVar13,*(undefined8 *)puVar5);
  puVar6 = PTR_DAT_04cbc9f0;
  puVar4 = PTR_DAT_04caec70;
  puVar3 = PTR_DAT_04caa1a8;
  puVar2 = PTR_DAT_04caa170;
  fVar26 = _UNK_00e20a08;
  if (lVar9 != 0) {
    iVar17 = *(int *)(lVar9 + 0x18);
    fVar27 = param_7 * _UNK_00e20094;
    fVar35 = param_6 * _UNK_00e207cc;
    if (fVar27 <= param_6 * _UNK_00e207cc) {
      fVar35 = fVar27;
    }
    fVar31 = param_7;
    if (-1 < iVar17) {
      iStack_c0 = 0;
      iVar19 = 0;
      fVar21 = param_7 - fVar35;
      fVar27 = fVar35;
      do {
        puVar5 = PTR_DAT_04caa200;
        iVar20 = 0;
        if (iVar17 != 0) {
          iVar20 = iVar19 / iVar17;
        }
        iVar20 = iVar19 - iVar20 * iVar17;
        fVar22 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                  (lVar9,iVar20,*(undefined8 *)puVar3);
        if (lVar10 == 0) goto LAB_0250c3d8;
        fVar28 = fVar27;
        fVar32 = fVar31;
        fVar23 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                  (lVar10,iVar20,*(undefined8 *)puVar3);
        if (cRam0000000004f9b65c == '\0') {
          FUN_02132f7c(puVar5);
          cRam0000000004f9b65c = '\x01';
        }
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar24 = fVar23 - fVar22;
        fVar29 = fVar28 - fVar27;
        fVar33 = fVar32 - fVar31;
        fVar34 = SQRT(fVar33 * fVar33 + fVar24 * fVar24 + fVar29 * fVar29);
        if (fVar34 <= fVar26) {
          if (cRam0000000004f9b65d == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65d = '\x01';
          }
          pfVar15 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
          fVar24 = *pfVar15;
          fVar29 = pfVar15[1];
          fVar33 = pfVar15[2];
        }
        else {
          fVar24 = fVar24 / fVar34;
          fVar29 = fVar29 / fVar34;
          fVar33 = fVar33 / fVar34;
        }
        if (cRam0000000004f9bcf8 == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9bcf8 = '\x01';
        }
        if (lVar11 == 0) goto LAB_0250c3d8;
        lVar16 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
        lVar14 = *(long *)(lVar11 + 0x10);
        fVar30 = *(float *)(lVar16 + 0x18);
        fVar34 = *(float *)(lVar16 + 0x1c);
        fVar25 = *(float *)(lVar16 + 0x20);
        lVar16 = *(long *)puVar2;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0250c3d8;
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          *(float *)(lVar14 + 0x20) = fVar22;
          *(float *)(lVar14 + 0x24) = fVar27;
          *(float *)(lVar14 + 0x28) = fVar31;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                    (fVar22,fVar27,fVar31,lVar11,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        if (lVar13 == 0) goto LAB_0250c3d8;
        lVar14 = *(long *)(lVar13 + 0x10);
        lVar16 = *(long *)puVar2;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0250c3d8;
        fVar37 = -fVar24;
        fVar36 = -fVar29;
        uVar1 = *(uint *)(lVar13 + 0x18);
        fVar38 = -fVar33;
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
          *(float *)(lVar14 + 0x20) = fVar37;
          *(float *)(lVar14 + 0x24) = fVar36;
          *(float *)(lVar14 + 0x28) = fVar38;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                    (fVar37,fVar36,fVar38,lVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        lVar14 = *(long *)(lVar11 + 0x10);
        lVar16 = *(long *)puVar2;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0250c3d8;
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          *(float *)(lVar14 + 0x20) = fVar22 + fVar21 * fVar30;
          *(float *)(lVar14 + 0x24) = fVar27 + fVar21 * fVar34;
          *(float *)(lVar14 + 0x28) = fVar31 + fVar21 * fVar25;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                    (lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        lVar14 = *(long *)(lVar13 + 0x10);
        lVar16 = *(long *)puVar2;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0250c3d8;
        uVar1 = *(uint *)(lVar13 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
          *(float *)(lVar14 + 0x20) = fVar37;
          *(float *)(lVar14 + 0x24) = fVar36;
          *(float *)(lVar14 + 0x28) = fVar38;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                    (fVar37,fVar36,fVar38,lVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        lVar14 = *(long *)(lVar11 + 0x10);
        lVar16 = *(long *)puVar2;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0250c3d8;
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          *(float *)(lVar14 + 0x20) = fVar22 + fVar35 * fVar24 + fVar30 * param_7;
          *(float *)(lVar14 + 0x24) = fVar27 + fVar35 * fVar29 + fVar34 * param_7;
          *(float *)(lVar14 + 0x28) = fVar31 + fVar35 * fVar33 + fVar25 * param_7;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                    (lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        if (cRam0000000004f9b65c == '\0') {
          FUN_02132f7c(puVar5);
          cRam0000000004f9b65c = '\x01';
        }
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar27 = fVar30 - fVar24;
        fVar31 = fVar34 - fVar29;
        fVar22 = fVar25 - fVar33;
        fVar36 = SQRT(fVar22 * fVar22 + fVar27 * fVar27 + fVar31 * fVar31);
        if (fVar36 <= fVar26) {
          if (cRam0000000004f9b65d == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65d = '\x01';
          }
          pfVar15 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
          fVar27 = *pfVar15;
          fVar31 = pfVar15[1];
          fVar22 = pfVar15[2];
        }
        else {
          fVar27 = fVar27 / fVar36;
          fVar31 = fVar31 / fVar36;
          fVar22 = fVar22 / fVar36;
        }
        lVar14 = *(long *)(lVar13 + 0x10);
        lVar16 = *(long *)puVar2;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0250c3d8;
        uVar1 = *(uint *)(lVar13 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
          *(float *)(lVar14 + 0x20) = fVar27;
          *(float *)(lVar14 + 0x24) = fVar31;
          *(float *)(lVar14 + 0x28) = fVar22;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                    (lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        lVar14 = *(long *)(lVar11 + 0x10);
        lVar16 = *(long *)puVar2;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0250c3d8;
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          *(float *)(lVar14 + 0x20) = (fVar23 - fVar35 * fVar24) + fVar30 * param_7;
          *(float *)(lVar14 + 0x24) = (fVar28 - fVar35 * fVar29) + fVar34 * param_7;
          *(float *)(lVar14 + 0x28) = (fVar32 - fVar35 * fVar33) + fVar25 * param_7;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                    (lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        if (cRam0000000004f9b65c == '\0') {
          FUN_02132f7c(puVar5);
          cRam0000000004f9b65c = '\x01';
        }
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar22 = fVar33 + fVar25;
        fVar27 = fVar24 + fVar30;
        fVar31 = fVar29 + fVar34;
        fVar36 = SQRT(fVar22 * fVar22 + fVar27 * fVar27 + fVar31 * fVar31);
        if (fVar36 <= fVar26) {
          if (cRam0000000004f9b65d == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65d = '\x01';
          }
          pfVar15 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
          fVar27 = *pfVar15;
          fVar31 = pfVar15[1];
          fVar22 = pfVar15[2];
        }
        else {
          fVar27 = fVar27 / fVar36;
          fVar31 = fVar31 / fVar36;
          fVar22 = fVar22 / fVar36;
        }
        lVar14 = *(long *)(lVar13 + 0x10);
        lVar16 = *(long *)puVar2;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0250c3d8;
        uVar1 = *(uint *)(lVar13 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
          *(float *)(lVar14 + 0x20) = fVar27;
          *(float *)(lVar14 + 0x24) = fVar31;
          *(float *)(lVar14 + 0x28) = fVar22;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                    (lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        lVar14 = *(long *)(lVar11 + 0x10);
        lVar16 = *(long *)puVar2;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0250c3d8;
        uVar1 = *(uint *)(lVar11 + 0x18);
        fVar31 = fVar32 + fVar21 * fVar25;
        fVar27 = fVar28 + fVar21 * fVar34;
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          *(float *)(lVar14 + 0x20) = fVar23 + fVar21 * fVar30;
          *(float *)(lVar14 + 0x24) = fVar27;
          *(float *)(lVar14 + 0x28) = fVar31;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                    (lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        lVar14 = *(long *)(lVar13 + 0x10);
        lVar16 = *(long *)puVar2;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0250c3d8;
        uVar1 = *(uint *)(lVar13 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
          *(float *)(lVar14 + 0x20) = fVar24;
          *(float *)(lVar14 + 0x24) = fVar29;
          *(float *)(lVar14 + 0x28) = fVar33;
        }
        else {
          fVar27 = fVar29;
          fVar31 = fVar33;
          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                    (fVar24,lVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        lVar14 = *(long *)(lVar11 + 0x10);
        lVar16 = *(long *)puVar2;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0250c3d8;
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          *(float *)(lVar14 + 0x20) = fVar23;
          *(float *)(lVar14 + 0x24) = fVar28;
          *(float *)(lVar14 + 0x28) = fVar32;
          fVar28 = fVar27;
          fVar32 = fVar31;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                    (fVar23,lVar11,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        lVar14 = *(long *)(lVar13 + 0x10);
        lVar16 = *(long *)puVar2;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0250c3d8;
        uVar1 = *(uint *)(lVar13 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
          *(float *)(lVar14 + 0x20) = fVar24;
          *(float *)(lVar14 + 0x24) = fVar29;
          *(float *)(lVar14 + 0x28) = fVar33;
          fVar27 = fVar28;
          fVar31 = fVar32;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                    (fVar24,lVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          fVar27 = fVar29;
          fVar31 = fVar33;
        }
        if (0 < iVar19) {
          iVar18 = 5;
          iVar20 = iStack_c0;
          do {
            lVar14 = FUN_02133068(*(undefined8 *)puVar4,6);
            if (lVar14 == 0) goto LAB_0250c3d8;
            uVar1 = *(uint *)(lVar14 + 0x18);
            if ((uVar1 == 0) || (*(int *)(lVar14 + 0x20) = iVar20 + -6, uVar1 == 1))
            goto LAB_0250c3d4;
            *(int *)(lVar14 + 0x24) = iVar20 + -5;
            if ((uVar1 < 3) ||
               (((*(int *)(lVar14 + 0x28) = iVar20, uVar1 == 3 ||
                 (*(int *)(lVar14 + 0x2c) = iVar20, uVar1 < 5)) ||
                (*(int *)(lVar14 + 0x30) = iVar20 + -5, uVar1 == 5)))) goto LAB_0250c3d4;
            iVar20 = iVar20 + 1;
            *(int *)(lVar14 + 0x34) = iVar20;
            if (lVar12 == 0) goto LAB_0250c3d8;
            System_Collections_Generic_List_int___AddRange_3a2c278
                      (lVar12,lVar14,*(undefined8 *)puVar6);
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
        }
        iVar19 = iVar19 + 1;
        iStack_c0 = iStack_c0 + 6;
      } while (iVar19 <= iVar17);
    }
    puVar2 = PTR_DAT_04caa148;
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa148);
    UnityEngine_Mesh___ctor_4389e48(lVar9,0);
    if (lVar9 != 0) {
      UnityEngine_Mesh__SetVertices_439178c(lVar9,lVar11,0);
      UnityEngine_Mesh__SetNormals_4391a7c(lVar9,lVar13,0);
      UnityEngine_Mesh__SetTriangles_4394c90(lVar9,lVar12,0,0);
      lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      UnityEngine_Mesh___ctor_4389e48(lVar10,0);
      if (lVar10 != 0) {
        UnityEngine_Mesh__SetVertices_439178c(lVar10,lVar11,0);
        UnityEngine_Mesh__SetTriangles_4394c90(lVar10,lVar12,0,0);
        UnityEngine_Mesh__RecalculateNormals_4395d8c(lVar10,0);
        lVar11 = UnityEngine_Mesh__get_normals_4390ea8(lVar10,0);
        if (lVar11 != 0) {
          if (*(uint *)(lVar11 + 0x18) < 3) {
LAB_0250c3d4:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          if (lVar13 != 0) {
            fVar21 = *(float *)(lVar11 + 0x3c);
            fVar35 = *(float *)(lVar11 + 0x40);
            fVar22 = *(float *)(lVar11 + 0x38);
            fVar26 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                      (lVar13,2,*(undefined8 *)puVar3);
            puVar3 = PTR_DAT_04cae230;
            puVar2 = PTR_DAT_04cad718;
            if (fVar35 * fVar31 + fVar22 * fVar26 + fVar21 * fVar27 < 0.0) {
              if (lVar12 == 0) goto LAB_0250c3d8;
              if (0 < *(int *)(lVar12 + 0x18)) {
                iVar17 = 0;
                do {
                  uVar7 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                    (lVar12,iVar17 + 1,*(undefined8 *)puVar3);
                  uVar8 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                    (lVar12,iVar17 + 2,*(undefined8 *)puVar3);
                  System_Collections_Generic_List_int___set_Item_3a2bdc8
                            (lVar12,iVar17 + 1,uVar8,*(undefined8 *)puVar2);
                  System_Collections_Generic_List_int___set_Item_3a2bdc8
                            (lVar12,iVar17 + 2,uVar7,*(undefined8 *)puVar2);
                  iVar17 = iVar17 + 3;
                } while (iVar17 < *(int *)(lVar12 + 0x18));
              }
              UnityEngine_Mesh__SetTriangles_4394c90(lVar9,lVar12,0,0);
            }
            if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            UnityEngine_Object__Destroy_43c8114(lVar10,0);
            UnityEngine_Mesh__RecalculateBounds_4395ccc(lVar9,0);
            return lVar9;
          }
        }
      }
    }
  }
LAB_0250c3d8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

