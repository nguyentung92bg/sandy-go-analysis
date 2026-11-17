/* IL2CPP: Dino.BusSand.View.HighwayMesh$$Read
Dino_BusSand_View_HighwayMesh_Src_o* Dino_BusSand_View_HighwayMesh__Read (UnityEngine_Mesh_o* m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.HighwayMesh$$Read
   Dino_BusSand_View_HighwayMesh_Src_o* Dino_BusSand_View_HighwayMesh__Read (UnityEngine_Mesh_o* m,
   const MethodInfo* method); */

long Dino_BusSand_View_HighwayMesh__Read_23b70f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  undefined1 auStack_50 [8];
  float fStack_48;
  float fStack_3c;
  long lStack_38;
  
  puVar1 = PTR_DAT_04cbc9d8;
  if ((bRam0000000004f9c989 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc9e0);
    FUN_02132f7c(PTR_DAT_04cbc9e8);
    FUN_02132f7c(PTR_DAT_04cbc9d8);
    FUN_02132f7c(PTR_DAT_04cbc9f0);
    FUN_02132f7c(PTR_DAT_04cad6e0);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cbc9f8);
    FUN_02132f7c(PTR_DAT_04caed88);
    bRam0000000004f9c989 = 1;
  }
  lVar6 = *(long *)puVar1;
  lStack_38 = 0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar1;
  }
  if (**(long **)(lVar6 + 0xb8) != 0) {
    uVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (**(long **)(lVar6 + 0xb8),param_1,&lStack_38,*(undefined8 *)PTR_DAT_04cbc9e0)
    ;
    if ((uVar7 & 1) != 0) {
      return lStack_38;
    }
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
    System_Collections_Generic_List_int____ctor_3a2b7dc(lVar6,*(undefined8 *)PTR_DAT_04cad6e8);
    if (param_1 != 0) {
      iVar3 = UnityEngine_Mesh__get_subMeshCount_436cb4c(param_1,0);
      puVar2 = PTR_DAT_04cbc9f0;
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          uVar8 = UnityEngine_Mesh__GetTriangles_439400c(param_1,iVar3,0);
          if (lVar6 == 0) goto LAB_024b73d8;
          System_Collections_Generic_List_int___AddRange_3a2c278(lVar6,uVar8,*(undefined8 *)puVar2);
          iVar3 = iVar3 + 1;
          iVar4 = UnityEngine_Mesh__get_subMeshCount_436cb4c(param_1,0);
        } while (iVar3 < iVar4);
      }
      lVar9 = UnityEngine_Mesh__get_uv_4391000(param_1,0);
      lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbc9f8);
      System_Object___ctor_4870e5c(lVar10,0);
      uVar8 = UnityEngine_Mesh__get_vertices_4390dfc(param_1,0);
      if (lVar10 != 0) {
        *(undefined8 *)(lVar10 + 0x10) = uVar8;
        thunk_FUN_02134474();
        uVar8 = UnityEngine_Mesh__get_normals_4390ea8(param_1,0);
        *(undefined8 *)(lVar10 + 0x18) = uVar8;
                    /* try { // try from 024b72b8 to 025b75a3 has its CatchHandler @ 024b72b8
                       catch() { ... } // from try @ 024b72b8 with catch @ 024b72b8
                       catch() { ... } // from try @ 024b76e4 with catch @ 024b72b8
                       catch() { ... } // from try @ 024b772c with catch @ 024b72b8
                       catch() { ... } // from try @ 024b798c with catch @ 024b72b8
                       catch() { ... } // from try @ 024b79a4 with catch @ 024b72b8
                       catch() { ... } // from try @ 024b79f4 with catch @ 024b72b8 */
        thunk_FUN_02134474();
        if ((lVar9 == 0) ||
           (iVar3 = UnityEngine_Mesh__get_vertexCount_438e790(param_1,0),
           iVar3 != *(int *)(lVar9 + 0x18))) {
          uVar5 = UnityEngine_Mesh__get_vertexCount_438e790(param_1,0);
          lVar9 = FUN_02133068(*(undefined8 *)PTR_DAT_04caed88,uVar5);
        }
        *(long *)(lVar10 + 0x20) = lVar9;
        thunk_FUN_02134474((long *)(lVar10 + 0x20),lVar9);
        if (lVar6 != 0) {
          uVar8 = System_Collections_Generic_List_int___ToArray_3a2db00
                            (lVar6,*(undefined8 *)PTR_DAT_04cad6e0);
          *(undefined8 *)(lVar10 + 0x28) = uVar8;
          thunk_FUN_02134474();
          UnityEngine_Mesh__get_bounds_438fac4(auStack_50,param_1,0);
          *(float *)(lVar10 + 0x30) = fStack_48 - fStack_3c;
          UnityEngine_Mesh__get_bounds_438fac4(auStack_50,param_1,0);
          lVar6 = *(long *)puVar1;
          fVar11 = _UNK_00e20a08;
          if (_UNK_00e20a08 <= fStack_3c + fStack_3c) {
            fVar11 = fStack_3c + fStack_3c;
          }
          *(float *)(lVar10 + 0x34) = fVar11;
          lStack_38 = lVar10;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar6 = *(long *)puVar1;
          }
          if (**(long **)(lVar6 + 0xb8) != 0) {
            System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                      (**(long **)(lVar6 + 0xb8),param_1,lStack_38,*(undefined8 *)PTR_DAT_04cbc9e8);
            return lStack_38;
          }
        }
      }
    }
  }
LAB_024b73d8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

