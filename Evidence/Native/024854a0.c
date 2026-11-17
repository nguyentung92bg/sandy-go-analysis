/* IL2CPP: Dino.BusSand.GameAudio$$Pencil
void Dino_BusSand_GameAudio__Pencil (Dino_BusSand_GameAudio_o* __this, float level, float pitch, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio$$Pencil
   void Dino_BusSand_GameAudio__Pencil (Dino_BusSand_GameAudio_o* __this, float level, float pitch,
   const MethodInfo* method); */

void Dino_BusSand_GameAudio__Pencil_23854a0(float param_1,float param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar2 = PTR_DAT_04cab1f0;
  if ((bRam0000000004f9c866 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbb628);
    bRam0000000004f9c866 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    cRam0000000004f9b88a = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  uVar8 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    cRam0000000004f9b88a = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar8 = *(undefined8 *)PTR_DAT_04cbb628;
  if ((bRam0000000004f9c7f4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c7f4 = 1;
  }
  lVar3 = Dino_BusSand_AudioHub__LoopVoiceOf_23768b0(lVar5,uVar8);
  puVar2 = PTR_DAT_04cab1f0;
  if (lVar3 == 0) {
    return;
  }
  lVar7 = *(long *)(lVar3 + 0x10);
  lVar4 = *(long *)PTR_DAT_04cab1f0;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  fVar10 = 0.0;
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x29) == '\0') {
LAB_024767a8:
    fVar12 = fVar10;
    if (lVar7 == 0) goto LAB_024768ac;
  }
  else {
    if (*(long *)(lVar3 + 0x18) == 0) goto LAB_024768ac;
    fVar12 = *(float *)(lVar3 + 0x20);
    fVar9 = (float)Dino_BusSand_AudioHub__BusGain_2374ae8
                             (lVar5,*(undefined8 *)(*(long *)(lVar3 + 0x18) + 0x20));
    fVar9 = fVar12 * param_1 * fVar9;
    fVar12 = 1.0;
    if (fVar9 <= 1.0) {
      fVar12 = fVar9;
    }
    if ((fVar9 < 0.0) || (fVar10 = fVar12, fVar12 <= _UNK_00e20208)) goto LAB_024767a8;
    if (lVar7 == 0) goto LAB_024768ac;
    uVar6 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar7,0);
    if ((uVar6 & 1) == 0) {
      uVar8 = UnityEngine_AudioSource__get_clip_434866c(lVar7,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
      if ((uVar6 & 1) != 0) {
        lVar5 = UnityEngine_AudioSource__get_clip_434866c(lVar7,0);
        if (lVar5 == 0) goto LAB_024768ac;
        fVar10 = (float)UnityEngine_AudioClip__get_length_4346cd4(lVar5,0);
        UnityEngine_Random__Range_43b64a8(0,fVar10 * _UNK_00e1fea8,0);
        UnityEngine_AudioSource__set_time_4348598(lVar7,0);
        UnityEngine_AudioSource__Play_4348894(lVar7,0);
      }
    }
  }
  UnityEngine_AudioSource__set_volume_434840c(fVar12,lVar7,0);
  if (*(long *)(lVar3 + 0x18) != 0) {
    fVar9 = (float)exp2f(*(float *)(*(long *)(lVar3 + 0x18) + 0x44) / 1200.0);
    fVar9 = fVar9 * param_2;
    fVar10 = 3.0;
    if (fVar9 <= 3.0) {
      fVar10 = fVar9;
    }
    fVar11 = _UNK_00e20754;
    if (_UNK_00e20754 <= fVar9) {
      fVar11 = fVar10;
    }
    UnityEngine_AudioSource__set_pitch_43484e0(fVar11,lVar7,0);
    lVar5 = *(long *)(lVar3 + 0x18);
    if (lVar5 != 0) {
      fVar10 = 0.0;
      if (*(char *)(lVar5 + 0x60) == '\0') {
        fVar9 = *(float *)(lVar5 + 100);
        if (fVar9 <= 0.0) {
          fVar9 = 1.0;
        }
        fVar9 = fVar9 * 0.0;
        fVar11 = 1.0;
        if (fVar9 <= 1.0) {
          fVar11 = fVar9;
        }
        fVar10 = -1.0;
        if (-1.0 <= fVar9) {
          fVar10 = fVar11;
        }
      }
      UnityEngine_AudioSource__set_panStereo_4348d18(fVar10,lVar7,0);
      if ((fVar12 <= _UNK_00e20208) &&
         (uVar6 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar7,0), (uVar6 & 1) != 0)) {
        if ((bRam0000000004fa5563 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf5ef0);
          bRam0000000004fa5563 = 1;
        }
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar5 = *(long *)(lVar7 + 0x10);
        if (lVar5 != 0) {
          if (pcRam0000000004fa5590 == (code *)0x0) {
            pcRam0000000004fa5590 = (code *)FUN_02132f40(&UNK_00e5e433);
          }
                    /* WARNING: Could not recover jumptable at 0x044483c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa5590)(lVar5,1);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
      }
      return;
    }
  }
LAB_024768ac:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

