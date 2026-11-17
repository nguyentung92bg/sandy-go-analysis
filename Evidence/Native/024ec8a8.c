/* IL2CPP: Dino.BusSand.View.SuctionBeams$$Create
Dino_BusSand_View_SuctionBeams_o* Dino_BusSand_View_SuctionBeams__Create (UnityEngine_Transform_o* parent, UnityEngine_Camera_o* cam, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.SuctionBeams$$Create
   Dino_BusSand_View_SuctionBeams_o* Dino_BusSand_View_SuctionBeams__Create
   (UnityEngine_Transform_o* parent, UnityEngine_Camera_o* cam, const MethodInfo* method); */

long Dino_BusSand_View_SuctionBeams__Create_23ec8a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar2 = PTR_DAT_04cb6de0;
  puVar1 = PTR_DAT_04cad748;
  if ((bRam0000000004f9caa3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cbdc50);
    FUN_02132f7c(PTR_DAT_04cb6dc0);
    FUN_02132f7c(PTR_DAT_04cb6dc8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04cb6de0);
    FUN_02132f7c(PTR_DAT_04cb6de8);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cbdc58);
    FUN_02132f7c(PTR_DAT_04cbdc60);
    FUN_02132f7c(PTR_DAT_04cbdc68);
    bRam0000000004f9caa3 = 1;
  }
  plVar5 = (long *)FUN_02133068(*(undefined8 *)puVar1,2);
  uVar10 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar6 = System_Type__GetTypeFromHandle_483f0b4(uVar10,0);
  if (plVar5 == (long *)0x0) {
LAB_024ecbfc:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_024ecc04:
    uVar10 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar10,0);
  }
  puVar1 = PTR_DAT_04cb6de8;
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar6;
    thunk_FUN_02134474(plVar5 + 4,lVar6);
    lVar6 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar1,0);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_024ecc04;
    puVar2 = PTR_DAT_04cbdc68;
    puVar1 = PTR_DAT_04caa070;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
      plVar5[5] = lVar6;
      thunk_FUN_02134474(plVar5 + 5,lVar6);
      lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      UnityEngine_GameObject___ctor_43c2310(lVar6,*(undefined8 *)puVar2,plVar5,0);
      if ((lVar6 != 0) &&
         (lVar7 = UnityEngine_GameObject__get_transform_43c1048(lVar6,0), puVar1 = PTR_DAT_04cbdc50,
         lVar7 != 0)) {
        UnityEngine_Transform__SetParent_43d1e34(lVar7,param_1,0,0);
        lVar7 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar6,*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_04caa148;
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x38) = param_2;
          thunk_FUN_02134474((undefined8 *)(lVar7 + 0x38),param_2);
          lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
          UnityEngine_Mesh___ctor_4389e48(lVar8,0);
          if (lVar8 != 0) {
            UnityEngine_Object__set_name_43c72ec(lVar8,*(undefined8 *)PTR_DAT_04cbdc58,0);
            plVar5 = (long *)(lVar7 + 0x28);
            *plVar5 = lVar8;
            thunk_FUN_02134474(plVar5,lVar8);
            puVar1 = PTR_DAT_04cb6dc0;
            if (*plVar5 != 0) {
              UnityEngine_Mesh__MarkDynamic_439609c(*plVar5,0);
              lVar8 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                (lVar6,*(undefined8 *)puVar1);
              puVar4 = PTR_DAT_04cbdc60;
              puVar3 = PTR_DAT_04cb6dc8;
              puVar2 = PTR_DAT_04cab588;
              puVar1 = PTR_DAT_04cab208;
              if (lVar8 != 0) {
                UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar8,*plVar5,0);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar10 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)puVar4,0);
                uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                UnityEngine_Material___ctor_437b5a8(uVar9,uVar10,0);
                *(undefined8 *)(lVar7 + 0x30) = uVar9;
                thunk_FUN_02134474((undefined8 *)(lVar7 + 0x30),uVar9);
                lVar6 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                  (lVar6,*(undefined8 *)puVar3);
                if (lVar6 != 0) {
                  UnityEngine_Renderer__set_sharedMaterial_43743cc
                            (lVar6,*(undefined8 *)(lVar7 + 0x30),0);
                  UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar6,0,0);
                  UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar6,0,0);
                  return lVar7;
                }
              }
            }
          }
        }
      }
      goto LAB_024ecbfc;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

