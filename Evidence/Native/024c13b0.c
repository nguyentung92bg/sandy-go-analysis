/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Decorate
void Dino_BusSand_View_MechanicLayer__Decorate (Dino_BusSand_View_MechanicLayer_o* __this, Dino_BusSand_Core_Truck_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Decorate
   void Dino_BusSand_View_MechanicLayer__Decorate (Dino_BusSand_View_MechanicLayer_o* __this,
   Dino_BusSand_Core_Truck_o* t, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__Decorate_23c13b0
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  
  if ((bRam0000000004f9c9da & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7780);
    FUN_02132f7c(PTR_DAT_04cbd128);
    FUN_02132f7c(PTR_DAT_04cbd130);
    FUN_02132f7c(PTR_DAT_04cac5d0);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd088);
    FUN_02132f7c(PTR_DAT_04cbc250);
    FUN_02132f7c(PTR_DAT_04caf598);
    bRam0000000004f9c9da = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if ((param_5 == 0) || (lVar6 = *(long *)(param_4 + 0x30), lVar6 == 0)) goto LAB_024c235c;
  lVar6 = (**(code **)(lVar6 + 0x18))
                    (*(undefined8 *)(lVar6 + 0x40),*(undefined4 *)(param_5 + 0x10),
                     *(undefined8 *)(lVar6 + 0x28));
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar7);
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  piVar12 = (int *)(param_5 + 0x30);
  if ((((*piVar12 < 1) && (*(int *)(param_5 + 0x34) < 1)) && (*(int *)(param_5 + 0x38) < 1)) &&
     ((*(char *)(param_5 + 0x3c) == '\0' && (*(char *)(param_5 + 0x44) == '\0')))) {
    return;
  }
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbd128);
  Dino_BusSand_View_MechanicLayer_Deco___ctor_23d3824(lVar7,0);
  if (lVar6 == 0) goto LAB_024c235c;
  uVar10 = *(undefined8 *)(lVar6 + 0x40);
  Dino_BusSand_View_VehicleView__get_ModelHeightWorld_23fefb0(lVar6,0);
  fVar15 = (float)Dino_BusSand_View_VehicleView__get_LengthWorld_23fefbc(lVar6,0);
  if (0 < *piVar12) {
    uVar4 = Dino_BusSand_View_MechanicLayer__PlaceGasStation_23c7fac(param_4,param_5,lVar6,lVar7);
    if ((uVar4 & 1) == 0) {
      if (0 < *piVar12) {
        if (*(long *)(lVar6 + 0x38) == 0) goto LAB_024c235c;
        fVar16 = (float)UnityEngine_Transform__get_right_43d15f4(*(long *)(lVar6 + 0x38),0);
        if (*(long *)(lVar6 + 0x38) == 0) goto LAB_024c235c;
        fVar21 = *(float *)(param_4 + 0x50);
        fVar26 = param_2;
        fVar28 = param_3;
        fVar18 = (float)UnityEngine_Transform__get_forward_43d17f4(*(long *)(lVar6 + 0x38),0);
        fVar29 = fVar28;
        fVar20 = fVar26;
        if (*(int *)(*(long *)PTR_DAT_04cbd088 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar13 = Dino_BusSand_View_PropKit__get_FuelPump_23dd928(0);
        if (*(long *)(lVar6 + 0x38) == 0) goto LAB_024c235c;
        fVar23 = (float)UnityEngine_Transform__get_position_43d0e48(*(long *)(lVar6 + 0x38),0);
        if (*(long *)(lVar6 + 0x38) == 0) goto LAB_024c235c;
        fVar21 = fVar21 * _UNK_00e20ae0;
        fVar25 = (fVar16 * fVar21 + fVar15 * fVar18 * _UNK_00e20328) * _UNK_00e20178;
        fVar22 = (param_2 * fVar21 + fVar15 * fVar26 * _UNK_00e20328) * _UNK_00e20178;
        fVar27 = fVar22 + fVar20;
        fVar30 = (param_3 * fVar21 + fVar15 * fVar28 * _UNK_00e20328) * _UNK_00e20178 + fVar29;
        fVar28 = (float)UnityEngine_Transform__get_rotation_43d133c(*(long *)(lVar6 + 0x38),0);
        fVar21 = 0.0;
        fVar16 = fVar22;
        fVar26 = _UNK_00e20378;
        fVar18 = (float)UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,_UNK_00e20378,0,0);
        if (cRam0000000004f9b65e == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65e = '\x01';
        }
        puVar3 = PTR_DAT_04caa208;
        uVar24 = UnityEngine_Component__get_transform_43bcd18(param_4,0);
        lVar5 = Dino_BusSand_View_MechanicLayer__Prop_23c2534
                          (fVar25 + fVar23,fVar27,fVar30,
                           (fVar20 * fVar21 + fVar22 * fVar18 + fVar28 * fVar16) - fVar29 * fVar26,
                           (fVar29 * fVar18 + fVar22 * fVar26 + fVar20 * fVar16) - fVar28 * fVar21,
                           (fVar28 * fVar26 + fVar22 * fVar21 + fVar29 * fVar16) - fVar20 * fVar18,
                           ((fVar22 * fVar16 - fVar28 * fVar18) - fVar20 * fVar26) - fVar29 * fVar21
                           ,param_4,uVar13,uVar24,0);
        if (lVar7 == 0) goto LAB_024c235c;
        plVar11 = (long *)(lVar7 + 0x10);
        *plVar11 = lVar5;
        thunk_FUN_02134474(plVar11,lVar5);
        lVar5 = *plVar11;
        if (lVar5 == 0) goto LAB_024c235c;
        fVar16 = (float)UnityEngine_Transform__get_position_43d0e48(lVar5,0);
        if (cRam0000000004f9bcf8 == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9bcf8 = '\x01';
        }
        fVar28 = *(float *)(param_4 + 0x50);
        lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
        fVar29 = (float)*(undefined8 *)(lVar8 + 0x18) * fVar28;
        fVar20 = (float)((ulong)*(undefined8 *)(lVar8 + 0x18) >> 0x20) * fVar28;
        fVar26 = *(float *)(lVar8 + 0x20) * fVar28 * _UNK_00e1feac;
        if (cRam0000000004f9c41d == '\0') {
          FUN_02132f7c(puVar3);
          fVar28 = *(float *)(param_4 + 0x50);
          cRam0000000004f9c41d = '\x01';
          lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
        }
        fVar20 = fVar27 + fVar20 * 2.4 +
                 (float)((ulong)*(undefined8 *)(lVar8 + 0x48) >> 0x20) * fVar28 * 0.4;
        param_3 = fVar30 + fVar26 + *(float *)(lVar8 + 0x50) * fVar28 * _UNK_00e2098c;
        uVar13 = Dino_BusSand_View_MechanicLayer__Label_23c26b4
                           (CONCAT44(fVar20,fVar16 + fVar29 * 2.4 +
                                            (float)*(undefined8 *)(lVar8 + 0x48) * fVar28 * 0.4),
                            fVar20,param_3,_UNK_00e20094,0x3f800000,_UNK_00e20180,0x3e800000,
                            0x3f800000,param_4,lVar5);
        puVar14 = (undefined8 *)(lVar7 + 0x40);
        *puVar14 = uVar13;
        thunk_FUN_02134474(puVar14,uVar13);
        plVar11 = (long *)*puVar14;
        uVar13 = System_Int32__ToString_482d750(piVar12,0);
        if (plVar11 == (long *)0x0) goto LAB_024c235c;
        (**(code **)(*plVar11 + 0x518))(plVar11,uVar13,*(undefined8 *)(*plVar11 + 0x520));
        param_2 = _UNK_00e20104;
        *(int *)(lVar7 + 0xb0) = *piVar12;
        Dino_BusSand_View_MechanicLayer__PopIn_23c2a68
                  (_UNK_00e207cc,param_4,*(undefined8 *)(lVar7 + 0x10));
      }
    }
    else {
      if (lVar7 == 0) goto LAB_024c235c;
      *(int *)(lVar7 + 0xb0) = *piVar12;
      Dino_BusSand_View_VehicleView__SetOutline_23fc898(lVar6,1,0);
    }
  }
  if (0 < *(int *)(param_5 + 0x34)) {
    lVar5 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar5 + 200);
    }
    iVar1 = *(int *)(param_5 + 0x34);
    if (*(int *)(*(long *)PTR_DAT_04cac5d0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar13 = 0;
    if ((lVar5 != 0) && (0 < iVar1)) {
      if ((int)*(uint *)(lVar5 + 0x18) < iVar1) {
        uVar13 = 0;
      }
      else {
        if (*(uint *)(lVar5 + 0x18) <= iVar1 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        uVar13 = *(undefined8 *)(lVar5 + (ulong)(iVar1 - 1U) * 8 + 0x20);
      }
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
    if ((uVar4 & 1) == 0) {
      uVar17 = *(undefined4 *)(param_5 + 0x34);
      if (*(int *)(*(long *)PTR_DAT_04cbd088 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar13 = Dino_BusSand_View_PropKit__Padlock_23dd6e0(uVar17,0);
      fVar16 = (float)Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(lVar6,0);
      if (cRam0000000004f9bcf8 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9bcf8 = '\x01';
      }
      fVar28 = *(float *)(param_4 + 0x50);
      uVar24 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
      fVar26 = 0.15;
      fVar18 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20) * fVar28 *
               _UNK_00e20328;
      fVar29 = param_2;
      fVar20 = _UNK_00e20328;
      if (*(int *)(*(long *)PTR_DAT_04cbc250 + 0xe4) == 0) {
        fVar26 = 0.15;
        thunk_FUN_0218fdac();
      }
      param_2 = param_2 + (float)((ulong)uVar24 >> 0x20) * fVar28 * 0.15;
      param_3 = param_3 + fVar18;
      fVar23 = (float)Dino_BusSand_View_StageLayout__get_FacingRotation_23e8a38(0);
      fVar30 = 0.0;
      fVar18 = fVar20;
      fVar21 = _UNK_00e2082c;
      fVar27 = (float)UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,_UNK_00e2082c,0,0);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      uVar13 = Dino_BusSand_View_MechanicLayer__Prop_23c2534
                         (CONCAT44(param_2,fVar16 + (float)uVar24 * fVar28 * 0.15),param_2,param_3,
                          (fVar29 * fVar30 + fVar20 * fVar27 + fVar23 * fVar18) - fVar26 * fVar21,
                          (fVar26 * fVar27 + fVar20 * fVar21 + fVar29 * fVar18) - fVar23 * fVar30,
                          (fVar23 * fVar21 + fVar20 * fVar30 + fVar26 * fVar18) - fVar29 * fVar27,
                          ((fVar20 * fVar18 - fVar23 * fVar27) - fVar29 * fVar21) - fVar26 * fVar30,
                          param_4,uVar13,uVar10,0);
    }
    else {
      fVar16 = (float)Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(lVar6,0);
      if (cRam0000000004f9bcf8 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9bcf8 = '\x01';
      }
      fVar29 = _UNK_00e208d8;
      uVar24 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
      fVar26 = *(float *)(lVar6 + 0xb0);
      fVar20 = (float)uVar24 * 0.37 * fVar26;
      param_2 = param_2 + (float)((ulong)uVar24 >> 0x20) * 0.37 * fVar26 * 1.15;
      param_3 = param_3 + *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20) *
                          _UNK_00e2010c * fVar26 * _UNK_00e208d8;
      if (cRam0000000004f9b88b == '\0') {
        FUN_02132f7c(PTR_DAT_04cab4b0);
        fVar26 = *(float *)(lVar6 + 0xb0);
        cRam0000000004f9b88b = '\x01';
      }
      puVar9 = *(undefined4 **)(*(long *)PTR_DAT_04cab4b0 + 0xb8);
      uVar13 = Dino_BusSand_View_MechanicLayer__Art_23c8dd4
                         (CONCAT44(param_2,fVar16 + fVar20 * 1.15),param_2,param_3,*puVar9,puVar9[1]
                          ,puVar9[2],puVar9[3],fVar26 * fVar29,param_4,uVar13,uVar10,
                          *(undefined8 *)PTR_DAT_04caf598);
    }
    if (lVar7 == 0) goto LAB_024c235c;
    puVar14 = (undefined8 *)(lVar7 + 0x18);
    *puVar14 = uVar13;
    thunk_FUN_02134474(puVar14);
    param_2 = _UNK_00e20104;
    Dino_BusSand_View_MechanicLayer__PopIn_23c2a68(_UNK_00e20590,param_4,*puVar14);
  }
  iVar1 = *(int *)(param_5 + 0x38);
  if (0 < iVar1) {
    if (lVar7 == 0) goto LAB_024c235c;
    *(int *)(lVar7 + 0xb4) = iVar1;
    uVar13 = Dino_BusSand_View_MechanicLayer__KeyProp_23c906c(param_4,iVar1,lVar6,uVar10);
    puVar14 = (undefined8 *)(lVar7 + 0x20);
    *puVar14 = uVar13;
    thunk_FUN_02134474(puVar14,uVar13);
    param_2 = _UNK_00e20104;
    Dino_BusSand_View_MechanicLayer__PopIn_23c2a68(_UNK_00e20590,param_4,*puVar14);
  }
  if (*(char *)(param_5 + 0x3c) != '\0') {
    uVar4 = Dino_BusSand_View_VehicleView__UseShiftMark_23fc980(lVar6,0);
    if ((uVar4 & 1) == 0) {
      Dino_BusSand_View_VehicleView__SuppressArrow_23fc7e4(lVar6,1,0);
      if (*(int *)(*(long *)PTR_DAT_04cbd088 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar13 = Dino_BusSand_View_PropKit__get_ShiftBadge_23de44c(0);
      fVar16 = (float)Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(lVar6,0);
      if (cRam0000000004f9bcf8 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9bcf8 = '\x01';
      }
      if (*(long *)(lVar6 + 0x38) == 0) goto LAB_024c235c;
      fVar20 = *(float *)(param_4 + 0x50);
      uVar24 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
      fVar29 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20) * fVar20 *
               _UNK_00e20af8;
      param_2 = param_2 + (float)((ulong)uVar24 >> 0x20) * fVar20 * 0.04;
      uVar19 = CONCAT44(param_2,fVar16 + (float)uVar24 * fVar20 * 0.04);
      param_3 = param_3 + fVar29;
      uVar24 = uVar19;
      fVar16 = _UNK_00e20af8;
      uVar17 = UnityEngine_Transform__get_rotation_43d133c(*(long *)(lVar6 + 0x38),0);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      uVar13 = Dino_BusSand_View_MechanicLayer__Prop_23c2534
                         (uVar19,param_2,param_3,uVar17,(int)uVar24,fVar29,fVar16,param_4,uVar13,
                          uVar10,0);
      if (lVar7 == 0) goto LAB_024c235c;
      puVar14 = (undefined8 *)(lVar7 + 0x28);
      *puVar14 = uVar13;
      thunk_FUN_02134474(puVar14,uVar13);
      Dino_BusSand_View_MechanicLayer__PopIn_23c2a68(_UNK_00e20590,_UNK_00e20104,param_4,*puVar14);
    }
    else {
      if (lVar7 == 0) goto LAB_024c235c;
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar6 + 0x310);
      thunk_FUN_02134474();
    }
  }
  if (*(char *)(param_5 + 0x44) != '\0') {
    uVar4 = Dino_BusSand_View_VehicleView__UseFireTruckModel_23fcbd0(lVar6,0);
    if ((uVar4 & 1) == 0) {
      if (*(char *)(param_5 + 0x44) == '\0') goto LAB_024c230c;
      Dino_BusSand_View_VehicleView__SuppressArrow_23fc7e4(lVar6,1,0);
      puVar2 = PTR_DAT_04cac878;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      System_Nullable_Color____ctor_2bc9090
                (_UNK_00e2067c,_UNK_00e2065c,_UNK_00e2065c,_UNK_00e200f8,&uStack_b8,
                 *(undefined8 *)PTR_DAT_04cac878);
      uVar13 = *(undefined8 *)puVar2;
      *(undefined4 *)(lVar6 + 0x2f0) = uStack_a8;
      fVar16 = _UNK_00e20af8;
      *(undefined8 *)(lVar6 + 0x2e8) = uStack_b0;
      *(undefined8 *)(lVar6 + 0x2e0) = uStack_b8;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      fVar29 = _UNK_00e201f0;
      System_Nullable_Color____ctor_2bc9090
                (_UNK_00e20b08,fVar16,_UNK_00e201f0,0x3f800000,&uStack_d0,uVar13);
      *(undefined8 *)(lVar6 + 0x2fc) = uStack_c8;
      *(undefined8 *)(lVar6 + 0x2f4) = uStack_d0;
      *(undefined4 *)(lVar6 + 0x304) = uStack_c0;
      Dino_BusSand_View_VehicleView__ApplyBodyColor_23f6f64(lVar6,0);
      if (*(int *)(*(long *)PTR_DAT_04cbd088 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar13 = Dino_BusSand_View_PropKit__get_Ladder_23de334(0);
      fVar20 = (float)Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(lVar6,0);
      if (cRam0000000004f9bcf8 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9bcf8 = '\x01';
      }
      puVar2 = PTR_DAT_04caa208;
      if (*(long *)(lVar6 + 0x38) == 0) goto LAB_024c235c;
      fVar28 = *(float *)(param_4 + 0x50);
      uVar24 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
      fVar26 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20) * fVar28 *
               _UNK_00e20174;
      fVar16 = fVar16 + (float)((ulong)uVar24 >> 0x20) * fVar28 * 0.06;
      uVar19 = CONCAT44(fVar16,fVar20 + (float)uVar24 * fVar28 * 0.06);
      fVar29 = fVar29 + fVar26;
      uVar24 = uVar19;
      fVar20 = _UNK_00e20174;
      uVar17 = UnityEngine_Transform__get_rotation_43d133c(*(long *)(lVar6 + 0x38),0);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      uVar13 = Dino_BusSand_View_MechanicLayer__Prop_23c2534
                         (uVar19,fVar16,fVar29,uVar17,(int)uVar24,fVar26,fVar20,param_4,uVar13,
                          uVar10,0);
      if (lVar7 == 0) goto LAB_024c235c;
      *(undefined8 *)(lVar7 + 0x38) = uVar13;
      thunk_FUN_02134474();
      uVar13 = Dino_BusSand_View_PropKit__get_SirenBar_23de21c(0);
      fVar20 = (float)Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(lVar6,0);
      if (*(long *)(lVar6 + 0x38) == 0) goto LAB_024c235c;
      fVar26 = fVar29;
      fVar28 = fVar16;
      fVar18 = (float)UnityEngine_Transform__get_forward_43d17f4(*(long *)(lVar6 + 0x38),0);
      if (cRam0000000004f9bcf8 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9bcf8 = '\x01';
      }
      if (*(long *)(lVar6 + 0x38) == 0) goto LAB_024c235c;
      fVar27 = *(float *)(param_4 + 0x50);
      uVar24 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      fVar21 = (float)uVar24 * fVar27 * 0.08;
      fVar23 = *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) * fVar27 * _UNK_00e205f8;
      fVar16 = fVar16 + fVar28 * fVar15 * 0.36 + (float)((ulong)uVar24 >> 0x20) * fVar27 * 0.08;
      uVar19 = CONCAT44(fVar16,fVar20 + fVar18 * fVar15 * 0.36 + fVar21);
      fVar15 = fVar29 + fVar15 * fVar26 * _UNK_00e20324 + fVar23;
      uVar24 = uVar19;
      uVar17 = UnityEngine_Transform__get_rotation_43d133c(*(long *)(lVar6 + 0x38),0);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      lVar5 = Dino_BusSand_View_MechanicLayer__Prop_23c2534
                        (uVar19,fVar16,fVar15,uVar17,(int)uVar24,fVar21,fVar23,param_4,uVar13,uVar10
                         ,0);
      plVar11 = (long *)(lVar7 + 0x30);
      *plVar11 = lVar5;
      thunk_FUN_02134474(plVar11,lVar5);
      if (*plVar11 == 0) goto LAB_024c235c;
      uVar10 = UnityEngine_Component__GetComponent_object__26f97e8
                         (*plVar11,*(undefined8 *)PTR_DAT_04cb7780);
      *(undefined8 *)(lVar7 + 0x48) = uVar10;
      thunk_FUN_02134474();
    }
    else if (lVar7 == 0) goto LAB_024c235c;
    *(long *)(lVar7 + 0xb8) = lVar6;
    thunk_FUN_02134474((long *)(lVar7 + 0xb8),lVar6);
  }
LAB_024c230c:
  if (*(long *)(param_4 + 0x60) != 0) {
    System_Collections_Generic_Dictionary_int__object___set_Item_3437318
              (*(long *)(param_4 + 0x60),*(undefined4 *)(param_5 + 0x10),lVar7,
               *(undefined8 *)PTR_DAT_04cbd130);
    return;
  }
LAB_024c235c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

