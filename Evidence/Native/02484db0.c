/* IL2CPP: Dino.BusSand.GameAudio$$Update
void Dino_BusSand_GameAudio__Update (Dino_BusSand_GameAudio_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio$$Update
   void Dino_BusSand_GameAudio__Update (Dino_BusSand_GameAudio_o* __this, const MethodInfo* method);
    */

void Dino_BusSand_GameAudio__Update_2384db0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((bRam0000000004f9c862 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbb378);
    FUN_02132f7c(PTR_DAT_04cbb478);
    FUN_02132f7c(PTR_DAT_04cbb4e0);
    FUN_02132f7c(PTR_DAT_04cbb578);
    FUN_02132f7c(PTR_DAT_04cbb610);
    bRam0000000004f9c862 = 1;
  }
  puVar2 = PTR_DAT_04cab1f0;
  if ((*(long *)(param_1 + 0x128) != 0) &&
     (uVar3 = System_Threading_Tasks_Task__get_IsCompleted_48a08a8(*(long *)(param_1 + 0x128),0),
     (uVar3 & 1) != 0)) {
    Dino_BusSand_GameAudio__FinishSynth_237e160(param_1);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    cRam0000000004f9b88a = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar6 = *(long *)puVar1;
  lVar4 = **(long **)(lVar4 + 0xb8);
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar6);
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
  if ((uVar3 & 1) == 0) {
    fVar8 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
                    /* try { // try from 02484ee8 to 02584f0f has its CatchHandler @ 0248536c */
    fVar14 = *(float *)(param_1 + 0x2c);
    fVar11 = fVar8;
    if (fVar8 <= _UNK_00e20a7c) {
      fVar11 = _UNK_00e20a7c;
    }
    fVar12 = *(float *)(param_1 + 0x20) / fVar11;
    if (0.0 < fVar14) {
      fVar15 = *(float *)(param_1 + 0x30);
      fVar17 = *(float *)(param_1 + 0x28);
      fVar9 = (float)expf(fVar8 * -10.0);
      fVar9 = 1.0 - fVar9;
      fVar10 = 1.0;
      if (fVar9 <= 1.0) {
        fVar10 = fVar9;
      }
      fVar13 = 0.0;
      if (0.0 <= fVar9) {
        fVar13 = fVar10;
      }
                    /* try { // try from 02484f4c to 02584f77 has its CatchHandler @ 02485368 */
      fVar18 = *(float *)(param_1 + 0x3c);
      fVar16 = *(float *)(param_1 + 0x40);
      *(float *)(param_1 + 0x30) = fVar15 + fVar13 * (fVar17 / fVar14 - fVar15);
      fVar9 = (float)expf(fVar8 * -6.0);
      fVar9 = 1.0 - fVar9;
      fVar10 = 1.0;
      if (fVar9 <= 1.0) {
        fVar10 = fVar9;
      }
      fVar15 = 0.0;
      if (0.0 <= fVar9) {
        fVar15 = fVar10;
      }
      *(float *)(param_1 + 0x40) = fVar16 + fVar15 * (fVar18 / fVar14 - fVar16);
    }
    fVar14 = _UNK_00e2009c;
    fVar9 = *(float *)(param_1 + 0x24);
                    /* try { // try from 02484f90 to 02584f9b has its CatchHandler @ 02485360 */
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* try { // try from 02484fa0 to 02584fa7 has its CatchHandler @ 0248534c */
    *(undefined4 *)(param_1 + 0x3c) = 0;
    fVar10 = 14.0;
    if (fVar12 <= fVar9) {
      fVar10 = fVar14;
    }
    fVar10 = (float)expf(-(fVar10 * fVar8));
                    /* try { // try from 02484fb0 to 02584fbb has its CatchHandler @ 02485348 */
    fVar10 = 1.0 - fVar10;
    fVar14 = 1.0;
    if (fVar10 <= 1.0) {
      fVar14 = fVar10;
    }
    fVar15 = 0.0;
    if (0.0 <= fVar10) {
      fVar15 = fVar14;
    }
    fVar9 = fVar9 + (fVar12 - fVar9) * fVar15;
    fVar12 = fVar9 / _UNK_00e20570;
    *(float *)(param_1 + 0x24) = fVar9;
    fVar14 = 1.0;
    if (fVar12 <= 1.0) {
      fVar14 = fVar12;
    }
    fVar10 = 0.0;
    if (0.0 <= fVar12) {
      fVar10 = fVar14;
    }
                    /* try { // try from 02484ff8 to 02584fff has its CatchHandler @ 02485380 */
    if (lVar4 == 0) {
LAB_024852e8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar12 = SQRT(fVar10);
                    /* try { // try from 02485004 to 0258500f has its CatchHandler @ 02485374 */
                    /* try { // try from 02485030 to 02585033 has its CatchHandler @ 02485370 */
                    /* try { // try from 02485034 to 0258504b has its CatchHandler @ 02485390 */
    Dino_BusSand_AudioHub__Loop_2376624
              (fVar12,fVar10 * _UNK_00e207cc + _UNK_00e20180,*(undefined4 *)(param_1 + 0x40),lVar4,
               *(undefined8 *)PTR_DAT_04cbb4e0);
    puVar2 = PTR_DAT_04cbb610;
    fVar14 = _UNK_00e2038c;
                    /* try { // try from 02485068 to 02585073 has its CatchHandler @ 0248538c */
    Dino_BusSand_AudioHub__Loop_2376624
              (fVar12,fVar10 * _UNK_00e20754 + _UNK_00e2038c,*(undefined4 *)(param_1 + 0x40),lVar4,
               *(undefined8 *)PTR_DAT_04cbb610);
    lVar6 = Dino_BusSand_AudioHub__LoopLowPass_2376c34(lVar4,*(undefined8 *)puVar2);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar7);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 024850a8 to 025850b3 has its CatchHandler @ 02485340 */
      if (lVar6 == 0) goto LAB_024852e8;
      fVar9 = 0.0;
      if (0.0 <= fVar10) {
        fVar9 = fVar10;
      }
                    /* try { // try from 024850cc to 025850cf has its CatchHandler @ 02485338 */
                    /* try { // try from 024850d0 to 025850df has its CatchHandler @ 0248533c */
      UnityEngine_AudioLowPassFilter__set_cutoffFrequency_4348f8c
                (fVar9 * _UNK_00e204a0 + 3200.0,lVar6,0);
    }
                    /* try { // try from 024850e0 to 025852f3 has its CatchHandler @ 02484c6c */
    Dino_BusSand_AudioHub__Loop_2376624
              (fVar12,*(float *)(param_1 + 0x30) * fVar14 + _UNK_00e1fdd0,
               *(undefined4 *)(param_1 + 0x40),lVar4,*(undefined8 *)PTR_DAT_04cbb378);
    fVar14 = *(float *)(param_1 + 0x34);
    fVar9 = *(float *)(param_1 + 0x38);
    fVar12 = 10.0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    fVar14 = fVar14 / fVar11;
    if (fVar14 <= fVar9) {
      fVar12 = 2.5;
    }
    fVar17 = (float)expf(-(fVar12 * fVar8));
    puVar2 = PTR_DAT_04cbb478;
    fVar12 = _UNK_00e1fea8;
    fVar13 = 1.0;
    fVar11 = 0.0;
    fVar17 = 1.0 - fVar17;
    fVar15 = fVar13;
    if (fVar17 <= 1.0) {
      fVar15 = fVar17;
    }
    fVar16 = 0.0;
    if (0.0 <= fVar17) {
      fVar16 = fVar15;
    }
    fVar9 = fVar9 + (fVar14 - fVar9) * fVar16;
    fVar15 = fVar9 / _UNK_00e20428;
    fVar14 = fVar13;
    if (fVar15 <= 1.0) {
      fVar14 = fVar15;
    }
    fVar17 = 0.0;
    if (0.0 <= fVar15) {
      fVar17 = fVar14;
    }
    fVar14 = fVar17 * _UNK_00e20390;
    *(float *)(param_1 + 0x38) = fVar9;
    Dino_BusSand_AudioHub__Loop_2376624(SQRT(fVar17),fVar14 + fVar12,0,lVar4,*(undefined8 *)puVar2);
    fVar12 = *(float *)(param_1 + 0x148);
    fVar14 = _UNK_00e20920;
    if (*(char *)(param_1 + 0x140) != '\0') {
      uVar3 = Dino_BusSand_GameAudio__get_SoundOn_237dc3c();
      fVar11 = fVar13;
      if ((uVar3 & 1) == 0) {
        fVar11 = 0.0;
      }
      fVar14 = _UNK_00e20920;
      if (*(char *)(param_1 + 0x140) != '\0') {
        fVar14 = 3.0;
      }
    }
    fVar9 = _UNK_00e20094;
    fVar15 = -(fVar8 * fVar14);
    if (0.0 <= fVar11 - fVar12) {
      fVar15 = fVar8 * fVar14;
    }
    fVar17 = *(float *)(param_1 + 0x144) * _UNK_00e20094;
    uVar5 = *(undefined8 *)PTR_DAT_04cbb578;
    fVar15 = fVar12 + fVar15;
    if (ABS(fVar11 - fVar12) <= fVar8 * fVar14) {
      fVar15 = fVar11;
    }
    *(float *)(param_1 + 0x148) = fVar15;
    Dino_BusSand_AudioHub__Loop_2376624(fVar15,0x3f800000,fVar17,lVar4,uVar5);
    uVar5 = NEON_fmov(0x3f800000,4);
    fVar12 = fVar10 * (float)_UNK_00e6a2a0 + (float)uVar5;
    fVar14 = (float)((ulong)uVar5 >> 0x20);
    fVar10 = *(float *)(param_1 + 0x138) * (float)((ulong)_UNK_00e6a2a0 >> 0x20) + fVar14;
    fVar11 = *(float *)(param_1 + 0x148) * (float)_UNK_00e6a0b0 + (float)uVar5;
    fVar14 = *(float *)(param_1 + 0x13c) * (float)((ulong)_UNK_00e6a0b0 >> 0x20) + fVar14;
    uVar3 = CONCAT44(fVar14,fVar11);
    uVar3 = uVar3 ^ (uVar3 ^ CONCAT44(fVar10,fVar12)) &
                    CONCAT44(-(uint)(fVar10 < fVar14),-(uint)(fVar12 < fVar11));
    fVar14 = (float)(uVar3 >> 0x20);
    fVar11 = (float)uVar3;
    if (fVar14 <= fVar11) {
      fVar11 = fVar14;
    }
    fVar12 = *(float *)(param_1 + 0x44);
    fVar14 = 3.0;
    if (fVar12 <= fVar11) {
      fVar14 = fVar9;
    }
    fVar10 = -(fVar8 * fVar14);
    if (0.0 <= fVar11 - fVar12) {
      fVar10 = fVar8 * fVar14;
    }
    fVar10 = fVar12 + fVar10;
    if (ABS(fVar11 - fVar12) <= fVar8 * fVar14) {
      fVar10 = fVar11;
    }
    *(float *)(param_1 + 0x44) = fVar10;
  }
  return;
}

