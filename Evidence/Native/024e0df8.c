/* IL2CPP: Dino.BusSand.View.PropKit.MeshBuilder$$Torus
void Dino_BusSand_View_PropKit_MeshBuilder__Torus (Dino_BusSand_View_PropKit_MeshBuilder_o* __this, UnityEngine_Vector3_o c, float R, float rr, int32_t segU, int32_t segV, UnityEngine_Quaternion_o r, UnityEngine_Color_o col, float emit, float arcDeg, float stretchX, float startDeg, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PropKit.MeshBuilder$$Torus
   void Dino_BusSand_View_PropKit_MeshBuilder__Torus (Dino_BusSand_View_PropKit_MeshBuilder_o*
   __this, UnityEngine_Vector3_o c, float R, float rr, int32_t segU, int32_t segV,
   UnityEngine_Quaternion_o r, UnityEngine_Color_o col, float emit, float arcDeg, float stretchX,
   float startDeg, const MethodInfo* method); */

void Dino_BusSand_View_PropKit_MeshBuilder__Torus_23e0df8
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  float in_stack_00000028;
  undefined4 in_stack_00000030;
  float in_stack_00000038;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  if ((bRam0000000004f9ca61 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa160);
    bRam0000000004f9ca61 = 1;
  }
  puVar6 = PTR_DAT_04caa160;
  fVar5 = _UNK_00e20a74;
  fVar4 = _UNK_00e1fdf4;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _uStack_d0 = CONCAT44(param_5,param_4);
  _uStack_c8 = CONCAT44(uStack0000000000000000,in_stack_00000030);
  _uStack_c0 = CONCAT44(uStack0000000000000008,uStack0000000000000004);
  _uStack_b8 = CONCAT44(param_1,uStack000000000000000c);
  _uStack_b0 = CONCAT44(param_3,param_2);
  if (0 < param_7) {
    fVar18 = (float)param_8;
    iVar7 = 0;
    do {
      iVar1 = iVar7 + 1;
      if (0 < param_8) {
        iVar11 = 0;
        fVar24 = (((float)iVar7 * in_stack_00000028) / (float)param_7 + in_stack_00000038) * fVar5;
        fVar12 = (((float)iVar1 * in_stack_00000028) / (float)param_7 + in_stack_00000038) * fVar5;
        do {
          fVar13 = (float)iVar11;
          iVar11 = iVar11 + 1;
          fVar25 = (fVar13 * fVar4) / fVar18;
          fVar26 = ((float)iVar11 * fVar4) / fVar18;
          fVar13 = fVar25;
          fVar20 = fVar18;
          uVar14 = Dino_BusSand_View_PropKit_MeshBuilder___Torus_g__P_11_0_23e1344
                             (fVar24,fVar25,&uStack_e0,&uStack_d0);
          fVar21 = fVar20;
          uVar15 = Dino_BusSand_View_PropKit_MeshBuilder___Torus_g__P_11_0_23e1344
                             (fVar12,&uStack_f0,&uStack_d0);
          fVar19 = fVar26;
          fVar22 = fVar21;
          uVar16 = Dino_BusSand_View_PropKit_MeshBuilder___Torus_g__P_11_0_23e1344
                             (fVar12,&uStack_100,&uStack_d0);
          fVar23 = fVar22;
          uVar17 = Dino_BusSand_View_PropKit_MeshBuilder___Torus_g__P_11_0_23e1344
                             (fVar24,&uStack_110,&uStack_d0);
          iVar7 = Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0
                            (uVar14,fVar13,fVar20,(undefined4)uStack_e0,uStack_e0._4_4_,uStack_d8,
                             param_6);
          Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0
                    (uVar15,fVar25,fVar21,(undefined4)uStack_f0,uStack_f0._4_4_,uStack_e8,param_6);
          Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0
                    (uVar16,fVar19,fVar22,(undefined4)uStack_100,uStack_100._4_4_,uStack_f8,param_6)
          ;
          Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0
                    (uVar17,fVar26,fVar23,(undefined4)uStack_110,uStack_110._4_4_,uStack_108,param_6
                    );
          lVar8 = *(long *)(param_6 + 0x30);
          if (lVar8 == 0) {
LAB_024e1340:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar10 = *(long *)puVar6;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_024e1340;
          uVar3 = *(uint *)(lVar8 + 0x18);
          if (uVar3 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar3 + 1;
            *(int *)(lVar9 + (long)(int)uVar3 * 4 + 0x20) = iVar7;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                      (lVar8,iVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            lVar8 = *(long *)(param_6 + 0x30);
            if (lVar8 == 0) goto LAB_024e1340;
          }
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar10 = *(long *)puVar6;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_024e1340;
          uVar3 = *(uint *)(lVar8 + 0x18);
          iVar2 = iVar7 + 2;
          if (uVar3 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar3 + 1;
            *(int *)(lVar9 + (long)(int)uVar3 * 4 + 0x20) = iVar2;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                      (lVar8,iVar2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            lVar8 = *(long *)(param_6 + 0x30);
            if (lVar8 == 0) goto LAB_024e1340;
          }
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar10 = *(long *)puVar6;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_024e1340;
          uVar3 = *(uint *)(lVar8 + 0x18);
          if (uVar3 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar3 + 1;
            *(int *)(lVar9 + (long)(int)uVar3 * 4 + 0x20) = iVar7 + 1;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                      (lVar8,iVar7 + 1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            lVar8 = *(long *)(param_6 + 0x30);
            if (lVar8 == 0) goto LAB_024e1340;
          }
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar10 = *(long *)puVar6;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_024e1340;
          uVar3 = *(uint *)(lVar8 + 0x18);
          if (uVar3 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar3 + 1;
            *(int *)(lVar9 + (long)(int)uVar3 * 4 + 0x20) = iVar7;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                      (lVar8,iVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            lVar8 = *(long *)(param_6 + 0x30);
            if (lVar8 == 0) goto LAB_024e1340;
          }
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar10 = *(long *)puVar6;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_024e1340;
          uVar3 = *(uint *)(lVar8 + 0x18);
          if (uVar3 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar3 + 1;
            *(int *)(lVar9 + (long)(int)uVar3 * 4 + 0x20) = iVar7 + 3;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                      (lVar8,iVar7 + 3,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            lVar8 = *(long *)(param_6 + 0x30);
            if (lVar8 == 0) goto LAB_024e1340;
          }
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar10 = *(long *)puVar6;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_024e1340;
          uVar3 = *(uint *)(lVar8 + 0x18);
          if (uVar3 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar3 + 1;
            *(int *)(lVar9 + (long)(int)uVar3 * 4 + 0x20) = iVar2;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                      (lVar8,iVar2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        } while (param_8 != iVar11);
      }
      iVar7 = iVar1;
    } while (iVar1 != param_7);
  }
  return;
}

