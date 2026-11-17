/* IL2CPP: Dino.BusSand.View.VehicleView$$BuildPack
void Dino_BusSand_View_VehicleView__BuildPack (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$BuildPack
   void Dino_BusSand_View_VehicleView__BuildPack (Dino_BusSand_View_VehicleView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_VehicleView__BuildPack_23f4644
               (undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  undefined4 uVar21;
  undefined1 auStack_78 [4];
  float fStack_74;
  float fStack_68;
  
  if ((bRam0000000004f9cac9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa138);
    FUN_02132f7c(PTR_DAT_04cb7780);
    FUN_02132f7c(PTR_DAT_04cbc848);
    FUN_02132f7c(PTR_DAT_04cb7790);
    FUN_02132f7c(PTR_DAT_04cb7798);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04caa0d8);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd7b8);
    FUN_02132f7c(PTR_DAT_04cbdeb8);
    FUN_02132f7c(PTR_DAT_04cb9428);
    FUN_02132f7c(PTR_DAT_04cb6950);
    FUN_02132f7c(PTR_DAT_04cbc440);
    FUN_02132f7c(PTR_DAT_04cb7e18);
    FUN_02132f7c(PTR_DAT_04cbc978);
    FUN_02132f7c(PTR_DAT_04cbc868);
    bRam0000000004f9cac9 = 1;
  }
  lVar8 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
  puVar5 = PTR_DAT_04cad390;
  puVar3 = PTR_DAT_04ca9ae8;
  if (lVar8 != 0) {
    uVar9 = Dino_BusSand_View_ArtPackData__Prefab_2390a44(lVar8,*(undefined4 *)(param_4 + 0x24),0);
    uVar14 = *(undefined8 *)(param_4 + 0x40);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    lVar8 = UnityEngine_Object__Instantiate_object__2805310(uVar9,uVar14,0,*(undefined8 *)puVar5);
    puVar5 = PTR_DAT_04cb7790;
    if (lVar8 != 0) {
      UnityEngine_Object__set_name_43c72ec(lVar8,*(undefined8 *)PTR_DAT_04cbc868,0);
      lVar10 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                         (lVar8,1,*(undefined8 *)puVar5);
      if (lVar10 != 0) {
        if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
          uVar15 = 0;
          uVar12 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
          do {
            if (uVar12 <= uVar15) goto LAB_024f4d80;
            uVar9 = *(undefined8 *)(lVar10 + 0x20 + uVar15 * 8);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            UnityEngine_Object__Destroy_43c8114(uVar9,0);
            uVar12 = (ulong)*(uint *)(lVar10 + 0x18);
            uVar15 = uVar15 + 1;
          } while ((long)uVar15 < (long)(int)*(uint *)(lVar10 + 0x18));
        }
        puVar4 = PTR_DAT_04cbc440;
        puVar5 = PTR_DAT_04cb7780;
        uVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
        lVar10 = Dino_BusSand_Util__FindDeep_238d3bc(uVar9,*(undefined8 *)puVar4,0);
        if (lVar10 == 0) {
          lVar10 = 0;
          puVar2 = (undefined8 *)PTR_DAT_04cbc978;
        }
        else {
          lVar10 = UnityEngine_Component__GetComponent_object__26f97e8(lVar10,*(undefined8 *)puVar5)
          ;
          puVar2 = (undefined8 *)PTR_DAT_04cbc978;
        }
        PTR_DAT_04cbc978 = (undefined *)puVar2;
        if (param_4 != 0) {
          plVar17 = (long *)(param_4 + 0xe8);
          *plVar17 = lVar10;
          thunk_FUN_02134474(plVar17);
          lVar10 = Dino_BusSand_Util__FindDeep_238d3bc(uVar9,*puVar2,0);
          plVar16 = (long *)(param_4 + 0xf8);
          *plVar16 = lVar10;
          thunk_FUN_02134474(plVar16,lVar10);
          lVar10 = *plVar16;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar15 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
          uVar14 = 0;
          if ((uVar15 & 1) != 0) {
            if (*plVar16 == 0) goto LAB_024f4d84;
            uVar14 = UnityEngine_Component__GetComponent_object__26f97e8
                               (*plVar16,*(undefined8 *)puVar5);
          }
          puVar7 = PTR_DAT_04cbd7b8;
          puVar6 = PTR_DAT_04cb7e18;
          puVar4 = PTR_DAT_04cb7798;
          puVar5 = PTR_DAT_04cb6950;
          *(undefined8 *)(param_4 + 0xf0) = uVar14;
          thunk_FUN_02134474();
          Dino_BusSand_View_VehicleView__UseHeapShader_23f723c(param_4);
          lVar10 = Dino_BusSand_Util__FindDeep_238d3bc(uVar9,*(undefined8 *)puVar7,0);
          lVar11 = Dino_BusSand_Util__FindDeep_238d3bc(uVar9,*(undefined8 *)puVar5,0);
          uVar9 = Dino_BusSand_Util__FindDeep_238d3bc(uVar9,*(undefined8 *)puVar6,0);
          *(undefined8 *)(param_4 + 0x308) = uVar9;
          thunk_FUN_02134474(param_4 + 0x308,uVar9);
          lVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                            (lVar8,1,*(undefined8 *)puVar4);
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (0 < (int)uVar1) {
              lVar19 = 0;
              do {
                if (uVar1 <= (uint)lVar19) {
LAB_024f4d80:
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                lVar18 = *(long *)(lVar8 + 0x20 + lVar19 * 8);
                if (lVar18 == 0) goto LAB_024f4d84;
                UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar18,0,0);
                UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar18,0,0);
                UnityEngine_Renderer__set_lightProbeUsage_4373e90(lVar18,0,0);
                UnityEngine_Renderer__set_reflectionProbeUsage_4373f54(lVar18,0,0);
                uVar1 = *(uint *)(lVar8 + 0x18);
                lVar19 = lVar19 + 1;
              } while ((int)lVar19 < (int)uVar1);
            }
            lVar8 = *plVar17;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar15 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
            fVar20 = _UNK_00e205ec;
            if ((uVar15 & 1) != 0) {
              if (((*plVar17 == 0) ||
                  (lVar8 = UnityEngine_Component__GetComponent_object__26f97e8
                                     (*plVar17,*(undefined8 *)PTR_DAT_04caa138), lVar8 == 0)) ||
                 (lVar8 = UnityEngine_MeshFilter__get_sharedMesh_43893a0(lVar8,0), lVar8 == 0))
              goto LAB_024f4d84;
              UnityEngine_Mesh__get_bounds_438fac4(auStack_78,lVar8,0);
              param_2 = fStack_68;
              fVar20 = fStack_74 + fStack_68;
            }
            lVar8 = *(long *)puVar3;
            uVar9 = *(undefined8 *)(param_4 + 0xf8);
            *(float *)(param_4 + 0xb4) = fVar20;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar15 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
            if ((uVar15 & 1) != 0) {
              if (*plVar16 == 0) goto LAB_024f4d84;
              uVar21 = UnityEngine_Transform__get_localPosition_43cfce8(*plVar16,0);
              *(undefined4 *)(param_4 + 0x100) = uVar21;
              *(float *)(param_4 + 0x104) = param_2;
              *(undefined4 *)(param_4 + 0x108) = param_3;
              if (*(long *)(param_4 + 0xf8) == 0) goto LAB_024f4d84;
              uVar21 = UnityEngine_Transform__get_localScale_43d1b0c(*(long *)(param_4 + 0xf8),0);
              *(undefined4 *)(param_4 + 0x10c) = uVar21;
              *(float *)(param_4 + 0x110) = param_2;
              *(undefined4 *)(param_4 + 0x114) = param_3;
              if ((*(long *)(param_4 + 0xf8) == 0) ||
                 (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_4 + 0xf8),0)
                 , lVar8 == 0)) goto LAB_024f4d84;
              UnityEngine_GameObject__SetActive_43c1408(lVar8,0,0);
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            puVar4 = PTR_DAT_04caa070;
            uVar15 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
            if ((uVar15 & 1) == 0) {
              lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
              UnityEngine_GameObject___ctor_43c20cc(lVar8,*(undefined8 *)puVar5,0);
              if (lVar8 == 0) goto LAB_024f4d84;
              lVar8 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
              plVar16 = (long *)(param_4 + 0x78);
              *plVar16 = lVar8;
              thunk_FUN_02134474(plVar16,lVar8);
              if (*plVar16 == 0) goto LAB_024f4d84;
              UnityEngine_Transform__SetParent_43d1e34(*plVar16,*(undefined8 *)(param_4 + 0x38),0,0)
              ;
            }
            else {
              if (lVar11 == 0) goto LAB_024f4d84;
              UnityEngine_Transform__SetParent_43d1e34(lVar11,*(undefined8 *)(param_4 + 0x38),0,0);
              if (cRam0000000004f9b65d == '\0') {
                FUN_02132f7c(PTR_DAT_04caa208);
                cRam0000000004f9b65d = '\x01';
              }
              puVar13 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
              UnityEngine_Transform__set_localPosition_43cfda8
                        (*puVar13,puVar13[1],puVar13[2],lVar11,0);
              *(long *)(param_4 + 0x78) = lVar11;
              thunk_FUN_02134474((long *)(param_4 + 0x78),lVar11);
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar15 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
            if ((uVar15 & 1) == 0) {
              lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
              UnityEngine_GameObject___ctor_43c20cc(lVar8,*(undefined8 *)PTR_DAT_04cb9428,0);
              if (lVar8 == 0) goto LAB_024f4d84;
              lVar8 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
              plVar16 = (long *)(param_4 + 0x68);
              *plVar16 = lVar8;
              thunk_FUN_02134474(plVar16,lVar8);
              if (*plVar16 == 0) goto LAB_024f4d84;
              UnityEngine_Transform__SetParent_43d1e34(*plVar16,*(undefined8 *)(param_4 + 0x40),0,0)
              ;
            }
            else {
              *(long *)(param_4 + 0x68) = lVar10;
              thunk_FUN_02134474((long *)(param_4 + 0x68),lVar10);
              if (lVar10 == 0) goto LAB_024f4d84;
              uVar9 = UnityEngine_Component__GetComponent_object__26f97e8
                                (lVar10,*(undefined8 *)PTR_DAT_04cbc848);
              *(undefined8 *)(param_4 + 0x118) = uVar9;
              thunk_FUN_02134474(param_4 + 0x118,uVar9);
            }
            puVar3 = PTR_DAT_04cbdeb8;
            uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa0d8);
            UnityEngine_MaterialPropertyBlock___ctor_4372b28(uVar9,0);
            *(undefined8 *)(param_4 + 0x120) = uVar9;
            thunk_FUN_02134474(param_4 + 0x120,uVar9);
            uVar9 = *(undefined8 *)puVar4;
            uVar21 = 0;
            if (*(char *)(param_4 + 0x30) != '\0') {
              uVar21 = 0x3f800000;
            }
            *(undefined4 *)(param_4 + 0x128) = uVar21;
            lVar8 = thunk_FUN_0216e89c(uVar9);
            UnityEngine_GameObject___ctor_43c20cc(lVar8,*(undefined8 *)puVar3,0);
            if (lVar8 != 0) {
              lVar10 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
              plVar16 = (long *)(param_4 + 0x60);
              *plVar16 = lVar10;
              thunk_FUN_02134474(plVar16,lVar10);
              if (*plVar16 != 0) {
                UnityEngine_Transform__SetParent_43d1e34
                          (*plVar16,*(undefined8 *)(param_4 + 0x40),0,0);
                UnityEngine_GameObject__SetActive_43c1408(lVar8,0,0);
                Dino_BusSand_View_VehicleView__SetMode_23f6b40(param_4,0);
                Dino_BusSand_View_VehicleView__ApplyBodyColor_23f6f64(param_4);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_024f4d84:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

