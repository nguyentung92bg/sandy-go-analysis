/* IL2CPP: Dino.BusSand.View.VehicleView$$TickEscape
void Dino_BusSand_View_VehicleView__TickEscape (Dino_BusSand_View_VehicleView_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$TickEscape
   void Dino_BusSand_View_VehicleView__TickEscape (Dino_BusSand_View_VehicleView_o* __this, float
   dt, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__TickEscape_240039c
               (float param_1,float param_2,float param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  ulong uVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uStack_90;
  float fStack_88;
  float fStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam0000000004f9cb00 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbc100);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9cb00 = 1;
  }
  uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
  uStack_80 = 0;
  fStack_88 = 0.0;
  uStack_90 = 0;
  *(float *)(param_4 + 0x254) = *(float *)(param_4 + 0x254) + param_1;
  if (*(char *)(param_4 + 0x378) != '\0') {
    if ((bRam0000000004f9caff & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cbc100);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      bRam0000000004f9caff = 1;
    }
    if (*(long *)(param_4 + 0x38) == 0) {
LAB_025012e8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar21 = (float)UnityEngine_Transform__get_position_43d0e48(*(long *)(param_4 + 0x38),0);
    fVar30 = param_3;
    if ((_UNK_00e20a08 < param_1) && (*(char *)(param_4 + 0x388) != '\0')) {
      fVar29 = *(float *)(param_4 + 0x37c);
      fVar32 = *(float *)(param_4 + 0x380);
      fVar30 = *(float *)(param_4 + 900);
      if (cRam0000000004f9b9df == '\0') {
        FUN_02132f7c(PTR_DAT_04caa200);
        cRam0000000004f9b9df = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar32 = param_2 - fVar32;
      fVar29 = fVar21 - fVar29;
      fVar30 = param_3 - fVar30;
      fVar30 = fVar30 * fVar30;
      *(float *)(param_4 + 0x1c8) = SQRT(fVar30 + fVar29 * fVar29 + fVar32 * fVar32) / param_1;
    }
    *(float *)(param_4 + 0x37c) = fVar21;
    *(undefined1 *)(param_4 + 0x388) = 1;
    param_1 = *(float *)(param_4 + 0x26c) - param_1;
    *(float *)(param_4 + 0x380) = param_2;
    *(float *)(param_4 + 900) = param_3;
    *(float *)(param_4 + 0x26c) = param_1;
    puVar6 = PTR_DAT_04cbc100;
    if ((param_1 <= 0.0) &&
       (fVar32 = *(float *)(param_4 + 0x1c8),
       *(float *)(param_4 + 0xa8) / *(float *)(param_4 + 0xbc) < fVar32)) {
      if (*(int *)(*(long *)PTR_DAT_04cbc100 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9c95a == '\0') {
        FUN_02132f7c(PTR_DAT_04cbc100);
        cRam0000000004f9c95a = '\x01';
      }
      lVar9 = *(long *)puVar6;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar6;
      }
      uVar14 = **(undefined8 **)(lVar9 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
      if ((uVar10 & 1) != 0) {
        iVar13 = *(int *)(*(long *)puVar6 + 0xe4);
        *(undefined4 *)(param_4 + 0x26c) = 0x3d8f5c29;
        if (iVar13 == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9c95a == '\0') {
          FUN_02132f7c(PTR_DAT_04cbc100);
          cRam0000000004f9c95a = '\x01';
        }
        lVar9 = *(long *)puVar6;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar9 = *(long *)puVar6;
        }
        if (*(long *)(param_4 + 0x38) != 0) {
          lVar9 = **(long **)(lVar9 + 0xb8);
          fVar22 = (float)UnityEngine_Transform__get_forward_43d17f4(*(long *)(param_4 + 0x38),0);
          fVar29 = fVar32;
          fVar27 = fVar30;
          fVar23 = (float)Dino_BusSand_View_VehicleView__get_LengthWorld_23fefbc(param_4);
          if ((*(long *)(param_4 + 0x38) != 0) &&
             (fVar24 = (float)UnityEngine_Transform__get_forward_43d17f4
                                        (*(long *)(param_4 + 0x38),0), lVar9 != 0)) {
            fVar22 = fVar22 * fVar23 * _UNK_00e20664;
            fVar33 = fVar32 * fVar23 * _UNK_00e20664;
            fVar29 = fVar29 * _UNK_00e20864;
            fVar24 = fVar24 * _UNK_00e20864;
            param_3 = param_3 - fVar30 * fVar23 * _UNK_00e20664;
            uVar10 = (ulong)(uint)param_3;
            iVar13 = 1;
            uStack_90 = CONCAT44(_UNK_00e206e4,fVar27 * _UNK_00e20864);
            plVar3 = (long *)PTR_DAT_04cbc100;
            uVar19 = _UNK_00e20994;
            fVar30 = _UNK_00e2098c;
            uVar18 = _UNK_00e2094c;
            fVar32 = _UNK_00e20754;
            fVar27 = _UNK_00e20390;
            uVar20 = _UNK_00e20178;
            uVar4 = _UNK_00e20094;
            uVar5 = _UNK_00e1fefc;
            if ((bRam0000000004f9c8f2 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cbc100,1,0);
              bRam0000000004f9c8f2 = 1;
              plVar3 = (long *)PTR_DAT_04cbc100;
              uVar19 = _UNK_00e20994;
              fVar30 = _UNK_00e2098c;
              uVar18 = _UNK_00e2094c;
              fVar32 = _UNK_00e20754;
              fVar27 = _UNK_00e20390;
              uVar20 = _UNK_00e20178;
              uVar4 = _UNK_00e20094;
              uVar5 = _UNK_00e1fefc;
            }
            do {
              fVar26 = (float)uVar10;
              fStack_84 = (float)UnityEngine_Random__Range_43b64a8(uVar5,fVar30,0);
              fStack_88 = (float)UnityEngine_Random__Range_43b64a8(fVar27,uVar4,0);
              fVar23 = fVar30;
              fVar15 = (float)UnityEngine_Random__Range_43b64a8(uVar5,fVar30,0);
              fVar31 = *(float *)(lVar9 + 0x58);
              uVar14 = *(undefined8 *)(lVar9 + 0x38);
              fVar16 = (float)UnityEngine_Random__get_insideUnitSphere_43b6598(0);
              fVar28 = *(float *)(lVar9 + 0x58);
              fVar17 = (float)UnityEngine_Random__Range_43b64a8(uVar19,uVar20,0);
              UnityEngine_Random__Range_43b64a8(uVar18,0x3f400000,0);
              UnityEngine_Random__Range_43b64e8(0,0x168,0);
              if (*(int *)(*plVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*plVar3);
              }
              uVar10 = (ulong)(uint)(param_3 + fVar28 * fVar26 * fVar32);
              Dino_BusSand_View_Fx__Emit_23988c0
                        ((fVar21 - fVar22) + fVar28 * fVar16 * fVar32,
                         (param_2 - fVar33) + fVar28 * fVar23 * fVar32,uVar10,
                         fVar24 + fStack_84 * fVar31,fVar29 + fStack_88 * fVar31,
                         (float)uStack_90 + fVar15 * fVar31,fVar28 * uStack_90._4_4_ * fVar17,uVar14
                        );
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
            return;
          }
        }
        goto LAB_025012e8;
      }
    }
    return;
  }
  if (0.0 < *(float *)(param_4 + 0x364)) {
    fVar30 = *(float *)(param_4 + 0x364) - param_1;
    *(float *)(param_4 + 0x364) = fVar30;
    if (0.0 < fVar30) {
      return;
    }
    fVar30 = *(float *)(param_4 + 0x188) + _UNK_00e20318;
    *(undefined4 *)(param_4 + 0x1e4) = 0x3f8f5c29;
    *(float *)(param_4 + 0x188) = fVar30;
  }
  fVar30 = _UNK_00e20a08;
  if (*(long *)(param_4 + 0x240) != 0) {
    fVar32 = *(float *)(param_4 + 0x1d4) * _UNK_00e20188;
    uVar2 = *(int *)(*(long *)(param_4 + 0x240) + 0x18) - 1;
    fVar21 = *(float *)(param_4 + 0x1d0);
    if (*(float *)(param_4 + 0x374) <= *(float *)(param_4 + 0x1d0)) {
      fVar21 = *(float *)(param_4 + 0x374);
    }
    fVar29 = *(float *)(param_4 + 0x1c8);
    if (1 < (int)uVar2) {
      lVar9 = *(long *)(param_4 + 0x248);
      if (lVar9 == 0) goto LAB_02500c20;
      lVar11 = 0;
      fVar27 = *(float *)(param_4 + 0xa8) / *(float *)(param_4 + 0xbc);
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      do {
        if ((ulong)uVar1 - 1 == lVar11) {
LAB_02500c1c:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        fVar22 = *(float *)(lVar9 + 0x24 + lVar11 * 4);
        if (*(float *)(param_4 + 0x1cc) <= fVar22) {
          fVar22 = fVar22 - *(float *)(param_4 + 0x1cc);
          if (fVar27 + (fVar29 * fVar29) / (fVar32 + fVar32) < fVar22) break;
          lVar12 = *(long *)(param_4 + 0x1d8);
          if (lVar12 == 0) goto LAB_02500c20;
          if ((ulong)*(uint *)(lVar12 + 0x18) <= lVar11 + 1U) goto LAB_02500c1c;
          fVar23 = *(float *)(lVar12 + lVar11 * 4 + 0x24);
          if ((_UNK_00e20a7c <= fVar23) &&
             (fVar23 = SQRT((fVar27 * 70.0) / fVar23),
             fVar22 = SQRT((fVar32 + fVar32) * fVar22 + fVar23 * fVar23), fVar22 <= fVar21)) {
            fVar21 = fVar22;
          }
        }
        lVar11 = lVar11 + 1;
      } while ((ulong)uVar2 - 1 != lVar11);
    }
    fVar27 = fVar29 + *(float *)(param_4 + 0x1d4) * param_1;
    fVar22 = fVar29 - fVar32 * param_1;
    fVar32 = fVar21;
    if (fVar27 <= fVar21) {
      fVar32 = fVar27;
    }
    fVar27 = fVar21;
    if (fVar21 <= fVar22) {
      fVar27 = fVar22;
    }
    if (fVar21 <= fVar29) {
      fVar32 = fVar27;
    }
    *(float *)(param_4 + 0x1c8) = fVar32;
    fVar32 = fVar32 * param_1 + *(float *)(param_4 + 0x1cc);
    fVar29 = *(float *)(param_4 + 0x250);
    fVar21 = fVar29;
    if (fVar32 <= fVar29) {
      fVar21 = fVar32;
    }
    fVar32 = fVar21 / fVar29;
    *(float *)(param_4 + 0x1cc) = fVar21;
    fVar21 = fVar32;
    if (fVar29 <= fVar30) {
      fVar21 = 1.0;
    }
    Dino_BusSand_View_VehicleView__Sample_24012ec(param_4,&uStack_80,&uStack_90);
    uVar7 = uStack_78;
    uVar10 = uStack_80;
    if (*(char *)(param_4 + 0x36c) == '\0') {
      fVar30 = (float)((ulong)uStack_90 >> 0x20);
      fVar30 = (float)uStack_90 * (float)uStack_90 + fVar30 * fVar30 + fStack_88 * fStack_88;
      if (_UNK_00e20900 < fVar30) {
        fVar30 = _UNK_00e20900;
        fVar23 = (float)atan2f();
        uVar7 = uStack_78;
        uVar10 = uStack_80;
        fVar32 = _UNK_00e20a74;
        uVar18 = 0;
        fVar24 = *(float *)(param_4 + 0x268);
        lVar9 = *(long *)(param_4 + 0x38);
        fVar29 = (float)uStack_80;
        fVar27 = uStack_80._4_4_;
        fVar22 = (float)uStack_78;
        fVar23 = fVar23 * _UNK_00e20410;
        fVar33 = fVar23 * _UNK_00e20a74;
        *(float *)(param_4 + 0x268) = fVar23;
        uVar19 = UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,fVar33,0,0);
        if (lVar9 == 0) goto LAB_02500c20;
        fVar24 = fVar23 - fVar24;
        fVar24 = fVar24 + (float)(int)(fVar24 / 360.0) * -360.0;
        fVar15 = 360.0;
        if (fVar24 <= 360.0) {
          fVar15 = fVar24;
        }
        fVar16 = 0.0;
        if (0.0 <= fVar24) {
          fVar16 = fVar15;
        }
        fVar24 = fVar16 + -360.0;
        if (fVar16 <= 180.0) {
          fVar24 = fVar16;
        }
        fVar15 = param_1;
        if (param_1 <= _UNK_00e20948) {
          fVar15 = _UNK_00e20948;
        }
        UnityEngine_Transform__SetPositionAndRotation_43d2064
                  (uVar10 & 0xffffffff,fVar27,uVar7 & 0xffffffff,uVar19,fVar33,uVar18,fVar30,lVar9,0
                  );
        fVar33 = (fVar24 / fVar15) * _UNK_00e20a94;
        fVar30 = 18.0;
        if (fVar33 <= 18.0) {
          fVar30 = fVar33;
        }
        fVar16 = -18.0;
        if (-18.0 <= fVar33) {
          fVar16 = fVar30;
        }
        fVar30 = ABS(fVar24 / fVar15);
        *(float *)(param_4 + 0x270) =
             *(float *)(param_4 + 0x270) + (fVar16 - *(float *)(param_4 + 0x270)) * _UNK_00e20390;
        if (75.0 < fVar30) {
          if (cRam0000000004f9cb08 == '\0') {
            FUN_02132f7c(PTR_DAT_04cbdce0);
            cRam0000000004f9cb08 = '\x01';
          }
          puVar6 = PTR_DAT_04cbdce0;
          uVar14 = **(undefined8 **)(*(long *)PTR_DAT_04cbdce0 + 0xb8);
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
          if ((uVar10 & 1) != 0) {
            uVar18 = *(undefined4 *)(param_4 + 0x24);
            if (*(int *)(*(long *)PTR_DAT_04cbc080 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            dVar25 = (double)Dino_BusSand_Core_BusGeometry__WidthCells_242be4c(uVar18,0);
            fVar32 = (fVar23 + *(float *)(param_4 + 0x270)) * fVar32;
            fVar17 = *(float *)(param_4 + 0xb0);
            fVar26 = *(float *)(param_4 + 0xbc);
            fVar28 = 0.0;
            uVar18 = UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,0);
            fVar30 = fVar32;
            fVar24 = fVar28;
            uVar20 = FUN_024abc88(0);
            fVar23 = fVar32;
            fVar33 = fVar28;
            fVar15 = (float)UnityEngine_Quaternion__op_Multiply_43af48c
                                      (uVar18,fVar32,fVar28,uVar19,uVar20,fVar30,fVar24,0);
            fVar30 = fVar23;
            fVar24 = fVar33;
            fVar16 = (float)Dino_BusSand_View_VehicleView__get_LengthWorld_23fefbc(param_4);
            uVar20 = FUN_02501f38(0);
            fVar24 = (float)UnityEngine_Quaternion__op_Multiply_43af48c
                                      (uVar18,fVar32,fVar28,uVar19,uVar20,fVar30,fVar24,0);
            if (cRam0000000004f9cb08 == '\0') {
              FUN_02132f7c(PTR_DAT_04cbdce0);
              cRam0000000004f9cb08 = '\x01';
            }
            if (**(long **)(*(long *)puVar6 + 0xb8) == 0) goto LAB_02500c20;
            fVar26 = (fVar17 * (float)dVar25) / fVar26;
            fVar16 = fVar16 * _UNK_00e207cc;
            fVar29 = fVar29 - fVar15 * fVar16;
            fVar27 = fVar27 - fVar23 * fVar16;
            fVar23 = fVar26 * _UNK_00e20104;
            fVar22 = fVar22 - fVar33 * fVar16;
            fVar30 = fVar22 - fVar23 * fVar28;
            Dino_BusSand_View_SkidMarks__Mark_23ee49c
                      (fVar29 - fVar23 * fVar24,fVar27 - fVar23 * fVar32,fVar30,
                       fVar29 + fVar23 * fVar24,fVar27 + fVar23 * fVar32,fVar22 + fVar23 * fVar28,
                       fVar26 * _UNK_00e201f0,**(long **)(*(long *)puVar6 + 0xb8),
                       *(undefined4 *)(param_4 + 0x20));
          }
        }
      }
    }
    else {
      uVar20 = 0;
      uVar19 = uStack_80._4_4_;
      lVar9 = *(long *)(param_4 + 0x38);
      fVar29 = *(float *)(param_4 + 0x368) * _UNK_00e20a74;
      uVar18 = UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,fVar29,0,0);
      if (lVar9 == 0) goto LAB_02500c20;
      fVar30 = (float)uVar7;
      UnityEngine_Transform__SetPositionAndRotation_43d2064
                (uVar10 & 0xffffffff,uVar19,uVar7 & 0xffffffff,uVar18,fVar29,uVar20,fVar32,lVar9,0);
    }
    fVar32 = _UNK_00e1fea8;
    param_1 = *(float *)(param_4 + 0x26c) - param_1;
    bVar8 = fVar21 < _UNK_00e1fea8;
    *(float *)(param_4 + 0x26c) = param_1;
    puVar6 = PTR_DAT_04cbc100;
    if ((bVar8) && (param_1 <= 0.0)) {
      if (*(int *)(*(long *)PTR_DAT_04cbc100 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9c95a == '\0') {
        FUN_02132f7c(PTR_DAT_04cbc100);
        cRam0000000004f9c95a = '\x01';
      }
      lVar9 = *(long *)puVar6;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar6;
      }
      uVar14 = **(undefined8 **)(lVar9 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
      if (((uVar10 & 1) != 0) && (*(char *)(param_4 + 0x36c) == '\0')) {
        *(undefined4 *)(param_4 + 0x26c) = 0x3d8f5c29;
        if (*(long *)(param_4 + 0x38) != 0) {
          fVar29 = (float)UnityEngine_Transform__get_position_43d0e48(*(long *)(param_4 + 0x38),0);
          if (*(long *)(param_4 + 0x38) != 0) {
            fVar27 = fVar32;
            fVar24 = fVar30;
            fVar33 = (float)UnityEngine_Transform__get_forward_43d17f4(*(long *)(param_4 + 0x38),0);
            fVar22 = fVar27;
            fVar23 = fVar24;
            fVar15 = (float)Dino_BusSand_View_VehicleView__get_LengthWorld_23fefbc(param_4);
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (cRam0000000004f9c95a == '\0') {
              FUN_02132f7c(PTR_DAT_04cbc100);
              cRam0000000004f9c95a = '\x01';
            }
            lVar9 = *(long *)puVar6;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar9 = *(long *)puVar6;
            }
            if (*(long *)(param_4 + 0x38) != 0) {
              lVar9 = **(long **)(lVar9 + 0xb8);
              fVar16 = (float)UnityEngine_Transform__get_forward_43d17f4
                                        (*(long *)(param_4 + 0x38),0);
              if (lVar9 != 0) {
                Dino_BusSand_View_Fx__Dust_2395354
                          (fVar29 - fVar33 * fVar15 * _UNK_00e20664,
                           fVar32 - fVar27 * fVar15 * _UNK_00e20664,
                           fVar30 - fVar24 * fVar15 * _UNK_00e20664,fVar16 * _UNK_00e20864,
                           fVar22 * _UNK_00e20864,fVar23 * _UNK_00e20864,_UNK_00e206e4,lVar9,1,0);
                goto LAB_02500b98;
              }
            }
          }
        }
        goto LAB_02500c20;
      }
    }
LAB_02500b98:
    if (1.0 <= fVar21) {
      lVar9 = *(long *)(param_4 + 0x260);
      *(undefined8 *)(param_4 + 0x260) = 0;
      thunk_FUN_02134474(param_4 + 0x260,0);
      Dino_BusSand_View_VehicleView__SetMode_23f6b40(param_4,3);
      if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02500bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
        return;
      }
    }
    return;
  }
LAB_02500c20:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

