/* IL2CPP: Dino.BusSand.AudioHub$$ApplyToggles
void Dino_BusSand_AudioHub__ApplyToggles (Dino_BusSand_AudioHub_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$ApplyToggles
   void Dino_BusSand_AudioHub__ApplyToggles (Dino_BusSand_AudioHub_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_AudioHub__ApplyToggles_2372e44(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  puVar3 = PTR_DAT_04cab1f0;
  if ((bRam0000000004f9c7f9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c7f9 = 1;
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x29) == '\0') {
    Dino_BusSand_AudioHub__StopAllSfx_2376378(param_1);
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)(param_1 + 0x78);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) goto LAB_024730fc;
        lVar8 = *(long *)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_024730f8;
        uVar5 = UnityEngine_AudioSource__get_clip_434866c(lVar8,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
        if ((uVar6 & 1) == 0) {
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar3;
          }
          if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x2a) == '\0') {
            uVar6 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar8,0);
            if ((uVar6 & 1) != 0) {
              UnityEngine_AudioSource__Pause_43488c0(lVar8,0);
              goto LAB_02472fe8;
            }
            lVar7 = *(long *)puVar3;
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar3;
          }
          if (((*(char *)(*(long *)(lVar7 + 0xb8) + 0x2a) != '\0') &&
              (uVar6 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar8,0), (uVar6 & 1) == 0))
             && (*(long *)(param_1 + 0x88) != 0)) {
            lVar7 = *(long *)(param_1 + 0x78);
            if (lVar7 == 0) goto LAB_024730f8;
            if (*(uint *)(lVar7 + 0x18) <= *(uint *)(param_1 + 0x80)) goto LAB_024730fc;
            uVar5 = *(undefined8 *)(lVar7 + (long)(int)*(uint *)(param_1 + 0x80) * 8 + 0x20);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar8,uVar5,0);
            if ((uVar6 & 1) != 0) {
              UnityEngine_AudioSource__UnPause_4348974(lVar8,0);
            }
          }
        }
LAB_02472fe8:
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar1);
    }
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar3;
    }
    if ((*(char *)(*(long *)(lVar4 + 0xb8) + 0x2a) == '\0') || (*(long *)(param_1 + 0x88) == 0)) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x78);
    if (lVar4 != 0) {
      if (*(uint *)(lVar4 + 0x18) <= *(uint *)(param_1 + 0x80)) {
LAB_024730fc:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      lVar4 = *(long *)(lVar4 + (long)(int)*(uint *)(param_1 + 0x80) * 8 + 0x20);
      if (lVar4 != 0) {
        uVar6 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar4,0);
        if ((uVar6 & 1) != 0) {
          return;
        }
        lVar4 = *(long *)(param_1 + 0x78);
        if (lVar4 != 0) {
          if (*(uint *)(lVar4 + 0x18) <= *(uint *)(param_1 + 0x80)) goto LAB_024730fc;
          lVar4 = *(long *)(lVar4 + (long)(int)*(uint *)(param_1 + 0x80) * 8 + 0x20);
          if (lVar4 != 0) {
            uVar5 = UnityEngine_AudioSource__get_clip_434866c(lVar4,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar2);
            }
            uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
            if ((uVar6 & 1) == 0) {
              return;
            }
            lVar4 = *(long *)(param_1 + 0x78);
            if (lVar4 != 0) {
              if (*(uint *)(lVar4 + 0x18) <= *(uint *)(param_1 + 0x80)) goto LAB_024730fc;
              lVar4 = *(long *)(lVar4 + (long)(int)*(uint *)(param_1 + 0x80) * 8 + 0x20);
              if (lVar4 != 0) {
                if ((bRam0000000004fa5561 & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cf5ef0);
                  FUN_02132f7c(PTR_DAT_04cb1c18);
                  bRam0000000004fa5561 = 1;
                }
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_43c84f8
                            (0,*(undefined8 *)PTR_DAT_04cb1c18,0);
                }
                lVar8 = *(long *)(lVar4 + 0x10);
                if (lVar8 != 0) {
                  if (pcRam0000000004fa5580 == (code *)0x0) {
                    pcRam0000000004fa5580 = (code *)FUN_02132f40(&UNK_00e5bea3);
                  }
                    /* WARNING: Could not recover jumptable at 0x04448210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000004fa5580)(lVar8,0);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_43c84f8
                          (lVar4,*(undefined8 *)PTR_DAT_04cb1c18,0);
              }
            }
          }
        }
      }
    }
  }
LAB_024730f8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

