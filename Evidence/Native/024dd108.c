/* IL2CPP: Dino.BusSand.View.PropKit$$Spawn
UnityEngine_MeshRenderer_o* Dino_BusSand_View_PropKit__Spawn (UnityEngine_Transform_o* parent, UnityEngine_Mesh_o* mesh, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PropKit$$Spawn
   UnityEngine_MeshRenderer_o* Dino_BusSand_View_PropKit__Spawn (UnityEngine_Transform_o* parent,
   UnityEngine_Mesh_o* mesh, System_String_o* name, const MethodInfo* method); */

long Dino_BusSand_View_PropKit__Spawn_23dd108(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam0000000004f9ca4a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dc0);
    FUN_02132f7c(PTR_DAT_04cb6dc8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb6de0);
    FUN_02132f7c(PTR_DAT_04cb6de8);
    FUN_02132f7c(PTR_DAT_04cbd088);
    FUN_02132f7c(PTR_DAT_04cad748);
    bRam0000000004f9ca4a = 1;
  }
  if (param_3 == 0) {
    if (param_2 == 0) goto LAB_024dd384;
    param_3 = UnityEngine_Object__get_name_43c71a4(param_2,0);
  }
  puVar1 = PTR_DAT_04cb6de0;
  plVar3 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,2);
  uVar6 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar4 = System_Type__GetTypeFromHandle_483f0b4(uVar6,0);
  if (plVar3 == (long *)0x0) {
LAB_024dd384:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_024dd38c:
    uVar6 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar6,0);
  }
  puVar1 = PTR_DAT_04cb6de8;
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_02134474(plVar3 + 4,lVar4);
    lVar4 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar1,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_024dd38c;
    puVar1 = PTR_DAT_04caa070;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar4;
      thunk_FUN_02134474(plVar3 + 5,lVar4);
      lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      UnityEngine_GameObject___ctor_43c2310(lVar4,param_3,plVar3,0);
      if ((lVar4 != 0) &&
         (lVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0), puVar1 = PTR_DAT_04cb6dc0,
         lVar5 != 0)) {
        UnityEngine_Transform__SetParent_43d1e34(lVar5,param_1,0,0);
        lVar5 = UnityEngine_GameObject__GetComponent_object__275a5dc(lVar4,*(undefined8 *)puVar1);
        puVar2 = PTR_DAT_04cbd088;
        puVar1 = PTR_DAT_04cb6dc8;
        if (lVar5 != 0) {
          UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar5,param_2,0);
          lVar4 = UnityEngine_GameObject__GetComponent_object__275a5dc(lVar4,*(undefined8 *)puVar1);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar6 = Dino_BusSand_View_PropKit__get_Material_23dcae0();
          if (lVar4 != 0) {
            UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar4,uVar6,0);
            UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar4,0,0);
            UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar4,0,0);
            UnityEngine_Renderer__set_lightProbeUsage_4373e90(lVar4,0,0);
            UnityEngine_Renderer__set_reflectionProbeUsage_4373f54(lVar4,0,0);
            return lVar4;
          }
        }
      }
      goto LAB_024dd384;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

