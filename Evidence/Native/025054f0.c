/* IL2CPP: Dino.BusSand.View.WorldView$$Model
UnityEngine_MeshRenderer_o* Dino_BusSand_View_WorldView__Model (Dino_BusSand_View_WorldView_o* __this, System_String_o* name, UnityEngine_Vector3_o pos, UnityEngine_Quaternion_o rot, UnityEngine_Vector3_o scale, bool castShadows, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.WorldView$$Model
   UnityEngine_MeshRenderer_o* Dino_BusSand_View_WorldView__Model (Dino_BusSand_View_WorldView_o*
   __this, System_String_o* name, UnityEngine_Vector3_o pos, UnityEngine_Quaternion_o rot,
   UnityEngine_Vector3_o scale, bool castShadows, const MethodInfo* method); */

long Dino_BusSand_View_WorldView__Model_24054f0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,float param_5
               ,float param_6,float param_7,undefined8 param_8,undefined8 param_9,uint param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  
  puVar2 = PTR_DAT_04cab208;
  fVar16 = param_4;
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
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
  if (lVar6 != 0) {
    lVar6 = Dino_BusSand_GameAssets__GetModel_237d214(lVar6,param_9,0);
    if (lVar6 == 0) {
      return 0;
    }
    plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,2);
    uVar4 = *(undefined8 *)PTR_DAT_04cb6de0;
    if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
    }
    lVar8 = System_Type__GetTypeFromHandle_483f0b4(uVar4,0);
    if (plVar7 != (long *)0x0) {
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
LAB_02505a08:
        uVar4 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar4,0);
      }
      if ((int)plVar7[3] != 0) {
        plVar7[4] = lVar8;
        thunk_FUN_02134474(plVar7 + 4,lVar8);
        lVar8 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)PTR_DAT_04cb6de8,0);
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
        goto LAB_02505a08;
        if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
          plVar7[5] = lVar8;
          thunk_FUN_02134474(plVar7 + 5,lVar8);
          lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
          UnityEngine_GameObject___ctor_43c2310(lVar8,param_9,plVar7,0);
          if (lVar8 != 0) {
            lVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
            uVar4 = UnityEngine_Component__get_transform_43bcd18(param_8,0);
            if (lVar9 != 0) {
              UnityEngine_Transform__SetParent_43d1e34(lVar9,uVar4,0,0);
              lVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
              if (lVar9 != 0) {
                UnityEngine_Transform__set_localPosition_43cfda8(param_1,param_2,param_3,lVar9,0);
                lVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
                fVar15 = 0.0;
                fVar14 = _UNK_00e2082c;
                fVar13 = (float)UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                                          (0,_UNK_00e2082c,0,0);
                if (lVar9 != 0) {
                  UnityEngine_Transform__set_localRotation_43d156c
                            ((param_5 * fVar15 + param_7 * fVar13 + param_4 * fVar16) -
                             param_6 * fVar14,
                             (param_6 * fVar13 + param_7 * fVar14 + param_5 * fVar16) -
                             param_4 * fVar15,
                             (param_4 * fVar14 + param_7 * fVar15 + param_6 * fVar16) -
                             param_5 * fVar13,
                             ((param_7 * fVar16 - param_4 * fVar13) - param_5 * fVar14) -
                             param_6 * fVar15,lVar9,0);
                  lVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
                  if (lVar9 != 0) {
                    UnityEngine_Transform__set_localScale_43d1be0
                              (uStack0000000000000000,uStack0000000000000004,in_stack_00000008,lVar9
                               ,0);
                    lVar9 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                      (lVar8,*(undefined8 *)PTR_DAT_04cb6dc0);
                    if (lVar9 != 0) {
                      UnityEngine_MeshFilter__set_sharedMesh_4389470
                                (lVar9,*(undefined8 *)(lVar6 + 0x18),0);
                      lVar8 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                        (lVar8,*(undefined8 *)PTR_DAT_04cb6dc8);
                      if (*(long *)(lVar6 + 0x18) != 0) {
                        uVar3 = UnityEngine_Mesh__get_subMeshCount_436cb4c
                                          (*(long *)(lVar6 + 0x18),0);
                        plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cb6dd8,uVar3);
                        puVar1 = PTR_DAT_04cbc2b8;
                        puVar2 = PTR_DAT_04ca9c30;
                        if (plVar7 != (long *)0x0) {
                          if (0 < (int)plVar7[3]) {
                            uVar5 = 0;
                            lVar9 = 0x20;
                            do {
                              lVar11 = *(long *)(lVar6 + 0x20);
                              puVar12 = (undefined8 *)puVar2;
                              if ((lVar11 != 0) &&
                                 ((long)uVar5 < (long)(int)*(uint *)(lVar11 + 0x18))) {
                                if (*(uint *)(lVar11 + 0x18) <= uVar5) goto LAB_02505a04;
                                puVar12 = (undefined8 *)(lVar11 + lVar9);
                              }
                              uVar4 = *puVar12;
                              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                thunk_FUN_0218fdac();
                              }
                              lVar11 = Dino_BusSand_View_WorldView__SlotMaterial_24049a4(uVar4);
                              if ((lVar11 != 0) &&
                                 (lVar10 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar7 + 0x40)
                                                             ), lVar10 == 0)) goto LAB_02505a08;
                              if (*(uint *)(plVar7 + 3) <= uVar5) goto LAB_02505a04;
                              *(long *)((long)plVar7 + lVar9) = lVar11;
                              thunk_FUN_02134474((long)plVar7 + lVar9,lVar11);
                              uVar5 = uVar5 + 1;
                              lVar9 = lVar9 + 8;
                            } while ((long)uVar5 < (long)(int)plVar7[3]);
                          }
                          if (lVar8 != 0) {
                            UnityEngine_Renderer__set_sharedMaterials_43743d4(lVar8,plVar7,0);
                            UnityEngine_Renderer__set_shadowCastingMode_4373c54
                                      (lVar8,param_10 & 1,0);
                            UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar8,1,0);
                            return lVar8;
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

