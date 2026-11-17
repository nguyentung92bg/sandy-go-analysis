/* IL2CPP: Dino.BusSand.View.MechanicLayer$$FillLaneFloor
void Dino_BusSand_View_MechanicLayer__FillLaneFloor (Dino_BusSand_View_MechanicLayer_o* __this, UnityEngine_Mesh_o* m, System_Collections_Generic_List_Vector3__o* path, float width, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$FillLaneFloor
   void Dino_BusSand_View_MechanicLayer__FillLaneFloor (Dino_BusSand_View_MechanicLayer_o* __this,
   UnityEngine_Mesh_o* m, System_Collections_Generic_List_Vector3__o* path, float width, const
   MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__FillLaneFloor_23c4aac
               (float param_1,ulong param_2,float param_3,long param_4,long param_5,long param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar17;
  float *pfVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  int iVar22;
  long *plVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  
  if ((bRam0000000004f9c9cd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cbc9f0);
    FUN_02132f7c(PTR_DAT_04cbc360);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04caa178);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cb7270);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04cbc380);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04caa1a8);
    FUN_02132f7c(PTR_DAT_04cae230);
    FUN_02132f7c(PTR_DAT_04cad718);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cbc390);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04caa1d8);
    bRam0000000004f9c9cd = 1;
  }
  if ((param_5 != 0) && (UnityEngine_Mesh__Clear_4395cc4(param_5,0), param_6 != 0)) {
    if (*(int *)(param_6 + 0x18) < 2) {
      return;
    }
    lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1d0);
    System_Collections_Generic_List_Vector3____ctor_3af944c(lVar10,*(undefined8 *)PTR_DAT_04cb3c10);
    lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1d8);
    System_Collections_Generic_List_Vector2____ctor_3af6bb0(lVar11,*(undefined8 *)PTR_DAT_04cb7270);
    lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbc390);
    System_Collections_Generic_List_Color____ctor_3a01b34(lVar12,*(undefined8 *)PTR_DAT_04cbc380);
    lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
    System_Collections_Generic_List_int____ctor_3a2b7dc(lVar13,*(undefined8 *)PTR_DAT_04cad6e8);
    puVar6 = PTR_DAT_04caa200;
    puVar5 = PTR_DAT_04caa1a8;
    if (*(long *)(param_4 + 0x28) != 0) {
      iVar22 = *(int *)(param_6 + 0x18);
      fVar38 = 0.0;
      fVar42 = *(float *)(*(long *)(param_4 + 0x28) + 0xfc);
      if (1 < iVar22) {
        iVar25 = 1;
        do {
          fVar34 = (float)param_2;
          fVar27 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                    (param_6,iVar25 + -1,*(undefined8 *)puVar5);
          fVar35 = param_3;
          fVar33 = fVar34;
          fVar28 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                    (param_6,iVar25,*(undefined8 *)puVar5);
          if (cRam0000000004f9b9df == '\0') {
            FUN_02132f7c(puVar6);
            cRam0000000004f9b9df = '\x01';
          }
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          param_3 = param_3 - fVar35;
          iVar25 = iVar25 + 1;
          param_2 = (ulong)(uint)(param_3 * param_3);
          fVar38 = fVar38 + SQRT(param_3 * param_3 +
                                 (fVar27 - fVar28) * (fVar27 - fVar28) +
                                 (fVar34 - fVar33) * (fVar34 - fVar33));
        } while (iVar22 != iVar25);
      }
      puVar5 = PTR_DAT_04caa1a8;
      fVar28 = _UNK_00e20a08;
      fVar27 = _UNK_00e20900;
      fVar33 = _UNK_00e207cc;
      fVar35 = _UNK_00e20738;
      iVar25 = iVar22 + -1;
      if (0 < iVar22) {
        iVar24 = 1;
        fVar34 = 1.0 / (fVar42 * _UNK_00e2032c);
        uVar15 = (ulong)(uint)fVar34;
        param_1 = param_1 * 0.5;
        fVar38 = -(fVar38 * fVar34);
        fVar42 = _UNK_00e207cc;
        iVar26 = 0;
        do {
          fVar36 = (float)uVar15;
          iVar1 = iVar26 + 1;
          iVar2 = iVar25;
          if (iVar1 <= iVar25) {
            iVar2 = iVar26 + 1;
          }
          fVar29 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                    (param_6,iVar2,*(undefined8 *)puVar5);
          fVar40 = fVar42;
          fVar41 = fVar36;
          fVar30 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                    (param_6,iVar26,*(undefined8 *)puVar5);
          if (iVar26 == 0) {
            if (cRam0000000004f9b65c == '\0') {
              FUN_02132f7c(puVar6);
              cRam0000000004f9b65c = '\x01';
            }
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            fVar29 = fVar29 - fVar30;
            fVar36 = fVar36 - fVar41;
            fVar42 = fVar42 - fVar40;
          }
          else {
            fVar42 = fVar40;
            fVar36 = fVar41;
            fVar29 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                      (param_6,iVar26 + -1,*(undefined8 *)puVar5);
            if (cRam0000000004f9b65c == '\0') {
              FUN_02132f7c(puVar6);
              cRam0000000004f9b65c = '\x01';
            }
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            fVar29 = fVar30 - fVar29;
            fVar36 = fVar41 - fVar36;
            fVar42 = fVar40 - fVar42;
          }
          fVar36 = SQRT(fVar42 * fVar42 + fVar29 * fVar29 + fVar36 * fVar36);
          if (fVar36 <= fVar28) {
            if (cRam0000000004f9b65d == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65d = '\x01';
            }
            fVar29 = **(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
            fVar39 = (*(float **)(*(long *)PTR_DAT_04caa208 + 0xb8))[2];
          }
          else {
            fVar29 = fVar29 / fVar36;
            fVar39 = fVar42 / fVar36;
          }
          fVar31 = fVar29;
          fVar37 = fVar39;
          if (iVar26 < iVar25) {
            fVar31 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                      (param_6,iVar1,*(undefined8 *)puVar5);
            if (cRam0000000004f9b65c == '\0') {
              FUN_02132f7c(puVar6);
              cRam0000000004f9b65c = '\x01';
            }
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            fVar31 = fVar31 - fVar30;
            fVar36 = fVar36 - fVar40;
            fVar37 = SQRT(fVar36 * fVar36 + fVar31 * fVar31 + (fVar42 - fVar41) * (fVar42 - fVar41))
            ;
            if (fVar37 <= fVar28) {
              if (cRam0000000004f9b65d == '\0') {
                FUN_02132f7c(PTR_DAT_04caa208);
                cRam0000000004f9b65d = '\x01';
              }
              fVar31 = **(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
              fVar37 = (*(float **)(*(long *)PTR_DAT_04caa208 + 0xb8))[2];
            }
            else {
              fVar31 = fVar31 / fVar37;
              fVar37 = fVar36 / fVar37;
            }
          }
          if (cRam0000000004f9b65c == '\0') {
            FUN_02132f7c(puVar6);
            cRam0000000004f9b65c = '\x01';
          }
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          fVar29 = fVar29 + fVar31;
          fVar39 = fVar39 + fVar37;
          fVar42 = SQRT(fVar39 * fVar39 + fVar29 * fVar29);
          if (fVar42 <= fVar28) {
            if (cRam0000000004f9b65d == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65d = '\x01';
            }
            pfVar18 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
            fVar29 = *pfVar18;
            fVar36 = pfVar18[1];
            fVar39 = pfVar18[2];
          }
          else {
            fVar29 = fVar29 / fVar42;
            fVar36 = 0.0 / fVar42;
            fVar39 = fVar39 / fVar42;
          }
          bVar7 = fVar27 <= fVar29 * fVar29 + fVar36 * fVar36 + fVar39 * fVar39;
          fVar4 = fVar31;
          if (bVar7) {
            fVar4 = fVar29;
          }
          fVar29 = fVar37;
          fVar42 = 0.0;
          if (bVar7) {
            fVar29 = fVar39;
            fVar42 = fVar36;
          }
          fVar36 = 0.0;
          if (fVar37 * fVar37 + fVar31 * fVar31 <= 0.0) {
            fVar37 = fVar29;
            fVar31 = fVar4;
            fVar36 = fVar42;
          }
          fVar39 = 1.0;
          fVar42 = fVar29 * fVar37 + fVar4 * fVar31 + fVar42 * fVar36;
          fVar36 = fVar33;
          if (fVar33 <= fVar42) {
            fVar36 = fVar42;
          }
          fVar36 = 1.0 / fVar36;
          fVar31 = 2.5;
          if (fVar36 <= 2.5) {
            fVar31 = fVar36;
          }
          fVar42 = 1.0;
          if (1.0 <= fVar36) {
            fVar42 = fVar31;
          }
          if (iVar26 == 0) {
            fVar30 = fVar30 - fVar4 * 0.25 * *(float *)(param_4 + 0x50);
            fVar40 = fVar40 - fVar29 * 0.25 * *(float *)(param_4 + 0x50);
          }
          else {
            fVar36 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                      (param_6,iVar26 + -1,*(undefined8 *)puVar5);
            if (cRam0000000004f9b9df == '\0') {
              FUN_02132f7c(puVar6);
              cRam0000000004f9b9df = '\x01';
            }
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            fVar38 = fVar38 + fVar34 * SQRT((fVar39 - fVar40) * (fVar39 - fVar40) +
                                            (fVar36 - fVar30) * (fVar36 - fVar30) +
                                            (fVar31 - fVar41) * (fVar31 - fVar41));
          }
          if (lVar10 == 0) goto LAB_024c56cc;
          lVar20 = *(long *)(lVar10 + 0x10);
          lVar19 = *(long *)PTR_DAT_04caa170;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar20 == 0) goto LAB_024c56cc;
          uVar3 = *(uint *)(lVar10 + 0x18);
          fVar36 = param_1 * 0.0 * fVar42;
          fVar41 = param_1 * -fVar29 * fVar42;
          fVar42 = param_1 * fVar4 * fVar42;
          if (uVar3 < *(uint *)(lVar20 + 0x18)) {
            lVar20 = lVar20 + (long)(int)uVar3 * 0xc;
            *(uint *)(lVar10 + 0x18) = uVar3 + 1;
            *(float *)(lVar20 + 0x20) = fVar30 - fVar41;
            *(float *)(lVar20 + 0x24) = fVar35 - fVar36;
            *(float *)(lVar20 + 0x28) = fVar40 - fVar42;
          }
          else {
            System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                      (lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          if (lVar11 == 0) goto LAB_024c56cc;
          lVar19 = *(long *)(lVar11 + 0x10);
          lVar20 = *(long *)PTR_DAT_04caa178;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar19 == 0) goto LAB_024c56cc;
          uVar3 = *(uint *)(lVar11 + 0x18);
          if (uVar3 < *(uint *)(lVar19 + 0x18)) {
            lVar19 = lVar19 + (long)(int)uVar3 * 8;
            *(uint *)(lVar11 + 0x18) = uVar3 + 1;
            *(float *)(lVar19 + 0x20) = fVar38;
            *(undefined4 *)(lVar19 + 0x24) = 0;
          }
          else {
            System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                      (fVar38,0,lVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
          if (lVar12 == 0) goto LAB_024c56cc;
          lVar19 = *(long *)(lVar12 + 0x10);
          lVar20 = *(long *)PTR_DAT_04cbc360;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar19 == 0) goto LAB_024c56cc;
          uVar3 = *(uint *)(lVar12 + 0x18);
          if (uVar3 < *(uint *)(lVar19 + 0x18)) {
            auVar32 = NEON_fmov(0x3f800000,4);
            lVar19 = lVar19 + (long)(int)uVar3 * 0x10;
            *(uint *)(lVar12 + 0x18) = uVar3 + 1;
            *(long *)(lVar19 + 0x28) = auVar32._8_8_;
            *(long *)(lVar19 + 0x20) = auVar32._0_8_;
          }
          else {
            System_Collections_Generic_List_Color___AddWithResize_3a023f0
                      (ZEXT816(0x3f800000),0x3f800000,0x3f800000,0x3f800000,lVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
          lVar19 = *(long *)(lVar10 + 0x10);
          lVar20 = *(long *)PTR_DAT_04caa170;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar19 == 0) goto LAB_024c56cc;
          fVar36 = fVar36 + fVar35;
          uVar15 = (ulong)(uint)fVar36;
          uVar3 = *(uint *)(lVar10 + 0x18);
          fVar42 = fVar42 + fVar40;
          if (uVar3 < *(uint *)(lVar19 + 0x18)) {
            lVar19 = lVar19 + (long)(int)uVar3 * 0xc;
            *(uint *)(lVar10 + 0x18) = uVar3 + 1;
            *(float *)(lVar19 + 0x20) = fVar41 + fVar30;
            *(float *)(lVar19 + 0x24) = fVar36;
            *(float *)(lVar19 + 0x28) = fVar42;
          }
          else {
            System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                      (lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
          lVar19 = *(long *)(lVar11 + 0x10);
          lVar20 = *(long *)PTR_DAT_04caa178;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar19 == 0) goto LAB_024c56cc;
          uVar3 = *(uint *)(lVar11 + 0x18);
          if (uVar3 < *(uint *)(lVar19 + 0x18)) {
            lVar19 = lVar19 + (long)(int)uVar3 * 8;
            *(uint *)(lVar11 + 0x18) = uVar3 + 1;
            *(float *)(lVar19 + 0x20) = fVar38;
            *(undefined4 *)(lVar19 + 0x24) = 0x3f800000;
          }
          else {
            uVar15 = 0x3f800000;
            System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                      (lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
          lVar19 = *(long *)(lVar12 + 0x10);
          lVar20 = *(long *)PTR_DAT_04cbc360;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar19 == 0) goto LAB_024c56cc;
          uVar3 = *(uint *)(lVar12 + 0x18);
          if (uVar3 < *(uint *)(lVar19 + 0x18)) {
            auVar32 = NEON_fmov(0x3f800000,4);
            lVar19 = lVar19 + (long)(int)uVar3 * 0x10;
            *(uint *)(lVar12 + 0x18) = uVar3 + 1;
            *(long *)(lVar19 + 0x28) = auVar32._8_8_;
            *(long *)(lVar19 + 0x20) = auVar32._0_8_;
          }
          else {
            uVar15 = 0x3f800000;
            fVar42 = 1.0;
            System_Collections_Generic_List_Color___AddWithResize_3a023f0
                      (lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
          if (iVar26 != 0) {
            lVar19 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,6);
            if (lVar19 == 0) goto LAB_024c56cc;
            uVar3 = *(uint *)(lVar19 + 0x18);
            if ((uVar3 == 0) || (*(int *)(lVar19 + 0x20) = iVar24 + -3, uVar3 == 1))
            goto LAB_024c56d0;
            *(int *)(lVar19 + 0x24) = iVar24 + -2;
            if (uVar3 < 3) goto LAB_024c56d0;
            *(int *)(lVar19 + 0x28) = iVar24 + -1;
            if (((uVar3 == 3) || (*(int *)(lVar19 + 0x2c) = iVar24 + -2, uVar3 < 5)) ||
               (*(int *)(lVar19 + 0x30) = iVar24, uVar3 == 5)) goto LAB_024c56d0;
            *(int *)(lVar19 + 0x34) = iVar24 + -1;
            if (lVar13 == 0) goto LAB_024c56cc;
            System_Collections_Generic_List_int___AddRange_3a2c278
                      (lVar13,lVar19,*(undefined8 *)PTR_DAT_04cbc9f0);
          }
          iVar24 = iVar24 + 2;
          iVar26 = iVar1;
        } while (iVar22 != iVar1);
      }
      UnityEngine_Mesh__SetVertices_439178c(param_5,lVar10,0);
      UnityEngine_Mesh__SetUVs_4392594(param_5,0,lVar11,0);
      UnityEngine_Mesh__SetColors_439205c(param_5,lVar12,0);
      UnityEngine_Mesh__SetTriangles_4394c90(param_5,lVar13,0,0);
      UnityEngine_Mesh__RecalculateNormals_4395d8c(param_5,0);
      lVar10 = UnityEngine_Mesh__get_normals_4390ea8(param_5,0);
      if (lVar10 != 0) {
        if (*(long *)(lVar10 + 0x18) != 0) {
          lVar10 = UnityEngine_Mesh__get_normals_4390ea8(param_5,0);
          puVar6 = PTR_DAT_04cae230;
          puVar5 = PTR_DAT_04cad718;
          if (lVar10 == 0) goto LAB_024c56cc;
          if (*(int *)(lVar10 + 0x18) == 0) {
LAB_024c56d0:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          if (*(float *)(lVar10 + 0x24) < 0.0) {
            if (lVar13 == 0) goto LAB_024c56cc;
            if (0 < *(int *)(lVar13 + 0x18)) {
              iVar22 = 0;
              do {
                uVar8 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                  (lVar13,iVar22,*(undefined8 *)puVar6);
                uVar9 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                  (lVar13,iVar22 + 1,*(undefined8 *)puVar6);
                System_Collections_Generic_List_int___set_Item_3a2bdc8
                          (lVar13,iVar22,uVar9,*(undefined8 *)puVar5);
                System_Collections_Generic_List_int___set_Item_3a2bdc8
                          (lVar13,iVar22 + 1,uVar8,*(undefined8 *)puVar5);
                iVar22 = iVar22 + 3;
              } while (iVar22 < *(int *)(lVar13 + 0x18));
            }
            UnityEngine_Mesh__SetTriangles_4394c90(param_5,lVar13,0,0);
            UnityEngine_Mesh__RecalculateNormals_4395d8c(param_5,0);
          }
        }
        if ((bRam0000000004fa750d & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9af8);
          FUN_02132f7c(PTR_DAT_04cf6ed0);
          bRam0000000004fa750d = 1;
        }
        uVar15 = UnityEngine_Mesh__get_canAccess_438f430(param_5);
        puVar6 = PTR_DAT_04cf6ed0;
        puVar5 = PTR_DAT_04ca9af8;
        if ((uVar15 & 1) != 0) {
          if ((bRam0000000004fa74ac & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf6600);
            bRam0000000004fa74ac = 1;
          }
          if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar10 = *(long *)(param_5 + 0x10);
          if (lVar10 != 0) {
            if (pcRam0000000004fa77c8 == (code *)0x0) {
              pcRam0000000004fa77c8 = (code *)FUN_02132f40(&UNK_00e28b10);
            }
                    /* WARNING: Could not recover jumptable at 0x0448fdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa77c8)(lVar10,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_5,0);
        }
        uVar16 = UnityEngine_Object__get_name_43c71a4(param_5,0);
        uVar16 = System_String__Format_46c8eb8(*(undefined8 *)puVar6,uVar16,0);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar5);
        }
        puVar5 = PTR_DAT_04ca9af8;
        uVar17 = 0;
        if ((bRam0000000004fa6266 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9af8,0);
          FUN_02132f7c(PTR_DAT_04ce7050);
          bRam0000000004fa6266 = 1;
          uVar17 = extraout_x1;
        }
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          uVar17 = extraout_x1_00;
        }
        if (cRam0000000004f9d848 == '\0') {
          FUN_02132f7c(PTR_DAT_04ca9af8,uVar17);
          cRam0000000004f9d848 = '\x01';
        }
        lVar10 = *(long *)puVar5;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar10 = *(long *)puVar5;
        }
        plVar23 = *(long **)(*(long *)(lVar10 + 0xb8) + 8);
        if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar10 = *plVar23;
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 != 0) {
          piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_04ce7050) {
              puVar14 = (undefined8 *)(lVar10 + (long)(*piVar21 + 3) * 0x10 + 0x138);
              goto LAB_044616fc;
            }
            uVar15 = uVar15 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar15 != 0);
        }
        puVar14 = (undefined8 *)FUN_0216b7a4(plVar23,*(long *)PTR_DAT_04ce7050,3);
LAB_044616fc:
                    /* WARNING: Could not recover jumptable at 0x04461714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar14)(plVar23,0,uVar16,puVar14[1]);
        return;
      }
    }
  }
LAB_024c56cc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

