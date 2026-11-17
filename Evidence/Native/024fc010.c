/* IL2CPP: Dino.BusSand.View.VehicleView$$TickMesh
UnityEngine_Mesh_o* Dino_BusSand_View_VehicleView__TickMesh (float w, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$TickMesh
   UnityEngine_Mesh_o* Dino_BusSand_View_VehicleView__TickMesh (float w, const MethodInfo* method);
    */

long Dino_BusSand_View_VehicleView__TickMesh_23fc010(float param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  puVar6 = PTR_DAT_04caed88;
  if ((bRam0000000004f9cae8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cbc9f0);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04caed88);
    FUN_02132f7c(PTR_DAT_04caf2a0);
    bRam0000000004f9cae8 = 1;
  }
  lVar14 = FUN_02133068(*(undefined8 *)puVar6,3);
  if (lVar14 != 0) {
    uVar2 = *(uint *)(lVar14 + 0x18);
    if (((uVar2 == 0) || (*(undefined8 *)(lVar14 + 0x20) = _UNK_00e6a9c0, uVar2 == 1)) ||
       (*(undefined8 *)(lVar14 + 0x28) = _UNK_00e6a2a8, puVar12 = PTR_DAT_04cbc9f0,
       puVar11 = PTR_DAT_04cb3c10, puVar10 = PTR_DAT_04caec70, puVar9 = PTR_DAT_04cad6e8,
       puVar8 = PTR_DAT_04caa1d0, puVar7 = PTR_DAT_04caa1c8, puVar6 = PTR_DAT_04caa170, uVar2 < 3))
    {
LAB_024fc578:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    *(undefined8 *)(lVar14 + 0x30) = _UNK_00e69ab0;
    lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar8);
    System_Collections_Generic_List_Vector3____ctor_3af944c(lVar15,*(undefined8 *)puVar11);
    lVar16 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
    System_Collections_Generic_List_int____ctor_3a2b7dc(lVar16,*(undefined8 *)puVar9);
    puVar7 = PTR_DAT_04caa200;
    fVar5 = _UNK_00e20a08;
    uVar17 = 0;
    bVar13 = true;
    do {
      bVar4 = bVar13;
      if ((*(uint *)(lVar14 + 0x18) <= uVar17) || ((ulong)*(uint *)(lVar14 + 0x18) <= uVar17 + 1))
      goto LAB_024fc578;
      lVar18 = lVar14 + uVar17 * 8;
      lVar19 = lVar14 + (uVar17 + 1) * 8;
      fVar26 = *(float *)(lVar18 + 0x20);
      fVar28 = *(float *)(lVar18 + 0x24);
      fVar24 = *(float *)(lVar19 + 0x20);
      fVar25 = *(float *)(lVar19 + 0x24);
      if (cRam0000000004f9b9de == '\0') {
        FUN_02132f7c(puVar7);
        cRam0000000004f9b9de = '\x01';
      }
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar20 = fVar24 - fVar26;
      fVar22 = fVar25 - fVar28;
      fVar23 = SQRT(fVar20 * fVar20 + fVar22 * fVar22);
      if (fVar23 <= fVar5) {
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        fVar20 = **(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
        fVar22 = (*(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
      }
      else {
        fVar20 = fVar20 / fVar23;
        fVar22 = fVar22 / fVar23;
      }
      if (lVar15 == 0) goto LAB_024fc57c;
      uVar2 = *(uint *)(lVar15 + 0x18);
      lVar18 = *(long *)(lVar15 + 0x10);
      lVar19 = *(long *)puVar6;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_024fc57c;
      fVar20 = fVar20 * param_1;
      fVar26 = fVar26 - fVar20;
      fVar28 = fVar28 - fVar22 * param_1;
      fVar27 = -(fVar22 * param_1);
      fVar23 = fVar26 + fVar27;
      fVar21 = fVar20 + fVar28;
      if (uVar2 < *(uint *)(lVar18 + 0x18)) {
        lVar18 = lVar18 + (long)(int)uVar2 * 0xc;
        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
        *(float *)(lVar18 + 0x20) = fVar23;
        *(float *)(lVar18 + 0x24) = fVar21;
        *(undefined4 *)(lVar18 + 0x28) = 0;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                  (fVar23,fVar21,0,lVar15,
                   *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
      lVar18 = *(long *)(lVar15 + 0x10);
      lVar19 = *(long *)puVar6;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_024fc57c;
      fVar26 = fVar26 - fVar27;
      fVar28 = fVar28 - fVar20;
      uVar3 = *(uint *)(lVar15 + 0x18);
      if (uVar3 < *(uint *)(lVar18 + 0x18)) {
        lVar18 = lVar18 + (long)(int)uVar3 * 0xc;
        *(uint *)(lVar15 + 0x18) = uVar3 + 1;
        *(float *)(lVar18 + 0x20) = fVar26;
        *(float *)(lVar18 + 0x24) = fVar28;
        *(undefined4 *)(lVar18 + 0x28) = 0;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                  (fVar26,fVar28,0,lVar15,
                   *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
      lVar18 = *(long *)(lVar15 + 0x10);
      lVar19 = *(long *)puVar6;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_024fc57c;
      fVar24 = fVar24 + fVar20;
      fVar25 = fVar25 + fVar22 * param_1;
      uVar3 = *(uint *)(lVar15 + 0x18);
      fVar26 = fVar24 - fVar27;
      fVar28 = fVar25 - fVar20;
      if (uVar3 < *(uint *)(lVar18 + 0x18)) {
        lVar18 = lVar18 + (long)(int)uVar3 * 0xc;
        *(uint *)(lVar15 + 0x18) = uVar3 + 1;
        *(float *)(lVar18 + 0x20) = fVar26;
        *(float *)(lVar18 + 0x24) = fVar28;
        *(undefined4 *)(lVar18 + 0x28) = 0;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                  (fVar26,fVar28,0,lVar15,
                   *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
      lVar18 = *(long *)(lVar15 + 0x10);
      lVar19 = *(long *)puVar6;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_024fc57c;
      fVar24 = fVar24 + fVar27;
      fVar20 = fVar20 + fVar25;
      uVar3 = *(uint *)(lVar15 + 0x18);
      if (uVar3 < *(uint *)(lVar18 + 0x18)) {
        lVar18 = lVar18 + (long)(int)uVar3 * 0xc;
        *(uint *)(lVar15 + 0x18) = uVar3 + 1;
        *(float *)(lVar18 + 0x20) = fVar24;
        *(float *)(lVar18 + 0x24) = fVar20;
        *(undefined4 *)(lVar18 + 0x28) = 0;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                  (fVar24,fVar20,0,lVar15,
                   *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
      lVar18 = FUN_02133068(*(undefined8 *)puVar10,0xc);
      if (lVar18 == 0) goto LAB_024fc57c;
      uVar3 = *(uint *)(lVar18 + 0x18);
      if ((uVar3 == 0) || (*(uint *)(lVar18 + 0x20) = uVar2, uVar3 == 1)) goto LAB_024fc578;
      *(uint *)(lVar18 + 0x24) = uVar2 + 1;
      if (uVar3 < 3) goto LAB_024fc578;
      iVar1 = uVar2 + 2;
      *(int *)(lVar18 + 0x28) = iVar1;
      if (((uVar3 == 3) || (*(uint *)(lVar18 + 0x2c) = uVar2, uVar3 < 5)) ||
         (*(int *)(lVar18 + 0x30) = iVar1, uVar3 == 5)) goto LAB_024fc578;
      *(uint *)(lVar18 + 0x34) = uVar2 + 3;
      if ((((uVar3 < 7) || (*(uint *)(lVar18 + 0x38) = uVar2, uVar3 == 7)) ||
          ((*(int *)(lVar18 + 0x3c) = iVar1, uVar3 < 9 ||
           ((*(uint *)(lVar18 + 0x40) = uVar2 + 1, uVar3 == 9 ||
            (*(uint *)(lVar18 + 0x44) = uVar2, uVar3 < 0xb)))))) ||
         (*(uint *)(lVar18 + 0x48) = uVar2 + 3, uVar3 == 0xb)) goto LAB_024fc578;
      *(int *)(lVar18 + 0x4c) = iVar1;
      if (lVar16 == 0) goto LAB_024fc57c;
      System_Collections_Generic_List_int___AddRange_3a2c278(lVar16,lVar18,*(undefined8 *)puVar12);
      uVar17 = 1;
      bVar13 = false;
    } while (bVar4);
    lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa148);
    UnityEngine_Mesh___ctor_4389e48(lVar14,0);
    if (lVar14 != 0) {
      UnityEngine_Object__set_name_43c72ec(lVar14,*(undefined8 *)PTR_DAT_04caf2a0,0);
      UnityEngine_Mesh__SetVertices_439178c(lVar14,lVar15,0);
      UnityEngine_Mesh__SetTriangles_4394c90(lVar14,lVar16,0,0);
      UnityEngine_Mesh__RecalculateBounds_4395ccc(lVar14,0);
      return lVar14;
    }
  }
LAB_024fc57c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

