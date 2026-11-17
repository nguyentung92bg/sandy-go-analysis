/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass114_0$$<OnKey>b__0
void Dino_BusSand_View_MechanicLayer___c__DisplayClass114_0___OnKey_b__0 (Dino_BusSand_View_MechanicLayer___c__DisplayClass114_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass114_0$$<OnKey>b__0
   void Dino_BusSand_View_MechanicLayer___c__DisplayClass114_0___OnKey_b__0
   (Dino_BusSand_View_MechanicLayer___c__DisplayClass114_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_View_MechanicLayer___c__DisplayClass114_0___OnKey_b__0_23d3dfc
               (float param_1,float param_2,float param_3,long param_4)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca0d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5d0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca0d = 1;
  }
  uVar5 = *(undefined8 *)(param_4 + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  fVar6 = (float)Dino_BusSand_Easing__Evaluate_238b7d0(param_1,3,0);
  uVar5 = *(undefined8 *)(param_4 + 0x18);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  puVar2 = PTR_DAT_04caa208;
  if ((uVar3 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_4 + 0x28);
    param_3 = *(float *)(param_4 + 0x30);
    fVar7 = (float)uVar5 + (float)uVar5;
    param_2 = (float)((ulong)uVar5 >> 0x20);
    param_2 = param_2 + param_2;
    fVar10 = param_3 + param_3;
    if (cRam0000000004f9bcf8 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9bcf8 = '\x01';
    }
  }
  else {
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_024d4178;
    fVar7 = (float)Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(*(long *)(param_4 + 0x18),0)
    ;
    if (cRam0000000004f9bcf8 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9bcf8 = '\x01';
    }
    if (*(long *)(param_4 + 0x20) == 0) goto LAB_024d4178;
    fVar10 = *(float *)(*(long *)(param_4 + 0x20) + 0x50);
    lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
    uVar5 = *(undefined8 *)(lVar4 + 0x18);
    param_3 = param_3 + *(float *)(lVar4 + 0x20) * fVar10 * _UNK_00e20590;
    fVar7 = fVar7 + (float)uVar5 * fVar10 * 0.35;
    param_2 = param_2 + (float)((ulong)uVar5 >> 0x20) * fVar10 * 0.35;
    uVar5 = CONCAT44(param_2,fVar7);
    fVar7 = fVar7 + (float)*(undefined8 *)(param_4 + 0x28);
    param_2 = param_2 + (float)((ulong)*(undefined8 *)(param_4 + 0x28) >> 0x20);
    fVar10 = param_3 + *(float *)(param_4 + 0x30);
  }
  fVar15 = 1.0;
  if (fVar6 <= 1.0) {
    fVar15 = fVar6;
  }
  fVar16 = 0.0;
  if (0.0 <= fVar6) {
    fVar16 = fVar15;
  }
  if (*(long *)(param_4 + 0x10) != 0) {
    fVar13 = *(float *)(param_4 + 0x34);
    lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
    uVar12 = *(undefined8 *)(lVar4 + 0x18);
    fVar6 = fVar7 * 0.5 + (float)uVar12 * fVar13;
    fVar7 = param_2 * 0.5 + (float)((ulong)uVar12 >> 0x20) * fVar13;
    fVar14 = (float)*(undefined8 *)(param_4 + 0x28);
    fVar15 = (float)((ulong)*(undefined8 *)(param_4 + 0x28) >> 0x20);
    fVar10 = fVar10 * 0.5 + *(float *)(lVar4 + 0x20) * fVar13;
    fVar14 = fVar14 + (fVar6 - fVar14) * fVar16;
    fVar15 = fVar15 + (fVar7 - fVar15) * fVar16;
    fVar13 = *(float *)(param_4 + 0x30) + fVar16 * (fVar10 - *(float *)(param_4 + 0x30));
    fVar15 = fVar15 + ((fVar7 + ((float)((ulong)uVar5 >> 0x20) - fVar7) * fVar16) - fVar15) * fVar16
    ;
    uVar5 = CONCAT44(fVar15,fVar14 + ((fVar6 + ((float)uVar5 - fVar6) * fVar16) - fVar14) * fVar16);
    fVar10 = fVar13 + fVar16 * ((fVar10 + fVar16 * (param_3 - fVar10)) - fVar13);
    fVar6 = fVar15;
    fVar7 = fVar10;
    UnityEngine_Transform__set_position_43d0f1c(uVar5,fVar15,fVar10,*(long *)(param_4 + 0x10),0);
    lVar4 = *(long *)(param_4 + 0x10);
    cVar1 = *(char *)(param_4 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_04cac5d0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar14 = (float)Dino_BusSand_View_MechanicLayer__KeyFacing_23ca83c(0,cVar1 != '\0',0);
    fVar11 = 0.0;
    fVar9 = param_1 * 540.0 * _UNK_00e20a74;
    fVar16 = fVar13;
    fVar8 = (float)UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,fVar9,0,0);
    if (lVar4 != 0) {
      UnityEngine_Transform__set_rotation_43d13f8
                ((fVar6 * fVar11 + fVar13 * fVar8 + fVar14 * fVar16) - fVar7 * fVar9,
                 (fVar7 * fVar8 + fVar13 * fVar9 + fVar6 * fVar16) - fVar14 * fVar11,
                 (fVar14 * fVar9 + fVar13 * fVar11 + fVar7 * fVar16) - fVar6 * fVar8,
                 ((fVar13 * fVar16 - fVar14 * fVar8) - fVar6 * fVar9) - fVar7 * fVar11,lVar4,0);
      if (*(long *)(param_4 + 0x20) != 0) {
        Dino_BusSand_View_MechanicLayer__KeySparks_23ced40
                  (*(undefined4 *)(param_4 + 0x3c),*(undefined4 *)(param_4 + 0x40),
                   *(undefined4 *)(param_4 + 0x44),uVar5,fVar15,fVar10,*(long *)(param_4 + 0x20),0);
        *(float *)(param_4 + 0x44) = fVar10;
        *(undefined8 *)(param_4 + 0x3c) = uVar5;
        return;
      }
    }
  }
LAB_024d4178:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

