/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$CarRect
bool Dino_BusSand_App_UI_GuideDimHoles__CarRect (UnityEngine_Camera_o* cam, Dino_BusSand_View_VehicleView_o* car, UnityEngine_Vector2_o* min, UnityEngine_Vector2_o* max, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$CarRect
   bool Dino_BusSand_App_UI_GuideDimHoles__CarRect (UnityEngine_Camera_o* cam,
   Dino_BusSand_View_VehicleView_o* car, UnityEngine_Vector2_o* min, UnityEngine_Vector2_o* max,
   const MethodInfo* method); */

undefined4
Dino_BusSand_App_UI_GuideDimHoles__CarRect_22c7234
          (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
          ulong *param_6,ulong *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  undefined4 uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  if ((bRam0000000004f9c360 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb68f0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c360 = 1;
  }
  if (param_5 != 0) {
    lVar9 = *(long *)(param_5 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
    if ((uVar5 & 1) != 0) {
      return 0;
    }
    if (lVar9 != 0) {
      fVar14 = (float)UnityEngine_Transform__get_forward_43d17f4(lVar9,0);
      fVar15 = (float)Dino_BusSand_View_VehicleView__get_LengthWorld_23fefbc(param_5,0);
      fVar15 = fVar15 * 0.5;
      fVar28 = fVar14 * fVar15;
      fVar29 = param_2 * fVar15;
      uVar5 = CONCAT44(fVar29,fVar28);
      fVar16 = (float)UnityEngine_Transform__get_right_43d15f4(lVar9,0);
      fVar17 = (float)Dino_BusSand_View_VehicleView__get_WidthWorld_23ff030(param_5,0);
      fVar17 = fVar17 * 0.5;
      fVar30 = fVar14 * fVar17;
      uVar8 = CONCAT44(fVar30,fVar16 * fVar17);
      if (cRam0000000004f9bcf8 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9bcf8 = '\x01';
      }
      puVar1 = PTR_DAT_04caa208;
      uVar26 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
      fVar27 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20);
      fVar18 = (float)Dino_BusSand_View_VehicleView__get_ModelHeightWorld_23fefb0(param_5,0);
      puVar2 = PTR_DAT_04cb68f0;
      lVar10 = 0;
      uVar13 = 0;
      fVar27 = fVar27 * fVar18;
      uVar22 = (ulong)(uint)fVar27;
      do {
        fVar21 = (float)uVar22;
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar2;
        }
        lVar6 = **(long **)(lVar6 + 0xb8);
        fVar19 = (float)UnityEngine_Transform__get_position_43d0e48(lVar9,0);
        bVar3 = (uVar13 & 1) == 0;
        fVar24 = -(param_3 * fVar15);
        if (!bVar3) {
          fVar24 = param_3 * fVar15;
        }
        bVar4 = (uVar13 & 2) == 0;
        fVar31 = -(param_2 * fVar17);
        if (!bVar4) {
          fVar31 = param_2 * fVar17;
        }
        uVar25 = CONCAT44((float)((ulong)uVar26 >> 0x20) * fVar18,(float)uVar26 * fVar18);
        fVar20 = fVar27;
        if (((uint)uVar13 >> 2 & 1) == 0) {
          if (cRam0000000004f9b65d == '\0') {
            FUN_02132f7c(puVar1);
            cRam0000000004f9b65d = '\x01';
          }
          puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          uVar25 = *puVar7;
          fVar20 = *(float *)(puVar7 + 1);
        }
        if (lVar6 == 0) goto LAB_023c7540;
        if (*(uint *)(lVar6 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        uVar13 = uVar13 + 1;
        lVar6 = lVar6 + lVar10;
        lVar10 = lVar10 + 0xc;
        uVar22 = uVar5 ^ (uVar5 ^ CONCAT44(-fVar29,-fVar28)) &
                         CONCAT44(-(uint)((int)((uint)bVar3 << 0x1f) < 0),
                                  -(uint)((int)((uint)bVar3 << 0x1f) < 0));
        uVar23 = uVar8 ^ (uVar8 ^ CONCAT44(-fVar30,-(fVar16 * fVar17))) &
                         CONCAT44(-(uint)((int)((uint)bVar4 << 0x1f) < 0),
                                  -(uint)((int)((uint)bVar4 << 0x1f) < 0));
        fVar24 = fVar24 + fVar14;
        fVar14 = (float)uVar23 + (float)uVar22 + fVar19;
        uVar22 = CONCAT44((float)(uVar23 >> 0x20) + (float)(uVar22 >> 0x20) + fVar21 +
                          (float)((ulong)uVar25 >> 0x20),fVar14 + (float)uVar25);
        *(ulong *)(lVar6 + 0x20) = uVar22;
        *(float *)(lVar6 + 0x28) = fVar31 + fVar24 + fVar20;
      } while (uVar13 != 8);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar1 = PTR_DAT_04cb68f0;
      if ((bRam0000000004f9c361 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb68f0);
        bRam0000000004f9c361 = 1;
      }
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar1;
      }
      lVar9 = **(long **)(lVar9 + 0xb8);
      if (lVar9 != 0) {
        if ((int)*(ulong *)(lVar9 + 0x18) < 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          uVar5 = 0;
          uVar8 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
          pfVar11 = (float *)(lVar9 + 0x28);
          do {
            if (uVar8 <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            if (param_4 == 0) goto LAB_023c764c;
            fVar15 = pfVar11[-1];
            fVar16 = *pfVar11;
            fVar14 = (float)UnityEngine_Camera__WorldToScreenPoint_435c56c(pfVar11[-2],param_4,0);
            if (0.0 < fVar16) {
              uVar8 = CONCAT44(fVar15,fVar14);
              uVar13 = *param_6;
              uVar12 = 1;
              *param_6 = uVar13 ^ (uVar13 ^ uVar8) &
                                  ~CONCAT44(-(uint)((float)(uVar13 >> 0x20) < fVar15),
                                            -(uint)((float)uVar13 < fVar14));
              uVar13 = *param_7;
              *param_7 = uVar8 ^ (uVar8 ^ uVar13) &
                                 CONCAT44(-(uint)(fVar15 < (float)(uVar13 >> 0x20)),
                                          -(uint)(fVar14 < (float)uVar13));
            }
            uVar8 = (ulong)*(uint *)(lVar9 + 0x18);
            uVar5 = uVar5 + 1;
            pfVar11 = pfVar11 + 3;
          } while ((long)uVar5 < (long)(int)*(uint *)(lVar9 + 0x18));
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

