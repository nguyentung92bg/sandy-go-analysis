/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnKey
void Dino_BusSand_View_MechanicLayer__OnKey (Dino_BusSand_View_MechanicLayer_o* __this, int32_t keyTruck, int32_t lockedTruck, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnKey
   void Dino_BusSand_View_MechanicLayer__OnKey (Dino_BusSand_View_MechanicLayer_o* __this, int32_t
   keyTruck, int32_t lockedTruck, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__OnKey_23cb3c8
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long lStack_48;
  
  puVar1 = PTR_DAT_04cbd3d0;
  if ((bRam0000000004f9c9e8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cbd3d8);
    FUN_02132f7c(PTR_DAT_04cbd3a8);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cac5d0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd088);
    FUN_02132f7c(PTR_DAT_04cbc250);
    FUN_02132f7c(PTR_DAT_04cbd3e0);
    FUN_02132f7c(PTR_DAT_04cbd3e8);
    FUN_02132f7c(PTR_DAT_04cbd3d0);
    FUN_02132f7c(PTR_DAT_04cb7928);
    bRam0000000004f9c9e8 = 1;
  }
  lStack_48 = 0;
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_View_MechanicLayer___c__DisplayClass114_0___ctor_23d3df4(lVar4,0);
  if (lVar4 == 0) goto LAB_024cbc38;
  *(long *)(lVar4 + 0x20) = param_5;
  thunk_FUN_02134474((long *)(lVar4 + 0x20),param_5);
  lVar8 = *(long *)(param_5 + 0x30);
  *(undefined4 *)(lVar4 + 0x48) = param_7;
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar8 == 0) goto LAB_024cbc38;
  lVar8 = (**(code **)(lVar8 + 0x18))
                    (*(undefined8 *)(lVar8 + 0x40),param_7,*(undefined8 *)(lVar8 + 0x28));
  plVar9 = (long *)(lVar4 + 0x18);
  *plVar9 = lVar8;
  thunk_FUN_02134474(plVar9,lVar8);
  lVar8 = *plVar9;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (*(long *)(param_5 + 0x60) == 0) goto LAB_024cbc38;
  uVar5 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                    (*(long *)(param_5 + 0x60),param_6,&lStack_48,*(undefined8 *)PTR_DAT_04cbd3a8);
  if ((uVar5 & 1) == 0) {
    iVar10 = 1;
  }
  else {
    if (lStack_48 == 0) goto LAB_024cbc38;
    iVar10 = *(int *)(lStack_48 + 0xb4);
    if (iVar10 < 2) {
      iVar10 = 1;
    }
  }
  lVar8 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
  puVar2 = PTR_DAT_04cac5d0;
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0xd0);
  }
  if (*(int *)(*(long *)PTR_DAT_04cac5d0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = 0;
  if (lVar8 != 0) {
    if ((int)*(uint *)(lVar8 + 0x18) < iVar10) {
      uVar11 = 0;
    }
    else {
      if (*(uint *)(lVar8 + 0x18) <= iVar10 - 1U) goto LAB_024cbc3c;
      uVar11 = *(undefined8 *)(lVar8 + (ulong)(iVar10 - 1U) * 8 + 0x20);
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  bVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
  *(byte *)(lVar4 + 0x38) = bVar3 & 1;
  if (lStack_48 == 0) {
LAB_024cb6bc:
    lVar8 = *(long *)(param_5 + 0x30);
    if (lVar8 == 0) goto LAB_024cbc38;
    lVar8 = (**(code **)(lVar8 + 0x18))
                      (*(undefined8 *)(lVar8 + 0x40),param_6,*(undefined8 *)(lVar8 + 0x28));
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
    if ((uVar5 & 1) == 0) {
      if (*plVar9 == 0) goto LAB_024cbc38;
      fVar18 = (float)Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(*plVar9,0);
      if (cRam0000000004f9bcf8 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9bcf8 = '\x01';
      }
      fVar17 = *(float *)(param_5 + 0x50);
      uVar11 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
      uVar6 = NEON_fmov(0x40400000,4);
      param_4 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20) * fVar17;
      fVar18 = fVar18 + (float)uVar11 * fVar17 * (float)uVar6;
      param_2 = param_2 + (float)((ulong)uVar11 >> 0x20) * fVar17 * (float)((ulong)uVar6 >> 0x20);
      param_3 = param_3 + param_4 * 3.0;
    }
    else {
      if (lVar8 == 0) goto LAB_024cbc38;
      fVar18 = (float)Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(lVar8,0);
    }
    *(float *)(lVar4 + 0x28) = fVar18;
    *(float *)(lVar4 + 0x2c) = param_2;
    *(float *)(lVar4 + 0x30) = param_3;
    lVar8 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(lVar8 + 0xd0);
    }
    fVar18 = param_2;
    fVar17 = param_3;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      fVar18 = param_2;
      fVar17 = param_3;
    }
    uVar11 = 0;
    if (lVar8 != 0) {
      if ((int)*(uint *)(lVar8 + 0x18) < iVar10) {
        uVar11 = 0;
      }
      else {
        if (*(uint *)(lVar8 + 0x18) <= iVar10 - 1U) {
LAB_024cbc3c:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        uVar11 = *(undefined8 *)(lVar8 + (ulong)(iVar10 - 1U) * 8 + 0x20);
      }
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cbd088 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = Dino_BusSand_View_PropKit__Key_23dd804(iVar10,0);
      uVar12 = *(undefined4 *)(lVar4 + 0x28);
      param_2 = *(float *)(lVar4 + 0x2c);
      param_3 = *(float *)(lVar4 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_04cbc250 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cbc250);
      }
      fVar19 = (float)Dino_BusSand_View_StageLayout__get_FacingRotation_23e8a38(0);
      fVar16 = 0.0;
      fVar15 = param_4;
      fVar20 = _UNK_00e2082c;
      fVar14 = (float)UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,_UNK_00e2082c,0,0);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      uVar6 = UnityEngine_Component__get_transform_43bcd18(param_5,0);
      lVar8 = Dino_BusSand_View_MechanicLayer__Prop_23c2534
                        (uVar12,param_2,param_3,
                         (fVar18 * fVar16 + param_4 * fVar14 + fVar19 * fVar15) - fVar17 * fVar20,
                         (fVar17 * fVar14 + param_4 * fVar20 + fVar18 * fVar15) - fVar19 * fVar16,
                         (fVar19 * fVar20 + param_4 * fVar16 + fVar17 * fVar15) - fVar18 * fVar14,
                         ((param_4 * fVar15 - fVar19 * fVar14) - fVar18 * fVar20) - fVar17 * fVar16,
                         param_5,uVar11,uVar6,0);
    }
    else {
      uVar12 = *(undefined4 *)(lVar4 + 0x28);
      param_2 = *(float *)(lVar4 + 0x2c);
      param_3 = *(float *)(lVar4 + 0x30);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar13 = Dino_BusSand_View_MechanicLayer__KeyFacing_23ca83c(0,1);
      if (*plVar9 == 0) goto LAB_024cbc38;
      fVar15 = *(float *)(*plVar9 + 0xb0);
      uVar6 = UnityEngine_Component__get_transform_43bcd18(param_5,0);
      lVar8 = Dino_BusSand_View_MechanicLayer__Art_23c8dd4
                        (uVar12,param_2,param_3,uVar13,fVar18,fVar17,param_4,fVar15 * _UNK_00e20180,
                         param_5,uVar11,uVar6,*(undefined8 *)PTR_DAT_04cb7928);
    }
  }
  else {
    uVar11 = *(undefined8 *)(lStack_48 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
    if ((uVar5 & 1) == 0) goto LAB_024cb6bc;
    if ((lStack_48 == 0) || (lVar8 = *(long *)(lStack_48 + 0x20), lVar8 == 0)) goto LAB_024cbc38;
    uVar12 = UnityEngine_Transform__get_position_43d0e48(lVar8,0);
    *(undefined4 *)(lVar4 + 0x28) = uVar12;
    *(float *)(lVar4 + 0x2c) = param_2;
    *(float *)(lVar4 + 0x30) = param_3;
    uVar11 = UnityEngine_Component__get_transform_43bcd18(param_5,0);
    UnityEngine_Transform__SetParent_43d1e34(lVar8,uVar11,1,0);
    if (lStack_48 == 0) goto LAB_024cbc38;
    *(undefined8 *)(lStack_48 + 0x20) = 0;
    thunk_FUN_02134474((undefined8 *)(lStack_48 + 0x20),0);
    if (*(long *)(param_5 + 0x60) == 0) goto LAB_024cbc38;
    System_Collections_Generic_Dictionary_int__object___Remove_34387d4
              (*(long *)(param_5 + 0x60),param_6,*(undefined8 *)PTR_DAT_04cbd3d8);
  }
  puVar1 = PTR_DAT_04cad568;
  if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar1;
  }
  if (**(long **)(lVar7 + 0xb8) != 0) {
    param_2 = 0.0;
    Dino_BusSand_GameAudio__Mechanic_2384944(0,**(long **)(lVar7 + 0xb8),0xe,0);
  }
  fVar18 = *(float *)(lVar4 + 0x28);
  if (*(long *)(lVar4 + 0x18) != 0) {
    fVar20 = *(float *)(lVar4 + 0x2c);
    fVar19 = *(float *)(lVar4 + 0x30);
    fVar17 = *(float *)(param_5 + 0x50);
    fVar15 = (float)Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(*(long *)(lVar4 + 0x18),0);
    if (cRam0000000004f9b9df == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b9df = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar20 = fVar20 - param_2;
    fVar18 = fVar18 - fVar15;
    fVar19 = fVar19 - param_3;
    *(long *)(lVar4 + 0x10) = lVar8;
    fVar17 = fVar17 * 2.5;
    fVar18 = SQRT(fVar19 * fVar19 + fVar18 * fVar18 + fVar20 * fVar20) * _UNK_00e2094c;
    if (fVar17 <= fVar18) {
      fVar17 = fVar18;
    }
    *(float *)(lVar4 + 0x34) = fVar17;
    thunk_FUN_02134474((long *)(lVar4 + 0x10),lVar8);
    puVar1 = PTR_DAT_04cac208;
    *(undefined8 *)(lVar4 + 0x3c) = *(undefined8 *)(lVar4 + 0x28);
    uVar11 = *(undefined8 *)puVar1;
    *(undefined4 *)(lVar4 + 0x44) = *(undefined4 *)(lVar4 + 0x30);
    uVar11 = thunk_FUN_0216e89c(uVar11);
    System_Action_float____ctor_35f1448(uVar11,lVar4,*(undefined8 *)PTR_DAT_04cbd3e0,0);
    lVar8 = Dino_BusSand_Tween__Value_238bbfc(_UNK_00e20094,uVar11,0);
    uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar11,lVar4,*(undefined8 *)PTR_DAT_04cbd3e8,0);
    if ((lVar8 != 0) && (lVar4 = Dino_BusSand_Tween__OnDone_238bb74(lVar8,uVar11,0), lVar4 != 0)) {
      Dino_BusSand_Tween__SetOwner_238bb58(lVar4,param_5,0);
      return;
    }
  }
LAB_024cbc38:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

