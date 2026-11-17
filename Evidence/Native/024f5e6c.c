/* IL2CPP: Dino.BusSand.View.VehicleView$$BuildArrow
void Dino_BusSand_View_VehicleView__BuildArrow (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$BuildArrow
   void Dino_BusSand_View_VehicleView__BuildArrow (Dino_BusSand_View_VehicleView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_VehicleView__BuildArrow_23f5e6c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  
  puVar6 = PTR_DAT_04cbc460;
  if ((bRam0000000004f9cae0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dc0);
    FUN_02132f7c(PTR_DAT_04cb6dc8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cb6de0);
    FUN_02132f7c(PTR_DAT_04cb6de8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cbc460);
    FUN_02132f7c(PTR_DAT_04cb9428);
    FUN_02132f7c(PTR_DAT_04cb7e18);
    FUN_02132f7c(PTR_DAT_04cb51f8);
    FUN_02132f7c(PTR_DAT_04cbdf08);
    bRam0000000004f9cae0 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar6;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  puVar2 = PTR_DAT_04cb9428;
  puVar1 = PTR_DAT_04caa070;
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar13,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar13 = Dino_BusSand_View_VehicleView__MakeArrowMesh_23fa840(0x3f800000);
    puVar12 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
    *puVar12 = uVar13;
    thunk_FUN_02134474(puVar12,uVar13);
    uVar13 = Dino_BusSand_View_VehicleView__MakeArrowMesh_23fa840(_UNK_00e206ac);
    puVar12 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10);
    *puVar12 = uVar13;
    thunk_FUN_02134474(puVar12,uVar13);
  }
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_43c20cc(lVar8,*(undefined8 *)puVar2,0);
  if (lVar8 != 0) {
    lVar8 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
    plVar14 = (long *)(param_1 + 0x68);
    *plVar14 = lVar8;
    thunk_FUN_02134474(plVar14,lVar8);
    puVar4 = PTR_DAT_04cb6de0;
    puVar2 = PTR_DAT_04cad748;
    if (*plVar14 != 0) {
      UnityEngine_Transform__SetParent_43d1e34(*plVar14,*(undefined8 *)(param_1 + 0x40),0,0);
      plVar10 = (long *)FUN_02133068(*(undefined8 *)puVar2,2);
      uVar13 = *(undefined8 *)puVar4;
      if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
      }
      lVar8 = System_Type__GetTypeFromHandle_483f0b4(uVar13,0);
      if (plVar10 != (long *)0x0) {
        if ((lVar8 != 0) &&
           (lVar11 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
LAB_024f6470:
          uVar13 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar13,0);
        }
        puVar5 = PTR_DAT_04cb6de8;
        if ((int)plVar10[3] != 0) {
          plVar10[4] = lVar8;
          thunk_FUN_02134474(plVar10 + 4,lVar8);
          lVar8 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar5,0);
          if ((lVar8 != 0) &&
             (lVar11 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
          goto LAB_024f6470;
          puVar3 = PTR_DAT_04cb7e18;
          if ((*(uint *)(plVar10 + 3) & 0xfffffffe) != 0) {
            plVar10[5] = lVar8;
            thunk_FUN_02134474(plVar10 + 5,lVar8);
            lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
            UnityEngine_GameObject___ctor_43c2310(lVar8,*(undefined8 *)puVar3,plVar10,0);
            if ((lVar8 != 0) &&
               (lVar11 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0),
               puVar1 = PTR_DAT_04cb6dc0, lVar11 != 0)) {
              UnityEngine_Transform__SetParent_43d1e34(lVar11,*plVar14,0,0);
              lVar11 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                 (lVar8,*(undefined8 *)puVar1);
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar6);
              }
              puVar7 = PTR_DAT_04cbdf08;
              puVar3 = PTR_DAT_04cb6dd0;
              puVar1 = PTR_DAT_04cb6dc8;
              if (lVar11 != 0) {
                UnityEngine_MeshFilter__set_sharedMesh_4389470
                          (lVar11,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10),0);
                lVar8 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                  (lVar8,*(undefined8 *)puVar1);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar3);
                }
                uVar13 = Dino_BusSand_View_MaterialLibrary__Unlit_23b1214
                                   (_UNK_00e205f0,_UNK_00e205f0,_UNK_00e20390,_UNK_00e20180,
                                    *(undefined8 *)puVar7,0,0,1,0);
                if (lVar8 != 0) {
                  UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar8,uVar13,0);
                  UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar8,0,0);
                  plVar10 = (long *)FUN_02133068(*(undefined8 *)puVar2,2);
                  lVar8 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar4,0);
                  if (plVar10 != (long *)0x0) {
                    if ((lVar8 != 0) &&
                       (lVar11 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar10 + 0x40)),
                       lVar11 == 0)) goto LAB_024f6470;
                    if ((int)plVar10[3] != 0) {
                      plVar10[4] = lVar8;
                      thunk_FUN_02134474(plVar10 + 4,lVar8);
                      lVar8 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar5,0);
                      if ((lVar8 != 0) &&
                         (lVar11 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar10 + 0x40)),
                         lVar11 == 0)) goto LAB_024f6470;
                      puVar2 = PTR_DAT_04cb51f8;
                      if ((*(uint *)(plVar10 + 3) & 0xfffffffe) != 0) {
                        plVar10[5] = lVar8;
                        thunk_FUN_02134474(plVar10 + 5,lVar8);
                        lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
                        UnityEngine_GameObject___ctor_43c2310(lVar8,*(undefined8 *)puVar2,plVar10,0)
                        ;
                        if ((lVar8 != 0) &&
                           (lVar11 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0),
                           lVar11 != 0)) {
                          UnityEngine_Transform__SetParent_43d1e34(lVar11,*plVar14,0,0);
                          lVar11 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
                          if (lVar11 != 0) {
                            UnityEngine_Transform__set_localPosition_43cfda8
                                      (0,_UNK_00e20844,0,lVar11,0);
                            lVar11 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                               (lVar8,*(undefined8 *)PTR_DAT_04cb6dc0);
                            if (lVar11 != 0) {
                              UnityEngine_MeshFilter__set_sharedMesh_4389470
                                        (lVar11,*(undefined8 *)
                                                 (*(long *)(*(long *)puVar6 + 0xb8) + 8),0);
                              lVar8 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                                (lVar8,*(undefined8 *)puVar1);
                              plVar10 = (long *)(param_1 + 0x70);
                              *plVar10 = lVar8;
                              thunk_FUN_02134474(plVar10,lVar8);
                              lVar8 = *plVar10;
                              uVar13 = Dino_BusSand_View_MaterialLibrary__Unlit_23b1214
                                                 (0x3f800000,0x3f800000,0x3f800000,0x3f800000,
                                                  *(undefined8 *)PTR_DAT_04cb9428,0,0,2,0);
                              if (lVar8 != 0) {
                                UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar8,uVar13,0);
                                if (*plVar10 != 0) {
                                  UnityEngine_Renderer__set_shadowCastingMode_4373c54(*plVar10,0,0);
                                  if (*plVar14 != 0) {
                                    UnityEngine_Transform__set_localPosition_43cfda8
                                              (0,*(float *)(param_1 + 0xb4) + _UNK_00e201f4,
                                               _UNK_00e2043c,*plVar14,0);
                                    lVar8 = *(long *)(param_1 + 0x68);
                                    if (lVar8 != 0) {
                                      if ((bRam0000000004fa8b3e & 1) == 0) {
                                        FUN_02132f7c(PTR_DAT_04cf7a00,0);
                                        bRam0000000004fa8b3e = 1;
                                      }
                                      if (lVar8 != 0) {
                                        lVar8 = *(long *)(lVar8 + 0x10);
                                        if (lVar8 != 0) {
                                          if (pcRam0000000004fa8bf0 == (code *)0x0) {
                                            pcRam0000000004fa8bf0 =
                                                 (code *)FUN_02132f40(&UNK_00e685b7);
                                          }
                                          (*pcRam0000000004fa8bf0)(lVar8,&stack0xffffffffffffffd4);
                                          return;
                                        }
                    /* WARNING: Subroutine does not return */
                                        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                                  ();
                                      }
                    /* WARNING: Subroutine does not return */
                                      FUN_02133224();
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        goto LAB_024f6468;
                      }
                    }
                    goto LAB_024f646c;
                  }
                }
              }
            }
            goto LAB_024f6468;
          }
        }
LAB_024f646c:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
  }
LAB_024f6468:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

