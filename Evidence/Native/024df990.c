/* IL2CPP: Dino.BusSand.View.PropKit.MeshBuilder$$Cylinder
void Dino_BusSand_View_PropKit_MeshBuilder__Cylinder (Dino_BusSand_View_PropKit_MeshBuilder_o* __this, UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, float r0, float r1, int32_t seg, UnityEngine_Color_o col, float emit, float spec, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PropKit.MeshBuilder$$Cylinder
   void Dino_BusSand_View_PropKit_MeshBuilder__Cylinder (Dino_BusSand_View_PropKit_MeshBuilder_o*
   __this, UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, float r0, float r1, int32_t seg,
   UnityEngine_Color_o col, float emit, float spec, const MethodInfo* method); */

void Dino_BusSand_View_PropKit_MeshBuilder__Cylinder_23df990
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,long param_9,int param_10)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
  long lVar12;
  float *pfVar13;
  int iVar14;
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
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fStack_168;
  float fStack_ec;
  float fStack_d8;
  float fStack_d4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  
  if ((bRam0000000004f9ca5f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa160);
    bRam0000000004f9ca5f = 1;
  }
  if (cRam0000000004f9b65c == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b65c = '\x01';
  }
  puVar5 = PTR_DAT_04caa200;
  fVar34 = param_5 - param_2;
  fStack_168 = param_4 - param_1;
  fVar35 = param_6 - param_3;
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar6 = PTR_DAT_04caa208;
  fVar3 = _UNK_00e20a08;
  fVar32 = SQRT(fVar35 * fVar35 + fStack_168 * fStack_168 + fVar34 * fVar34);
  if (fVar32 <= _UNK_00e20a08) {
    if (cRam0000000004f9b65d == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65d = '\x01';
    }
    pfVar8 = *(float **)(*(long *)puVar6 + 0xb8);
    fStack_168 = *pfVar8;
    fVar34 = pfVar8[1];
    fVar35 = pfVar8[2];
  }
  else {
    fStack_168 = fStack_168 / fVar32;
    fVar35 = fVar35 / fVar32;
    fVar34 = fVar34 / fVar32;
  }
  if (_UNK_00e1fea8 <= ABS(fVar34)) {
    if (cRam0000000004f9c25f == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9c25f = '\x01';
    }
    lVar12 = *(long *)(*(long *)puVar6 + 0xb8);
    pfVar8 = (float *)(lVar12 + 0x3c);
    pfVar10 = (float *)(lVar12 + 0x40);
    pfVar13 = (float *)(lVar12 + 0x44);
  }
  else {
    if (cRam0000000004f9bcf8 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9bcf8 = '\x01';
    }
    lVar12 = *(long *)(*(long *)puVar6 + 0xb8);
    pfVar8 = (float *)(lVar12 + 0x18);
    pfVar10 = (float *)(lVar12 + 0x1c);
    pfVar13 = (float *)(lVar12 + 0x20);
  }
  fVar19 = *pfVar10;
  fVar22 = *pfVar8;
  fVar15 = *pfVar13;
  if (cRam0000000004f9b65c == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b65c = '\x01';
  }
  fVar33 = fVar34 * fVar15 - fVar35 * fVar19;
  fStack_ec = fVar35 * fVar22 - fStack_168 * fVar15;
  fVar15 = fStack_168 * fVar19 - fVar34 * fVar22;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar19 = SQRT(fVar15 * fVar15 + fVar33 * fVar33 + fStack_ec * fStack_ec);
  if (fVar19 <= fVar3) {
    if (cRam0000000004f9b65d == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65d = '\x01';
    }
    pfVar8 = *(float **)(*(long *)puVar6 + 0xb8);
    fVar33 = *pfVar8;
    fStack_ec = pfVar8[1];
    fVar15 = pfVar8[2];
  }
  else {
    fStack_ec = fStack_ec / fVar19;
    fVar33 = fVar33 / fVar19;
    fVar15 = fVar15 / fVar19;
  }
  if (cRam0000000004f9c959 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9c959 = '\x01';
  }
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04caa160;
  fVar22 = _UNK_00e20948;
  fVar19 = _UNK_00e2082c;
  if (0 < param_10) {
    fVar16 = _UNK_00e20948;
    if (_UNK_00e20948 <= fVar32) {
      fVar16 = fVar32;
    }
    iVar14 = 0;
    fVar16 = (param_7 - param_8) / fVar16;
    fVar36 = fVar34 * fVar15 - fVar35 * fStack_ec;
    fVar23 = fVar35 * fVar33 - fStack_168 * fVar15;
    fVar24 = fStack_168 * fStack_ec - fVar34 * fVar33;
    fVar20 = -fStack_168;
    fVar32 = -fVar34;
    fVar17 = -fVar35;
    do {
      fVar18 = (float)iVar14;
      iVar14 = iVar14 + 1;
      fVar18 = fVar18 * fVar19;
      fVar21 = (float)iVar14 * fVar19;
      sincosf((fVar18 + fVar18) / (float)param_10,&fStack_a4,&fStack_a8);
      fVar28 = fStack_a4;
      fVar26 = fStack_a8;
      sincosf((fVar21 + fVar21) / (float)param_10,&fStack_ac,&fStack_b0);
      fVar21 = fStack_ac;
      fVar18 = fStack_b0;
      if (cRam0000000004f9b65c == '\0') {
        FUN_02132f7c(puVar5);
        cRam0000000004f9b65c = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar37 = fVar33 * fVar26 + fVar36 * fVar28;
      fVar25 = fStack_ec * fVar26 + fVar23 * fVar28;
      fVar28 = fVar15 * fVar26 + fVar24 * fVar28;
      fStack_d4 = fVar16 * fStack_168 + fVar37;
      fStack_d8 = fVar16 * fVar34 + fVar25;
      fVar26 = fVar16 * fVar35 + fVar28;
      fVar29 = SQRT(fVar26 * fVar26 + fStack_d4 * fStack_d4 + fStack_d8 * fStack_d8);
      if (fVar29 <= fVar3) {
        if (cRam0000000004f9b65d == '\0') {
          FUN_02132f7c(puVar6);
          cRam0000000004f9b65d = '\x01';
        }
        pfVar8 = *(float **)(*(long *)puVar6 + 0xb8);
        fStack_d4 = *pfVar8;
        fStack_d8 = pfVar8[1];
        fVar26 = pfVar8[2];
      }
      else {
        fStack_d4 = fStack_d4 / fVar29;
        fStack_d8 = fStack_d8 / fVar29;
        fVar26 = fVar26 / fVar29;
      }
      if (cRam0000000004f9b65c == '\0') {
        FUN_02132f7c(puVar5);
        cRam0000000004f9b65c = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar29 = fVar33 * fVar18 + fVar36 * fVar21;
      fVar30 = fStack_ec * fVar18 + fVar23 * fVar21;
      fVar31 = fVar15 * fVar18 + fVar24 * fVar21;
      fVar18 = fVar16 * fStack_168 + fVar29;
      fVar21 = fVar16 * fVar34 + fVar30;
      fVar27 = fVar16 * fVar35 + fVar31;
      if ((SQRT(fVar27 * fVar27 + fVar18 * fVar18 + fVar21 * fVar21) <= fVar3) &&
         (cRam0000000004f9b65d == '\0')) {
        FUN_02132f7c(puVar6);
        cRam0000000004f9b65d = '\x01';
      }
      iVar7 = Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0(param_9);
      Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0(param_9);
      Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0(param_9);
      fVar18 = param_4 + fVar37 * param_8;
      fVar21 = param_5 + fVar25 * param_8;
      fVar27 = param_6 + fVar28 * param_8;
      Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0
                (fVar18,fVar21,fVar27,fStack_d4,fStack_d8,fVar26,param_9);
      lVar12 = *(long *)(param_9 + 0x30);
      if (lVar12 == 0) {
LAB_024e06a0:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar9 = *(long *)(lVar12 + 0x10);
      lVar11 = *(long *)puVar4;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_024e06a0;
      uVar2 = *(uint *)(lVar12 + 0x18);
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar2 + 1;
        *(int *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = iVar7;
      }
      else {
        System_Collections_Generic_List_int___AddWithResize_3a2c06c
                  (lVar12,iVar7,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        lVar12 = *(long *)(param_9 + 0x30);
        if (lVar12 == 0) goto LAB_024e06a0;
      }
      lVar9 = *(long *)(lVar12 + 0x10);
      lVar11 = *(long *)puVar4;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_024e06a0;
      uVar2 = *(uint *)(lVar12 + 0x18);
      iVar1 = iVar7 + 2;
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar2 + 1;
        *(int *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = iVar1;
      }
      else {
        System_Collections_Generic_List_int___AddWithResize_3a2c06c
                  (lVar12,iVar1,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        lVar12 = *(long *)(param_9 + 0x30);
        if (lVar12 == 0) goto LAB_024e06a0;
      }
      lVar9 = *(long *)(lVar12 + 0x10);
      lVar11 = *(long *)puVar4;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_024e06a0;
      uVar2 = *(uint *)(lVar12 + 0x18);
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar2 + 1;
        *(int *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = iVar7 + 1;
      }
      else {
        System_Collections_Generic_List_int___AddWithResize_3a2c06c
                  (lVar12,iVar7 + 1,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        lVar12 = *(long *)(param_9 + 0x30);
        if (lVar12 == 0) goto LAB_024e06a0;
      }
      lVar9 = *(long *)(lVar12 + 0x10);
      lVar11 = *(long *)puVar4;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_024e06a0;
      uVar2 = *(uint *)(lVar12 + 0x18);
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar2 + 1;
        *(int *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = iVar7;
      }
      else {
        System_Collections_Generic_List_int___AddWithResize_3a2c06c
                  (lVar12,iVar7,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        lVar12 = *(long *)(param_9 + 0x30);
        if (lVar12 == 0) goto LAB_024e06a0;
      }
      lVar9 = *(long *)(lVar12 + 0x10);
      lVar11 = *(long *)puVar4;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_024e06a0;
      uVar2 = *(uint *)(lVar12 + 0x18);
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar2 + 1;
        *(int *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = iVar7 + 3;
      }
      else {
        System_Collections_Generic_List_int___AddWithResize_3a2c06c
                  (lVar12,iVar7 + 3,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        lVar12 = *(long *)(param_9 + 0x30);
        if (lVar12 == 0) goto LAB_024e06a0;
      }
      lVar9 = *(long *)(lVar12 + 0x10);
      lVar11 = *(long *)puVar4;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_024e06a0;
      uVar2 = *(uint *)(lVar12 + 0x18);
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar2 + 1;
        *(int *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = iVar1;
      }
      else {
        System_Collections_Generic_List_int___AddWithResize_3a2c06c
                  (lVar12,iVar1,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      if (fVar22 < param_8) {
        iVar7 = Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0
                          (param_4,param_5,param_6,fStack_168,fVar34,fVar35,param_9);
        Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0
                  (fVar18,fVar21,fVar27,fStack_168,fVar34,fVar35,param_9);
        Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0
                  (param_4 + fVar29 * param_8,param_5 + fVar30 * param_8,param_6 + fVar31 * param_8,
                   fStack_168,fVar34,fVar35,param_9);
        lVar12 = *(long *)(param_9 + 0x30);
        if (lVar12 == 0) goto LAB_024e06a0;
        lVar9 = *(long *)(lVar12 + 0x10);
        lVar11 = *(long *)puVar4;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_024e06a0;
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          *(int *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = iVar7;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar12,iVar7,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70)
                    );
          lVar12 = *(long *)(param_9 + 0x30);
          if (lVar12 == 0) goto LAB_024e06a0;
        }
        lVar9 = *(long *)(lVar12 + 0x10);
        lVar11 = *(long *)puVar4;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_024e06a0;
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          *(int *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = iVar7 + 1;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar12,iVar7 + 1,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          lVar12 = *(long *)(param_9 + 0x30);
          if (lVar12 == 0) goto LAB_024e06a0;
        }
        lVar9 = *(long *)(lVar12 + 0x10);
        lVar11 = *(long *)puVar4;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_024e06a0;
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          *(int *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = iVar7 + 2;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar12,iVar7 + 2,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      }
      if (fVar22 < param_7) {
        iVar7 = Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0
                          (param_1,param_2,param_3,fVar20,fVar32,fVar17,param_9);
        Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0
                  (param_1 + fVar29 * param_7,param_2 + fVar30 * param_7,param_3 + fVar31 * param_7,
                   fVar20,fVar32,fVar17,param_9);
        Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0
                  (param_1 + fVar37 * param_7,param_2 + fVar25 * param_7,param_3 + fVar28 * param_7,
                   fVar20,fVar32,fVar17,param_9);
        lVar12 = *(long *)(param_9 + 0x30);
        if (lVar12 == 0) goto LAB_024e06a0;
        lVar9 = *(long *)(lVar12 + 0x10);
        lVar11 = *(long *)puVar4;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_024e06a0;
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          *(int *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = iVar7;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar12,iVar7,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70)
                    );
          lVar12 = *(long *)(param_9 + 0x30);
          if (lVar12 == 0) goto LAB_024e06a0;
        }
        lVar9 = *(long *)(lVar12 + 0x10);
        lVar11 = *(long *)puVar4;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_024e06a0;
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          *(int *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = iVar7 + 1;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar12,iVar7 + 1,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          lVar12 = *(long *)(param_9 + 0x30);
          if (lVar12 == 0) goto LAB_024e06a0;
        }
        lVar9 = *(long *)(lVar12 + 0x10);
        lVar11 = *(long *)puVar4;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_024e06a0;
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          *(int *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = iVar7 + 2;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar12,iVar7 + 2,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while (param_10 != iVar14);
  }
  return;
}

