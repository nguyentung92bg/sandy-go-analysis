/* IL2CPP: Dino.BusSand.View.MechanicLayer$$EdgeCounter
TMPro_TextMeshPro_o* Dino_BusSand_View_MechanicLayer__EdgeCounter (Dino_BusSand_View_MechanicLayer_o* __this, int32_t liftId, UnityEngine_Transform_o* root, UnityEngine_Vector3_o world, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$EdgeCounter
   TMPro_TextMeshPro_o* Dino_BusSand_View_MechanicLayer__EdgeCounter
   (Dino_BusSand_View_MechanicLayer_o* __this, int32_t liftId, UnityEngine_Transform_o* root,
   UnityEngine_Vector3_o world, const MethodInfo* method); */

long Dino_BusSand_View_MechanicLayer__EdgeCounter_23c6f04
               (float param_1,float param_2,float param_3,long param_4,undefined4 param_5,
               undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  float fVar12;
  
  puVar3 = PTR_DAT_04cbd288;
  puVar1 = PTR_DAT_04caa070;
  if ((bRam0000000004f9c9d4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd078);
    FUN_02132f7c(PTR_DAT_04cb6dc0);
    FUN_02132f7c(PTR_DAT_04cb6dc8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cac5d0);
    FUN_02132f7c(PTR_DAT_04cb6de0);
    FUN_02132f7c(PTR_DAT_04cb6de8);
    FUN_02132f7c(PTR_DAT_04cbc250);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cbd290);
    FUN_02132f7c(PTR_DAT_04cb7420);
    FUN_02132f7c(PTR_DAT_04cbd288);
    bRam0000000004f9c9d4 = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_43c20cc(lVar5,*(undefined8 *)puVar3,0);
  if ((lVar5 != 0) &&
     (lVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar5,0), puVar3 = PTR_DAT_04cbc250,
     lVar5 != 0)) {
    UnityEngine_Transform__SetParent_43d1e34(lVar5,param_6,0,0);
    if (cRam0000000004f9bcf8 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9bcf8 = '\x01';
    }
    puVar2 = PTR_DAT_04caa208;
    fVar12 = *(float *)(param_4 + 0x50);
    uVar11 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
    param_2 = param_2 + (float)((ulong)uVar11 >> 0x20) * 0.3 * fVar12;
    UnityEngine_Transform__set_position_43d0f1c
              (CONCAT44(param_2,param_1 + (float)uVar11 * 0.3 * fVar12),param_2,
               param_3 + *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20) *
                         _UNK_00e207cc * fVar12,lVar5,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar4 = PTR_DAT_04cb6de0;
    puVar3 = PTR_DAT_04cad748;
    Dino_BusSand_View_StageLayout__get_FacingRotation_23e8a38(0);
    UnityEngine_Transform__set_rotation_43d13f8(lVar5,0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    lVar8 = *(long *)(*(long *)puVar2 + 0xb8);
    fVar12 = *(float *)(param_4 + 0x50) * _UNK_00e20660;
    UnityEngine_Transform__set_localScale_43d1be0
              (*(float *)(lVar8 + 0xc) * fVar12,*(float *)(lVar8 + 0x10) * fVar12,
               *(float *)(lVar8 + 0x14) * fVar12,lVar5,0);
    plVar6 = (long *)FUN_02133068(*(undefined8 *)puVar3,2);
    uVar11 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
    }
    lVar8 = System_Type__GetTypeFromHandle_483f0b4(uVar11,0);
    if (plVar6 != (long *)0x0) {
      if ((lVar8 != 0) &&
         (lVar7 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_024c7488:
        uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar11,0);
      }
      puVar3 = PTR_DAT_04cb6de8;
      if ((int)plVar6[3] != 0) {
        plVar6[4] = lVar8;
        thunk_FUN_02134474(plVar6 + 4,lVar8);
        lVar8 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar3,0);
        if ((lVar8 != 0) &&
           (lVar7 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
        goto LAB_024c7488;
        puVar3 = PTR_DAT_04cb7420;
        if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
          plVar6[5] = lVar8;
          thunk_FUN_02134474(plVar6 + 5,lVar8);
          lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
          UnityEngine_GameObject___ctor_43c2310(lVar8,*(undefined8 *)puVar3,plVar6,0);
          if ((lVar8 != 0) &&
             (lVar7 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0),
             puVar3 = PTR_DAT_04cb6dc0, puVar1 = PTR_DAT_04cac5d0, lVar7 != 0)) {
            UnityEngine_Transform__SetParent_43d1e34(lVar7,lVar5,0,0);
            lVar7 = UnityEngine_GameObject__GetComponent_object__275a5dc
                              (lVar8,*(undefined8 *)puVar3);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar11 = Dino_BusSand_View_MechanicLayer__BadgeQuad_23c7494();
            puVar1 = PTR_DAT_04cb6dc8;
            if (lVar7 != 0) {
              UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar7,uVar11,0);
              lVar8 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                (lVar8,*(undefined8 *)puVar1);
              uVar11 = Dino_BusSand_View_MechanicLayer__BadgeMaterial_23c7764();
              if (lVar8 != 0) {
                UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar8,uVar11,0);
                UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar8,0,0);
                UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar8,0,0);
                UnityEngine_Transform__get_position_43d0e48(lVar5,0);
                lVar8 = Dino_BusSand_View_MechanicLayer__Label_23c26b4(param_4,lVar5);
                if (lVar8 != 0) {
                  lVar7 = TMPro_TextMeshPro__get_transform_430ef6c(lVar8,0);
                  if (cRam0000000004f9b65e == '\0') {
                    FUN_02132f7c(PTR_DAT_04caa208);
                    cRam0000000004f9b65e = '\x01';
                  }
                  if (lVar7 != 0) {
                    lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
                    uVar11 = *(undefined8 *)(lVar9 + 0xc);
                    fVar12 = (float)((ulong)uVar11 >> 0x20) * 0.42;
                    UnityEngine_Transform__set_localScale_43d1be0
                              (CONCAT44(fVar12,(float)uVar11 * 0.42),fVar12,
                               *(float *)(lVar9 + 0x14) * _UNK_00e203f4,lVar7,0);
                    lVar7 = TMPro_TextMeshPro__get_transform_430ef6c(lVar8,0);
                    if (lVar7 != 0) {
                      UnityEngine_Transform__set_localPosition_43cfda8
                                (0,_UNK_00e20844,_UNK_00e20000,lVar7,0);
                      lVar7 = TMPro_TextMeshPro__get_transform_430ef6c(lVar8,0);
                      if (cRam0000000004f9b88b == '\0') {
                        FUN_02132f7c(PTR_DAT_04cab4b0);
                        cRam0000000004f9b88b = '\x01';
                      }
                      if (lVar7 != 0) {
                        puVar10 = *(undefined4 **)(*(long *)PTR_DAT_04cab4b0 + 0xb8);
                        UnityEngine_Transform__set_localRotation_43d156c
                                  (*puVar10,puVar10[1],puVar10[2],puVar10[3],lVar7,0);
                        lVar7 = TMPro_TMP_Text__get_fontMaterial_42cb8b0(lVar8,0);
                        if (lVar7 != 0) {
                          UnityEngine_Material__SetFloat_4383048
                                    (0x41000000,lVar7,*(undefined8 *)PTR_DAT_04cbd290,0);
                          UnityEngine_Material__set_renderQueue_437c9d8(lVar7,0xe11,0);
                          if (*(long *)(param_4 + 0x98) != 0) {
                            System_Collections_Generic_Dictionary_int__object___set_Item_3437318
                                      (*(long *)(param_4 + 0x98),param_5,lVar5,
                                       *(undefined8 *)PTR_DAT_04cbd078);
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
          goto LAB_024c7480;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_024c7480:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

