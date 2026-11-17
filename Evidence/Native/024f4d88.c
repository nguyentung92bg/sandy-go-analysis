/* IL2CPP: Dino.BusSand.View.VehicleView$$BuildAuthored
void Dino_BusSand_View_VehicleView__BuildAuthored (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$BuildAuthored
   void Dino_BusSand_View_VehicleView__BuildAuthored (Dino_BusSand_View_VehicleView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_VehicleView__BuildAuthored_23f4d88
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined1 auStack_98 [4];
  float fStack_94;
  undefined8 uStack_90;
  float fStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar2 = PTR_DAT_04cbc2c8;
  if ((bRam0000000004f9cacf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbdef0);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cb6dc0);
    FUN_02132f7c(PTR_DAT_04cb6dc8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cb6de0);
    FUN_02132f7c(PTR_DAT_04cb6de8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb27f8);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cbc2c8);
    FUN_02132f7c(PTR_DAT_04cbc460);
    FUN_02132f7c(PTR_DAT_04cbdef8);
    FUN_02132f7c(PTR_DAT_04cbdeb8);
    FUN_02132f7c(PTR_DAT_04cb9428);
    FUN_02132f7c(PTR_DAT_04cb6e08);
    FUN_02132f7c(PTR_DAT_04cbc868);
    FUN_02132f7c(PTR_DAT_04cbdd80);
    bRam0000000004f9cacf = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9cb0a == '\0') {
    FUN_02132f7c(PTR_DAT_04cbc2c8);
    cRam0000000004f9cb0a = '\x01';
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar12 = *(long *)puVar2;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar12 = *(long *)puVar2;
  }
  uVar16 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  puVar10 = PTR_DAT_04cbdeb8;
  puVar9 = PTR_DAT_04cbc460;
  puVar8 = PTR_DAT_04cb6de8;
  puVar7 = PTR_DAT_04cb6de0;
  puVar6 = PTR_DAT_04cb6dc8;
  puVar4 = PTR_DAT_04caa070;
  uVar13 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
  puVar5 = PTR_DAT_04cbdd80;
  if ((uVar13 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar16 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)puVar5,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar13 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
    if ((uVar13 & 1) != 0) {
      lVar12 = *(long *)puVar9;
      uVar16 = *(undefined8 *)(param_3 + 0xc0);
      *(undefined1 *)(param_3 + 0xe0) = 1;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar19 = Dino_BusSand_View_VehicleView__GlassBand_23f83f4(uVar16);
      *(undefined4 *)(param_3 + 0x178) = uVar19;
      *(undefined4 *)(param_3 + 0x17c) = param_2;
      if ((*(long *)(param_3 + 0xc0) == 0) ||
         (lVar12 = *(long *)(*(long *)(param_3 + 0xc0) + 0x18), lVar12 == 0)) goto LAB_024f59f4;
      UnityEngine_Mesh__get_bounds_438fac4(auStack_98,lVar12,0);
      *(float *)(param_3 + 0xb4) = fStack_94 + fStack_88;
      if ((*(long *)(param_3 + 0xc0) == 0) ||
         (lVar12 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x60), lVar12 == 0))
      goto LAB_024f59f4;
      uVar13 = System_Collections_Generic_Dictionary_object__Vector4___TryGetValue_34cac28
                         (lVar12,*(undefined8 *)(*(long *)(param_3 + 0xc0) + 0x10),&uStack_80,
                          *(undefined8 *)PTR_DAT_04cbdef0);
      if ((uVar13 & 1) == 0) {
        uStack_80 = CONCAT44(param_2,uVar19);
        uStack_78 = (ulong)*(uint *)(param_3 + 0xb4);
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9cb0a == '\0') {
        FUN_02132f7c(PTR_DAT_04cbc2c8);
        cRam0000000004f9cb0a = '\x01';
      }
      lVar12 = *(long *)puVar2;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar12 = *(long *)puVar2;
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
      if (lVar12 == 0) goto LAB_024f59f4;
      iVar11 = *(int *)(param_3 + 0x24);
      uVar20 = _UNK_00e20170;
      if (iVar11 != 1) {
        uVar20 = 0x3fa00000;
      }
      uVar1 = _UNK_00e2038c;
      if (iVar11 != 0) {
        uVar1 = uVar20;
      }
      Dino_BusSand_View_VehicleBatch__KindFor_23efb84
                (uVar19,param_2,uStack_78 & 0xffffffff,uStack_78._4_4_,uVar1,lVar12,iVar11,
                 *(undefined8 *)(param_3 + 0xc0));
      if (cRam0000000004f9cb0a == '\0') {
        FUN_02132f7c(PTR_DAT_04cbc2c8);
        cRam0000000004f9cb0a = '\x01';
      }
      lVar12 = *(long *)puVar2;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar12 = *(long *)puVar2;
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
      if (lVar12 == 0) goto LAB_024f59f4;
      Dino_BusSand_View_VehicleBatch__Register_23efa48(lVar12,param_3);
      lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
      UnityEngine_GameObject___ctor_43c20cc(lVar12,*(undefined8 *)puVar10,0);
      if (lVar12 == 0) goto LAB_024f59f4;
      lVar14 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
      plVar17 = (long *)(param_3 + 0x60);
      *plVar17 = lVar14;
      thunk_FUN_02134474(plVar17,lVar14);
      if (*plVar17 == 0) goto LAB_024f59f4;
      UnityEngine_Transform__SetParent_43d1e34(*plVar17,*(undefined8 *)(param_3 + 0x40),0,0);
      UnityEngine_GameObject__SetActive_43c1408(lVar12,0,0);
      lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
      UnityEngine_GameObject___ctor_43c20cc(lVar12,*(undefined8 *)PTR_DAT_04cb9428,0);
      if (lVar12 == 0) goto LAB_024f59f4;
      lVar12 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
      plVar17 = (long *)(param_3 + 0x68);
      *plVar17 = lVar12;
      thunk_FUN_02134474(plVar17,lVar12);
      if (*plVar17 == 0) goto LAB_024f59f4;
      UnityEngine_Transform__SetParent_43d1e34(*plVar17,*(undefined8 *)(param_3 + 0x40),0,0);
      if ((*(long *)(param_3 + 0xc0) == 0) ||
         (lVar12 = *(long *)(*(long *)(param_3 + 0xc0) + 0x18), lVar12 == 0)) goto LAB_024f59f4;
      UnityEngine_Mesh__get_bounds_438fac4(auStack_98,lVar12,0);
      uStack_a8 = uStack_90;
      Dino_BusSand_View_VehicleView__BuildShadow_23f647c(param_3,auStack_b0);
      if (*(int *)(*(long *)PTR_DAT_04cb27f8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar13 = Dino_BusSand_RenderQuality__get_RealShadows_238a174(0);
      if ((uVar13 & 1) != 0) {
        if ((*(long *)(param_3 + 0x78) == 0) ||
           (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_3 + 0x78),0),
           lVar12 == 0)) goto LAB_024f59f4;
        UnityEngine_GameObject__SetActive_43c1408(lVar12,0,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9cb0a == '\0') {
          FUN_02132f7c(PTR_DAT_04cbc2c8);
          cRam0000000004f9cb0a = '\x01';
        }
        lVar12 = *(long *)puVar2;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar12 = *(long *)puVar2;
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
        if (lVar12 == 0) goto LAB_024f59f4;
        uVar16 = Dino_BusSand_View_VehicleBatch__ShadowHullOf_23f3108
                           (lVar12,*(undefined4 *)(param_3 + 0x24));
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        uVar13 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
        if ((uVar13 & 1) == 0) goto LAB_024f59bc;
        plVar17 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,2);
        uVar18 = *(undefined8 *)puVar7;
        if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
        }
        lVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar18,0);
        puVar2 = PTR_DAT_04cb6dc0;
        if (plVar17 == (long *)0x0) goto LAB_024f59f4;
        if ((lVar12 != 0) &&
           (lVar14 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar17 + 0x40)), lVar14 == 0))
        goto LAB_024f59fc;
        if ((int)plVar17[3] != 0) {
          plVar17[4] = lVar12;
          thunk_FUN_02134474(plVar17 + 4,lVar12);
          lVar12 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar8,0);
          if ((lVar12 != 0) &&
             (lVar14 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar17 + 0x40)), lVar14 == 0))
          goto LAB_024f59fc;
          if ((*(uint *)(plVar17 + 3) & 0xfffffffe) != 0) {
            plVar17[5] = lVar12;
            thunk_FUN_02134474(plVar17 + 5,lVar12);
            lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
            puVar3 = PTR_DAT_04cbdef8;
            UnityEngine_GameObject___ctor_43c2310(lVar12,*(undefined8 *)PTR_DAT_04cbdef8,plVar17,0);
            if ((lVar12 != 0) &&
               (lVar14 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0), lVar14 != 0)) {
              UnityEngine_Transform__SetParent_43d1e34(lVar14,*(undefined8 *)(param_3 + 0x40),0,0);
              lVar14 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                 (lVar12,*(undefined8 *)puVar2);
              if (lVar14 != 0) {
                UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar14,uVar16,0);
                lVar12 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                   (lVar12,*(undefined8 *)puVar6);
                plVar17 = (long *)(param_3 + 0xd8);
                *plVar17 = lVar12;
                thunk_FUN_02134474(plVar17,lVar12);
                lVar12 = *plVar17;
                if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar16 = Dino_BusSand_View_MaterialLibrary__Lit_23b0e94
                                   (0,0,0,0x3f800000,0,0,*(undefined8 *)puVar3,0);
                if (lVar12 != 0) {
                  UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar12,uVar16,0);
                  if (*plVar17 != 0) {
                    UnityEngine_Renderer__set_shadowCastingMode_4373c54(*plVar17,3,0);
                    if (*plVar17 != 0) {
                      UnityEngine_Renderer__set_receiveShadows_4373dcc(*plVar17,0,0);
                      goto LAB_024f59bc;
                    }
                  }
                }
              }
            }
            goto LAB_024f59f4;
          }
        }
        goto LAB_024f59f8;
      }
      goto LAB_024f59bc;
    }
  }
  plVar17 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,2);
  puVar2 = PTR_DAT_04ca9ac8;
  uVar16 = *(undefined8 *)puVar7;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar16,0);
  if (plVar17 == (long *)0x0) goto LAB_024f59f4;
  if ((lVar12 != 0) &&
     (lVar14 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar17 + 0x40)), lVar14 == 0)) {
LAB_024f59fc:
    uVar16 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar16,0);
  }
  if ((int)plVar17[3] == 0) {
LAB_024f59f8:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  plVar17[4] = lVar12;
  thunk_FUN_02134474(plVar17 + 4,lVar12);
  lVar12 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar8,0);
  if ((lVar12 != 0) &&
     (lVar14 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar17 + 0x40)), lVar14 == 0))
  goto LAB_024f59fc;
  puVar3 = PTR_DAT_04cbc868;
  if ((*(uint *)(plVar17 + 3) & 0xfffffffe) == 0) goto LAB_024f59f8;
  plVar17[5] = lVar12;
  thunk_FUN_02134474(plVar17 + 5,lVar12);
  lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  UnityEngine_GameObject___ctor_43c2310(lVar12,*(undefined8 *)puVar3,plVar17,0);
  if (lVar12 != 0) {
    lVar14 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
    puVar5 = PTR_DAT_04cb6dc0;
    puVar3 = PTR_DAT_04cb27f8;
    if (lVar14 != 0) {
      UnityEngine_Transform__SetParent_43d1e34(lVar14,*(undefined8 *)(param_3 + 0x40),0,0);
      uVar16 = *(undefined8 *)(param_3 + 0xc0);
      if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar14 = Dino_BusSand_View_VehicleView__PackedMesh_23f86a0(uVar16);
      lVar15 = UnityEngine_GameObject__GetComponent_object__275a5dc(lVar12,*(undefined8 *)puVar5);
      if (lVar15 != 0) {
        UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar15,lVar14,0);
        lVar12 = UnityEngine_GameObject__GetComponent_object__275a5dc(lVar12,*(undefined8 *)puVar6);
        plVar17 = (long *)(param_3 + 0x48);
        *plVar17 = lVar12;
        thunk_FUN_02134474(plVar17,lVar12);
        if (*plVar17 != 0) {
          UnityEngine_Renderer__set_shadowCastingMode_4373c54(*plVar17,0,0);
          if (*plVar17 != 0) {
            UnityEngine_Renderer__set_receiveShadows_4373dcc(*plVar17,1,0);
            *(undefined8 *)(param_3 + 0x50) = *(undefined8 *)(param_3 + 0x48);
            thunk_FUN_02134474((undefined8 *)(param_3 + 0x50));
            if (*(long *)(param_3 + 0xc0) != 0) {
              iVar11 = Dino_BusSand_ModelEntry__Slot_237db04
                                 (*(long *)(param_3 + 0xc0),*(undefined8 *)PTR_DAT_04cb6e08,0);
              lVar12 = *(long *)puVar9;
              uVar16 = *(undefined8 *)(param_3 + 0xc0);
              *(uint *)(param_3 + 0xd0) = iVar11 >> 0x1f | 1;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar19 = Dino_BusSand_View_VehicleView__GlassBand_23f83f4(uVar16);
              *(undefined4 *)(param_3 + 0x178) = uVar19;
              *(undefined4 *)(param_3 + 0x17c) = param_2;
              if (lVar14 != 0) {
                UnityEngine_Mesh__get_bounds_438fac4(auStack_98,lVar14,0);
                lVar12 = *(long *)puVar3;
                *(float *)(param_3 + 0xb4) = fStack_94 + fStack_88;
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar13 = Dino_BusSand_RenderQuality__get_RealShadows_238a174(0);
                if ((uVar13 & 1) != 0) {
                  plVar17 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,2);
                  uVar16 = *(undefined8 *)puVar7;
                  if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)(puVar2 + 0xe0));
                  }
                  lVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar16,0);
                  if (plVar17 == (long *)0x0) goto LAB_024f59f4;
                  if ((lVar12 != 0) &&
                     (lVar15 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar17 + 0x40)),
                     lVar15 == 0)) goto LAB_024f59fc;
                  if ((int)plVar17[3] == 0) goto LAB_024f59f8;
                  plVar17[4] = lVar12;
                  thunk_FUN_02134474(plVar17 + 4,lVar12);
                  lVar12 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar8,0);
                  if ((lVar12 != 0) &&
                     (lVar15 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar17 + 0x40)),
                     lVar15 == 0)) goto LAB_024f59fc;
                  if ((*(uint *)(plVar17 + 3) & 0xfffffffe) == 0) goto LAB_024f59f8;
                  plVar17[5] = lVar12;
                  thunk_FUN_02134474(plVar17 + 5,lVar12);
                  lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                  puVar2 = PTR_DAT_04cbdef8;
                  UnityEngine_GameObject___ctor_43c2310
                            (lVar12,*(undefined8 *)PTR_DAT_04cbdef8,plVar17,0);
                  if ((lVar12 == 0) ||
                     (lVar15 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0), lVar15 == 0)
                     ) goto LAB_024f59f4;
                  UnityEngine_Transform__SetParent_43d1e34
                            (lVar15,*(undefined8 *)(param_3 + 0x40),0,0);
                  lVar15 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                     (lVar12,*(undefined8 *)puVar5);
                  uVar16 = *(undefined8 *)(param_3 + 0xc0);
                  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar9);
                  }
                  uVar16 = Dino_BusSand_View_VehicleView__ShadowMesh_23f9014(uVar16);
                  if (lVar15 == 0) goto LAB_024f59f4;
                  UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar15,uVar16,0);
                  lVar12 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                     (lVar12,*(undefined8 *)puVar6);
                  plVar17 = (long *)(param_3 + 0xd8);
                  *plVar17 = lVar12;
                  thunk_FUN_02134474(plVar17,lVar12);
                  lVar12 = *plVar17;
                  if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar16 = Dino_BusSand_View_MaterialLibrary__Lit_23b0e94
                                     (0,0,0,0x3f800000,0,0,*(undefined8 *)puVar2,0);
                  if (lVar12 == 0) goto LAB_024f59f4;
                  UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar12,uVar16,0);
                  if (*plVar17 == 0) goto LAB_024f59f4;
                  UnityEngine_Renderer__set_shadowCastingMode_4373c54(*plVar17,3,0);
                  if (*plVar17 == 0) goto LAB_024f59f4;
                  UnityEngine_Renderer__set_receiveShadows_4373dcc(*plVar17,0,0);
                }
                lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                UnityEngine_GameObject___ctor_43c20cc(lVar12,*(undefined8 *)PTR_DAT_04cbdeb8,0);
                if (lVar12 != 0) {
                  lVar15 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
                  plVar17 = (long *)(param_3 + 0x60);
                  *plVar17 = lVar15;
                  thunk_FUN_02134474(plVar17,lVar15);
                  if (*plVar17 != 0) {
                    UnityEngine_Transform__SetParent_43d1e34
                              (*plVar17,*(undefined8 *)(param_3 + 0x40),0,0);
                    UnityEngine_GameObject__SetActive_43c1408(lVar12,0,0);
                    Dino_BusSand_View_VehicleView__BuildAuthoredArrow_23f92ec(param_3);
                    UnityEngine_Mesh__get_bounds_438fac4(auStack_98,lVar14,0);
                    uStack_c8 = uStack_90;
                    Dino_BusSand_View_VehicleView__BuildShadow_23f647c(param_3,auStack_d0);
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar13 = Dino_BusSand_RenderQuality__get_RealShadows_238a174(0);
                    if ((uVar13 & 1) != 0) {
                      if ((*(long *)(param_3 + 0x78) == 0) ||
                         (lVar12 = UnityEngine_Component__get_gameObject_43bcde8
                                             (*(long *)(param_3 + 0x78),0), lVar12 == 0))
                      goto LAB_024f59f4;
                      UnityEngine_GameObject__SetActive_43c1408(lVar12,0,0);
                    }
LAB_024f59bc:
                    Dino_BusSand_View_VehicleView__SetMode_23f6b40(param_3,0);
                    Dino_BusSand_View_VehicleView__ApplyBodyColor_23f6f64(param_3);
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
LAB_024f59f4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

