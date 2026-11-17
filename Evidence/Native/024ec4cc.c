/* IL2CPP: Dino.BusSand.View.StaticMerge$$get_Sphere
UnityEngine_Mesh_o* Dino_BusSand_View_StaticMerge__get_Sphere (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.StaticMerge$$get_Sphere
   UnityEngine_Mesh_o* Dino_BusSand_View_StaticMerge__get_Sphere (const MethodInfo* method); */

undefined8 Dino_BusSand_View_StaticMerge__get_Sphere_23ec4cc(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  
  puVar10 = PTR_DAT_04cbdc28;
  puVar6 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9caa0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cbc9f0);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbdc28);
    FUN_02132f7c(PTR_DAT_04cbdc48);
    bRam0000000004f9caa0 = 1;
  }
  uVar20 = *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar13 = UnityEngine_Object__op_Inequality_43c8dec(uVar20,0,0);
  puVar9 = PTR_DAT_04cb3c10;
  puVar8 = PTR_DAT_04cad6e8;
  puVar7 = PTR_DAT_04caa1d0;
  puVar6 = PTR_DAT_04caa1c8;
  if ((uVar13 & 1) == 0) {
    lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1d0);
    System_Collections_Generic_List_Vector3____ctor_3af944c(lVar14,*(undefined8 *)puVar9);
    lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
    System_Collections_Generic_List_Vector3____ctor_3af944c(lVar15,*(undefined8 *)puVar9);
    lVar16 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
    System_Collections_Generic_List_int____ctor_3a2b7dc(lVar16,*(undefined8 *)puVar8);
    puVar6 = PTR_DAT_04caa170;
    fVar5 = _UNK_00e2082c;
    fVar4 = _UNK_00e1fdf4;
    if (lVar14 == 0) {
LAB_024ec8a4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar21 = 0;
    do {
      sincosf(((float)iVar21 * fVar5) / 9.0,&fStack_94,&fStack_98);
      fVar12 = fStack_94;
      fVar11 = fStack_98;
      iVar22 = 0;
      fVar24 = fStack_98 * 0.5;
      do {
        sincosf(((float)iVar22 * fVar4) / 14.0,&fStack_9c,&fStack_a0);
        lVar17 = *(long *)(lVar14 + 0x10);
        lVar19 = *(long *)puVar6;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar17 == 0) goto LAB_024ec8a4;
        fVar26 = fVar12 * fStack_a0;
        fVar25 = fVar12 * fStack_9c;
        uVar3 = *(uint *)(lVar14 + 0x18);
        if (uVar3 < *(uint *)(lVar17 + 0x18)) {
          lVar17 = lVar17 + (long)(int)uVar3 * 0xc;
          *(uint *)(lVar14 + 0x18) = uVar3 + 1;
          *(float *)(lVar17 + 0x20) = fVar26 * 0.5;
          *(float *)(lVar17 + 0x24) = fVar24;
          *(float *)(lVar17 + 0x28) = fVar25 * 0.5;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                    (fVar26 * 0.5,fVar24,lVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
        if (lVar15 == 0) goto LAB_024ec8a4;
        lVar17 = *(long *)(lVar15 + 0x10);
        lVar19 = *(long *)puVar6;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar17 == 0) goto LAB_024ec8a4;
        uVar3 = *(uint *)(lVar15 + 0x18);
        if (uVar3 < *(uint *)(lVar17 + 0x18)) {
          lVar17 = lVar17 + (long)(int)uVar3 * 0xc;
          *(uint *)(lVar15 + 0x18) = uVar3 + 1;
          *(float *)(lVar17 + 0x20) = fVar26;
          *(float *)(lVar17 + 0x24) = fVar11;
          *(float *)(lVar17 + 0x28) = fVar25;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                    (fVar26,fVar11,fVar25,lVar15,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
        puVar8 = PTR_DAT_04cbc9f0;
        puVar7 = PTR_DAT_04caec70;
        iVar22 = iVar22 + 1;
      } while (iVar22 != 0xf);
      iVar21 = iVar21 + 1;
    } while (iVar21 != 10);
    iVar22 = 0;
    iVar21 = 0;
    do {
      iVar23 = 0;
      do {
        lVar17 = FUN_02133068(*(undefined8 *)puVar7,6);
        if (lVar17 == 0) goto LAB_024ec8a4;
        uVar3 = *(uint *)(lVar17 + 0x18);
        if (uVar3 == 0) {
LAB_024ec8a0:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(int *)(lVar17 + 0x20) = iVar22 + iVar23;
        if (uVar3 == 1) goto LAB_024ec8a0;
        iVar1 = iVar22 + iVar23 + 0xf;
        *(int *)(lVar17 + 0x24) = iVar1;
        if (uVar3 < 3) goto LAB_024ec8a0;
        iVar2 = iVar22 + iVar23 + 1;
        *(int *)(lVar17 + 0x28) = iVar2;
        if (((uVar3 == 3) || (*(int *)(lVar17 + 0x2c) = iVar2, uVar3 < 5)) ||
           (*(int *)(lVar17 + 0x30) = iVar1, uVar3 == 5)) goto LAB_024ec8a0;
        *(int *)(lVar17 + 0x34) = iVar22 + iVar23 + 0x10;
        if (lVar16 == 0) goto LAB_024ec8a4;
        System_Collections_Generic_List_int___AddRange_3a2c278(lVar16,lVar17,*(undefined8 *)puVar8);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 0xe);
      iVar21 = iVar21 + 1;
      iVar22 = iVar22 + 0xf;
    } while (iVar21 != 9);
    uVar20 = Dino_BusSand_View_StaticMerge__Build_23ec258
                       (*(undefined8 *)PTR_DAT_04cbdc48,lVar14,lVar15,lVar16);
    puVar18 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x10);
    *puVar18 = uVar20;
    thunk_FUN_02134474(puVar18,uVar20);
  }
  return *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x10);
}

