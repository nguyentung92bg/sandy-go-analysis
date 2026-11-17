/* IL2CPP: Dino.BusSand.View.ChainRig$$OnEscaped
void Dino_BusSand_View_ChainRig__OnEscaped (Dino_BusSand_View_ChainRig_o* __this, int32_t truckId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.ChainRig$$OnEscaped
   void Dino_BusSand_View_ChainRig__OnEscaped (Dino_BusSand_View_ChainRig_o* __this, int32_t
   truckId, const MethodInfo* method); */

void Dino_BusSand_View_ChainRig__OnEscaped_2391a0c
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,long param_4,
               int param_5)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uStack_100;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  if ((bRam0000000004f9c8ce & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc090);
    FUN_02132f7c(PTR_DAT_04cbc098);
    FUN_02132f7c(PTR_DAT_04cbc0a0);
    FUN_02132f7c(PTR_DAT_04caea20);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04cb7338);
    FUN_02132f7c(PTR_DAT_04cb43e8);
    FUN_02132f7c(PTR_DAT_04cbc0b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c8ce = 1;
  }
  puVar10 = PTR_DAT_04cbc098;
  puVar9 = PTR_DAT_04caea20;
  puVar7 = PTR_DAT_04caa170;
  puVar6 = PTR_DAT_04ca9ae8;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  uStack_c8 = 0;
  if (*(long *)(param_4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_e0,*(long *)(param_4 + 0x30),*(undefined8 *)PTR_DAT_04cbc0b8);
  puVar8 = PTR_DAT_04caa200;
  fVar5 = _UNK_00e20a08;
  fVar4 = _UNK_00e20510;
  fVar3 = _UNK_00e20410;
  uStack_b8 = puStack_d8;
  uStack_c0 = uStack_e0;
  lStack_b0 = lStack_d0;
  uStack_e0 = 0;
  puStack_d8 = &uStack_c0;
  while( true ) {
    do {
      do {
        do {
          uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_c0,*(undefined8 *)puVar10);
          lVar11 = lStack_b0;
          if ((uVar12 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_c0,*(undefined8 *)PTR_DAT_04cbc090);
            return;
          }
          if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        } while ((*(char *)(lStack_b0 + 0x34) != '\0') ||
                ((*(int *)(lStack_b0 + 0x14) != param_5 && (*(int *)(lStack_b0 + 0x18) != param_5)))
                );
        lVar13 = *(long *)(param_4 + 0x20);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar13 = (**(code **)(lVar13 + 0x18))
                           (*(undefined8 *)(lVar13 + 0x40),*(int *)(lStack_b0 + 0x14),
                            *(undefined8 *)(lVar13 + 0x28));
        lVar14 = *(long *)(param_4 + 0x20);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar14 = (**(code **)(lVar14 + 0x18))
                           (*(undefined8 *)(lVar14 + 0x40),*(undefined4 *)(lVar11 + 0x18),
                            *(undefined8 *)(lVar14 + 0x28));
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar12 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
      } while ((uVar12 & 1) != 0);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar12 = UnityEngine_Object__op_Equality_43c6f30(lVar14,0,0);
      fVar28 = (float)param_3;
    } while ((uVar12 & 1) != 0);
    *(undefined2 *)(lVar11 + 0x34) = 1;
    Dino_BusSand_View_ChainRig__Lengths_2391808
              (param_4,lVar13,lVar14,(long)&uStack_c8 + 4,&uStack_c8);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(long *)(lVar13 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar17 = (float)UnityEngine_Transform__get_forward_43d17f4(*(long *)(lVar13 + 0x38),0);
    fVar19 = fVar28;
    if (cRam0000000004f9b65c == '\0') {
      FUN_02132f7c(puVar8);
      cRam0000000004f9b65c = '\x01';
    }
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar18 = SQRT(fVar28 * fVar28 + fVar17 * fVar17);
    if (fVar18 <= fVar5) {
      fVar18 = fVar19;
      if (cRam0000000004f9b65d == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65d = '\x01';
      }
      uStack_100 = **(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      fVar28 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
    }
    else {
      fVar28 = fVar28 / fVar18;
      uStack_100 = CONCAT44(0.0 / fVar18,fVar17 / fVar18);
    }
    if (*(long *)(lVar13 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar19 = (float)UnityEngine_Transform__get_position_43d0e48(*(long *)(lVar13 + 0x38),0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(long *)(lVar14 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar17 = uStack_c8._4_4_;
    fVar25 = fVar18;
    fVar20 = (float)UnityEngine_Transform__get_position_43d0e48(*(long *)(lVar14 + 0x38),0);
    fVar26 = fVar25;
    if (cRam0000000004f9c959 == '\0') {
      FUN_02132f7c(puVar8);
      cRam0000000004f9c959 = '\x01';
    }
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar25 = (fVar18 - fVar28 * fVar17) - fVar25;
    fVar20 = (fVar19 - fVar17 * (float)uStack_100) - fVar20;
    fVar17 = SQRT(fVar20 * fVar20 + fVar25 * fVar25);
    fVar19 = (float)uStack_c8;
    if ((float)uStack_c8 <= fVar17) {
      fVar19 = fVar17;
    }
    fVar17 = (float)uStack_c8 * fVar4;
    *(float *)(lVar11 + 0x60) = fVar19;
    *(bool *)(lVar11 + 0x5c) = fVar19 <= fVar17;
    if (*(long *)(lVar14 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar21 = UnityEngine_Transform__get_position_43d0e48(*(long *)(lVar14 + 0x38),0);
    *(undefined4 *)(lVar11 + 0x38) = uVar21;
    *(float *)(lVar11 + 0x3c) = fVar17;
    *(float *)(lVar11 + 0x40) = fVar26;
    if (*(long *)(lVar14 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Transform__get_forward_43d17f4(*(long *)(lVar14 + 0x38),0);
    fVar19 = fVar26;
    fVar17 = (float)atan2f();
    *(float *)(lVar11 + 0x44) = fVar17 * fVar3;
    if (*(long *)(lVar13 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar21 = UnityEngine_Transform__get_position_43d0e48(*(long *)(lVar13 + 0x38),0);
    *(undefined4 *)(lVar11 + 0x48) = uVar21;
    *(float *)(lVar11 + 0x4c) = fVar19;
    *(float *)(lVar11 + 0x50) = fVar26;
    if (*(long *)(lVar14 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar22 = UnityEngine_Transform__get_position_43d0e48(*(long *)(lVar14 + 0x38),0);
    if (*(long *)(lVar13 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar19 = fVar26;
    fVar17 = (float)UnityEngine_Transform__get_position_43d0e48(*(long *)(lVar13 + 0x38),0);
    uVar23 = Dino_BusSand_View_VehicleView__get_LengthWorld_23fefbc(lVar14,0);
    fVar18 = (float)atan2f(uStack_100,fVar28);
    lVar13 = *(long *)(lVar11 + 0x68);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar1 = *(int *)(lVar13 + 0x1c);
    *(undefined4 *)(lVar13 + 0x18) = 0;
    *(int *)(lVar13 + 0x1c) = iVar1 + 1;
    lVar15 = *(long *)(lVar11 + 0x70);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined4 *)(lVar15 + 0x18) = 0;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    lVar15 = *(long *)(lVar11 + 0x78);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined4 *)(lVar15 + 0x18) = 0;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    lVar15 = *(long *)puVar7;
    lVar16 = *(long *)(lVar13 + 0x10);
    *(int *)(lVar13 + 0x1c) = iVar1 + 2;
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar20 = (float)uVar23;
    fVar27 = (float)uVar22;
    fVar25 = 0.0 - (float)((ulong)uStack_100 >> 0x20) * fVar20;
    uVar24 = CONCAT44(fVar25,fVar27 - (float)uStack_100 * fVar20);
    fVar28 = fVar26 - fVar28 * fVar20;
    param_3 = (ulong)(uint)fVar28;
    if (*(int *)(lVar16 + 0x18) == 0) {
      System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                (uVar24,fVar25,lVar13,
                 *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
    else {
      *(undefined4 *)(lVar13 + 0x18) = 1;
      *(undefined8 *)(lVar16 + 0x20) = uVar24;
      *(float *)(lVar16 + 0x28) = fVar28;
    }
    lVar13 = *(long *)(lVar11 + 0x70);
    if (lVar13 == 0) break;
    lVar15 = *(long *)(lVar13 + 0x10);
    lVar16 = *(long *)puVar9;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar15 == 0) break;
    uVar2 = *(uint *)(lVar13 + 0x18);
    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar15 + (long)(int)uVar2 * 4 + 0x20) = 0;
    }
    else {
      System_Collections_Generic_List_float___AddWithResize_3ac28c0
                (0,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
    lVar13 = *(long *)(lVar11 + 0x78);
    if (lVar13 == 0) {
LAB_02492280:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar15 = *(long *)(lVar13 + 0x10);
    lVar16 = *(long *)puVar9;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_02492280;
    fVar18 = fVar18 * fVar3;
    uVar2 = *(uint *)(lVar13 + 0x18);
    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
      *(float *)(lVar15 + (long)(int)uVar2 * 4 + 0x20) = fVar18;
    }
    else {
      System_Collections_Generic_List_float___AddWithResize_3ac28c0
                (fVar18,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
    lVar13 = *(long *)(lVar11 + 0x68);
    if (lVar13 == 0) {
LAB_0249227c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar15 = *(long *)(lVar13 + 0x10);
    lVar16 = *(long *)puVar7;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_0249227c;
    uVar2 = *(uint *)(lVar13 + 0x18);
    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
      lVar15 = lVar15 + (long)(int)uVar2 * 0xc;
      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
      *(float *)(lVar15 + 0x20) = fVar27;
      *(undefined4 *)(lVar15 + 0x24) = 0;
      *(float *)(lVar15 + 0x28) = fVar26;
    }
    else {
      param_3 = (ulong)(uint)fVar26;
      System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                (uVar22,0,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
      ;
    }
    lVar13 = *(long *)(lVar11 + 0x70);
    if (lVar13 == 0) {
LAB_02492284:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar15 = *(long *)(lVar13 + 0x10);
    lVar16 = *(long *)puVar9;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_02492284;
    uVar2 = *(uint *)(lVar13 + 0x18);
    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
      *(float *)(lVar15 + (long)(int)uVar2 * 4 + 0x20) = fVar20;
    }
    else {
      System_Collections_Generic_List_float___AddWithResize_3ac28c0
                (uVar23,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
    lVar13 = *(long *)(lVar11 + 0x78);
    if (lVar13 == 0) {
LAB_02492274:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar15 = *(long *)(lVar13 + 0x10);
    lVar16 = *(long *)puVar9;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_02492274;
    uVar2 = *(uint *)(lVar13 + 0x18);
    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
      *(float *)(lVar15 + (long)(int)uVar2 * 4 + 0x20) = fVar18;
    }
    else {
      System_Collections_Generic_List_float___AddWithResize_3ac28c0
                (fVar18,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
    lVar13 = *(long *)(lVar11 + 0x68);
    if (lVar13 == 0) {
LAB_02492288:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar15 = *(long *)(lVar13 + 0x10);
    lVar16 = *(long *)puVar7;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_02492288;
    uVar2 = *(uint *)(lVar13 + 0x18);
    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
      lVar15 = lVar15 + (long)(int)uVar2 * 0xc;
      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
      *(float *)(lVar15 + 0x20) = fVar17;
      *(undefined4 *)(lVar15 + 0x24) = 0;
      *(float *)(lVar15 + 0x28) = fVar19;
    }
    else {
      param_3 = (ulong)(uint)fVar19;
      System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                (fVar17,0,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
      ;
    }
    lVar13 = *(long *)(lVar11 + 0x70);
    if (cRam0000000004f9c959 == '\0') {
      FUN_02132f7c(puVar8);
      cRam0000000004f9c959 = '\x01';
    }
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (lVar13 == 0) {
LAB_0249228c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar15 = *(long *)(lVar13 + 0x10);
    lVar16 = *(long *)puVar9;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_0249228c;
    uVar2 = *(uint *)(lVar13 + 0x18);
    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
      *(float *)(lVar15 + (long)(int)uVar2 * 4 + 0x20) =
           SQRT((fVar17 - fVar27) * (fVar17 - fVar27) + (fVar19 - fVar26) * (fVar19 - fVar26)) +
           fVar20;
    }
    else {
      System_Collections_Generic_List_float___AddWithResize_3ac28c0
                (lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
    lVar13 = *(long *)(lVar11 + 0x78);
    if (lVar13 == 0) {
LAB_02492278:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02492278 to 02592313 has its CatchHandler @ 02492278
                       catch() { ... } // from try @ 02492278 with catch @ 02492278
                       catch() { ... } // from try @ 024924d8 with catch @ 02492278
                       catch() { ... } // from try @ 0249252c with catch @ 02492278
                       catch() { ... } // from try @ 02492554 with catch @ 02492278 */
      FUN_02133224();
    }
    lVar15 = *(long *)(lVar13 + 0x10);
    lVar16 = *(long *)puVar9;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_02492278;
    uVar2 = *(uint *)(lVar13 + 0x18);
    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
      *(float *)(lVar15 + (long)(int)uVar2 * 4 + 0x20) = fVar18;
    }
    else {
      System_Collections_Generic_List_float___AddWithResize_3ac28c0
                (fVar18,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
    *(float *)(lVar11 + 0x80) = fVar20;
    *(undefined1 *)(lVar14 + 0x378) = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

