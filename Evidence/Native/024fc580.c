/* IL2CPP: Dino.BusSand.View.VehicleView$$AddTickPart
void Dino_BusSand_View_VehicleView__AddTickPart (UnityEngine_Transform_o* root, System_String_o* name, UnityEngine_Mesh_o* mesh, UnityEngine_Material_o* mat, float back, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$AddTickPart
   void Dino_BusSand_View_VehicleView__AddTickPart (UnityEngine_Transform_o* root, System_String_o*
   name, UnityEngine_Mesh_o* mesh, UnityEngine_Material_o* mat, float back, const MethodInfo*
   method); */

void Dino_BusSand_View_VehicleView__AddTickPart_23fc580
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_04cb6de0;
  puVar1 = PTR_DAT_04cad748;
  if ((bRam0000000004f9cae7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dc0);
    FUN_02132f7c(PTR_DAT_04cb6dc8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb6de0);
    FUN_02132f7c(PTR_DAT_04cb6de8);
    FUN_02132f7c(PTR_DAT_04cad748);
    bRam0000000004f9cae7 = 1;
  }
  plVar3 = (long *)FUN_02133068(*(undefined8 *)puVar1,2);
  uVar6 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar4 = System_Type__GetTypeFromHandle_483f0b4(uVar6,0);
  if (plVar3 == (long *)0x0) {
LAB_024fc7c0:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_024fc7c8:
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
    goto LAB_024fc7c8;
    puVar1 = PTR_DAT_04caa070;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar4;
      thunk_FUN_02134474(plVar3 + 5,lVar4);
      lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      UnityEngine_GameObject___ctor_43c2310(lVar4,param_3,plVar3,0);
      if ((lVar4 != 0) &&
         (lVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0), lVar5 != 0)) {
        UnityEngine_Transform__SetParent_43d1e34(lVar5,param_2,0,0);
        lVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
        puVar1 = PTR_DAT_04cb6dc0;
        if (lVar5 != 0) {
          UnityEngine_Transform__set_localPosition_43cfda8(0,0,param_1,lVar5,0);
          lVar5 = UnityEngine_GameObject__GetComponent_object__275a5dc(lVar4,*(undefined8 *)puVar1);
          puVar1 = PTR_DAT_04cb6dc8;
          if (lVar5 != 0) {
            UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar5,param_4,0);
            lVar4 = UnityEngine_GameObject__GetComponent_object__275a5dc
                              (lVar4,*(undefined8 *)puVar1);
            if (lVar4 != 0) {
              UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar4,param_5,0);
              UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar4,0,0);
              if ((bRam0000000004fa68c8 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cf67a0,0,0);
                bRam0000000004fa68c8 = 1;
              }
              if (lVar4 != 0) {
                lVar5 = *(long *)(lVar4 + 0x10);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
                }
                if (pcRam0000000004fa6950 == (code *)0x0) {
                  pcRam0000000004fa6950 = (code *)FUN_02132f40(&UNK_00e26033);
                }
                    /* WARNING: Could not recover jumptable at 0x04473e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000004fa6950)(lVar5,0);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
          }
        }
      }
      goto LAB_024fc7c0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

