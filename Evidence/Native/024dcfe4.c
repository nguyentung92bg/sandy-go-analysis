/* IL2CPP: Dino.BusSand.View.PropKit.MeshBuilder$$ToMesh
UnityEngine_Mesh_o* Dino_BusSand_View_PropKit_MeshBuilder__ToMesh (Dino_BusSand_View_PropKit_MeshBuilder_o* __this, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PropKit.MeshBuilder$$ToMesh
   UnityEngine_Mesh_o* Dino_BusSand_View_PropKit_MeshBuilder__ToMesh
   (Dino_BusSand_View_PropKit_MeshBuilder_o* __this, System_String_o* name, const MethodInfo*
   method); */

long Dino_BusSand_View_PropKit_MeshBuilder__ToMesh_23dcfe4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04caa148;
  if ((bRam0000000004f9ca62 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04caa148);
    bRam0000000004f9ca62 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_Mesh___ctor_4389e48(lVar2,0);
  if (lVar2 != 0) {
    UnityEngine_Object__set_name_43c72ec(lVar2,param_2,0);
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != 0) {
      if (65000 < *(int *)(lVar3 + 0x18)) {
        UnityEngine_Mesh__set_indexFormat_438a024(lVar2,1,0);
        lVar3 = *(long *)(param_1 + 0x10);
      }
      UnityEngine_Mesh__SetVertices_439178c(lVar2,lVar3,0);
      UnityEngine_Mesh__SetNormals_4391a7c(lVar2,*(undefined8 *)(param_1 + 0x18),0);
      UnityEngine_Mesh__SetColors_439205c(lVar2,*(undefined8 *)(param_1 + 0x20),0);
      UnityEngine_Mesh__SetUVs_4392594(lVar2,1,*(undefined8 *)(param_1 + 0x28),0);
      UnityEngine_Mesh__SetTriangles_4394c90(lVar2,*(undefined8 *)(param_1 + 0x30),0,0);
      UnityEngine_Mesh__RecalculateBounds_4395ccc(lVar2,0);
      UnityEngine_Mesh__UploadMeshData_43960c0(lVar2,0,0);
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

