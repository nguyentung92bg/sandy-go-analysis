/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Frame
bool Dino_BusSand_App_UI_HomeStage__Frame (Dino_BusSand_App_UI_HomeStage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Frame
   bool Dino_BusSand_App_UI_HomeStage__Frame (Dino_BusSand_App_UI_HomeStage_o* __this, const
   MethodInfo* method); */

bool Dino_BusSand_App_UI_HomeStage__Frame_22f0810(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float in_s3;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000004f9c467 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb74a8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabda8);
    bRam0000000004f9c467 = 1;
  }
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uVar5 = Dino_BusSand_App_UI_HomeStage__get_UiCam_22efea4();
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
    if ((uVar6 & 1) != 0) {
LAB_023f0d04:
                    /* try { // try from 023f0d10 to 024f0d1f has its CatchHandler @ 023f0e8c */
      return *(char *)(param_1 + 0xa4) != '\0';
    }
    if (lVar9 != 0) {
      UnityEngine_RectTransform__get_rect_43cf450(lVar9,0);
      if ((in_s3 < 10.0) || (*(float *)(param_1 + 0x98) <= 0.0)) goto LAB_023f0d04;
      if (*(long *)(param_1 + 0x20) != 0) {
        iVar3 = UnityEngine_Camera__get_pixelWidth_435aca0(*(long *)(param_1 + 0x20),0);
                    /* try { // try from 023f08f4 to 024f08fb has its CatchHandler @ 023f0e38 */
        if (iVar3 < 2) {
          iVar3 = 1;
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          iVar4 = UnityEngine_Camera__get_pixelHeight_435ad54(*(long *)(param_1 + 0x20),0);
                    /* try { // try from 023f0910 to 024f0913 has its CatchHandler @ 023f0e28 */
                    /* try { // try from 023f0914 to 024f0923 has its CatchHandler @ 023f0e34 */
          if (iVar4 < 2) {
            iVar4 = 1;
          }
          if (cRam0000000004f9b65d == '\0') {
                    /* try { // try from 023f0928 to 024f093f has its CatchHandler @ 023f0e30 */
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65d = '\x01';
          }
          puVar1 = PTR_DAT_04caa208;
                    /* try { // try from 023f0940 to 024f0cf3 has its CatchHandler @ 023f0650 */
          puVar7 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
          uVar18 = puVar7[1];
          uVar22 = puVar7[2];
          uVar10 = UnityEngine_Transform__TransformPoint_43d3c44(*puVar7,uVar18,uVar22,lVar9,0);
          if (*(int *)(*(long *)PTR_DAT_04cabda8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          fVar11 = (float)UnityEngine_RectTransformUtility__WorldToScreenPoint_467e894
                                    (uVar10,uVar18,uVar22,uVar5,0);
          UnityEngine_Transform__TransformPoint_43d3c44(0x42c80000,0,0,lVar9,0);
          fVar12 = (float)UnityEngine_RectTransformUtility__WorldToScreenPoint_467e894(uVar5,0);
          fVar12 = ABS(fVar12 - fVar11) / 100.0;
          fVar11 = _UNK_00e20448;
          if (_UNK_00e20448 <= fVar12) {
            fVar11 = fVar12;
          }
          fVar12 = _UNK_00e20448;
          UnityEngine_RectTransform__get_rect_43cf450(lVar9,0);
          fVar19 = (in_s3 + fVar12) - *(float *)(param_1 + 0x94);
          UnityEngine_Transform__TransformPoint_43d3c44(0,fVar19,0,lVar9,0);
          fVar13 = (float)UnityEngine_RectTransformUtility__WorldToScreenPoint_467e894(uVar5,0);
          fVar17 = _UNK_00e20548;
          lVar9 = *(long *)(param_1 + 0x28);
          fVar14 = *(float *)(param_1 + 0x98) * fVar11;
          fVar12 = 1.0;
          if (1.0 <= fVar14) {
            fVar12 = fVar14;
          }
          if (lVar9 != 0) {
            fVar23 = (float)iVar3;
            fVar27 = (fVar23 * 0.5) / _UNK_00e20548;
            fVar20 = *(float *)(param_1 + 0x94) - (*(float *)(lVar9 + 0x60) + 150.0);
            fVar12 = (fVar27 * _UNK_00e20484) / fVar12;
            fVar14 = 60.0;
            if (60.0 <= fVar20) {
              fVar14 = fVar20;
            }
            fVar15 = (float)atanf((fVar11 * fVar14) / fVar27);
            fVar14 = _UNK_00e20410;
            fVar15 = fVar15 * _UNK_00e20410;
            fVar20 = 14.0;
            if (fVar15 <= 14.0) {
              fVar20 = fVar15;
            }
            fVar27 = ((fVar12 * fVar11 * *(float *)(lVar9 + 0x6c)) / fVar27) / _UNK_00e1fe74;
            fVar11 = 3.0;
            if (3.0 <= fVar15) {
              fVar11 = fVar20;
            }
            fVar26 = *(float *)(lVar9 + 0x5c) * fVar27;
            fVar15 = fVar11 * _UNK_00e20a74;
            fVar24 = 0.0;
            *(float *)(param_1 + 0x8c) = fVar27;
            *(float *)(param_1 + 0x90) = fVar26;
            fVar20 = _UNK_00e20704;
            uVar10 = UnityEngine_Quaternion__Internal_FromEulerRad_43af004(fVar15,_UNK_00e20704,0,0)
            ;
            puVar2 = PTR_DAT_04cb74a8;
            lVar9 = *(long *)PTR_DAT_04cb74a8;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar9 = *(long *)puVar2;
            }
            if (*(long *)(param_1 + 0x20) != 0) {
              lVar9 = *(long *)(lVar9 + 0xb8);
              fVar29 = *(float *)(param_1 + 0x90);
              fVar27 = *(float *)(lVar9 + 4);
              fVar15 = *(float *)(lVar9 + 8);
              fVar30 = *(float *)(lVar9 + 0xc);
              lVar9 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_1 + 0x20),0);
              if (cRam0000000004f9c41d == '\0') {
                FUN_02132f7c(PTR_DAT_04caa208);
                cRam0000000004f9c41d = '\x01';
              }
              lVar8 = *(long *)(*(long *)puVar1 + 0xb8);
              fVar25 = fVar24;
              fVar21 = fVar20;
              fVar16 = (float)UnityEngine_Quaternion__op_Multiply_43af48c
                                        (uVar10,fVar20,fVar24,fVar26,*(undefined4 *)(lVar8 + 0x48),
                                         *(undefined4 *)(lVar8 + 0x4c),*(undefined4 *)(lVar8 + 0x50)
                                         ,0);
              if (lVar9 != 0) {
                fVar28 = (float)iVar4;
                UnityEngine_Transform__SetPositionAndRotation_43d2064
                          ((fVar27 + fVar29) - fVar12 * fVar16,
                           (fVar15 + _UNK_00e2054c) - fVar12 * fVar21,
                           (fVar30 + 0.0) - fVar12 * fVar25,uVar10,fVar20,fVar24,fVar26,lVar9,0);
                fVar17 = (float)atanf((fVar28 * fVar17) / fVar23);
                if (*(long *)(param_1 + 0x20) != 0) {
                  uVar10 = UnityEngine_Camera__get_nearClipPlane_4355b8c
                                     (*(long *)(param_1 + 0x20),0);
                  if (*(long *)(param_1 + 0x20) != 0) {
                    uVar18 = UnityEngine_Camera__get_farClipPlane_4355d14
                                       (*(long *)(param_1 + 0x20),0);
                    UnityEngine_Matrix4x4__Perspective_43ac658
                              (&uStack_100,(fVar17 + fVar17) * fVar14,fVar23 / fVar28,uVar10,uVar18,
                               0);
                    uStack_b8 = uStack_f8;
                    uStack_c0 = uStack_100;
                    uStack_a8 = uStack_e8;
                    uStack_b0 = uStack_f0;
                    uStack_98 = uStack_d8;
                    uStack_a0 = uStack_e0;
                    uStack_88 = uStack_c8;
                    uStack_90 = uStack_d0;
                    UnityEngine_Matrix4x4__set_Item_43ac870
                              (-(fVar13 / fVar23 + fVar13 / fVar23 + -1.0),&uStack_c0,8,0);
                    UnityEngine_Matrix4x4__set_Item_43ac870
                              (-(fVar19 / fVar28 + fVar19 / fVar28 + -1.0),&uStack_c0,9,0);
                    if (*(long *)(param_1 + 0x20) != 0) {
                      uStack_138 = uStack_b8;
                      uStack_140 = uStack_c0;
                      uStack_128 = uStack_a8;
                      uStack_130 = uStack_b0;
                      uStack_118 = uStack_98;
                      uStack_120 = uStack_a0;
                      uStack_108 = uStack_88;
                      uStack_110 = uStack_90;
                      UnityEngine_Camera__set_projectionMatrix_435ba04
                                (*(long *)(param_1 + 0x20),&uStack_140,0);
                    /* try { // try from 023f0cf4 to 024f0cfb has its CatchHandler @ 023f0e88 */
                      *(undefined1 *)(param_1 + 0xa4) = 1;
                      *(float *)(param_1 + 0x9c) = fVar11;
                      *(float *)(param_1 + 0xa0) = fVar12;
                      return true;
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
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

