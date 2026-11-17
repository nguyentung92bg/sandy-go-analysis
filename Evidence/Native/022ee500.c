/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel.<ClaimAnim>d__44$$MoveNext
bool Dino_BusSand_App_UI_YachtRacingPanel__ClaimAnim_d__44__MoveNext (Dino_BusSand_App_UI_YachtRacingPanel__ClaimAnim_d__44_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel.<ClaimAnim>d__44$$MoveNext
   bool Dino_BusSand_App_UI_YachtRacingPanel__ClaimAnim_d__44__MoveNext
   (Dino_BusSand_App_UI_YachtRacingPanel__ClaimAnim_d__44_o* __this, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_YachtRacingPanel__ClaimAnim_d__44__MoveNext_21ee500
          (undefined1 param_1 [16],float param_2,undefined4 param_3,float param_4,long param_5)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  if ((bRam0000000004f9bc0a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
                    /* catch() { ... } // from try @ 022ee4e0 with catch @ 022ee548 */
    FUN_02132f7c(PTR_DAT_04cb10f0);
    bRam0000000004f9bc0a = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar6 = *(long *)(param_5 + 0x20);
  if (*(int *)(param_5 + 0x10) == 1) {
    fVar11 = *(float *)(param_5 + 0x80);
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_5 + 0x10) != 0) {
      return 0;
    }
                    /* try { // try from 022ee574 to 023ee623 has its CatchHandler @ 022ee574
                       catch() { ... } // from try @ 022ee574 with catch @ 022ee574
                       catch() { ... } // from try @ 022ee62c with catch @ 022ee574 */
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    if ((lVar6 == 0) ||
       (plVar2 = (long *)UnityEngine_Component__get_transform_43bcd18(lVar6,0),
       plVar2 == (long *)0x0)) goto LAB_022eea4c;
    if (*plVar2 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4();
    }
    UnityEngine_RectTransform__get_rect_43cf450(plVar2,0);
    uVar7 = *(undefined8 *)(lVar6 + 0x68);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    if ((uVar3 & 1) == 0) {
      if (cRam0000000004f9b65d == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65d = '\x01';
      }
                    /* try { // try from 022ee624 to 023ee62b has its CatchHandler @ 022ee68c */
      puVar5 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
                    /* try { // try from 022ee62c to 023ee6b7 has its CatchHandler @ 022ee574 */
      uVar8 = *puVar5;
      param_2 = (float)puVar5[1];
      param_3 = puVar5[2];
    }
    else {
      if (*(long *)(lVar6 + 0x68) == 0) goto LAB_022eea4c;
      uVar8 = UnityEngine_Transform__get_localPosition_43cfce8(*(long *)(lVar6 + 0x68),0);
    }
    lVar4 = *(long *)puVar1;
    *(undefined4 *)(param_5 + 0x28) = uVar8;
    *(float *)(param_5 + 0x2c) = param_2;
    *(undefined4 *)(param_5 + 0x30) = param_3;
    uVar7 = *(undefined8 *)(lVar6 + 0x70);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    if ((uVar3 & 1) == 0) {
      if (cRam0000000004f9b65d == '\0') {
                    /* catch() { ... } // from try @ 022ee624 with catch @ 022ee68c */
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65d = '\x01';
      }
      puVar5 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      uVar8 = *puVar5;
      param_2 = (float)puVar5[1];
      param_3 = puVar5[2];
    }
    else {
      if (*(long *)(lVar6 + 0x70) == 0) goto LAB_022eea4c;
      uVar8 = UnityEngine_Transform__get_localPosition_43cfce8(*(long *)(lVar6 + 0x70),0);
    }
    lVar4 = *(long *)puVar1;
    *(undefined4 *)(param_5 + 0x34) = uVar8;
    *(float *)(param_5 + 0x38) = param_2;
                    /* try { // try from 022ee6b8 to 023ee767 has its CatchHandler @ 022ee6b8
                       catch() { ... } // from try @ 022ee6b8 with catch @ 022ee6b8
                       catch() { ... } // from try @ 022ee770 with catch @ 022ee6b8 */
    *(undefined4 *)(param_5 + 0x3c) = param_3;
    uVar7 = *(undefined8 *)(lVar6 + 0x78);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    if ((uVar3 & 1) == 0) {
      if (cRam0000000004f9b65d == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65d = '\x01';
      }
      puVar5 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      uVar8 = *puVar5;
      param_2 = (float)puVar5[1];
      param_3 = puVar5[2];
    }
    else {
      if (*(long *)(lVar6 + 0x78) == 0) goto LAB_022eea4c;
      uVar8 = UnityEngine_Transform__get_localPosition_43cfce8(*(long *)(lVar6 + 0x78),0);
    }
    *(undefined4 *)(param_5 + 0x40) = uVar8;
    *(float *)(param_5 + 0x44) = param_2;
    uVar7 = _UNK_00e6bda0;
    fVar11 = *(float *)(param_5 + 0x2c) + _UNK_00e20260;
    fVar12 = *(float *)(param_5 + 0x38) + _UNK_00e20458;
                    /* try { // try from 022ee768 to 023ee76f has its CatchHandler @ 022ee7d0 */
    *(undefined8 *)(param_5 + 0x60) = _UNK_00e6bda8;
    *(undefined8 *)(param_5 + 0x58) = uVar7;
                    /* try { // try from 022ee770 to 023ee7fb has its CatchHandler @ 022ee6b8 */
    *(undefined4 *)(param_5 + 0x48) = param_3;
    *(float *)(param_5 + 0x4c) = fVar11 - ABS(param_4 + -1920.0);
    *(undefined8 *)(param_5 + 0x68) = _UNK_00e697a8;
    *(float *)(param_5 + 0x50) = ABS(param_4 + -1920.0) + fVar12;
    *(float *)(param_5 + 0x54) = param_2 + -430.0;
    uVar7 = Dino_BusSand_App_UI_YachtRacingAnimValues__get_ClaimBackEase_21e7c00();
    *(undefined8 *)(param_5 + 0x70) = uVar7;
    thunk_FUN_02134474();
    uVar7 = Dino_BusSand_App_UI_YachtRacingAnimValues__get_ClaimFrontEase_21e7dc0();
    *(undefined8 *)(param_5 + 0x78) = uVar7;
    thunk_FUN_02134474((undefined8 *)(param_5 + 0x78),uVar7);
    fVar11 = 0.0;
    *(undefined4 *)(param_5 + 0x80) = 0;
  }
  fVar12 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
                    /* catch() { ... } // from try @ 022ee768 with catch @ 022ee7d0 */
  *(float *)(param_5 + 0x80) = fVar11 + fVar12;
  if (lVar6 == 0) {
LAB_022eea4c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar7 = *(undefined8 *)(lVar6 + 0x68);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022ee7fc to 023ee8ab has its CatchHandler @ 022ee7fc
                       catch() { ... } // from try @ 022ee7fc with catch @ 022ee7fc
                       catch() { ... } // from try @ 022ee8b4 with catch @ 022ee7fc */
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(float *)(param_5 + 0x58) <= *(float *)(param_5 + 0x80)) {
      if (*(long *)(param_5 + 0x70) == 0) goto LAB_022eea4c;
      uVar8 = *(undefined4 *)(param_5 + 0x28);
      uVar13 = *(undefined4 *)(param_5 + 0x2c);
      uVar7 = *(undefined8 *)(lVar6 + 0x68);
      uVar14 = *(undefined4 *)(param_5 + 0x30);
      uVar15 = *(undefined4 *)(param_5 + 0x4c);
      fVar12 = (*(float *)(param_5 + 0x80) - *(float *)(param_5 + 0x58)) /
               *(float *)(param_5 + 0x5c);
      fVar11 = 1.0;
      if (fVar12 <= 1.0) {
        fVar11 = fVar12;
      }
      fVar10 = 0.0;
      if (0.0 <= fVar12) {
        fVar10 = fVar11;
      }
      uVar9 = UnityEngine_AnimationCurve__Evaluate_43514d8(fVar10,*(long *)(param_5 + 0x70),0);
      if (*(int *)(*(long *)PTR_DAT_04cb10f0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_YachtRacingPanel__SetLocalY_21edafc
                (uVar8,uVar13,uVar14,uVar15,uVar9,uVar7);
    }
  }
  uVar7 = *(undefined8 *)(lVar6 + 0x70);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022ee8ac to 023ee8b3 has its CatchHandler @ 022ee914 */
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
                    /* try { // try from 022ee8b4 to 023ee93f has its CatchHandler @ 022ee7fc */
  if ((uVar3 & 1) != 0) {
    if (*(float *)(param_5 + 0x60) <= *(float *)(param_5 + 0x80)) {
      if (*(long *)(param_5 + 0x78) == 0) goto LAB_022eea4c;
      uVar8 = *(undefined4 *)(param_5 + 0x34);
      uVar13 = *(undefined4 *)(param_5 + 0x38);
      uVar7 = *(undefined8 *)(lVar6 + 0x70);
      uVar14 = *(undefined4 *)(param_5 + 0x3c);
      uVar15 = *(undefined4 *)(param_5 + 0x50);
      fVar12 = (*(float *)(param_5 + 0x80) - *(float *)(param_5 + 0x60)) / *(float *)(param_5 + 100)
      ;
      fVar11 = 1.0;
      if (fVar12 <= 1.0) {
        fVar11 = fVar12;
      }
      fVar10 = 0.0;
      if (0.0 <= fVar12) {
        fVar10 = fVar11;
      }
      uVar9 = UnityEngine_AnimationCurve__Evaluate_43514d8(fVar10,*(long *)(param_5 + 0x78),0);
                    /* catch() { ... } // from try @ 022ee8ac with catch @ 022ee914 */
      if (*(int *)(*(long *)PTR_DAT_04cb10f0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 022ee940 to 023ee9ef has its CatchHandler @ 022ee940
                       catch() { ... } // from try @ 022ee940 with catch @ 022ee940
                       catch() { ... } // from try @ 022ee9f8 with catch @ 022ee940 */
      Dino_BusSand_App_UI_YachtRacingPanel__SetLocalY_21edafc
                (uVar8,uVar13,uVar14,uVar15,uVar9,uVar7);
    }
  }
  uVar7 = *(undefined8 *)(lVar6 + 0x78);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  fVar11 = *(float *)(param_5 + 0x80);
  if (((uVar3 & 1) != 0) && (*(float *)(param_5 + 0x68) <= fVar11)) {
    if (*(long *)(param_5 + 0x78) == 0) goto LAB_022eea4c;
    uVar8 = *(undefined4 *)(param_5 + 0x40);
    uVar13 = *(undefined4 *)(param_5 + 0x44);
    uVar7 = *(undefined8 *)(lVar6 + 0x78);
    uVar14 = *(undefined4 *)(param_5 + 0x48);
    uVar15 = *(undefined4 *)(param_5 + 0x54);
    fVar12 = (fVar11 - *(float *)(param_5 + 0x68)) / *(float *)(param_5 + 100);
    fVar11 = 1.0;
    if (fVar12 <= 1.0) {
      fVar11 = fVar12;
    }
    fVar10 = 0.0;
    if (0.0 <= fVar12) {
      fVar10 = fVar11;
    }
    uVar9 = UnityEngine_AnimationCurve__Evaluate_43514d8(fVar10,*(long *)(param_5 + 0x78),0);
    if (*(int *)(*(long *)PTR_DAT_04cb10f0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022ee9f0 to 023ee9f7 has its CatchHandler @ 022eea58 */
    Dino_BusSand_App_UI_YachtRacingPanel__SetLocalY_21edafc(uVar8,uVar13,uVar14,uVar15,uVar9,uVar7);
                    /* try { // try from 022ee9f8 to 023eea83 has its CatchHandler @ 022ee940 */
    fVar11 = *(float *)(param_5 + 0x80);
  }
  if (*(float *)(param_5 + 0x6c) <= fVar11) {
    Dino_BusSand_App_UI_YachtRacingPanel__OnClaimAnimComplete_21edb1c(lVar6);
    return 0;
  }
  *(undefined8 *)(param_5 + 0x18) = 0;
  thunk_FUN_02134474((undefined8 *)(param_5 + 0x18),0);
  *(undefined4 *)(param_5 + 0x10) = 1;
  return 1;
}

