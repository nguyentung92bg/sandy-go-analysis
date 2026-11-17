/* IL2CPP: Dino.BusSand.View.ChainRig$$Tow
void Dino_BusSand_View_ChainRig__Tow (Dino_BusSand_View_ChainRig_o* __this, Dino_BusSand_View_ChainRig_Hitch_o* h, Dino_BusSand_View_VehicleView_o* a, Dino_BusSand_View_VehicleView_o* b, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.ChainRig$$Tow
   void Dino_BusSand_View_ChainRig__Tow (Dino_BusSand_View_ChainRig_o* __this,
   Dino_BusSand_View_ChainRig_Hitch_o* h, Dino_BusSand_View_VehicleView_o* a,
   Dino_BusSand_View_VehicleView_o* b, float dt, const MethodInfo* method); */

void Dino_BusSand_View_ChainRig__Tow_23937e8
               (float param_1,float param_2,float param_3,long param_4,long param_5,long param_6,
               long param_7)

{
  float *pfVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_d0;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  if (param_6 == 0) goto LAB_02493f40;
  iVar8 = *(int *)(param_6 + 0x2c);
  if (iVar8 == 3) {
    if (param_7 == 0) goto LAB_02493f40;
    if (*(int *)(param_7 + 0x2c) == 2) {
      Dino_BusSand_View_VehicleView__SetWaiting_23febd4(param_7,0);
      iVar8 = *(int *)(param_6 + 0x2c);
      goto LAB_02493854;
    }
LAB_02493884:
    bVar2 = false;
  }
  else {
LAB_02493854:
    if (iVar8 != 4) {
      if (param_7 == 0) goto LAB_02493f40;
      goto LAB_02493884;
    }
    if (param_7 == 0) goto LAB_02493f40;
    if (*(int *)(param_7 + 0x2c) == 4) goto LAB_02493884;
    Dino_BusSand_View_VehicleView__EnterRoad_23feb40(param_7,0);
    bVar2 = true;
  }
  if (*(int *)(param_7 + 0x2c) == 3) {
    return;
  }
  Dino_BusSand_View_ChainRig__Lengths_2391808
            (param_4,param_6,param_7,(long)&uStack_48 + 4,&uStack_48);
  if (*(long *)(param_6 + 0x38) == 0) goto LAB_02493f40;
  fVar10 = (float)UnityEngine_Transform__get_position_43d0e48(*(long *)(param_6 + 0x38),0);
  if (*(long *)(param_6 + 0x38) == 0) goto LAB_02493f40;
  fVar23 = param_3;
  fVar11 = (float)UnityEngine_Transform__get_forward_43d17f4(*(long *)(param_6 + 0x38),0);
                    /* try { // try from 024938dc to 025938e3 has its CatchHandler @ 024939c8 */
  if (cRam0000000004f9b65c == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
                    /* try { // try from 024938f4 to 025938f7 has its CatchHandler @ 024939c4 */
    cRam0000000004f9b65c = '\x01';
  }
  puVar3 = PTR_DAT_04caa200;
                    /* try { // try from 02493908 to 0259390f has its CatchHandler @ 024939b8 */
  lVar6 = *(long *)PTR_DAT_04caa200;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    lVar6 = thunk_FUN_0218fdac();
  }
  fVar26 = _UNK_00e20a08;
  fVar17 = SQRT(fVar23 * fVar23 + fVar11 * fVar11);
  if (fVar17 <= _UNK_00e20a08) {
    if (cRam0000000004f9b65d == '\0') {
      lVar6 = FUN_02132f7c(PTR_DAT_04caa208);
                    /* try { // try from 02493974 to 0259399f has its CatchHandler @ 024937e4 */
      cRam0000000004f9b65d = '\x01';
    }
    uVar7 = **(ulong **)(*(long *)PTR_DAT_04caa208 + 0xb8);
    fVar23 = *(float *)(*(ulong **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
  }
  else {
    fVar23 = fVar23 / fVar17;
                    /* try { // try from 02493950 to 02593973 has its CatchHandler @ 024939b0 */
    uVar7 = CONCAT44(0.0 / fVar17,fVar11 / fVar17);
  }
  fVar22 = (float)(uVar7 >> 0x20);
                    /* try { // try from 024939a0 to 025939a3 has its CatchHandler @ 024939c0 */
  fVar17 = fVar23 * uStack_48._4_4_;
                    /* try { // try from 024939a4 to 025939a7 has its CatchHandler @ 024939bc */
                    /* try { // try from 024939a8 to 025939ab has its CatchHandler @ 024939b4 */
  fVar20 = fVar10 - (float)uVar7 * uStack_48._4_4_;
  fVar21 = param_2 - fVar22 * uStack_48._4_4_;
                    /* try { // try from 024939ac to 025939e3 has its CatchHandler @ 024937e4 */
  fVar25 = param_3 - fVar17;
  fVar11 = (float)uStack_48;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02493950 with catch @ 024939b0
                        */
  if (bVar2) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024939a8 with catch @ 024939b4
                        */
    if (param_5 == 0) goto LAB_02493f40;
LAB_02493a08:
                    /* try { // try from 02493a0c to 02593a17 has its CatchHandler @ 024937e4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02493a04 with catch @ 02493a14
                        */
    *(ulong *)(param_5 + 0x38) =
         CONCAT44(fVar21 - fVar22 * (float)uStack_48,fVar20 - (float)uVar7 * (float)uStack_48);
    *(float *)(param_5 + 0x40) = fVar25 - fVar23 * (float)uStack_48;
    fVar11 = (float)atan2f(uVar7 & 0xffffffff,fVar23);
    fVar23 = _UNK_00e20410;
    *(undefined1 *)(param_5 + 0x35) = 1;
    fVar11 = fVar11 * fVar23;
    *(undefined1 *)(param_5 + 0x5c) = 1;
LAB_02493a48:
    *(float *)(param_5 + 0x44) = fVar11;
  }
  else {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024939a4 with catch @ 024939bc
                        */
    if (param_5 == 0) goto LAB_02493f40;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024939a0 with catch @ 024939c0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024938f4 with catch @ 024939c4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024938dc with catch @ 024939c8
                        */
    fVar24 = fVar10 - *(float *)(param_5 + 0x48);
    fVar15 = param_2 - *(float *)(param_5 + 0x4c);
    fVar18 = param_3 - *(float *)(param_5 + 0x50);
                    /* try { // try from 024939e4 to 025939e7 has its CatchHandler @ 02493a00 */
                    /* try { // try from 024939e8 to 02593a03 has its CatchHandler @ 024937e4 */
    fVar17 = (uStack_48._4_4_ + (float)uStack_48) * (uStack_48._4_4_ + (float)uStack_48);
                    /* catch() { ... } // from try @ 024939e4 with catch @ 02493a00 */
                    /* try { // try from 02493a04 to 02593a0b has its CatchHandler @ 02493a14 */
    if (fVar17 * 4.0 < fVar24 * fVar24 + fVar15 * fVar15 + fVar18 * fVar18) goto LAB_02493a08;
    if (*(int *)(param_6 + 0x2c) == 4) {
      fVar22 = *(float *)(param_5 + 0x38);
      fVar24 = *(float *)(param_5 + 0x40);
      if (cRam0000000004f9c959 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa200);
        cRam0000000004f9c959 = '\x01';
      }
      fVar22 = fVar20 - fVar22;
      fVar24 = fVar25 - fVar24;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar17 = SQRT(fVar22 * fVar22 + fVar24 * fVar24);
      if (*(char *)(param_5 + 0x35) == '\0') {
        pfVar1 = (float *)(param_5 + 0x60);
        if (*(char *)(param_5 + 0x5c) != '\0') {
          pfVar1 = (float *)&uStack_48;
        }
        if (fVar17 < *pfVar1) goto LAB_02493a4c;
        Dino_BusSand_View_ChainRig__Tug_2394b50(param_7);
      }
      *(undefined1 *)(param_5 + 0x35) = 1;
      if (fVar26 < fVar17) {
        fVar24 = fVar24 / fVar17;
        uStack_d0 = CONCAT44(0.0 / fVar17,fVar22 / fVar17);
        fVar17 = (float)atan2f(uVar7,fVar23);
        fVar23 = _UNK_00e20410;
        fVar17 = fVar17 * _UNK_00e20410;
        fVar26 = (float)atan2f(uStack_d0,fVar24);
        uVar12 = 0xc3b40000;
        fVar22 = fVar26 * fVar23 - fVar17;
        fVar22 = fVar22 + (float)(int)(fVar22 / 360.0) * -360.0;
        fVar26 = 360.0;
        if (fVar22 <= 360.0) {
          fVar26 = fVar22;
        }
        fVar15 = 0.0;
        if (0.0 <= fVar22) {
          fVar15 = fVar26;
        }
        fVar26 = fVar15 + -360.0;
        if (fVar15 <= 180.0) {
          fVar26 = fVar15;
        }
        if (70.0 < ABS(fVar26)) {
          fVar22 = -70.0;
          fVar24 = 0.0;
          if (0.0 <= fVar26) {
            fVar22 = 70.0;
          }
          fVar22 = (fVar17 + fVar22) * _UNK_00e20a74;
          uVar13 = UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,0);
          fVar26 = fVar22;
          fVar17 = fVar24;
          uVar14 = FUN_024abc88(0);
          uVar12 = UnityEngine_Quaternion__op_Multiply_43af48c
                             (uVar13,fVar22,fVar24,uVar12,uVar14,fVar26,fVar17,0);
          uStack_d0 = CONCAT44(fVar22,uVar12);
        }
        if (*(char *)(param_5 + 0x5c) == '\0') {
          fVar17 = *(float *)(param_5 + 0x60) + fVar11 * -5.0 * param_1;
          fVar26 = fVar11;
          if (fVar11 <= fVar17) {
            fVar26 = fVar17;
          }
          *(float *)(param_5 + 0x60) = fVar26;
          bVar2 = fVar26 <= fVar11;
          fVar11 = fVar26;
          if (bVar2) {
            *(undefined1 *)(param_5 + 0x5c) = 1;
          }
        }
        fVar17 = fVar24 * fVar11;
        *(ulong *)(param_5 + 0x38) =
             CONCAT44(fVar21 - (float)((ulong)uStack_d0 >> 0x20) * fVar11,
                      fVar20 - (float)uStack_d0 * fVar11);
        *(float *)(param_5 + 0x40) = fVar25 - fVar17;
        fVar11 = (float)atan2f(uStack_d0,fVar24);
        fVar11 = fVar11 * fVar23;
        goto LAB_02493a48;
      }
    }
    else {
      Dino_BusSand_View_ChainRig__OnTrail_2394540
                (uStack_48._4_4_,uStack_48 & 0xffffffff,param_1,lVar6,param_5,param_6,param_7);
    }
  }
LAB_02493a4c:
  fVar23 = _UNK_00e20a74;
  *(float *)(param_5 + 0x50) = param_3;
  fVar23 = *(float *)(param_5 + 0x44) * fVar23;
  *(float *)(param_5 + 0x3c) = param_2;
  *(float *)(param_5 + 0x48) = fVar10;
  *(float *)(param_5 + 0x4c) = param_2;
  uVar13 = 0;
  uVar12 = UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,fVar23,0,0);
  if (0.0 <= *(float *)(param_5 + 0x54)) {
    fVar11 = param_1 / _UNK_00e20590 + *(float *)(param_5 + 0x54);
    fVar10 = 1.0;
    if (fVar11 <= 1.0) {
      fVar10 = fVar11;
    }
    *(float *)(param_5 + 0x54) = fVar10;
    fVar11 = 0.0;
    if (0.0 <= fVar10) {
      fVar11 = fVar10;
    }
    fVar10 = fVar11 + fVar11;
    if (0.5 <= fVar11) {
      fVar11 = 2.0 - fVar10;
      fVar10 = -0.5;
      fVar11 = fVar11 * fVar11 * -0.5;
      fVar26 = fVar11 + 1.0;
    }
    else {
      fVar26 = fVar11 * fVar10;
    }
    lVar6 = *(long *)(param_7 + 0x38);
    if (lVar6 == 0) goto LAB_02493f40;
    fVar25 = *(float *)(param_5 + 0x3c);
    fVar24 = *(float *)(param_5 + 0x40);
    fVar22 = *(float *)(param_5 + 0x38);
    fVar21 = (float)UnityEngine_Transform__get_position_43d0e48(lVar6,0);
    fVar20 = 1.0;
    if (fVar26 <= 1.0) {
      fVar20 = fVar26;
    }
    fVar15 = 0.0;
    if (0.0 <= fVar26) {
      fVar15 = fVar20;
    }
    fVar26 = fVar15 * (fVar21 - fVar22);
    fVar11 = fVar15 * (fVar11 - fVar25);
    uVar7 = (ulong)(uint)fVar11;
    fVar10 = fVar15 * (fVar10 - fVar24);
    uVar16 = (ulong)(uint)fVar10;
    uVar14 = UnityEngine_Transform__get_rotation_43d133c(lVar6,0);
    uVar19 = (ulong)(uint)fVar17;
    uVar12 = UnityEngine_Quaternion__Slerp_43aee54
                       (uVar12,fVar23,uVar13,uVar19,uVar14,uVar7 & 0xffffffff,uVar16 & 0xffffffff,
                        fVar15,0);
    UnityEngine_Transform__SetPositionAndRotation_43d2064
              (fVar22 + fVar26,fVar25 + fVar11,fVar24 + fVar10,uVar12,fVar23,uVar13,
               uVar19 & 0xffffffff,lVar6,0);
    if (1.0 <= *(float *)(param_5 + 0x54)) {
      *(undefined2 *)(param_7 + 0x378) = 0;
    }
  }
  else {
    if (*(long *)(param_7 + 0x38) == 0) goto LAB_02493f40;
    UnityEngine_Transform__SetPositionAndRotation_43d2064
              (*(undefined4 *)(param_5 + 0x38),*(undefined4 *)(param_5 + 0x3c),
               *(undefined4 *)(param_5 + 0x40),uVar12,fVar23,uVar13,fVar17,*(long *)(param_7 + 0x38)
               ,0);
  }
  if (((*(int *)(param_7 + 0x2c) != 4) ||
      (uVar7 = Dino_BusSand_View_ArtPack__get_Active_238dea0(), (uVar7 & 1) == 0)) ||
     (*(char *)(param_7 + 0x379) != '\0')) {
    return;
  }
  if (*(long *)(param_7 + 0x38) != 0) {
    lVar6 = *(long *)(param_4 + 0x18);
    UnityEngine_Transform__get_position_43d0e48(*(long *)(param_7 + 0x38),0);
    if (lVar6 != 0) {
      uVar4 = Dino_BusSand_View_StageLayout__BehindFrame_23e8ac0(lVar6,0);
      lVar6 = UnityEngine_Component__get_gameObject_43bcde8(param_7,0);
      if (lVar6 != 0) {
        uVar5 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar6,0);
        if (((uVar4 ^ uVar5) & 1) != 0) {
          return;
        }
        lVar6 = UnityEngine_Component__get_gameObject_43bcde8(param_7,0);
        if (lVar6 != 0) {
          uVar4 = (uVar4 ^ 1) & 1;
          if ((bRam0000000004fa8360 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf5bd0,uVar4,0);
            bRam0000000004fa8360 = 1;
          }
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar9 = *(long *)(lVar6 + 0x10);
          if (lVar9 != 0) {
            if (pcRam0000000004fa8430 == (code *)0x0) {
              pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
            }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8430)(lVar9,uVar4);
            return;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
        }
      }
    }
  }
LAB_02493f40:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

