/* IL2CPP: Dino.BusSand.AudioHub$$Loop
void Dino_BusSand_AudioHub__Loop (Dino_BusSand_AudioHub_o* __this, System_String_o* id, float level, float pitch, float pan, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.AudioHub$$Loop
   void Dino_BusSand_AudioHub__Loop (Dino_BusSand_AudioHub_o* __this, System_String_o* id, float
   level, float pitch, float pan, const MethodInfo* method); */

void Dino_BusSand_AudioHub__Loop_2376624
               (float param_1,float param_2,float param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((bRam0000000004f9c7f4 & 1) == 0) {
                    /* try { // try from 0247665c to 0257666b has its CatchHandler @ 0247666c */
    FUN_02132f7c(PTR_DAT_04cab1f0);
                    /* catch() { ... } // from try @ 024765e8 with catch @ 0247666c
                       catch() { ... } // from try @ 0247665c with catch @ 0247666c */
                    /* try { // try from 02476670 to 02576673 has its CatchHandler @ 024766dc */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 02476674 to 025766ab has its CatchHandler @ 02475fa8 */
                    /* catch() { ... } // from try @ 02476334 with catch @ 02476678 */
    bRam0000000004f9c7f4 = 1;
  }
                    /* catch() { ... } // from try @ 024762d8 with catch @ 0247667c */
                    /* catch() { ... } // from try @ 02476504 with catch @ 02476680 */
                    /* catch() { ... } // from try @ 024761b8 with catch @ 02476684 */
  lVar2 = Dino_BusSand_AudioHub__LoopVoiceOf_23768b0(param_4,param_5);
  puVar1 = PTR_DAT_04cab1f0;
                    /* catch() { ... } // from try @ 0247617c with catch @ 02476688 */
  if (lVar2 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar2 + 0x10);
  lVar3 = *(long *)PTR_DAT_04cab1f0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
                    /* try { // try from 024766ac to 025766af has its CatchHandler @ 024766c8 */
    lVar3 = *(long *)puVar1;
  }
                    /* try { // try from 024766b0 to 025766cb has its CatchHandler @ 02475fa8 */
  fVar8 = 0.0;
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 0x29) == '\0') {
LAB_024767a8:
    fVar10 = fVar8;
    if (lVar6 == 0) goto LAB_024768ac;
  }
  else {
                    /* catch() { ... } // from try @ 024766ac with catch @ 024766c8 */
    if (*(long *)(lVar2 + 0x18) == 0) goto LAB_024768ac;
                    /* try { // try from 024766cc to 025766d3 has its CatchHandler @ 024766dc */
    fVar10 = *(float *)(lVar2 + 0x20);
                    /* try { // try from 024766d4 to 025766df has its CatchHandler @ 02475fa8 */
    fVar7 = (float)Dino_BusSand_AudioHub__BusGain_2374ae8
                             (param_4,*(undefined8 *)(*(long *)(lVar2 + 0x18) + 0x20));
                    /* catch() { ... } // from try @ 024765cc with catch @ 024766dc
                       catch() { ... } // from try @ 02476670 with catch @ 024766dc
                       catch() { ... } // from try @ 024766cc with catch @ 024766dc */
    fVar7 = fVar10 * param_1 * fVar7;
    fVar10 = 1.0;
    if (fVar7 <= 1.0) {
      fVar10 = fVar7;
    }
    if ((fVar7 < 0.0) || (fVar8 = fVar10, fVar10 <= _UNK_00e20208)) goto LAB_024767a8;
    if (lVar6 == 0) goto LAB_024768ac;
    uVar4 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar6,0);
    if ((uVar4 & 1) == 0) {
      uVar5 = UnityEngine_AudioSource__get_clip_434866c(lVar6,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
      if ((uVar4 & 1) != 0) {
        lVar3 = UnityEngine_AudioSource__get_clip_434866c(lVar6,0);
        if (lVar3 == 0) goto LAB_024768ac;
        fVar8 = (float)UnityEngine_AudioClip__get_length_4346cd4(lVar3,0);
        UnityEngine_Random__Range_43b64a8(0,fVar8 * _UNK_00e1fea8,0);
        UnityEngine_AudioSource__set_time_4348598(lVar6,0);
        UnityEngine_AudioSource__Play_4348894(lVar6,0);
      }
    }
  }
  UnityEngine_AudioSource__set_volume_434840c(fVar10,lVar6,0);
  if (*(long *)(lVar2 + 0x18) != 0) {
    fVar7 = (float)exp2f(*(float *)(*(long *)(lVar2 + 0x18) + 0x44) / 1200.0);
    fVar7 = fVar7 * param_2;
    fVar8 = 3.0;
    if (fVar7 <= 3.0) {
      fVar8 = fVar7;
    }
    fVar9 = _UNK_00e20754;
    if (_UNK_00e20754 <= fVar7) {
      fVar9 = fVar8;
    }
    UnityEngine_AudioSource__set_pitch_43484e0(fVar9,lVar6,0);
    lVar2 = *(long *)(lVar2 + 0x18);
    if (lVar2 != 0) {
      fVar8 = 0.0;
      if (*(char *)(lVar2 + 0x60) == '\0') {
        fVar7 = *(float *)(lVar2 + 100);
        if (fVar7 <= 0.0) {
          fVar7 = 1.0;
        }
        fVar7 = fVar7 * param_3;
        fVar9 = 1.0;
        if (fVar7 <= 1.0) {
          fVar9 = fVar7;
        }
        fVar8 = -1.0;
        if (-1.0 <= fVar7) {
          fVar8 = fVar9;
        }
      }
      UnityEngine_AudioSource__set_panStereo_4348d18(fVar8,lVar6,0);
      if ((_UNK_00e20208 < fVar10) ||
         (uVar4 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar6,0), (uVar4 & 1) == 0)) {
        return;
      }
      if ((bRam0000000004fa5563 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5ef0);
        bRam0000000004fa5563 = 1;
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar2 = *(long *)(lVar6 + 0x10);
      if (lVar2 != 0) {
        if (pcRam0000000004fa5590 == (code *)0x0) {
          pcRam0000000004fa5590 = (code *)FUN_02132f40(&UNK_00e5e433);
        }
                    /* WARNING: Could not recover jumptable at 0x044483c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa5590)(lVar2,1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
    }
  }
LAB_024768ac:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

