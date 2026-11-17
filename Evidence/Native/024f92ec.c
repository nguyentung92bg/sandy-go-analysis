/* IL2CPP: Dino.BusSand.View.VehicleView$$BuildAuthoredArrow
void Dino_BusSand_View_VehicleView__BuildAuthoredArrow (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$BuildAuthoredArrow
   void Dino_BusSand_View_VehicleView__BuildAuthoredArrow (Dino_BusSand_View_VehicleView_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__BuildAuthoredArrow_23f92ec(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long *plVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar5 = PTR_DAT_04cbc460;
  if ((bRam0000000004f9cad8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbdef0);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cb6dc0);
    FUN_02132f7c(PTR_DAT_04cb6dc8);
    FUN_02132f7c(PTR_DAT_04caa070);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024f8d7c with catch @ 024f9368
                        */
    FUN_02132f7c(PTR_DAT_04cb6dd0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024f8d80 with catch @ 024f936c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024f8d88 with catch @ 024f9370
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024f8d60 with catch @ 024f9374
                        */
    FUN_02132f7c(PTR_DAT_04cb6de0);
    FUN_02132f7c(PTR_DAT_04cb6de8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 024f9390 to 025f9393 has its CatchHandler @ 024f93ac */
                    /* try { // try from 024f9394 to 025f93af has its CatchHandler @ 024f8b98 */
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cbc460);
                    /* catch() { ... } // from try @ 024f9390 with catch @ 024f93ac */
                    /* try { // try from 024f93b0 to 025f93b7 has its CatchHandler @ 024f93c0 */
    FUN_02132f7c(PTR_DAT_04cbde08);
                    /* try { // try from 024f93b8 to 025f93c3 has its CatchHandler @ 024f8b98 */
    FUN_02132f7c(PTR_DAT_04cb9428);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024f93b0 with catch @ 024f93c0
                        */
    FUN_02132f7c(PTR_DAT_04cbdf70);
    FUN_02132f7c(PTR_DAT_04cb51f8);
    FUN_02132f7c(PTR_DAT_04cbdf78);
    bRam0000000004f9cad8 = 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar9 = *(long *)puVar5;
  uStack_80 = 0;
  uStack_78 = 0;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar5;
  }
  uVar16 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  puVar4 = PTR_DAT_04cb9428;
  puVar3 = PTR_DAT_04caa070;
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar16,0,0);
  if ((uVar10 & 1) != 0) {
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar16 = Dino_BusSand_View_VehicleView__MakeArrowMesh_23fa840(0x3f800000);
    puVar15 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
    *puVar15 = uVar16;
    thunk_FUN_02134474(puVar15,uVar16);
    uVar16 = Dino_BusSand_View_VehicleView__MakeArrowMesh_23fa840(_UNK_00e206ac);
    puVar15 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
    *puVar15 = uVar16;
    thunk_FUN_02134474(puVar15,uVar16);
  }
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  UnityEngine_GameObject___ctor_43c20cc(lVar9,*(undefined8 *)puVar4,0);
  if (lVar9 != 0) {
    lVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar9,0);
    plVar17 = (long *)(param_1 + 0x68);
    *plVar17 = lVar9;
    thunk_FUN_02134474(plVar17,lVar9);
    puVar4 = PTR_DAT_04cab208;
    if (*plVar17 != 0) {
      UnityEngine_Transform__SetParent_43d1e34(*plVar17,*(undefined8 *)(param_1 + 0x40),0,0);
      fVar20 = *(float *)(param_1 + 0xb4);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar9 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
      puVar6 = PTR_DAT_04cb6de0;
      puVar4 = PTR_DAT_04cad748;
      if (lVar9 != 0) {
        lVar9 = Dino_BusSand_GameAssets__GetModel_237d214(lVar9,*(undefined8 *)PTR_DAT_04cbde08,0);
        plVar11 = (long *)FUN_02133068(*(undefined8 *)puVar4,2);
        uVar16 = *(undefined8 *)puVar6;
        if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
        }
        lVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar16,0);
        if (plVar11 != (long *)0x0) {
          if ((lVar12 != 0) &&
             (lVar13 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0)) {
LAB_024f9b14:
            uVar16 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar16,0);
          }
          puVar7 = PTR_DAT_04cb6de8;
          if ((int)plVar11[3] == 0) {
LAB_024f9b10:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar11[4] = lVar12;
          thunk_FUN_02134474(plVar11 + 4,lVar12);
          lVar12 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar7,0);
          if ((lVar12 != 0) &&
             (lVar13 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
          goto LAB_024f9b14;
          puVar8 = PTR_DAT_04cbdf78;
          if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_024f9b10;
          plVar11[5] = lVar12;
          thunk_FUN_02134474(plVar11 + 5,lVar12);
          lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
          UnityEngine_GameObject___ctor_43c2310(lVar12,*(undefined8 *)puVar8,plVar11,0);
          if ((lVar12 != 0) &&
             (lVar13 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0), lVar13 != 0)) {
            UnityEngine_Transform__SetParent_43d1e34(lVar13,*plVar17,0,0);
            lVar13 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
            if (lVar13 != 0) {
              UnityEngine_Transform__set_localPosition_43cfda8
                        (_UNK_00e20a84,_UNK_00e2030c,_UNK_00e20210,lVar13,0);
              lVar13 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
              puVar3 = PTR_DAT_04cb6dc0;
              if (lVar13 != 0) {
                UnityEngine_Transform__set_localScale_43d1be0
                          (_UNK_00e20810,_UNK_00e20390,_UNK_00e20810,lVar13,0);
                lVar13 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                   (lVar12,*(undefined8 *)puVar3);
                if (lVar9 == 0) {
                  lVar14 = *(long *)puVar5;
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar14 = *(long *)puVar5;
                  }
                  puVar15 = (undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x10);
                  puVar1 = (undefined8 *)PTR_DAT_04cb6dc8;
                  plVar11 = (long *)PTR_DAT_04cb6dd0;
                  puVar2 = (undefined8 *)PTR_DAT_04cbdf70;
                }
                else {
                  puVar15 = (undefined8 *)(lVar9 + 0x18);
                  puVar1 = (undefined8 *)PTR_DAT_04cb6dc8;
                  plVar11 = (long *)PTR_DAT_04cb6dd0;
                  puVar2 = (undefined8 *)PTR_DAT_04cbdf70;
                }
                PTR_DAT_04cb6dc8 = (undefined *)puVar1;
                PTR_DAT_04cb6dd0 = (undefined *)plVar11;
                PTR_DAT_04cbdf70 = (undefined *)puVar2;
                if (lVar13 != 0) {
                  UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar13,*puVar15,0);
                  lVar12 = UnityEngine_GameObject__GetComponent_object__275a5dc(lVar12,*puVar1);
                  if (*(int *)(*plVar11 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*plVar11);
                  }
                  uVar16 = Dino_BusSand_View_MaterialLibrary__Unlit_23b1214
                                     (_UNK_00e20844,_UNK_00e20840,_UNK_00e205f8,_UNK_00e206e4,
                                      *puVar2,0,0,1,0);
                  if (lVar12 != 0) {
                    UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar12,uVar16,0);
                    UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar12,0,0);
                    plVar11 = (long *)FUN_02133068(*(undefined8 *)puVar4,2);
                    uVar16 = *(undefined8 *)puVar6;
                    if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
                    }
                    lVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar16,0);
                    if (plVar11 != (long *)0x0) {
                      if ((lVar12 != 0) &&
                         (lVar13 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar11 + 0x40)),
                         lVar13 == 0)) goto LAB_024f9b14;
                      if ((int)plVar11[3] == 0) goto LAB_024f9b10;
                      plVar11[4] = lVar12;
                      thunk_FUN_02134474(plVar11 + 4,lVar12);
                      lVar12 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar7,0);
                      if ((lVar12 != 0) &&
                         (lVar13 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar11 + 0x40)),
                         lVar13 == 0)) goto LAB_024f9b14;
                      puVar5 = PTR_DAT_04cb51f8;
                      if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_024f9b10;
                      plVar11[5] = lVar12;
                      thunk_FUN_02134474(plVar11 + 5,lVar12);
                      lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
                      UnityEngine_GameObject___ctor_43c2310(lVar12,*(undefined8 *)puVar5,plVar11,0);
                      if ((lVar12 == 0) ||
                         (lVar13 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0),
                         lVar13 == 0)) goto LAB_024f9b0c;
                      UnityEngine_Transform__SetParent_43d1e34
                                (lVar13,*(undefined8 *)(param_1 + 0x68),0,0);
                      lVar13 = UnityEngine_GameObject__GetComponent_object__275a5dc(lVar12,*puVar1);
                      plVar11 = (long *)(param_1 + 0x70);
                      *plVar11 = lVar13;
                      thunk_FUN_02134474(plVar11,lVar13);
                      lVar13 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                         (lVar12,*(undefined8 *)PTR_DAT_04cb6dc0);
                      puVar5 = PTR_DAT_04cbc460;
                      if (lVar9 == 0) {
                        if (*(int *)(*(long *)PTR_DAT_04cbc460 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        if (lVar13 == 0) goto LAB_024f9b0c;
                        UnityEngine_MeshFilter__set_sharedMesh_4389470
                                  (lVar13,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8),0);
                        lVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
                        if (lVar9 == 0) goto LAB_024f9b0c;
                        UnityEngine_Transform__set_localPosition_43cfda8(0,_UNK_00e20448,0,lVar9,0);
                        lVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
                        if (lVar9 == 0) goto LAB_024f9b0c;
                        UnityEngine_Transform__set_localScale_43d1be0
                                  (0x3f000000,0x3f800000,0x3f000000,lVar9,0);
                      }
                      else {
                        if (lVar13 == 0) goto LAB_024f9b0c;
                        UnityEngine_MeshFilter__set_sharedMesh_4389470
                                  (lVar13,*(undefined8 *)(lVar9 + 0x18),0);
                        lVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
                        if (lVar9 == 0) goto LAB_024f9b0c;
                        UnityEngine_Transform__set_localPosition_43cfda8(0,_UNK_00e20294,0,lVar9,0);
                      }
                      lVar9 = *(long *)(param_1 + 0x70);
                      uVar16 = Dino_BusSand_View_VehicleView__ArrowMaterial_23facec(param_1,1);
                      if (lVar9 != 0) {
                        UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar9,uVar16,0);
                        if (*plVar11 != 0) {
                          UnityEngine_Renderer__set_shadowCastingMode_4373c54(*plVar11,0,0);
                          lVar9 = *(long *)puVar5;
                          if (*(int *)(lVar9 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                            lVar9 = *(long *)puVar5;
                          }
                          if ((*(long *)(param_1 + 0xc0) != 0) &&
                             (lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x60), lVar9 != 0)) {
                            uVar10 = System_Collections_Generic_Dictionary_object__Vector4___TryGetValue_34cac28
                                               (lVar9,*(undefined8 *)
                                                       (*(long *)(param_1 + 0xc0) + 0x10),&uStack_80
                                                ,*(undefined8 *)PTR_DAT_04cbdef0);
                            if (*plVar17 != 0) {
                              uVar19 = uStack_78._4_4_;
                              fVar18 = (float)uStack_78;
                              if ((uVar10 & 1) == 0) {
                                uVar19 = 0;
                                fVar18 = fVar20;
                              }
                              UnityEngine_Transform__set_localPosition_43cfda8
                                        (0,fVar18 + _UNK_00e20904,uVar19,*plVar17,0);
                              lVar9 = *plVar17;
                              if (cRam0000000004f9b65e == '\0') {
                                FUN_02132f7c(PTR_DAT_04caa208);
                                cRam0000000004f9b65e = '\x01';
                              }
                              if (lVar9 != 0) {
                                fVar20 = _UNK_00e20170;
                                if (*(int *)(param_1 + 0x24) != 1) {
                                  fVar20 = 1.25;
                                }
                                lVar12 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
                                fVar18 = _UNK_00e2038c;
                                if (*(int *)(param_1 + 0x24) != 0) {
                                  fVar18 = fVar20;
                                }
                                UnityEngine_Transform__set_localScale_43d1be0
                                          (*(float *)(lVar12 + 0xc) * fVar18,
                                           *(float *)(lVar12 + 0x10) * fVar18,
                                           *(float *)(lVar12 + 0x14) * fVar18,lVar9,0);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_024f9b0c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

