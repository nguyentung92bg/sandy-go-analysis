/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Pencil
void Dino_BusSand_App_UI_HomeAtelier__Pencil (Dino_BusSand_App_UI_HomeAtelier_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Pencil
   void Dino_BusSand_App_UI_HomeAtelier__Pencil (Dino_BusSand_App_UI_HomeAtelier_o* __this, float
   dt, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier__Pencil_22d7f58(float param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c3e2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadf40);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3e2 = 1;
  }
  uVar9 = *(undefined8 *)(param_2 + 0xa0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  fVar13 = *(float *)(param_2 + 0x138);
  fVar15 = *(float *)(param_2 + 0x13c);
  uVar9 = *(undefined8 *)(param_2 + 0x110);
  fVar11 = param_1 / _UNK_00e208cc;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  fVar14 = -fVar11;
  if (0.0 <= fVar15 - fVar13) {
    fVar14 = fVar11;
  }
  fVar14 = fVar13 + fVar14;
  fVar16 = fVar14;
  if (ABS(fVar15 - fVar13) <= fVar11) {
    fVar16 = fVar15;
  }
  *(float *)(param_2 + 0x138) = fVar16;
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_2 + 0xa0) == 0) goto LAB_023d8614;
    uVar9 = UnityEngine_Component__GetComponent_object__26f97e8
                      (*(long *)(param_2 + 0xa0),*(undefined8 *)PTR_DAT_04cadf40);
    *(undefined8 *)(param_2 + 0x110) = uVar9;
    thunk_FUN_02134474(param_2 + 0x110,uVar9);
  }
  if (*(long *)(param_2 + 0x110) == 0) goto LAB_023d8614;
  UnityEngine_CanvasGroup__set_alpha_467ad3c
            (*(undefined4 *)(param_2 + 0x138),*(long *)(param_2 + 0x110),0);
  lVar10 = *(long *)(param_2 + 0x130);
  if (lVar10 == 0) {
LAB_023d812c:
    puVar2 = PTR_DAT_04cad568;
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar2;
    }
    if (**(long **)(lVar10 + 0xb8) == 0) {
      return;
    }
    fVar14 = 0.0;
    fVar11 = 1.0;
  }
  else {
    if (*(float *)(param_2 + 0x13c) <= 0.0) {
      uVar4 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar10 + 0x18);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
    }
    uVar9 = *(undefined8 *)(lVar10 + 0x18);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
    if (((uVar5 & 1) != 0) || (*(float *)(param_2 + 0x138) <= 0.0 && (uVar4 & 1) == 0))
    goto LAB_023d812c;
    fVar11 = *(float *)(param_2 + 0x70);
    if (*(long *)(lVar10 + 0x50) == 0) {
      fVar14 = 0.5;
      fVar13 = 0.5;
    }
    else {
      fVar13 = (float)Dino_BusSand_View_PicturePaper__TipAt_23dc770
                                (*(undefined4 *)(param_2 + 0x94),*(long *)(lVar10 + 0x50),0);
    }
    fVar15 = 1.0;
    if (fVar13 <= 1.0) {
      fVar15 = fVar13;
    }
    fVar16 = 1.0;
    if (fVar14 <= 1.0) {
      fVar16 = fVar14;
    }
    fVar19 = 0.0;
    if (0.0 <= fVar14) {
      fVar19 = fVar16;
    }
    fVar14 = _UNK_00e20228;
    if (0.0 <= fVar13) {
      fVar14 = fVar15 * _UNK_00e20a98 + _UNK_00e203b0 + -0.5;
    }
    fVar13 = *(float *)(param_2 + 0x68);
    if (*(char *)(param_2 + 0x9c) == '\0') {
      fVar14 = *(float *)(param_2 + 100) * fVar14;
      fVar15 = 1.0 / fVar11 + _UNK_00e20a94 + _UNK_00e201f4;
      fVar11 = _UNK_00e201f4 / fVar15;
      fVar11 = -((1.0 - (fVar11 + ((1.0 - _UNK_00e20a94 / fVar15) - fVar11) * fVar19)) * fVar13);
    }
    else {
      fVar16 = *(float *)(param_2 + 0x98);
      fVar15 = _UNK_00e201f4 / (1.0 / *(float *)(param_2 + 0x70) + _UNK_00e20a94 + _UNK_00e201f4);
      fVar14 = *(float *)(param_2 + 100) * _UNK_00e20960;
      fVar11 = (float)func_0x049b5320(fVar16 * _UNK_00e2082c * 5.0);
      fVar11 = fVar11 * 5.0 + fVar13 * (fVar15 * 0.5 + -0.5) + fVar13 * -0.5 + 6.0;
      fVar14 = fVar14 + -70.0 + 70.0 + -44.0 + fVar16 * 40.0;
    }
    if (*(long *)(lVar10 + 0x20) == 0) {
LAB_023d8614:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Transform__TransformPoint_43d3c44(fVar14,fVar11,0,*(long *)(lVar10 + 0x20),0);
    if (*(long *)(param_2 + 0x20) == 0) goto LAB_023d8614;
    fVar14 = (float)UnityEngine_Transform__InverseTransformPoint_43d3ffc
                              (*(long *)(param_2 + 0x20),0);
    fVar19 = *(float *)(param_2 + 0xec);
    fVar13 = (float)func_0x049b5320(fVar19 * 53.0);
    fVar15 = (float)func_0x049b5320(fVar19 * 41.0 + 1.0);
                    /* try { // try from 023d8358 to 024d845b has its CatchHandler @ 023d8358
                       catch() { ... } // from try @ 023d8358 with catch @ 023d8358
                       catch() { ... } // from try @ 023d84f4 with catch @ 023d8358
                       catch() { ... } // from try @ 023d8524 with catch @ 023d8358
                       catch() { ... } // from try @ 023d8550 with catch @ 023d8358
                       catch() { ... } // from try @ 023d8574 with catch @ 023d8358 */
    fVar13 = fVar13 * _UNK_00e205ec;
    fVar15 = fVar15 * _UNK_00e20660;
    fVar16 = 1.0 - *(float *)(param_2 + 0x138);
    uVar9 = *(undefined8 *)(param_2 + 0xa8);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    fVar17 = fVar16 * 40.0 + fVar14 + fVar13;
    fVar16 = fVar16 * 70.0 + fVar11 + fVar15;
    fVar13 = (float)uVar9;
    fVar14 = fVar13 - (float)**(undefined8 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
    fVar15 = (float)((ulong)uVar9 >> 0x20);
    fVar11 = fVar15 - (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8) >> 0x20);
    if (_UNK_00e1fea0 <= fVar14 * fVar14 + fVar11 * fVar11) {
      fVar18 = *(float *)(param_2 + 0xa8);
      fVar20 = *(float *)(param_2 + 0xac);
      fVar11 = (float)expf(param_1 * -26.0);
      fVar11 = 1.0 - fVar11;
      fVar14 = 1.0;
      if (fVar11 <= 1.0) {
        fVar14 = fVar11;
      }
      fVar12 = 0.0;
      if (0.0 <= fVar11) {
        fVar12 = fVar14;
      }
      fVar17 = fVar18 + fVar12 * (fVar17 - fVar18);
      fVar16 = fVar20 + fVar12 * (fVar16 - fVar20);
    }
    *(float *)(param_2 + 0xa8) = fVar17;
    *(float *)(param_2 + 0xac) = fVar16;
    if (*(long *)(param_2 + 0xa0) == 0) goto LAB_023d8614;
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
              (fVar17,fVar16,*(long *)(param_2 + 0xa0),0);
    lVar10 = *(long *)(param_2 + 0xa0);
                    /* try { // try from 023d845c to 024d8463 has its CatchHandler @ 023d8530 */
    fVar14 = (float)func_0x049b5320(fVar19 * _UNK_00e202d4);
    UnityEngine_Quaternion__Internal_FromEulerRad_43af004
              (0,0,(fVar14 * 3.0 + -28.0) * _UNK_00e20a74,0);
    if (lVar10 == 0) goto LAB_023d8614;
                    /* try { // try from 023d8494 to 024d84f3 has its CatchHandler @ 023d8528 */
    UnityEngine_Transform__set_localRotation_43d156c(lVar10,0);
    fVar11 = *(float *)(param_2 + 0xa8);
    fVar14 = *(float *)(param_2 + 0xac);
    if (cRam0000000004f9b9de == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b9de = '\x01';
    }
    fVar11 = fVar11 - fVar13;
    fVar14 = fVar14 - fVar15;
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04cad568;
                    /* try { // try from 023d84f4 to 024d851f has its CatchHandler @ 023d8358 */
    fVar13 = _UNK_00e20a7c;
    if (_UNK_00e20a7c <= param_1) {
      fVar13 = param_1;
    }
    fVar13 = SQRT(fVar11 * fVar11 + fVar14 * fVar14) / fVar13;
    fVar14 = 0.0;
                    /* try { // try from 023d8520 to 024d8523 has its CatchHandler @ 023d852c */
                    /* try { // try from 023d8524 to 024d854b has its CatchHandler @ 023d8358 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023d8494 with catch @ 023d8528
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023d8520 with catch @ 023d852c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023d845c with catch @ 023d8530
                        */
    if (((uVar4 & 1) != 0) &&
       ((*(float *)(param_2 + 0x94) < 1.0 || (*(char *)(param_2 + 0x9c) != '\0')))) {
      fVar15 = fVar13 / 700.0;
                    /* try { // try from 023d854c to 024d854f has its CatchHandler @ 023d8568 */
      fVar11 = 1.0;
      if (fVar15 <= 1.0) {
        fVar11 = fVar15;
      }
                    /* try { // try from 023d8550 to 024d856b has its CatchHandler @ 023d8358 */
      fVar14 = _UNK_00e20590;
      if (_UNK_00e20590 <= fVar15) {
        fVar14 = fVar11;
      }
    }
                    /* catch() { ... } // from try @ 023d854c with catch @ 023d8568 */
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
                    /* try { // try from 023d856c to 024d8573 has its CatchHandler @ 023d857c */
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 023d8574 to 024d857f has its CatchHandler @ 023d8358 */
    if (cRam0000000004f9b94e == '\0') {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023d856c with catch @ 023d857c
                        */
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar2;
    }
    if (**(long **)(lVar10 + 0xb8) == 0) {
      return;
    }
    fVar13 = fVar13 / 900.0;
    fVar15 = 1.0;
    if (fVar13 <= 1.0) {
      fVar15 = fVar13;
    }
    fVar11 = _UNK_00e2038c;
    if (0.0 <= fVar13) {
      fVar11 = fVar15 * _UNK_00e20754 + _UNK_00e2038c;
    }
  }
  puVar2 = PTR_DAT_04cab1f0;
  uVar9 = 0;
  if ((bRam0000000004f9c866 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbb628);
    bRam0000000004f9c866 = 1;
    uVar9 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar9 = extraout_x1_00;
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0,uVar9);
    cRam0000000004f9b88a = '\x01';
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *(long *)puVar2;
  }
  uVar9 = **(undefined8 **)(lVar10 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    cRam0000000004f9b88a = '\x01';
  }
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *(long *)puVar2;
  }
  lVar10 = **(long **)(lVar10 + 0xb8);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar9 = *(undefined8 *)PTR_DAT_04cbb628;
  if ((bRam0000000004f9c7f4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c7f4 = 1;
  }
  lVar6 = Dino_BusSand_AudioHub__LoopVoiceOf_23768b0(lVar10,uVar9);
  puVar2 = PTR_DAT_04cab1f0;
  if (lVar6 == 0) {
    return;
  }
  lVar8 = *(long *)(lVar6 + 0x10);
  lVar7 = *(long *)PTR_DAT_04cab1f0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  fVar13 = 0.0;
  if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x29) == '\0') {
LAB_024767a8:
    fVar14 = fVar13;
    if (lVar8 == 0) goto LAB_024768ac;
  }
  else {
    if (*(long *)(lVar6 + 0x18) == 0) goto LAB_024768ac;
    fVar16 = *(float *)(lVar6 + 0x20);
    fVar15 = (float)Dino_BusSand_AudioHub__BusGain_2374ae8
                              (lVar10,*(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x20));
    fVar15 = fVar16 * fVar14 * fVar15;
    fVar14 = 1.0;
    if (fVar15 <= 1.0) {
      fVar14 = fVar15;
    }
    if ((fVar15 < 0.0) || (fVar13 = fVar14, fVar14 <= _UNK_00e20208)) goto LAB_024767a8;
    if (lVar8 == 0) goto LAB_024768ac;
    uVar5 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar8,0);
    if ((uVar5 & 1) == 0) {
      uVar9 = UnityEngine_AudioSource__get_clip_434866c(lVar8,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
      if ((uVar5 & 1) != 0) {
        lVar10 = UnityEngine_AudioSource__get_clip_434866c(lVar8,0);
        if (lVar10 == 0) goto LAB_024768ac;
        fVar13 = (float)UnityEngine_AudioClip__get_length_4346cd4(lVar10,0);
        UnityEngine_Random__Range_43b64a8(0,fVar13 * _UNK_00e1fea8,0);
        UnityEngine_AudioSource__set_time_4348598(lVar8,0);
        UnityEngine_AudioSource__Play_4348894(lVar8,0);
      }
    }
  }
  UnityEngine_AudioSource__set_volume_434840c(fVar14,lVar8,0);
  if (*(long *)(lVar6 + 0x18) != 0) {
    fVar13 = (float)exp2f(*(float *)(*(long *)(lVar6 + 0x18) + 0x44) / 1200.0);
    fVar13 = fVar13 * fVar11;
    fVar11 = 3.0;
    if (fVar13 <= 3.0) {
      fVar11 = fVar13;
    }
    fVar15 = _UNK_00e20754;
    if (_UNK_00e20754 <= fVar13) {
      fVar15 = fVar11;
    }
    UnityEngine_AudioSource__set_pitch_43484e0(fVar15,lVar8,0);
    lVar10 = *(long *)(lVar6 + 0x18);
    if (lVar10 != 0) {
      fVar11 = 0.0;
      if (*(char *)(lVar10 + 0x60) == '\0') {
        fVar13 = *(float *)(lVar10 + 100);
        if (fVar13 <= 0.0) {
          fVar13 = 1.0;
        }
        fVar13 = fVar13 * 0.0;
        fVar15 = 1.0;
        if (fVar13 <= 1.0) {
          fVar15 = fVar13;
        }
        fVar11 = -1.0;
        if (-1.0 <= fVar13) {
          fVar11 = fVar15;
        }
      }
      UnityEngine_AudioSource__set_panStereo_4348d18(fVar11,lVar8,0);
      if ((_UNK_00e20208 < fVar14) ||
         (uVar5 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar8,0), (uVar5 & 1) == 0)) {
        return;
      }
      if ((bRam0000000004fa5563 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5ef0);
        bRam0000000004fa5563 = 1;
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar10 = *(long *)(lVar8 + 0x10);
      if (lVar10 != 0) {
        if (pcRam0000000004fa5590 == (code *)0x0) {
          pcRam0000000004fa5590 = (code *)FUN_02132f40(&UNK_00e5e433);
        }
                    /* WARNING: Could not recover jumptable at 0x044483c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa5590)(lVar10,1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar8,0);
    }
  }
LAB_024768ac:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

