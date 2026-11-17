/* IL2CPP: Dino.BusSand.View.EndSuctionCue$$NewQuad
UnityEngine_GameObject_o* Dino_BusSand_View_EndSuctionCue__NewQuad (System_String_o* name, UnityEngine_Transform_o* parent, UnityEngine_Material_o* mat, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.EndSuctionCue$$NewQuad
   UnityEngine_GameObject_o* Dino_BusSand_View_EndSuctionCue__NewQuad (System_String_o* name,
   UnityEngine_Transform_o* parent, UnityEngine_Material_o* mat, const MethodInfo* method); */

long Dino_BusSand_View_EndSuctionCue__NewQuad_2395c14
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_04caa070;
  if ((bRam0000000004f9c8e2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc148);
    FUN_02132f7c(PTR_DAT_04cb72d0);
    FUN_02132f7c(PTR_DAT_04cb72d8);
    FUN_02132f7c(PTR_DAT_04caa070);
    bRam0000000004f9c8e2 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_43c20cc(lVar4,param_1,0);
  if (((param_2 != 0) &&
      (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(param_2,0), lVar5 != 0)) &&
     (uVar3 = UnityEngine_GameObject__get_layer_43c1118(lVar5,0), lVar4 != 0)) {
    UnityEngine_GameObject__set_layer_43c11cc(lVar4,uVar3,0);
    lVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
    puVar2 = PTR_DAT_04cbc148;
    puVar1 = PTR_DAT_04cb72d0;
    if (lVar5 != 0) {
      UnityEngine_Transform__SetParent_43d1e34(lVar5,param_2,0,0);
      lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar4,*(undefined8 *)puVar1);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar6 = Dino_BusSand_View_EndSuctionCue__QuadMesh_2396a74();
      puVar1 = PTR_DAT_04cb72d8;
      if (lVar5 != 0) {
        UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar5,uVar6,0);
        lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar4,*(undefined8 *)puVar1);
        if (lVar5 != 0) {
          UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar5,param_3,0);
          UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar5,0,0);
          UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar5,0,0);
          UnityEngine_GameObject__SetActive_43c1408(lVar4,0,0);
          return lVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

