/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$TargetRect
bool Dino_BusSand_App_UI_GuideDimHoles__TargetRect (Dino_BusSand_App_UI_GuideDimHoles_o* __this, UnityEngine_Camera_o* cam, int32_t i, UnityEngine_Vector2_o* min, UnityEngine_Vector2_o* max, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$TargetRect
   bool Dino_BusSand_App_UI_GuideDimHoles__TargetRect (Dino_BusSand_App_UI_GuideDimHoles_o* __this,
   UnityEngine_Camera_o* cam, int32_t i, UnityEngine_Vector2_o* min, UnityEngine_Vector2_o* max,
   const MethodInfo* method); */

uint Dino_BusSand_App_UI_GuideDimHoles__TargetRect_22c6d78
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               long param_5,undefined4 param_6,ulong *param_7,ulong *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  float *pfVar13;
  ulong uVar14;
  undefined4 uVar15;
  float extraout_s0;
  float fVar16;
  float extraout_s0_00;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  float fVar22;
  float fVar23;
  ulong uVar24;
  ulong uVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  
  if ((bRam0000000004f9c35e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb68f0);
    FUN_02132f7c(PTR_DAT_04cb6980);
    FUN_02132f7c(PTR_DAT_04cb6988);
    FUN_02132f7c(PTR_DAT_04cad7c8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c35e = 1;
  }
  fVar21 = -3.4028235e+38;
  *param_7 = 0x7f7fffff7f7fffff;
  *param_8 = 0xff7fffffff7fffff;
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(long *)(param_4 + 0x20) == 0) goto LAB_023c7108;
  lVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                    (*(long *)(param_4 + 0x20),param_6,*(undefined8 *)PTR_DAT_04cad7c8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(param_5,0,0);
  if ((uVar7 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
    if ((uVar7 & 1) == 0) {
      if ((lVar6 == 0) ||
         (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0), lVar6 == 0))
      goto LAB_023c7108;
      uVar7 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar6,0);
      if ((uVar7 & 1) != 0) {
        if (*(long *)(param_4 + 0x68) == 0) {
LAB_023c7108:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                          (*(long *)(param_4 + 0x68),param_6,*(undefined8 *)PTR_DAT_04cb6980);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_04cb68f0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          fStack_a0 = (float)unaff_d15;
          fStack_9c = (float)((ulong)unaff_d15 >> 0x20);
          fStack_98 = (float)unaff_d14;
          fStack_94 = (float)((ulong)unaff_d14 >> 0x20);
          if ((bRam0000000004f9c360 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cb68f0);
            FUN_02132f7c(PTR_DAT_04ca9ae8);
            bRam0000000004f9c360 = 1;
          }
          if (lVar6 != 0) {
            lVar11 = *(long *)(lVar6 + 0x38);
            if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
            if ((uVar7 & 1) != 0) {
              return 0;
            }
            if (lVar11 != 0) {
              UnityEngine_Transform__get_forward_43d17f4(lVar11,0);
              uStack_a8 = extraout_var;
              fVar16 = (float)Dino_BusSand_View_VehicleView__get_LengthWorld_23fefbc(lVar6,0);
              fVar16 = fVar16 * 0.5;
              fVar30 = fVar21 * fVar16;
              uVar7 = CONCAT44(fVar30,extraout_s0 * fVar16);
              fVar23 = extraout_s0;
              UnityEngine_Transform__get_right_43d15f4(lVar11,0);
              uStack_a8 = extraout_var_00;
              fVar17 = (float)Dino_BusSand_View_VehicleView__get_WidthWorld_23ff030(lVar6,0);
              fVar17 = fVar17 * 0.5;
              fVar31 = fVar23 * fVar17;
              uVar10 = CONCAT44(fVar31,extraout_s0_00 * fVar17);
              if (cRam0000000004f9bcf8 == '\0') {
                FUN_02132f7c(PTR_DAT_04caa208);
                cRam0000000004f9bcf8 = '\x01';
              }
              puVar1 = PTR_DAT_04caa208;
              uVar28 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
              fVar29 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20);
              fVar18 = (float)Dino_BusSand_View_VehicleView__get_ModelHeightWorld_23fefb0(lVar6,0);
              puVar2 = PTR_DAT_04cb68f0;
              lVar6 = 0;
              uVar14 = 0;
              fVar29 = fVar29 * fVar18;
              uVar24 = (ulong)(uint)fVar29;
              do {
                fVar22 = (float)uVar24;
                lVar8 = *(long *)puVar2;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar8 = *(long *)puVar2;
                }
                lVar8 = **(long **)(lVar8 + 0xb8);
                fVar19 = (float)UnityEngine_Transform__get_position_43d0e48(lVar11,0);
                bVar3 = (uVar14 & 1) == 0;
                fVar26 = -(param_3 * fVar16);
                if (!bVar3) {
                  fVar26 = param_3 * fVar16;
                }
                bVar4 = (uVar14 & 2) == 0;
                fVar32 = -(fVar21 * fVar17);
                if (!bVar4) {
                  fVar32 = fVar21 * fVar17;
                }
                uVar27 = CONCAT44((float)((ulong)uVar28 >> 0x20) * fVar18,(float)uVar28 * fVar18);
                fVar20 = fVar29;
                if (((uint)uVar14 >> 2 & 1) == 0) {
                  if (cRam0000000004f9b65d == '\0') {
                    FUN_02132f7c(puVar1);
                    cRam0000000004f9b65d = '\x01';
                  }
                  puVar9 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
                  uVar27 = *puVar9;
                  fVar20 = *(float *)(puVar9 + 1);
                }
                if (lVar8 == 0) goto LAB_023c7540;
                if (*(uint *)(lVar8 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                uVar14 = uVar14 + 1;
                lVar8 = lVar8 + lVar6;
                lVar6 = lVar6 + 0xc;
                uVar24 = uVar7 ^ (uVar7 ^ CONCAT44(-fVar30,-(extraout_s0 * fVar16))) &
                                 CONCAT44(-(uint)((int)((uint)bVar3 << 0x1f) < 0),
                                          -(uint)((int)((uint)bVar3 << 0x1f) < 0));
                uVar25 = uVar10 ^ (uVar10 ^ CONCAT44(-fVar31,-(extraout_s0_00 * fVar17))) &
                                  CONCAT44(-(uint)((int)((uint)bVar4 << 0x1f) < 0),
                                           -(uint)((int)((uint)bVar4 << 0x1f) < 0));
                fVar26 = fVar26 + fVar23;
                fVar23 = (float)uVar25 + (float)uVar24 + fVar19;
                uVar24 = CONCAT44((float)(uVar25 >> 0x20) + (float)(uVar24 >> 0x20) + fVar22 +
                                  (float)((ulong)uVar27 >> 0x20),fVar23 + (float)uVar27);
                *(ulong *)(lVar8 + 0x20) = uVar24;
                *(float *)(lVar8 + 0x28) = fVar32 + fVar26 + fVar20;
              } while (uVar14 != 8);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              puVar1 = PTR_DAT_04cb68f0;
              if ((bRam0000000004f9c361 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cb68f0);
                bRam0000000004f9c361 = 1;
              }
              lVar6 = *(long *)puVar1;
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar6 = *(long *)puVar1;
              }
              lVar6 = **(long **)(lVar6 + 0xb8);
              if (lVar6 != 0) {
                if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = 0;
                  uVar7 = 0;
                  uVar10 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
                  pfVar13 = (float *)(lVar6 + 0x28);
                  do {
                    if (uVar10 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                      FUN_0213322c();
                    }
                    if (param_5 == 0) goto LAB_023c764c;
                    fVar23 = pfVar13[-1];
                    fVar16 = *pfVar13;
                    fVar21 = (float)UnityEngine_Camera__WorldToScreenPoint_435c56c
                                              (pfVar13[-2],param_5,0);
                    if (0.0 < fVar16) {
                      uVar10 = CONCAT44(fVar23,fVar21);
                      uVar14 = *param_7;
                      uVar12 = 1;
                      *param_7 = uVar14 ^ (uVar14 ^ uVar10) &
                                          ~CONCAT44(-(uint)((float)(uVar14 >> 0x20) < fVar23),
                                                    -(uint)((float)uVar14 < fVar21));
                      uVar14 = *param_8;
                      *param_8 = uVar10 ^ (uVar10 ^ uVar14) &
                                          CONCAT44(-(uint)(fVar23 < (float)(uVar14 >> 0x20)),
                                                   -(uint)(fVar21 < (float)uVar14));
                    }
                    uVar10 = (ulong)*(uint *)(lVar6 + 0x18);
                    uVar7 = uVar7 + 1;
                    pfVar13 = pfVar13 + 3;
                  } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
                }
                return uVar12;
              }
LAB_023c764c:
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
          }
LAB_023c7540:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if ((*(long *)(param_4 + 0x70) == 0) ||
           (lVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                              (*(long *)(param_4 + 0x70),param_6,*(undefined8 *)PTR_DAT_04cb6988),
           puVar2 = PTR_DAT_04cb68f0, uVar7 = _UNK_00e6a090, lVar6 == 0)) goto LAB_023c7108;
        if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
          uVar12 = 0;
          uVar10 = 0;
          uVar14 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
          do {
            if (uVar14 <= uVar10) {
LAB_023c710c:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            lVar11 = *(long *)(lVar6 + uVar10 * 8 + 0x20);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar14 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
            if ((uVar14 & 1) == 0) {
              if (lVar11 == 0) goto LAB_023c7108;
              uVar14 = UnityEngine_Renderer__get_enabled_4373a28(lVar11,0);
              if ((uVar14 & 1) != 0) {
                lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar11,0);
                if (lVar8 == 0) goto LAB_023c7108;
                uVar14 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar8,0);
                if ((uVar14 & 1) != 0) {
                  UnityEngine_Renderer__get_bounds_4372fdc(&uStack_a8,lVar11,0);
                  fVar23 = fStack_94;
                  fVar21 = fStack_a0;
                  uVar28 = uStack_a8;
                  uVar24 = CONCAT44(fStack_98,fStack_9c);
                  lVar11 = 0;
                  uVar14 = 0;
                  fVar16 = -fStack_9c;
                  fVar17 = -fStack_98;
                  fVar30 = -fStack_94;
                  do {
                    lVar8 = *(long *)puVar2;
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar8 = *(long *)puVar2;
                    }
                    uVar15 = (undefined4)uVar14;
                    fVar31 = fVar30;
                    if ((uVar14 & 4) != 0) {
                      fVar31 = fVar23;
                    }
                    lVar8 = **(long **)(lVar8 + 0xb8);
                    if (lVar8 == 0) goto LAB_023c7108;
                    if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_023c710c;
                    uVar14 = uVar14 + 1;
                    lVar8 = lVar8 + lVar11;
                    lVar11 = lVar11 + 0xc;
                    uVar25 = CONCAT44(uVar15,uVar15) & uVar7;
                    *(float *)(lVar8 + 0x28) = fVar21 + fVar31;
                    uVar25 = uVar24 ^ (uVar24 ^ CONCAT44(fVar17,fVar16)) &
                                      CONCAT44(-(uint)((int)(uVar25 >> 0x20) == 0),
                                               -(uint)((int)uVar25 == 0));
                    *(ulong *)(lVar8 + 0x20) =
                         CONCAT44((float)((ulong)uVar28 >> 0x20) + (float)(uVar25 >> 0x20),
                                  (float)uVar28 + (float)uVar25);
                  } while (uVar14 != 8);
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar5 = Dino_BusSand_App_UI_GuideDimHoles__Project_22c7548
                                    (param_5,param_7,param_8);
                  uVar12 = uVar12 | uVar5;
                }
              }
            }
            uVar14 = (ulong)*(uint *)(lVar6 + 0x18);
            uVar10 = uVar10 + 1;
          } while ((long)uVar10 < (long)(int)*(uint *)(lVar6 + 0x18));
          goto LAB_023c70d4;
        }
      }
    }
  }
  uVar12 = 0;
LAB_023c70d4:
  return uVar12 & 1;
}

