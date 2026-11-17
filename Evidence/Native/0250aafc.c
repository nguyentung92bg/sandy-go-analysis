/* IL2CPP: Dino.BusSand.View.WorldView$$PlanterModel
UnityEngine_MeshRenderer_o* Dino_BusSand_View_WorldView__PlanterModel (Dino_BusSand_View_WorldView_o* __this, UnityEngine_Vector3_o pos, UnityEngine_Quaternion_o rot, UnityEngine_Vector3_o scale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.WorldView$$PlanterModel
   UnityEngine_MeshRenderer_o* Dino_BusSand_View_WorldView__PlanterModel
   (Dino_BusSand_View_WorldView_o* __this, UnityEngine_Vector3_o pos, UnityEngine_Quaternion_o rot,
   UnityEngine_Vector3_o scale, const MethodInfo* method); */

long Dino_BusSand_View_WorldView__PlanterModel_240aafc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,float param_5
               ,float param_6,float param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  
  puVar2 = PTR_DAT_04cbe348;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9cb1d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbe350);
    FUN_02132f7c(PTR_DAT_04cbe348);
    bRam0000000004f9cb1d = 1;
  }
  lVar9 = Dino_BusSand_View_WorldView__Model_24054f0
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(undefined8 *)puVar2,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
  puVar1 = PTR_DAT_04cab208;
  if ((uVar10 & 1) != 0) {
    return lVar9;
  }
  uVar11 = *(undefined8 *)PTR_DAT_04cbe350;
  fVar17 = param_4;
  if ((bRam0000000004f9cb12 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cb6dc0);
    FUN_02132f7c(PTR_DAT_04cb6dc8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb6dd8);
    FUN_02132f7c(PTR_DAT_04cb6de0);
    FUN_02132f7c(PTR_DAT_04cb6de8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cbc2b8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9cb12 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar9 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
  if (lVar9 != 0) {
    lVar9 = Dino_BusSand_GameAssets__GetModel_237d214(lVar9,uVar11,0);
    if (lVar9 == 0) {
      return 0;
    }
    plVar5 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,2);
    uVar4 = *(undefined8 *)PTR_DAT_04cb6de0;
    if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
    }
    lVar6 = System_Type__GetTypeFromHandle_483f0b4(uVar4,0);
    if (plVar5 != (long *)0x0) {
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_02505a08:
        uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar11,0);
      }
      if ((int)plVar5[3] != 0) {
        plVar5[4] = lVar6;
        thunk_FUN_02134474(plVar5 + 4,lVar6);
        lVar6 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)PTR_DAT_04cb6de8,0);
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
        goto LAB_02505a08;
        if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
          plVar5[5] = lVar6;
          thunk_FUN_02134474(plVar5 + 5,lVar6);
          lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
          UnityEngine_GameObject___ctor_43c2310(lVar6,uVar11,plVar5,0);
          if (lVar6 != 0) {
            lVar7 = UnityEngine_GameObject__get_transform_43c1048(lVar6,0);
            uVar11 = UnityEngine_Component__get_transform_43bcd18(param_8,0);
            if (lVar7 != 0) {
              UnityEngine_Transform__SetParent_43d1e34(lVar7,uVar11,0,0);
              lVar7 = UnityEngine_GameObject__get_transform_43c1048(lVar6,0);
              if (lVar7 != 0) {
                UnityEngine_Transform__set_localPosition_43cfda8(param_1,param_2,param_3,lVar7,0);
                lVar7 = UnityEngine_GameObject__get_transform_43c1048(lVar6,0);
                fVar16 = 0.0;
                fVar15 = _UNK_00e2082c;
                fVar14 = (float)UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                                          (0,_UNK_00e2082c,0,0);
                if (lVar7 != 0) {
                  UnityEngine_Transform__set_localRotation_43d156c
                            ((param_5 * fVar16 + param_7 * fVar14 + param_4 * fVar17) -
                             param_6 * fVar15,
                             (param_6 * fVar14 + param_7 * fVar15 + param_5 * fVar17) -
                             param_4 * fVar16,
                             (param_4 * fVar15 + param_7 * fVar16 + param_6 * fVar17) -
                             param_5 * fVar14,
                             ((param_7 * fVar17 - param_4 * fVar14) - param_5 * fVar15) -
                             param_6 * fVar16,lVar7,0);
                  lVar7 = UnityEngine_GameObject__get_transform_43c1048(lVar6,0);
                  if (lVar7 != 0) {
                    UnityEngine_Transform__set_localScale_43d1be0
                              (uStack0000000000000000,uStack0000000000000004,in_stack_00000008,lVar7
                               ,0);
                    lVar7 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                      (lVar6,*(undefined8 *)PTR_DAT_04cb6dc0);
                    if (lVar7 != 0) {
                      UnityEngine_MeshFilter__set_sharedMesh_4389470
                                (lVar7,*(undefined8 *)(lVar9 + 0x18),0);
                      lVar6 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                        (lVar6,*(undefined8 *)PTR_DAT_04cb6dc8);
                      if (*(long *)(lVar9 + 0x18) != 0) {
                        uVar3 = UnityEngine_Mesh__get_subMeshCount_436cb4c
                                          (*(long *)(lVar9 + 0x18),0);
                        plVar5 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cb6dd8,uVar3);
                        puVar2 = PTR_DAT_04cbc2b8;
                        puVar1 = PTR_DAT_04ca9c30;
                        if (plVar5 != (long *)0x0) {
                          if (0 < (int)plVar5[3]) {
                            uVar10 = 0;
                            lVar7 = 0x20;
                            do {
                              lVar12 = *(long *)(lVar9 + 0x20);
                              puVar13 = (undefined8 *)puVar1;
                              if ((lVar12 != 0) &&
                                 ((long)uVar10 < (long)(int)*(uint *)(lVar12 + 0x18))) {
                                if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_02505a04;
                                puVar13 = (undefined8 *)(lVar12 + lVar7);
                              }
                              uVar11 = *puVar13;
                              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                thunk_FUN_0218fdac();
                              }
                              lVar12 = Dino_BusSand_View_WorldView__SlotMaterial_24049a4(uVar11);
                              if ((lVar12 != 0) &&
                                 (lVar8 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar5 + 0x40))
                                 , lVar8 == 0)) goto LAB_02505a08;
                              if (*(uint *)(plVar5 + 3) <= uVar10) goto LAB_02505a04;
                              *(long *)((long)plVar5 + lVar7) = lVar12;
                              thunk_FUN_02134474((long)plVar5 + lVar7,lVar12);
                              uVar10 = uVar10 + 1;
                              lVar7 = lVar7 + 8;
                            } while ((long)uVar10 < (long)(int)plVar5[3]);
                          }
                          if (lVar6 != 0) {
                            UnityEngine_Renderer__set_sharedMaterials_43743d4(lVar6,plVar5,0);
                            UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar6,0,0);
                            UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar6,1,0);
                            return lVar6;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_02505a14;
        }
      }
LAB_02505a04:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_02505a14:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

