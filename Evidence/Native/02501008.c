/* IL2CPP: Dino.BusSand.View.VehicleView$$TickTowed
void Dino_BusSand_View_VehicleView__TickTowed (Dino_BusSand_View_VehicleView_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$TickTowed
   void Dino_BusSand_View_VehicleView__TickTowed (Dino_BusSand_View_VehicleView_o* __this, float dt,
   const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__TickTowed_2401008
               (float param_1,float param_2,float param_3,long param_4)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
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
  fVar19 = (float)UnityEngine_Transform__get_position_43d0e48(*(long *)(param_4 + 0x38),0);
  fVar27 = param_3;
  if ((_UNK_00e20a08 < param_1) && (*(char *)(param_4 + 0x388) != '\0')) {
    fVar26 = *(float *)(param_4 + 0x37c);
    fVar29 = *(float *)(param_4 + 0x380);
    fVar27 = *(float *)(param_4 + 900);
    if (cRam0000000004f9b9df == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b9df = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar29 = param_2 - fVar29;
    fVar26 = fVar19 - fVar26;
    fVar27 = param_3 - fVar27;
    fVar27 = fVar27 * fVar27;
    *(float *)(param_4 + 0x1c8) = SQRT(fVar27 + fVar26 * fVar26 + fVar29 * fVar29) / param_1;
  }
  *(float *)(param_4 + 0x37c) = fVar19;
  *(undefined1 *)(param_4 + 0x388) = 1;
  param_1 = *(float *)(param_4 + 0x26c) - param_1;
  *(float *)(param_4 + 0x380) = param_2;
  *(float *)(param_4 + 900) = param_3;
  *(float *)(param_4 + 0x26c) = param_1;
  puVar9 = PTR_DAT_04cbc100;
  if ((param_1 <= 0.0) &&
     (fVar29 = *(float *)(param_4 + 0x1c8),
     *(float *)(param_4 + 0xa8) / *(float *)(param_4 + 0xbc) < fVar29)) {
    if (*(int *)(*(long *)PTR_DAT_04cbc100 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9c95a == '\0') {
      FUN_02132f7c(PTR_DAT_04cbc100);
      cRam0000000004f9c95a = '\x01';
    }
    lVar10 = *(long *)puVar9;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar9;
    }
    uVar13 = **(undefined8 **)(lVar10 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
    if ((uVar11 & 1) != 0) {
      iVar12 = *(int *)(*(long *)puVar9 + 0xe4);
      *(undefined4 *)(param_4 + 0x26c) = 0x3d8f5c29;
      if (iVar12 == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9c95a == '\0') {
        FUN_02132f7c(PTR_DAT_04cbc100);
        cRam0000000004f9c95a = '\x01';
      }
      lVar10 = *(long *)puVar9;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)puVar9;
      }
      if (*(long *)(param_4 + 0x38) != 0) {
        lVar10 = **(long **)(lVar10 + 0xb8);
        fVar20 = (float)UnityEngine_Transform__get_forward_43d17f4(*(long *)(param_4 + 0x38),0);
        fVar26 = fVar29;
        fVar23 = fVar27;
        fVar21 = (float)Dino_BusSand_View_VehicleView__get_LengthWorld_23fefbc(param_4);
        if ((*(long *)(param_4 + 0x38) != 0) &&
           (fVar22 = (float)UnityEngine_Transform__get_forward_43d17f4(*(long *)(param_4 + 0x38),0),
           fVar8 = _UNK_00e206e4, lVar10 != 0)) {
          fVar24 = fVar20 * fVar21 * _UNK_00e20664;
          fVar30 = fVar29 * fVar21 * _UNK_00e20664;
          fVar23 = fVar23 * _UNK_00e20864;
          fVar26 = fVar26 * _UNK_00e20864;
          fVar22 = fVar22 * _UNK_00e20864;
          param_3 = param_3 - fVar27 * fVar21 * _UNK_00e20664;
          iVar12 = 1;
          fVar20 = param_3;
          plVar1 = (long *)PTR_DAT_04cbc100;
          uVar2 = _UNK_00e20994;
          fVar27 = _UNK_00e2098c;
          uVar3 = _UNK_00e2094c;
          fVar29 = _UNK_00e20754;
          uVar4 = _UNK_00e20390;
          uVar5 = _UNK_00e20178;
          uVar6 = _UNK_00e20094;
          uVar7 = _UNK_00e1fefc;
          if ((bRam0000000004f9c8f2 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cbc100,1,0);
            bRam0000000004f9c8f2 = 1;
            plVar1 = (long *)PTR_DAT_04cbc100;
            uVar2 = _UNK_00e20994;
            fVar27 = _UNK_00e2098c;
            uVar3 = _UNK_00e2094c;
            fVar29 = _UNK_00e20754;
            uVar4 = _UNK_00e20390;
            uVar5 = _UNK_00e20178;
            uVar6 = _UNK_00e20094;
            uVar7 = _UNK_00e1fefc;
          }
          do {
            fVar14 = (float)UnityEngine_Random__Range_43b64a8(uVar7,fVar27,0);
            fVar15 = (float)UnityEngine_Random__Range_43b64a8(uVar4,uVar6,0);
            fVar21 = fVar27;
            fVar16 = (float)UnityEngine_Random__Range_43b64a8(uVar7,fVar27,0);
            fVar28 = *(float *)(lVar10 + 0x58);
            uVar13 = *(undefined8 *)(lVar10 + 0x38);
            fVar17 = (float)UnityEngine_Random__get_insideUnitSphere_43b6598(0);
            fVar25 = *(float *)(lVar10 + 0x58);
            fVar18 = (float)UnityEngine_Random__Range_43b64a8(uVar2,uVar5,0);
            UnityEngine_Random__Range_43b64a8(uVar3,0x3f400000,0);
            UnityEngine_Random__Range_43b64e8(0,0x168,0);
            if (*(int *)(*plVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*plVar1);
            }
            fVar20 = param_3 + fVar25 * fVar20 * fVar29;
            Dino_BusSand_View_Fx__Emit_23988c0
                      ((fVar19 - fVar24) + fVar25 * fVar17 * fVar29,
                       (param_2 - fVar30) + fVar25 * fVar21 * fVar29,fVar20,fVar22 + fVar14 * fVar28
                       ,fVar26 + fVar15 * fVar28,fVar23 + fVar16 * fVar28,fVar25 * fVar8 * fVar18,
                       uVar13);
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
          return;
        }
      }
      goto LAB_025012e8;
    }
  }
  return;
}

