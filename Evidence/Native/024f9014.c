/* IL2CPP: Dino.BusSand.View.VehicleView$$ShadowMesh
UnityEngine_Mesh_o* Dino_BusSand_View_VehicleView__ShadowMesh (Dino_BusSand_ModelEntry_o* m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$ShadowMesh
   UnityEngine_Mesh_o* Dino_BusSand_View_VehicleView__ShadowMesh (Dino_BusSand_ModelEntry_o* m,
   const MethodInfo* method); */

long Dino_BusSand_View_VehicleView__ShadowMesh_23f9014(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lStack_38;
  
  puVar3 = PTR_DAT_04cbc460;
  if ((bRam0000000004f9cad5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb7f8);
    FUN_02132f7c(PTR_DAT_04cbd8d0);
    FUN_02132f7c(PTR_DAT_04cbc9f0);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc460);
    FUN_02132f7c(PTR_DAT_04cbdf68);
    bRam0000000004f9cad5 = 1;
  }
  lVar7 = *(long *)puVar3;
  lStack_38 = 0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar3;
  }
  if ((param_1 != 0) && (lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20), lVar7 != 0)) {
    uVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (lVar7,*(undefined8 *)(param_1 + 0x10),&lStack_38,
                       *(undefined8 *)PTR_DAT_04cbb7f8);
    lVar7 = lStack_38;
    if ((uVar8 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
      if ((uVar8 & 1) != 0) {
        return lStack_38;
      }
    }
    puVar1 = PTR_DAT_04cbdf68;
    lVar10 = *(long *)(param_1 + 0x18);
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa148);
    UnityEngine_Mesh___ctor_4389e48(lVar7,0);
    uVar9 = System_String__Concat_46c82e0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)puVar1,0);
    if ((lVar7 != 0) &&
       (UnityEngine_Object__set_name_43c72ec(lVar7,uVar9,0), lStack_38 = lVar7, lVar10 != 0)) {
      uVar4 = UnityEngine_Mesh__get_indexFormat_4389f70(lVar10,0);
      UnityEngine_Mesh__set_indexFormat_438a024(lVar7,uVar4,0);
      lVar7 = lStack_38;
      uVar9 = UnityEngine_Mesh__get_vertices_4390dfc(lVar10,0);
      if (lVar7 != 0) {
        UnityEngine_Mesh__SetVertices_439187c(lVar7,uVar9,0);
        lVar7 = lStack_38;
        uVar9 = UnityEngine_Mesh__get_normals_4390ea8(lVar10,0);
        puVar2 = PTR_DAT_04cad6e8;
        puVar1 = PTR_DAT_04caa1c8;
        if (lVar7 != 0) {
          UnityEngine_Mesh__SetNormals_4391b6c(lVar7,uVar9,0);
          lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
          System_Collections_Generic_List_int____ctor_3a2b7dc(lVar7,*(undefined8 *)puVar2);
          iVar5 = UnityEngine_Mesh__get_subMeshCount_436cb4c(lVar10,0);
          puVar1 = PTR_DAT_04cbc9f0;
          if (0 < iVar5) {
            iVar5 = 0;
            do {
              uVar9 = UnityEngine_Mesh__GetIndices_4394384(lVar10,iVar5,0);
              if (lVar7 == 0) goto LAB_024f92e8;
              System_Collections_Generic_List_int___AddRange_3a2c278
                        (lVar7,uVar9,*(undefined8 *)puVar1);
              iVar5 = iVar5 + 1;
              iVar6 = UnityEngine_Mesh__get_subMeshCount_436cb4c(lVar10,0);
            } while (iVar5 < iVar6);
          }
          if (((lStack_38 != 0) &&
              (UnityEngine_Mesh__SetTriangles_4394c90(lStack_38,lVar7,0,0), lStack_38 != 0)) &&
             (UnityEngine_Mesh__RecalculateBounds_4395ccc(lStack_38,0), lStack_38 != 0)) {
            UnityEngine_Mesh__UploadMeshData_43960c0(lStack_38,1,0);
            lVar7 = *(long *)puVar3;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar7 = *(long *)puVar3;
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
            if (lVar7 != 0) {
              System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                        (lVar7,*(undefined8 *)(param_1 + 0x10),lStack_38,
                         *(undefined8 *)PTR_DAT_04cbd8d0);
              return lStack_38;
            }
          }
        }
      }
    }
  }
LAB_024f92e8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

