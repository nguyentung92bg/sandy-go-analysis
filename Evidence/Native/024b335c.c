/* IL2CPP: Dino.BusSand.View.GasHose$$Build
void Dino_BusSand_View_GasHose__Build (UnityEngine_Mesh_o* m, UnityEngine_Transform_o* space, UnityEngine_Vector3_o a, UnityEngine_Vector3_o aDir, UnityEngine_Vector3_o b, UnityEngine_Vector3_o bDir, float reach, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GasHose$$Build
   void Dino_BusSand_View_GasHose__Build (UnityEngine_Mesh_o* m, UnityEngine_Transform_o* space,
   UnityEngine_Vector3_o a, UnityEngine_Vector3_o aDir, UnityEngine_Vector3_o b,
   UnityEngine_Vector3_o bDir, float reach, const MethodInfo* method); */

void Dino_BusSand_View_GasHose__Build_23b335c
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               long param_7,long param_8)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar22;
  int iVar23;
  long lVar24;
  float *pfVar25;
  long lVar26;
  float *pfVar27;
  int iVar28;
  int *piVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  long *plVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 extraout_s0;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar57 [16];
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_a8;
  float fStack_a4;
  
  if ((bRam0000000004f9c978 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc910);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04caed88);
    FUN_02132f7c(PTR_DAT_04cabdb8);
    bRam0000000004f9c978 = 1;
  }
  if ((param_7 != 0) && (UnityEngine_Mesh__Clear_4395cc4(param_7,0), param_8 != 0)) {
    fVar38 = (float)UnityEngine_Transform__get_lossyScale_43d4cf0(param_8,0);
    fVar10 = _UNK_00e20a08;
    fVar56 = _UNK_00e20a08;
    if (_UNK_00e20a08 <= fVar38) {
      fVar56 = fVar38;
    }
    if (cRam0000000004f9b9df == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b9df = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b65c == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b65c = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar38 = SQRT(param_6 * param_6 + param_4 * param_4 + param_5 * param_5);
    if (fVar38 <= fVar10) {
      if (cRam0000000004f9b65d == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65d = '\x01';
      }
      fVar49 = **(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      fVar38 = (*(float **)(*(long *)PTR_DAT_04caa208 + 0xb8))[2];
    }
    else {
      fVar49 = param_4 / fVar38;
      fVar38 = param_6 / fVar38;
    }
    if (cRam0000000004f9b65c == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b65c = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar11 = PTR_DAT_04cabdb8;
    fVar52 = _UNK_00e2098c;
    fVar43 = SQRT((param_3 - in_stack_00000008) * (param_3 - in_stack_00000008) +
                  (param_1 - fStack0000000000000000) * (param_1 - fStack0000000000000000) +
                  (param_2 - fStack0000000000000004) * (param_2 - fStack0000000000000004));
    if ((SQRT(in_stack_00000018 * in_stack_00000018 +
              fStack0000000000000010 * fStack0000000000000010 +
              fStack0000000000000014 * fStack0000000000000014) <= fVar10) &&
       (cRam0000000004f9b65d == '\0')) {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65d = '\x01';
    }
    lVar14 = FUN_02133068(*(undefined8 *)puVar11,0xa8);
    puVar13 = PTR_DAT_04caed88;
    puVar12 = PTR_DAT_04caec70;
    if (lVar14 != 0) {
      fVar38 = param_3 + fVar43 * fVar38 * fVar52;
      fVar49 = param_1 + fVar43 * fVar49 * fVar52;
      fVar52 = param_2 + (fVar56 * _UNK_00e20840 - param_2) * 0.75;
      lVar15 = FUN_02133068(*(undefined8 *)puVar11,*(undefined4 *)(lVar14 + 0x18));
      lVar16 = FUN_02133068(*(undefined8 *)puVar13,*(undefined4 *)(lVar14 + 0x18));
      lVar17 = FUN_02133068(*(undefined8 *)puVar12,0x3c0);
      if (cRam0000000004f9bcf8 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9bcf8 = '\x01';
      }
      puVar11 = PTR_DAT_04caa208;
      fVar43 = fVar49 - param_1;
      fVar55 = fVar52 - param_2;
      fVar44 = fVar38 - param_3;
      fVar45 = fVar55 * fVar55 + fVar43 * fVar43 + fVar44 * fVar44;
      lVar24 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
      fVar53 = *(float *)(lVar24 + 0x20);
      fVar47 = *(float *)(lVar24 + 0x18);
      fVar50 = *(float *)(lVar24 + 0x1c);
      if (fVar45 <= _UNK_00e1fe00) {
        if (cRam0000000004f9c41d == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          lVar24 = *(long *)(*(long *)puVar11 + 0xb8);
          cRam0000000004f9c41d = '\x01';
        }
        fVar43 = *(float *)(lVar24 + 0x48);
        fVar55 = *(float *)(lVar24 + 0x4c);
        fVar44 = *(float *)(lVar24 + 0x50);
      }
      else {
        if (cRam0000000004f9b65c == '\0') {
          FUN_02132f7c(PTR_DAT_04caa200);
          cRam0000000004f9b65c = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar45 = SQRT(fVar45);
        if (fVar10 < fVar45) {
          fVar43 = fVar43 / fVar45;
          fVar55 = fVar55 / fVar45;
          fVar44 = fVar44 / fVar45;
        }
        else {
          if (cRam0000000004f9b65d == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65d = '\x01';
          }
          pfVar25 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
          fVar43 = *pfVar25;
          fVar55 = pfVar25[1];
          fVar44 = pfVar25[2];
        }
      }
      fVar9 = _UNK_00e20900;
      fVar45 = _UNK_00e201f4;
      fStack_d4 = fVar50 * fVar44 - fVar53 * fVar55;
      fStack_d8 = fVar53 * fVar43 - fVar47 * fVar44;
      fStack_dc = fVar47 * fVar55 - fVar50 * fVar43;
      if (fStack_dc * fStack_dc + fStack_d4 * fStack_d4 + fStack_d8 * fStack_d8 < _UNK_00e20900) {
        if (cRam0000000004f9c25f == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9c25f = '\x01';
        }
        lVar24 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
        fStack_d4 = *(float *)(lVar24 + 0x3c);
        fStack_d8 = *(float *)(lVar24 + 0x40);
        fStack_dc = *(float *)(lVar24 + 0x44);
      }
      fVar55 = _UNK_00e20b38;
      fVar43 = _UNK_00e2082c;
      lVar24 = 0;
      fVar56 = fVar56 * fVar45;
      lVar34 = 0;
      lVar37 = lVar14 + 0x20;
      pfVar25 = (float *)(lVar16 + 0x24);
      lVar36 = lVar15;
      do {
        if (*(int *)(*(long *)PTR_DAT_04cbc910 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar47 = param_3;
        fVar41 = param_2;
        fVar39 = (float)Dino_BusSand_View_GasHose__Bezier_23b40b0
                                  (param_1,param_2,param_3,fVar49,fVar52,fVar38);
        fVar50 = param_3;
        fVar42 = param_2;
        fVar40 = (float)Dino_BusSand_View_GasHose__BezierTangent_23b414c
                                  (param_1,param_2,param_3,fVar49,fVar52,fVar38);
        fVar53 = param_6;
        fVar45 = param_5;
        fVar44 = param_4;
        if (fVar55 <= fVar50 * fVar50 + fVar40 * fVar40 + fVar42 * fVar42) {
          fVar53 = fVar50;
          fVar45 = fVar42;
          fVar44 = fVar40;
        }
        if (cRam0000000004f9b65c == '\0') {
          FUN_02132f7c(PTR_DAT_04caa200);
          cRam0000000004f9b65c = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar50 = SQRT(fVar53 * fVar53 + fVar44 * fVar44 + fVar45 * fVar45);
        if (fVar50 <= fVar10) {
          if (cRam0000000004f9b65d == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65d = '\x01';
          }
          pfVar27 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
          fVar44 = *pfVar27;
          fVar45 = pfVar27[1];
          fVar53 = pfVar27[2];
        }
        else {
          fVar44 = fVar44 / fVar50;
          fVar45 = fVar45 / fVar50;
          fVar53 = fVar53 / fVar50;
        }
        if (cRam0000000004f9bcf8 == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9bcf8 = '\x01';
        }
        lVar26 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
        fVar46 = fVar53 * *(float *)(lVar26 + 0x1c) - fVar45 * *(float *)(lVar26 + 0x20);
        fVar48 = fVar44 * *(float *)(lVar26 + 0x20) - fVar53 * *(float *)(lVar26 + 0x18);
        fVar51 = fVar45 * *(float *)(lVar26 + 0x18) - fVar44 * *(float *)(lVar26 + 0x1c);
        fVar54 = fVar51 * fVar51 + fVar46 * fVar46 + fVar48 * fVar48;
        fVar50 = fStack_d4;
        fVar42 = fStack_d8;
        fVar40 = fStack_dc;
        if (fVar9 < fVar54) {
          if (cRam0000000004f9b65c == '\0') {
            FUN_02132f7c(PTR_DAT_04caa200);
            cRam0000000004f9b65c = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          fVar54 = SQRT(fVar54);
          if (fVar54 <= fVar10) {
            if (cRam0000000004f9b65d == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65d = '\x01';
            }
            pfVar27 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
            fVar50 = *pfVar27;
            fVar42 = pfVar27[1];
            fVar40 = pfVar27[2];
          }
          else {
            fVar50 = fVar46 / fVar54;
            fVar42 = fVar48 / fVar54;
            fVar40 = fVar51 / fVar54;
          }
        }
        fVar54 = fStack_d4 * fVar50;
        fVar46 = fStack_d8 * fVar42;
        fVar48 = fStack_dc * fVar40;
        fStack_dc = -fVar40;
        fStack_d8 = -fVar42;
        fStack_d4 = -fVar50;
        if (0.0 <= fVar48 + fVar46 + fVar54) {
          fStack_dc = fVar40;
          fStack_d8 = fVar42;
          fStack_d4 = fVar50;
        }
        if (cRam0000000004f9b65c == '\0') {
          FUN_02132f7c(PTR_DAT_04caa200);
          cRam0000000004f9b65c = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar50 = fVar45 * fStack_dc - fVar53 * fStack_d8;
        fVar53 = fVar53 * fStack_d4 - fVar44 * fStack_dc;
        fVar45 = fVar44 * fStack_d8 - fVar45 * fStack_d4;
        fVar44 = SQRT(fVar45 * fVar45 + fVar50 * fVar50 + fVar53 * fVar53);
        if (fVar44 <= fVar10) {
          if (cRam0000000004f9b65d == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65d = '\x01';
          }
          pfVar27 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
          fVar50 = *pfVar27;
          fVar53 = pfVar27[1];
          fVar45 = pfVar27[2];
        }
        else {
          fVar50 = fVar50 / fVar44;
          fVar53 = fVar53 / fVar44;
          fVar45 = fVar45 / fVar44;
        }
        lVar26 = 0;
        lVar35 = 0;
        pfVar27 = pfVar25;
        do {
          fVar46 = (float)(int)lVar35 / 8.0;
          fVar44 = fVar46 * fVar43;
          sincosf(fVar44 + fVar44,&fStack_a4,&fStack_a8);
          uVar21 = lVar24 + lVar35;
          fVar42 = fStack_d8 * fStack_a8 + fVar53 * fStack_a4;
          fVar48 = fStack_d4 * fStack_a8 + fVar50 * fStack_a4;
          fVar40 = fStack_dc * fStack_a8 + fVar45 * fStack_a4;
          fVar44 = fVar41 + fVar56 * fVar42;
          fVar54 = fVar47 + fVar56 * fVar40;
          uVar18 = UnityEngine_Transform__InverseTransformPoint_43d3ffc
                             (fVar39 + fVar56 * fVar48,param_8,0);
          auVar57._8_8_ = extraout_x1;
          auVar57._0_8_ = uVar18;
          if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_024b40a8;
          puVar3 = (undefined4 *)(lVar37 + lVar26);
          *puVar3 = extraout_s0;
          puVar3[1] = fVar44;
          puVar3[2] = fVar54;
          fVar44 = (float)UnityEngine_Transform__InverseTransformDirection_43d311c(fVar48,param_8,0)
          ;
          uVar18 = extraout_x1_00;
          if (cRam0000000004f9b65c == '\0') {
            FUN_02132f7c(PTR_DAT_04caa200);
            cRam0000000004f9b65c = '\x01';
            uVar18 = extraout_x1_01;
          }
          auVar57._8_8_ = uVar18;
          auVar57._0_8_ = *(long *)PTR_DAT_04caa200;
          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
            auVar57 = thunk_FUN_0218fdac();
          }
          fVar54 = SQRT(fVar40 * fVar40 + fVar44 * fVar44 + fVar42 * fVar42);
          if (fVar54 <= fVar10) {
            if (cRam0000000004f9b65d == '\0') {
              auVar57 = FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65d = '\x01';
            }
            uVar18 = **(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
            fVar40 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
          }
          else {
            fVar40 = fVar40 / fVar54;
            uVar18 = CONCAT44(fVar42 / fVar54,fVar44 / fVar54);
          }
          uVar19 = auVar57._0_8_;
          if (lVar15 == 0) goto LAB_024b40ac;
          if (*(uint *)(lVar15 + 0x18) <= uVar21) goto LAB_024b40a8;
          *(undefined8 *)(lVar36 + lVar26 + 0x20) = uVar18;
          *(float *)(lVar36 + lVar26 + 0x28) = fVar40;
          if (lVar16 == 0) goto LAB_024b40ac;
          if (*(uint *)(lVar16 + 0x18) <= uVar21) goto LAB_024b40a8;
          lVar26 = lVar26 + 0xc;
          lVar35 = lVar35 + 1;
          pfVar27[-1] = fVar46;
          *pfVar27 = (float)(int)lVar34 / 20.0;
          pfVar27 = pfVar27 + 2;
        } while (lVar26 != 0x60);
        lVar24 = lVar24 + 8;
        lVar37 = lVar37 + 0x60;
        lVar34 = lVar34 + 1;
        pfVar25 = pfVar25 + 0x10;
        lVar36 = lVar36 + 0x60;
      } while (lVar34 != 0x15);
      if (lVar17 != 0) {
        uVar5 = *(uint *)(lVar17 + 0x18);
        iVar23 = 0;
        iVar28 = 0;
        iVar30 = 0;
        do {
          iVar31 = 0;
          iVar32 = 0;
          do {
            auVar57._8_8_ = lVar14;
            auVar57._0_8_ = uVar19;
            uVar1 = iVar28 + iVar31;
            if (uVar5 <= uVar1) {
LAB_024b40a8:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c(auVar57._0_8_,auVar57._8_8_);
            }
            lVar24 = lVar17 + (long)(int)uVar1 * 4;
            auVar57._0_8_ = lVar24;
            iVar2 = iVar23 + iVar32;
            *(int *)(lVar24 + 0x20) = iVar2;
            if (uVar5 <= uVar1 + 1) goto LAB_024b40a8;
            auVar57._4_4_ = 0;
            auVar57._0_4_ = uVar1 + 2;
            *(int *)(lVar17 + (long)(int)(uVar1 + 1) * 4 + 0x20) = iVar2 + 8;
            if (uVar5 <= uVar1 + 2) goto LAB_024b40a8;
            uVar4 = iVar32 + 1U & 7;
            uVar6 = uVar4 | iVar30 * 8 + 8U;
            uVar19 = CONCAT44(0,uVar6);
            auVar8._8_8_ = lVar14;
            auVar8._0_8_ = uVar19;
            auVar7._8_8_ = lVar14;
            auVar7._0_8_ = uVar19;
            auVar57._0_8_ = uVar19;
            *(uint *)(lVar17 + (long)(iVar28 + iVar31 + 2) * 4 + 0x20) = uVar6;
            if ((uVar5 <= uVar1 + 3) ||
               (*(int *)(lVar17 + (long)(iVar28 + iVar31 + 3) * 4 + 0x20) = iVar2, auVar57 = auVar7,
               uVar5 <= uVar1 + 4)) goto LAB_024b40a8;
            iVar2 = iVar28 + iVar31;
            *(uint *)(lVar17 + (long)(iVar2 + 4) * 4 + 0x20) = uVar6;
            auVar57 = auVar8;
            if (uVar5 <= uVar1 + 5) goto LAB_024b40a8;
            iVar31 = iVar31 + 6;
            iVar32 = iVar32 + 1;
            *(uint *)(lVar17 + (long)(iVar2 + 5) * 4 + 0x20) = uVar4 | iVar30 * 8;
          } while (iVar31 != 0x30);
          iVar30 = iVar30 + 1;
          iVar28 = iVar28 + 0x30;
          iVar23 = iVar23 + 8;
        } while (iVar30 != 0x14);
        UnityEngine_Mesh__set_vertices_4390e48(param_7,lVar14,0);
        UnityEngine_Mesh__set_normals_4390ef4(param_7,lVar15,0);
        UnityEngine_Mesh__set_uv_439104c(param_7,lVar16,0);
        UnityEngine_Mesh__set_triangles_4393ee8(param_7,lVar17,0);
        if ((bRam0000000004fa750d & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9af8);
          FUN_02132f7c(PTR_DAT_04cf6ed0);
          bRam0000000004fa750d = 1;
        }
        uVar21 = UnityEngine_Mesh__get_canAccess_438f430(param_7);
        puVar12 = PTR_DAT_04cf6ed0;
        puVar11 = PTR_DAT_04ca9af8;
        if ((uVar21 & 1) != 0) {
          if ((bRam0000000004fa74ac & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf6600);
            bRam0000000004fa74ac = 1;
          }
          if (param_7 != 0) {
            lVar14 = *(long *)(param_7 + 0x10);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_7,0);
            }
            if (pcRam0000000004fa77c8 == (code *)0x0) {
              pcRam0000000004fa77c8 = (code *)FUN_02132f40(&UNK_00e28b10);
            }
                    /* WARNING: Could not recover jumptable at 0x0448fdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa77c8)(lVar14,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar18 = UnityEngine_Object__get_name_43c71a4(param_7,0);
        uVar18 = System_String__Format_46c8eb8(*(undefined8 *)puVar12,uVar18,0);
        if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar11);
        }
        puVar11 = PTR_DAT_04ca9af8;
        uVar22 = 0;
        if ((bRam0000000004fa6266 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9af8,0);
          FUN_02132f7c(PTR_DAT_04ce7050);
          bRam0000000004fa6266 = 1;
          uVar22 = extraout_x1_02;
        }
        if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          uVar22 = extraout_x1_03;
        }
        if (cRam0000000004f9d848 == '\0') {
          FUN_02132f7c(PTR_DAT_04ca9af8,uVar22);
          cRam0000000004f9d848 = '\x01';
        }
        lVar14 = *(long *)puVar11;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar14 = *(long *)puVar11;
        }
        plVar33 = *(long **)(*(long *)(lVar14 + 0xb8) + 8);
        if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar14 = *plVar33;
        uVar21 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar21 != 0) {
          piVar29 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == *(long *)PTR_DAT_04ce7050) {
              puVar20 = (undefined8 *)(lVar14 + (long)(*piVar29 + 3) * 0x10 + 0x138);
              goto LAB_044616fc;
            }
            uVar21 = uVar21 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar21 != 0);
        }
        puVar20 = (undefined8 *)FUN_0216b7a4(plVar33,*(long *)PTR_DAT_04ce7050,3);
LAB_044616fc:
                    /* WARNING: Could not recover jumptable at 0x04461714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar20)(plVar33,0,uVar18,puVar20[1]);
        return;
      }
    }
  }
LAB_024b40ac:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

