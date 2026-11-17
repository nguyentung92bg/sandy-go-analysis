/* IL2CPP: Dino.BusSand.View.WorldView$$Box
UnityEngine_MeshRenderer_o* Dino_BusSand_View_WorldView__Box (Dino_BusSand_View_WorldView_o* __this, System_String_o* name, UnityEngine_Vector3_o centre, UnityEngine_Vector3_o size, UnityEngine_Material_o* mat, bool castShadow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.WorldView$$Box
   UnityEngine_MeshRenderer_o* Dino_BusSand_View_WorldView__Box (Dino_BusSand_View_WorldView_o*
   __this, System_String_o* name, UnityEngine_Vector3_o centre, UnityEngine_Vector3_o size,
   UnityEngine_Material_o* mat, bool castShadow, const MethodInfo* method); */

long Dino_BusSand_View_WorldView__Box_2405ee4
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,uint param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_04cb6de0;
  puVar1 = PTR_DAT_04cad748;
  if ((bRam0000000004f9cb20 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dc0);
    FUN_02132f7c(PTR_DAT_04cb6dc8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb6de0);
    FUN_02132f7c(PTR_DAT_04cb6de8);
    FUN_02132f7c(PTR_DAT_04cad748);
    bRam0000000004f9cb20 = 1;
  }
  plVar3 = (long *)FUN_02133068(*(undefined8 *)puVar1,2);
  uVar6 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar4 = System_Type__GetTypeFromHandle_483f0b4(uVar6,0);
  if (plVar3 == (long *)0x0) {
LAB_02506198:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_025061a0:
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
    goto LAB_025061a0;
    puVar1 = PTR_DAT_04caa070;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar4;
      thunk_FUN_02134474(plVar3 + 5,lVar4);
      lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      UnityEngine_GameObject___ctor_43c2310(lVar4,param_8,plVar3,0);
      if (lVar4 != 0) {
        lVar5 = UnityEngine_GameObject__GetComponent_object__275a5dc
                          (lVar4,*(undefined8 *)PTR_DAT_04cb6dc0);
        uVar6 = Dino_BusSand_View_StaticMerge__get_Cube_23ebab0(0);
        if (lVar5 != 0) {
          UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar5,uVar6,0);
          lVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
          uVar6 = UnityEngine_Component__get_transform_43bcd18(param_7,0);
          if (lVar5 != 0) {
            UnityEngine_Transform__SetParent_43d1e34(lVar5,uVar6,0,0);
            lVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
            if (lVar5 != 0) {
              UnityEngine_Transform__set_localPosition_43cfda8(param_1,param_2,param_3,lVar5,0);
              lVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
              puVar1 = PTR_DAT_04cb6dc8;
              if (lVar5 != 0) {
                UnityEngine_Transform__set_localScale_43d1be0(param_4,param_5,param_6,lVar5,0);
                lVar4 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                  (lVar4,*(undefined8 *)puVar1);
                if (lVar4 != 0) {
                  UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar4,param_9,0);
                  UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar4,param_10 & 1,0);
                  UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar4,1,0);
                  return lVar4;
                }
              }
            }
          }
        }
      }
      goto LAB_02506198;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

