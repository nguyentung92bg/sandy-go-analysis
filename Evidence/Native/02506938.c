/* IL2CPP: Dino.BusSand.View.WorldView$$FacingQuad
void Dino_BusSand_View_WorldView__FacingQuad (Dino_BusSand_View_WorldView_o* __this, System_String_o* name, UnityEngine_Vector3_o centre, UnityEngine_Quaternion_o rot, float w, float h, UnityEngine_Material_o* mat, UnityEngine_Rect_o uv, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.WorldView$$FacingQuad
   void Dino_BusSand_View_WorldView__FacingQuad (Dino_BusSand_View_WorldView_o* __this,
   System_String_o* name, UnityEngine_Vector3_o centre, UnityEngine_Quaternion_o rot, float w, float
   h, UnityEngine_Material_o* mat, UnityEngine_Rect_o uv, const MethodInfo* method); */

undefined8
Dino_BusSand_View_WorldView__FacingQuad_2406938
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8,long param_9,
          undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  uint uVar17;
  long *plVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  undefined1 auVar22 [16];
  float in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  
  puVar2 = PTR_DAT_04cabdb8;
  puVar1 = PTR_DAT_04caa148;
  if ((bRam0000000004f9cb16 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc000);
    FUN_02132f7c(PTR_DAT_04cbe2a8);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04cbc170);
    FUN_02132f7c(PTR_DAT_04caed88);
    FUN_02132f7c(PTR_DAT_04cabdb8);
    bRam0000000004f9cb16 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_Mesh___ctor_4389e48(lVar4,0);
  lVar5 = FUN_02133068(*(undefined8 *)puVar2,4);
  if (lVar5 == 0) goto LAB_02506c44;
  uVar17 = *(uint *)(lVar5 + 0x18);
  if (uVar17 == 0) {
LAB_02506c40:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  *(undefined4 *)(lVar5 + 0x28) = 0;
  *(float *)(lVar5 + 0x20) = param_8 * -0.5;
  *(float *)(lVar5 + 0x24) = in_stack_00000000 * -0.5;
  if (uVar17 == 1) goto LAB_02506c40;
  *(undefined4 *)(lVar5 + 0x34) = 0;
  *(float *)(lVar5 + 0x2c) = param_8 * 0.5;
  *(float *)(lVar5 + 0x30) = in_stack_00000000 * -0.5;
  if (uVar17 < 3) goto LAB_02506c40;
  *(undefined4 *)(lVar5 + 0x40) = 0;
  *(float *)(lVar5 + 0x38) = param_8 * -0.5;
  *(float *)(lVar5 + 0x3c) = in_stack_00000000 * 0.5;
  if (uVar17 == 3) goto LAB_02506c40;
  *(float *)(lVar5 + 0x44) = param_8 * 0.5;
  *(float *)(lVar5 + 0x48) = in_stack_00000000 * 0.5;
  *(undefined4 *)(lVar5 + 0x4c) = 0;
  puVar1 = PTR_DAT_04caed88;
  if (lVar4 == 0) {
LAB_02506c44:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_Mesh__set_vertices_4390e48(lVar4,lVar5,0);
  lVar5 = FUN_02133068(*(undefined8 *)puVar1,4);
  if (lVar5 == 0) goto LAB_02506c44;
  uVar17 = *(uint *)(lVar5 + 0x18);
  if (uVar17 == 0) goto LAB_02506c40;
  *(float *)(lVar5 + 0x20) = fStack0000000000000008;
  *(float *)(lVar5 + 0x24) = fStack000000000000000c;
  if (uVar17 == 1) goto LAB_02506c40;
  *(float *)(lVar5 + 0x28) = fStack0000000000000010 + fStack0000000000000008;
  *(float *)(lVar5 + 0x2c) = fStack000000000000000c;
  if (uVar17 < 3) goto LAB_02506c40;
  *(float *)(lVar5 + 0x30) = fStack0000000000000008;
  *(float *)(lVar5 + 0x34) = fStack0000000000000014 + fStack000000000000000c;
  puVar1 = PTR_DAT_04cbc000;
  if (uVar17 == 3) goto LAB_02506c40;
  *(float *)(lVar5 + 0x38) = fStack0000000000000010 + fStack0000000000000008;
  *(float *)(lVar5 + 0x3c) = fStack0000000000000014 + fStack000000000000000c;
  UnityEngine_Mesh__set_uv_439104c(lVar4,lVar5,0);
  lVar5 = FUN_02133068(*(undefined8 *)puVar1,4);
  if (lVar5 == 0) goto LAB_02506c44;
  uVar17 = *(uint *)(lVar5 + 0x18);
  if (uVar17 == 0) goto LAB_02506c40;
  auVar22 = NEON_fmov(0x3f800000,4);
  uVar8 = auVar22._8_8_;
  *(undefined8 *)(lVar5 + 0x28) = uVar8;
  uVar6 = auVar22._0_8_;
  *(undefined8 *)(lVar5 + 0x20) = uVar6;
  if (uVar17 == 1) goto LAB_02506c40;
  *(undefined8 *)(lVar5 + 0x38) = uVar8;
  *(undefined8 *)(lVar5 + 0x30) = uVar6;
  if (uVar17 < 3) goto LAB_02506c40;
  *(undefined8 *)(lVar5 + 0x48) = uVar8;
  *(undefined8 *)(lVar5 + 0x40) = uVar6;
  puVar2 = PTR_DAT_04cbc170;
  puVar1 = PTR_DAT_04caec70;
  if (uVar17 == 3) goto LAB_02506c40;
  *(undefined8 *)(lVar5 + 0x58) = uVar8;
  *(undefined8 *)(lVar5 + 0x50) = uVar6;
  UnityEngine_Mesh__set_colors_43915ac(lVar4,lVar5,0);
  uVar6 = FUN_02133068(*(undefined8 *)puVar1,6);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar6,*(undefined8 *)puVar2,0);
  UnityEngine_Mesh__set_triangles_4393ee8(lVar4,uVar6,0);
  UnityEngine_Mesh__RecalculateBounds_4395ccc(lVar4,0);
  lVar4 = Dino_BusSand_View_WorldView__MeshObject_2405c94(param_9,param_10,lVar4,param_11,0,0);
  if ((lVar4 == 0) || (lVar5 = UnityEngine_Component__get_transform_43bcd18(lVar4,0), lVar5 == 0))
  goto LAB_02506c44;
  UnityEngine_Transform__set_position_43d0f1c(param_1,param_2,param_3,lVar5,0);
  lVar5 = UnityEngine_Component__get_transform_43bcd18(lVar4,0);
  if (lVar5 == 0) goto LAB_02506c44;
  UnityEngine_Transform__set_rotation_43d13f8(param_4,param_5,param_6,param_7,lVar5,0);
  lVar5 = *(long *)(param_9 + 0x58);
  if (lVar5 == 0) goto LAB_02506c44;
  lVar10 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04cbe2a8 + 0x20) + 0xc0) + 0xa8);
  if (*(long *)(lVar5 + 0x10) == 0) {
    System_Collections_Generic_HashSet_object___Initialize_37e7198
              (lVar5,0,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
  }
  iVar3 = System_Collections_Generic_HashSet_object___InternalGetHashCode_37e89d4
                    (lVar5,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0xb0))
  ;
  lVar13 = *(long *)(lVar5 + 0x10);
  if (lVar13 == 0) goto LAB_038e7764;
  uVar17 = *(uint *)(lVar13 + 0x18);
  iVar21 = 0;
  if (uVar17 != 0) {
    iVar21 = iVar3 / (int)uVar17;
  }
  uVar19 = iVar3 - iVar21 * uVar17;
  if (uVar19 < uVar17) {
    lVar20 = *(long *)(lVar5 + 0x18);
    uVar17 = *(int *)(lVar13 + (ulong)uVar19 * 4 + 0x20) - 1;
    if (-1 < (int)uVar17) {
      if (lVar20 == 0) goto LAB_038e7764;
      uVar6 = *(undefined8 *)(lVar20 + 0x18);
      iVar21 = 0;
      do {
        if ((uint)uVar6 <= uVar17) goto LAB_038e7724;
        lVar13 = lVar20 + 0x20 + (ulong)uVar17 * 0x10;
        if (*(int *)(lVar20 + 0x20 + (ulong)uVar17 * 0x10) == iVar3) {
          plVar18 = *(long **)(lVar5 + 0x30);
          if (plVar18 == (long *)0x0) goto LAB_038e7764;
          uVar6 = *(undefined8 *)(lVar13 + 8);
          lVar9 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x20);
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_0216b470(lVar9);
          }
          lVar14 = *plVar18;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar9) {
                puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_038e75b4;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar7 = (undefined8 *)FUN_0216b7a4(plVar18,lVar9,0);
LAB_038e75b4:
          uVar15 = (*(code *)*puVar7)(plVar18,uVar6,lVar4,puVar7[1]);
          if ((uVar15 & 1) != 0) {
            return 0;
          }
          uVar6 = *(undefined8 *)(lVar20 + 0x18);
        }
        if ((int)(uint)uVar6 <= iVar21) {
          thunk_FUN_021985a8(PTR_DAT_04caa348);
          uVar6 = thunk_FUN_0216e89c();
          uVar8 = thunk_FUN_021985a8(PTR_DAT_04cc7428);
          System_InvalidOperationException___ctor_482ff30(uVar6,uVar8,0);
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar6,lVar10);
        }
        if ((uint)uVar6 <= uVar17) goto LAB_038e7724;
        uVar17 = *(uint *)(lVar13 + 4);
        iVar21 = iVar21 + 1;
      } while (-1 < (int)uVar17);
    }
    uVar17 = *(uint *)(lVar5 + 0x28);
    uVar15 = (ulong)uVar17;
    if ((int)uVar17 < 0) {
      if (lVar20 == 0) goto LAB_038e7764;
      uVar17 = *(uint *)(lVar5 + 0x24);
      uVar15 = (ulong)uVar17;
      uVar12 = *(uint *)(lVar20 + 0x18);
      if (uVar17 == uVar12) {
        System_Collections_Generic_HashSet_object___IncreaseCapacity_37e7274
                  (lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x188));
        if (*(long *)(lVar5 + 0x10) == 0) goto LAB_038e7764;
        uVar15 = (ulong)*(uint *)(lVar5 + 0x24);
        lVar20 = *(long *)(lVar5 + 0x18);
        uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x18);
        *(uint *)(lVar5 + 0x24) = *(uint *)(lVar5 + 0x24) + 1;
        if (lVar20 == 0) goto LAB_038e7764;
        iVar21 = 0;
        iVar11 = (int)uVar6;
        if (iVar11 != 0) {
          iVar21 = iVar3 / iVar11;
        }
        uVar19 = iVar3 - iVar21 * iVar11;
        uVar12 = *(uint *)(lVar20 + 0x18);
      }
      else {
        *(uint *)(lVar5 + 0x24) = uVar17 + 1;
      }
    }
    else {
      if (lVar20 == 0) goto LAB_038e7764;
      uVar12 = *(uint *)(lVar20 + 0x18);
      if (uVar12 <= uVar17) goto LAB_038e7724;
      *(undefined4 *)(lVar5 + 0x28) = *(undefined4 *)(lVar20 + uVar15 * 0x10 + 0x24);
    }
    uVar17 = (uint)uVar15;
    if (uVar17 < uVar12) {
      lVar10 = lVar20 + 0x20;
      *(int *)(lVar10 + (-(uVar15 >> 0x1f) & 0xfffffff000000000 | uVar15 << 4)) = iVar3;
      plVar18 = (long *)(lVar10 + (long)(int)uVar17 * 0x10 + 8);
      *plVar18 = lVar4;
      thunk_FUN_02134474(plVar18,lVar4);
      lVar4 = *(long *)(lVar5 + 0x10);
      if (lVar4 == 0) {
LAB_038e7764:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((uVar19 < *(uint *)(lVar4 + 0x18)) && (uVar17 < *(uint *)(lVar20 + 0x18))) {
        lVar4 = lVar4 + (ulong)uVar19 * 4;
        *(int *)(lVar10 + (long)(int)uVar17 * 0x10 + 4) = *(int *)(lVar4 + 0x20) + -1;
        *(uint *)(lVar4 + 0x20) = uVar17 + 1;
        *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
        *(int *)(lVar5 + 0x38) = *(int *)(lVar5 + 0x38) + 1;
        return 1;
      }
    }
  }
LAB_038e7724:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

