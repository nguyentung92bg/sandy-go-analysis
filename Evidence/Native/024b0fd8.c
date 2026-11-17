/* IL2CPP: Dino.BusSand.View.GarageView$$Part
UnityEngine_Transform_o* Dino_BusSand_View_GarageView__Part (Dino_BusSand_View_GarageView_o* __this, System_String_o* name, UnityEngine_Mesh_o* mesh, UnityEngine_Material_o* mat, bool castShadow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GarageView$$Part
   UnityEngine_Transform_o* Dino_BusSand_View_GarageView__Part (Dino_BusSand_View_GarageView_o*
   __this, System_String_o* name, UnityEngine_Mesh_o* mesh, UnityEngine_Material_o* mat, bool
   castShadow, const MethodInfo* method); */

long Dino_BusSand_View_GarageView__Part_23b0fd8
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_04cb6de0;
  puVar1 = PTR_DAT_04cad748;
  if ((bRam0000000004f9c96e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dc0);
    FUN_02132f7c(PTR_DAT_04cb6dc8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb6de0);
    FUN_02132f7c(PTR_DAT_04cb6de8);
    FUN_02132f7c(PTR_DAT_04cad748);
    bRam0000000004f9c96e = 1;
  }
  plVar3 = (long *)FUN_02133068(*(undefined8 *)puVar1,2);
  uVar8 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar4 = System_Type__GetTypeFromHandle_483f0b4(uVar8,0);
  if (plVar3 == (long *)0x0) {
LAB_024b1200:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_024b1208:
    uVar8 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar8,0);
  }
  puVar1 = PTR_DAT_04cb6de8;
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_02134474(plVar3 + 4,lVar4);
    lVar4 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar1,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_024b1208;
    puVar1 = PTR_DAT_04caa070;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar4;
      thunk_FUN_02134474(plVar3 + 5,lVar4);
      lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      UnityEngine_GameObject___ctor_43c2310(lVar4,param_2,plVar3,0);
      if ((lVar4 != 0) &&
         (lVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0), puVar1 = PTR_DAT_04cb6dc0,
         lVar5 != 0)) {
        UnityEngine_Transform__SetParent_43d1e34(lVar5,*(undefined8 *)(param_1 + 0x28),0,0);
        lVar5 = UnityEngine_GameObject__GetComponent_object__275a5dc(lVar4,*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_04cb6dc8;
        if (lVar5 != 0) {
          UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar5,param_3,0);
          lVar5 = UnityEngine_GameObject__GetComponent_object__275a5dc(lVar4,*(undefined8 *)puVar1);
          if (lVar5 != 0) {
            UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar5,param_4,0);
            UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar5,param_5 & 1,0);
            UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar5,1,0);
            if ((bRam0000000004fa835b & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf5bd0,0);
              FUN_02132f7c(PTR_DAT_04cf5c60);
              bRam0000000004fa835b = 1;
            }
            puVar1 = PTR_DAT_04cf5c60;
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar5 = *(long *)(lVar4 + 0x10);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
            }
            if (pcRam0000000004fa8408 == (code *)0x0) {
              pcRam0000000004fa8408 = (code *)FUN_02132f40(&UNK_00e3df31);
            }
            uVar7 = (*pcRam0000000004fa8408)(lVar5);
            lVar4 = *(long *)puVar1;
            if (*(long *)(lVar4 + 0x38) == 0) {
              FUN_0216b4cc(lVar4);
            }
            if (uVar7 != 0) {
              if (cRam0000000004f9d849 == '\0') {
                FUN_02132f7c(&DAT_04ddbd40);
                cRam0000000004f9d849 = '\x01';
              }
              if ((uVar7 & 1) == 0) {
                plVar3 = (long *)System_IntPtr__op_Explicit_487833c();
                lVar5 = *plVar3;
              }
              else {
                lVar5 = System_Runtime_InteropServices_GCHandle__GetTarget_476c7dc(uVar7,0);
              }
              lVar4 = **(long **)(lVar4 + 0x38);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0216b470(lVar4);
              }
              if (lVar5 != 0) {
                lVar6 = thunk_FUN_0216e7a0(lVar5,lVar4);
                if (lVar6 != 0) {
                  return lVar6;
                }
                    /* WARNING: Subroutine does not return */
                FUN_021335a4(lVar5,lVar4);
              }
            }
            return 0;
          }
        }
      }
      goto LAB_024b1200;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

