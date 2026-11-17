/* IL2CPP: Dino.BusSand.View.StaticMerge$$Spawn
void Dino_BusSand_View_StaticMerge__Spawn (UnityEngine_Transform_o* root, UnityEngine_Mesh_o* m, UnityEngine_Material_o* mat, int32_t shadows, bool receive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.StaticMerge$$Spawn
   void Dino_BusSand_View_StaticMerge__Spawn (UnityEngine_Transform_o* root, UnityEngine_Mesh_o* m,
   UnityEngine_Material_o* mat, int32_t shadows, bool receive, const MethodInfo* method); */

void Dino_BusSand_View_StaticMerge__Spawn_23eb67c
               (undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((bRam0000000004f9ca9e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dc0);
    FUN_02132f7c(PTR_DAT_04cb6dc8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb6de0);
    FUN_02132f7c(PTR_DAT_04cb6de8);
    FUN_02132f7c(PTR_DAT_04cad748);
    bRam0000000004f9ca9e = 1;
  }
  puVar2 = PTR_DAT_04cb6de0;
  puVar1 = PTR_DAT_04cad748;
  if (param_2 != 0) {
    uVar3 = UnityEngine_Object__get_name_43c71a4(param_2,0);
    plVar4 = (long *)FUN_02133068(*(undefined8 *)puVar1,2);
    uVar7 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
    }
    lVar5 = System_Type__GetTypeFromHandle_483f0b4(uVar7,0);
    if (plVar4 != (long *)0x0) {
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_024eb8b8:
                    /* try { // try from 024eb8b8 to 025eb8db has its CatchHandler @ 024ebc34 */
        uVar3 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar3,0);
      }
      puVar1 = PTR_DAT_04cb6de8;
                    /* try { // try from 024eb784 to 025eb7ab has its CatchHandler @ 024ebc5c */
      if ((int)plVar4[3] != 0) {
        plVar4[4] = lVar5;
        thunk_FUN_02134474(plVar4 + 4,lVar5);
        lVar5 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar1,0);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
        goto LAB_024eb8b8;
        puVar1 = PTR_DAT_04caa070;
        if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
                    /* try { // try from 024eb7e8 to 025eb813 has its CatchHandler @ 024ebc58 */
          plVar4[5] = lVar5;
          thunk_FUN_02134474(plVar4 + 5,lVar5);
          lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
          UnityEngine_GameObject___ctor_43c2310(lVar5,uVar3,plVar4,0);
          if ((lVar5 != 0) &&
             (lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar5,0),
             puVar1 = PTR_DAT_04cb6dc0, lVar6 != 0)) {
            UnityEngine_Transform__SetParent_43d1e34(lVar6,param_1,0,0);
            lVar6 = UnityEngine_GameObject__GetComponent_object__275a5dc
                              (lVar5,*(undefined8 *)puVar1);
            puVar1 = PTR_DAT_04cb6dc8;
            if (lVar6 != 0) {
                    /* try { // try from 024eb848 to 025eb867 has its CatchHandler @ 024ebc54 */
              UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar6,param_2,0);
              lVar5 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                (lVar5,*(undefined8 *)puVar1);
                    /* try { // try from 024eb868 to 025eb877 has its CatchHandler @ 024ebc38 */
              if (lVar5 != 0) {
                UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar5,param_3,0);
                UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar5,param_4,0);
                if ((bRam0000000004fa68c8 & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cf67a0,param_5 & 1,0);
                  bRam0000000004fa68c8 = 1;
                }
                if (lVar5 != 0) {
                  lVar6 = *(long *)(lVar5 + 0x10);
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar5,0);
                  }
                  if (pcRam0000000004fa6950 == (code *)0x0) {
                    pcRam0000000004fa6950 = (code *)FUN_02132f40(&UNK_00e26033);
                  }
                    /* WARNING: Could not recover jumptable at 0x04473e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000004fa6950)(lVar6,param_5 & 1);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
            }
          }
          goto LAB_024eb8b0;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_024eb8b0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

