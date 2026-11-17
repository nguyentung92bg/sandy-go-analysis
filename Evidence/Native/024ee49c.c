/* IL2CPP: Dino.BusSand.View.SkidMarks$$Mark
void Dino_BusSand_View_SkidMarks__Mark (Dino_BusSand_View_SkidMarks_o* __this, int32_t id, UnityEngine_Vector3_o left, UnityEngine_Vector3_o right, float width, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.SkidMarks$$Mark
   void Dino_BusSand_View_SkidMarks__Mark (Dino_BusSand_View_SkidMarks_o* __this, int32_t id,
   UnityEngine_Vector3_o left, UnityEngine_Vector3_o right, float width, const MethodInfo* method);
    */

void Dino_BusSand_View_SkidMarks__Mark_23ee49c
               (float param_1,undefined1 param_2 [16],float param_3,float param_4,
               undefined1 param_5 [16],float param_6,float param_7,long param_8,undefined4 param_9)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  
  if ((bRam0000000004f9caad & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbdd00);
    FUN_02132f7c(PTR_DAT_04cbdd08);
    FUN_02132f7c(PTR_DAT_04cbdd10);
    FUN_02132f7c(PTR_DAT_04cbdd18);
    FUN_02132f7c(PTR_DAT_04cbdd20);
    bRam0000000004f9caad = 1;
  }
  uStack_d0 = 0;
  uStack_c8 = 0;
  fStack_b8 = 0.0;
  uStack_c0 = 0;
  fVar7 = (float)UnityEngine_Time__get_time_43cd540(0);
  if (*(long *)(param_8 + 0x28) == 0) goto LAB_024ee928;
  uVar3 = System_Collections_Generic_Dictionary_int__ValueTuple_Vector3__Vector3__float____TryGetValue_3412d44
                    (*(long *)(param_8 + 0x28),param_9,&uStack_d0,*(undefined8 *)PTR_DAT_04cbdd00);
  if (((uVar3 & 1) != 0) && (fVar7 - fStack_b8 < _UNK_00e201f4)) {
    if (*(long *)(param_8 + 0x20) == 0) goto LAB_024ee928;
    if (*(int *)(*(long *)(param_8 + 0x20) + 0x18) < 700) {
      fVar9 = param_1 - (float)uStack_d0;
      fVar15 = param_3 - (float)uStack_c8;
      fVar16 = fVar9 * fVar9 + fVar15 * fVar15;
      if (fVar16 < _UNK_00e20900) {
        return;
      }
      if (cRam0000000004f9bcf8 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9bcf8 = '\x01';
      }
      puVar2 = PTR_DAT_04caa208;
      uVar13 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
      fVar14 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20);
      if (cRam0000000004f9b65c == '\0') {
        FUN_02132f7c(PTR_DAT_04caa200);
        cRam0000000004f9b65c = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar16 = SQRT(fVar16);
      if (fVar16 <= _UNK_00e20a08) {
        if (cRam0000000004f9b65d == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65d = '\x01';
        }
        uVar10 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
        fVar15 = *(float *)(*(undefined8 **)(*(long *)puVar2 + 0xb8) + 1);
      }
      else {
        fVar15 = fVar15 / fVar16;
        uVar10 = CONCAT44(0.0 / fVar16,fVar9 / fVar16);
      }
      puVar2 = PTR_DAT_04cbdd10;
      lVar6 = *(long *)(param_8 + 0x20);
      if (lVar6 == 0) goto LAB_024ee928;
      lVar4 = *(long *)(lVar6 + 0x10);
      lVar5 = *(long *)PTR_DAT_04cbdd10;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_024ee928;
      fVar16 = (float)uVar13;
      fVar8 = (float)((ulong)uVar10 >> 0x20);
      fVar11 = (float)((ulong)uVar13 >> 0x20);
      uVar1 = *(uint *)(lVar6 + 0x18);
      fVar17 = (fVar15 * fVar11 - fVar14 * fVar8) * param_7 * 0.5;
      fVar9 = (fVar14 * (float)uVar10 - fVar16 * fVar15) * param_7 * 0.5;
      fVar14 = (fVar16 * fVar8 - fVar11 * (float)uVar10) * param_7 * 0.5;
      fVar16 = _UNK_00e20294 - fVar9;
      fVar15 = fVar9 + _UNK_00e20294;
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar1 * 0x34;
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(float *)(lVar4 + 0x20) = (float)uStack_d0 - fVar17;
        *(float *)(lVar4 + 0x24) = uStack_d0._4_4_ - fVar9;
        *(float *)(lVar4 + 0x28) = (float)uStack_c8 - fVar14;
        *(float *)(lVar4 + 0x2c) = (float)uStack_d0 + fVar17;
        *(float *)(lVar4 + 0x30) = uStack_d0._4_4_ + fVar9;
        *(float *)(lVar4 + 0x34) = fVar14 + (float)uStack_c8;
        *(float *)(lVar4 + 0x38) = param_1 - fVar17;
        *(float *)(lVar4 + 0x3c) = fVar16;
        *(float *)(lVar4 + 0x40) = param_3 - fVar14;
        *(float *)(lVar4 + 0x44) = param_1 + fVar17;
        *(float *)(lVar4 + 0x48) = fVar15;
        *(float *)(lVar4 + 0x4c) = param_3 + fVar14;
        *(float *)(lVar4 + 0x50) = fVar7;
      }
      else {
        fStack_b0 = (float)uStack_d0 - fVar17;
        fStack_ac = uStack_d0._4_4_ - fVar9;
        fStack_a8 = (float)uStack_c8 - fVar14;
        fStack_a4 = (float)uStack_d0 + fVar17;
        fStack_a0 = uStack_d0._4_4_ + fVar9;
        fStack_9c = fVar14 + (float)uStack_c8;
        fStack_98 = param_1 - fVar17;
        fStack_94 = fVar16;
        fStack_90 = param_3 - fVar14;
        fStack_8c = param_1 + fVar17;
        fStack_88 = fVar15;
        fStack_84 = param_3 + fVar14;
        fStack_80 = fVar7;
        System_Collections_Generic_List_SkidMarks_Seg___AddWithResize_2a9ac00
                  (lVar6,&fStack_b0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      lVar6 = *(long *)(param_8 + 0x20);
      if (lVar6 == 0) goto LAB_024ee928;
      lVar4 = *(long *)(lVar6 + 0x10);
      lVar5 = *(long *)puVar2;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_024ee928;
      fVar11 = (float)uStack_c0 - fVar9;
      fVar8 = (float)((ulong)uStack_c0 >> 0x20);
      fVar12 = fVar8 - fVar14;
      uVar1 = *(uint *)(lVar6 + 0x18);
      fVar9 = fVar9 + (float)uStack_c0;
      fVar8 = fVar14 + fVar8;
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar1 * 0x34;
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(float *)(lVar4 + 0x20) = uStack_c8._4_4_ - fVar17;
        *(ulong *)(lVar4 + 0x24) = CONCAT44(fVar12,fVar11);
        *(float *)(lVar4 + 0x2c) = fVar17 + uStack_c8._4_4_;
        *(ulong *)(lVar4 + 0x30) = CONCAT44(fVar8,fVar9);
        *(float *)(lVar4 + 0x38) = param_4 - fVar17;
        *(float *)(lVar4 + 0x3c) = fVar16;
        *(float *)(lVar4 + 0x40) = param_6 - fVar14;
        *(float *)(lVar4 + 0x44) = param_4 + fVar17;
        *(float *)(lVar4 + 0x48) = fVar15;
        *(float *)(lVar4 + 0x4c) = param_6 + fVar14;
        *(float *)(lVar4 + 0x50) = fVar7;
      }
      else {
        fStack_b0 = uStack_c8._4_4_ - fVar17;
        fStack_ac = fVar11;
        fStack_a8 = fVar12;
        fStack_a4 = fVar17 + uStack_c8._4_4_;
        fStack_a0 = fVar9;
        fStack_9c = fVar8;
        fStack_98 = param_4 - fVar17;
        fStack_94 = fVar16;
        fStack_90 = param_6 - fVar14;
        fStack_8c = param_4 + fVar17;
        fStack_88 = fVar15;
        fStack_84 = param_6 + fVar14;
        fStack_80 = fVar7;
        System_Collections_Generic_List_SkidMarks_Seg___AddWithResize_2a9ac00
                  (lVar6,&fStack_b0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  lVar6 = *(long *)(param_8 + 0x28);
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  System_ValueTuple_Vector3__Vector3__float____ctor_3111e4c
            (param_1,_UNK_00e20294,param_3,param_4,_UNK_00e20294,param_6,fVar7,&uStack_f0,
             *(undefined8 *)PTR_DAT_04cbdd20);
  if (lVar6 != 0) {
    fStack_a8 = (float)uStack_e8;
    fStack_b0 = (float)uStack_f0;
    fStack_ac = (float)((ulong)uStack_f0 >> 0x20);
    fStack_9c = (float)uStack_dc;
    fStack_98 = (float)uStack_d8;
    fStack_a4 = (float)uStack_e4;
    fStack_a0 = (float)uStack_e0;
    System_Collections_Generic_Dictionary_int__ValueTuple_Vector3__Vector3__float____set_Item_3411104
              (lVar6,param_9,&fStack_b0,*(undefined8 *)PTR_DAT_04cbdd08);
    return;
  }
LAB_024ee928:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

