/* IL2CPP: Dino.BusSand.View.VehicleView$$MakeModel
UnityEngine_MeshRenderer_o* Dino_BusSand_View_VehicleView__MakeModel (Dino_BusSand_View_VehicleView_o* __this, System_String_o* meshName, bool open, int32_t lod, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$MakeModel
   UnityEngine_MeshRenderer_o* Dino_BusSand_View_VehicleView__MakeModel
   (Dino_BusSand_View_VehicleView_o* __this, System_String_o* meshName, bool open, int32_t lod,
   const MethodInfo* method); */

long Dino_BusSand_View_VehicleView__MakeModel_23f5a08
               (long param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  
  puVar1 = (undefined8 *)PTR_DAT_04cbdf00;
  puVar6 = PTR_DAT_04cbc868;
  puVar5 = PTR_DAT_04cb6de0;
  puVar4 = PTR_DAT_04cad748;
  if ((bRam0000000004f9cadb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cb6dc0);
    FUN_02132f7c(PTR_DAT_04cb6dc8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cb6dd8);
    FUN_02132f7c(PTR_DAT_04cb6de0);
    FUN_02132f7c(PTR_DAT_04cbd750);
    FUN_02132f7c(PTR_DAT_04cb6de8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cbc460);
    FUN_02132f7c(PTR_DAT_04cbdf00);
    FUN_02132f7c(PTR_DAT_04cbc868);
    bRam0000000004f9cadb = 1;
  }
  if ((param_3 & 1) == 0) {
    puVar1 = (undefined8 *)puVar6;
  }
  uVar14 = *puVar1;
  plVar7 = (long *)FUN_02133068(*(undefined8 *)puVar4,2);
  uVar13 = *(undefined8 *)puVar5;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar8 = System_Type__GetTypeFromHandle_483f0b4(uVar13,0);
  if (plVar7 == (long *)0x0) goto LAB_024f5e58;
  if ((lVar8 != 0) &&
     (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
LAB_024f5e60:
    uVar13 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar13,0);
  }
  puVar4 = PTR_DAT_04cb6de8;
  if ((int)plVar7[3] != 0) {
    plVar7[4] = lVar8;
    thunk_FUN_02134474(plVar7 + 4,lVar8);
    lVar8 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar4,0);
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
    goto LAB_024f5e60;
    puVar4 = PTR_DAT_04caa070;
    if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
      plVar7[5] = lVar8;
      thunk_FUN_02134474(plVar7 + 5,lVar8);
      lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
      UnityEngine_GameObject___ctor_43c2310(lVar8,uVar14,plVar7,0);
      if ((lVar8 != 0) &&
         (lVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0), puVar4 = PTR_DAT_04cab208,
         lVar9 != 0)) {
        UnityEngine_Transform__SetParent_43d1e34(lVar9,*(undefined8 *)(param_1 + 0x40),0,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar9 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
        puVar5 = PTR_DAT_04cbd750;
        puVar4 = PTR_DAT_04cb6dc0;
        if (lVar9 != 0) {
          uVar13 = Dino_BusSand_GameAssets__GetMesh_237d0fc(lVar9,param_2,0);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar5);
          }
          lVar9 = Dino_BusSand_View_MeshLod__Get_23d5d60(uVar13,param_4,0,0);
          lVar10 = UnityEngine_GameObject__GetComponent_object__275a5dc(lVar8,*(undefined8 *)puVar4)
          ;
          puVar5 = PTR_DAT_04cb6dc8;
          puVar4 = PTR_DAT_04ca9ae8;
          if (lVar10 != 0) {
            UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar10,lVar9,0);
            lVar8 = UnityEngine_GameObject__GetComponent_object__275a5dc
                              (lVar8,*(undefined8 *)puVar5);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
            if ((uVar11 & 1) == 0) {
              uVar11 = 1;
            }
            else {
              if (lVar9 == 0) goto LAB_024f5e58;
              uVar11 = UnityEngine_Mesh__get_subMeshCount_436cb4c(lVar9,0);
              uVar11 = uVar11 & 0xffffffff;
            }
            puVar4 = PTR_DAT_04cbc460;
            plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cb6dd8,uVar11);
            iVar2 = *(int *)(param_1 + 0x24);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            puVar4 = PTR_DAT_04cb6dd0;
            if (0 < (int)uVar11) {
              uVar15 = 0;
              param_3 = iVar2 == 2 & param_3;
              lVar9 = 0x20;
              if (iVar2 == 1) {
                param_3 = 1;
              }
              do {
                if (param_3 == uVar15) {
                  uVar3 = *(undefined1 *)(param_1 + 0x28);
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  lVar10 = Dino_BusSand_View_MaterialLibrary__Body_23b975c(uVar3,0);
                }
                else {
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  lVar10 = Dino_BusSand_View_MaterialLibrary__get_Detail_23b9f14(0);
                }
                if (plVar7 == (long *)0x0) goto LAB_024f5e58;
                if ((lVar10 != 0) &&
                   (lVar12 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar12 == 0
                   )) goto LAB_024f5e60;
                if (*(uint *)(plVar7 + 3) <= uVar15) goto LAB_024f5e5c;
                plVar7[uVar15 + 4] = lVar10;
                thunk_FUN_02134474((long)plVar7 + lVar9,lVar10);
                uVar15 = uVar15 + 1;
                lVar9 = lVar9 + 8;
              } while (uVar11 != uVar15);
            }
            if (lVar8 != 0) {
              UnityEngine_Renderer__set_sharedMaterials_43743d4(lVar8,plVar7,0);
              UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar8,1,0);
              UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar8,1,0);
              return lVar8;
            }
          }
        }
      }
LAB_024f5e58:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
LAB_024f5e5c:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

