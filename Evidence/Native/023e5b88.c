/* IL2CPP: Dino.BusSand.App.UI.HomePuffs$$Renderer
UnityEngine_Mesh_o* Dino_BusSand_App_UI_HomePuffs__Renderer (UnityEngine_Transform_o* parent, System_String_o* name, int32_t layer, UnityEngine_Material_o* mat, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomePuffs$$Renderer
   UnityEngine_Mesh_o* Dino_BusSand_App_UI_HomePuffs__Renderer (UnityEngine_Transform_o* parent,
   System_String_o* name, int32_t layer, UnityEngine_Material_o* mat, const MethodInfo* method); */

long Dino_BusSand_App_UI_HomePuffs__Renderer_22e5b88
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  
  puVar1 = PTR_DAT_04caa070;
  if ((bRam0000000004f9c423 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb72d0);
    FUN_02132f7c(PTR_DAT_04cb72d8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04caa148);
    bRam0000000004f9c423 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_43c20cc(lVar2,param_2,0);
  if (lVar2 != 0) {
    UnityEngine_GameObject__set_layer_43c11cc(lVar2,param_3,0);
    lVar3 = UnityEngine_GameObject__get_transform_43c1048(lVar2,0);
    if (lVar3 != 0) {
      UnityEngine_Transform__SetParent_43d1e34(lVar3,param_1,0,0);
      lVar3 = UnityEngine_GameObject__get_transform_43c1048(lVar2,0);
      if (cRam0000000004f9b65d == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65d = '\x01';
      }
      puVar1 = PTR_DAT_04caa148;
      if (lVar3 != 0) {
        puVar5 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
        UnityEngine_Transform__set_position_43d0f1c(*puVar5,puVar5[1],puVar5[2],lVar3,0);
        lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
        UnityEngine_Mesh___ctor_4389e48(lVar3,0);
        puVar1 = PTR_DAT_04cb72d0;
        if (lVar3 != 0) {
          UnityEngine_Object__set_name_43c72ec(lVar3,param_2,0);
          UnityEngine_Mesh__MarkDynamic_439609c(lVar3,0);
          lVar4 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar2,*(undefined8 *)puVar1);
          puVar1 = PTR_DAT_04cb72d8;
          if (lVar4 != 0) {
            UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar4,lVar3,0);
            lVar2 = UnityEngine_GameObject__AddComponent_object__275a54c
                              (lVar2,*(undefined8 *)puVar1);
            if (lVar2 != 0) {
              UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar2,param_4,0);
              UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar2,0,0);
              UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar2,0,0);
              UnityEngine_Renderer__set_lightProbeUsage_4373e90(lVar2,0,0);
              UnityEngine_Renderer__set_reflectionProbeUsage_4373f54(lVar2,0,0);
              return lVar3;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

