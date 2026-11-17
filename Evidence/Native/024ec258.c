/* IL2CPP: Dino.BusSand.View.StaticMerge$$Build
UnityEngine_Mesh_o* Dino_BusSand_View_StaticMerge__Build (System_String_o* name, System_Collections_Generic_List_Vector3__o* v, System_Collections_Generic_List_Vector3__o* n, System_Collections_Generic_List_int__o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.StaticMerge$$Build
   UnityEngine_Mesh_o* Dino_BusSand_View_StaticMerge__Build (System_String_o* name,
   System_Collections_Generic_List_Vector3__o* v, System_Collections_Generic_List_Vector3__o* n,
   System_Collections_Generic_List_int__o* t, const MethodInfo* method); */

long Dino_BusSand_View_StaticMerge__Build_23ec258
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
               undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar1 = PTR_DAT_04caa148;
  if ((bRam0000000004f9caa1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04caa1a8);
    FUN_02132f7c(PTR_DAT_04cae230);
    FUN_02132f7c(PTR_DAT_04cad718);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9caa1 = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_Mesh___ctor_4389e48(lVar5,0);
  if (lVar5 != 0) {
    UnityEngine_Object__set_name_43c72ec(lVar5,param_4,0);
    UnityEngine_Mesh__SetVertices_439178c(lVar5,param_5,0);
    UnityEngine_Mesh__SetNormals_4391a7c(lVar5,param_6,0);
    UnityEngine_Mesh__SetTriangles_4394c90(lVar5,param_7,0,0);
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    UnityEngine_Mesh___ctor_4389e48(lVar6,0);
    if (lVar6 != 0) {
      UnityEngine_Mesh__SetVertices_439178c(lVar6,param_5,0);
      UnityEngine_Mesh__SetTriangles_4394c90(lVar6,param_7,0,0);
      UnityEngine_Mesh__RecalculateNormals_4395d8c(lVar6,0);
      lVar7 = UnityEngine_Mesh__get_normals_4390ea8(lVar6,0);
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        if (param_6 != 0) {
          fVar11 = *(float *)(lVar7 + 0x24);
          fVar10 = *(float *)(lVar7 + 0x28);
          fVar12 = *(float *)(lVar7 + 0x20);
          fVar9 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                   (param_6,0,*(undefined8 *)PTR_DAT_04caa1a8);
          puVar2 = PTR_DAT_04cae230;
          puVar1 = PTR_DAT_04cad718;
          if (fVar10 * param_3 + fVar12 * fVar9 + fVar11 * param_2 < 0.0) {
            if (param_7 == 0) goto LAB_024ec4c4;
            if (0 < *(int *)(param_7 + 0x18)) {
              iVar8 = 0;
              do {
                uVar3 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                  (param_7,iVar8 + 1,*(undefined8 *)puVar2);
                uVar4 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                  (param_7,iVar8 + 2,*(undefined8 *)puVar2);
                System_Collections_Generic_List_int___set_Item_3a2bdc8
                          (param_7,iVar8 + 1,uVar4,*(undefined8 *)puVar1);
                System_Collections_Generic_List_int___set_Item_3a2bdc8
                          (param_7,iVar8 + 2,uVar3,*(undefined8 *)puVar1);
                iVar8 = iVar8 + 3;
              } while (iVar8 < *(int *)(param_7 + 0x18));
            }
            UnityEngine_Mesh__SetTriangles_4394c90(lVar5,param_7,0,0);
          }
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          UnityEngine_Object__Destroy_43c8114(lVar6,0);
          UnityEngine_Mesh__RecalculateBounds_4395ccc(lVar5,0);
          return lVar5;
        }
      }
    }
  }
LAB_024ec4c4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

