/* IL2CPP: Dino.BusSand.App.Audio$$ApplySettings
void Dino_BusSand_App_Audio__ApplySettings (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Audio$$ApplySettings
   void Dino_BusSand_App_Audio__ApplySettings (const MethodInfo* method); */

void Dino_BusSand_App_Audio__ApplySettings_214dc9c(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar11;
  uint uVar12;
  
  puVar3 = PTR_DAT_04cab1e8;
  if ((bRam0000000004f9b7a7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04cab1e8);
    bRam0000000004f9b7a7 = 1;
  }
  puVar2 = PTR_DAT_04cab1f0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  bVar5 = Dino_BusSand_App_Audio__get_MusicOn_214d5d0();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  puVar3 = PTR_DAT_04cab1f0;
  uVar10 = 0;
  if ((bRam0000000004f9c7e2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c7e2 = 1;
    uVar10 = extraout_x1;
  }
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar3;
    uVar10 = extraout_x1_00;
  }
  cVar4 = cRam0000000004f9b88a;
  *(byte *)(*(long *)(lVar8 + 0xb8) + 0x2a) = bVar5 & 1;
  if (cVar4 == '\0') {
    FUN_02132f7c(puVar3,uVar10);
    lVar8 = *(long *)puVar3;
    cRam0000000004f9b88a = '\x01';
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar3;
  }
  uVar10 = **(undefined8 **)(lVar8 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    cRam0000000004f9b88a = '\x01';
  }
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_04cab1f0;
  lVar8 = **(long **)(lVar8 + 0xb8);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9c7f9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c7f9 = 1;
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar3;
  }
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 0x29) == '\0') {
    Dino_BusSand_AudioHub__StopAllSfx_2376378(lVar8);
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar6 = *(long *)(lVar8 + 0x78);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      uVar12 = 0;
      do {
        if (uVar1 <= uVar12) goto LAB_024730fc;
        lVar11 = *(long *)(lVar6 + (long)(int)uVar12 * 8 + 0x20);
        if (lVar11 == 0) goto LAB_024730f8;
        uVar10 = UnityEngine_AudioSource__get_clip_434866c(lVar11,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
        if ((uVar9 & 1) == 0) {
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar3;
          }
          if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x2a) == '\0') {
            uVar9 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar11,0);
            if ((uVar9 & 1) != 0) {
              UnityEngine_AudioSource__Pause_43488c0(lVar11,0);
              goto LAB_02472fe8;
            }
            lVar7 = *(long *)puVar3;
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar3;
          }
          if (((*(char *)(*(long *)(lVar7 + 0xb8) + 0x2a) != '\0') &&
              (uVar9 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar11,0), (uVar9 & 1) == 0))
             && (*(long *)(lVar8 + 0x88) != 0)) {
            lVar7 = *(long *)(lVar8 + 0x78);
            if (lVar7 == 0) goto LAB_024730f8;
            if (*(uint *)(lVar7 + 0x18) <= *(uint *)(lVar8 + 0x80)) goto LAB_024730fc;
            uVar10 = *(undefined8 *)(lVar7 + (long)(int)*(uint *)(lVar8 + 0x80) * 8 + 0x20);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar11,uVar10,0);
            if ((uVar9 & 1) != 0) {
              UnityEngine_AudioSource__UnPause_4348974(lVar11,0);
            }
          }
        }
LAB_02472fe8:
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar1);
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar3;
    }
    if ((*(char *)(*(long *)(lVar6 + 0xb8) + 0x2a) == '\0') || (*(long *)(lVar8 + 0x88) == 0)) {
      return;
    }
    lVar6 = *(long *)(lVar8 + 0x78);
    if (lVar6 != 0) {
      if (*(uint *)(lVar6 + 0x18) <= *(uint *)(lVar8 + 0x80)) {
LAB_024730fc:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      lVar6 = *(long *)(lVar6 + (long)(int)*(uint *)(lVar8 + 0x80) * 8 + 0x20);
      if (lVar6 != 0) {
        uVar9 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar6,0);
        if ((uVar9 & 1) != 0) {
          return;
        }
        lVar6 = *(long *)(lVar8 + 0x78);
        if (lVar6 != 0) {
          if (*(uint *)(lVar6 + 0x18) <= *(uint *)(lVar8 + 0x80)) goto LAB_024730fc;
          lVar6 = *(long *)(lVar6 + (long)(int)*(uint *)(lVar8 + 0x80) * 8 + 0x20);
          if (lVar6 != 0) {
            uVar10 = UnityEngine_AudioSource__get_clip_434866c(lVar6,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar2);
            }
            uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
            if ((uVar9 & 1) == 0) {
              return;
            }
            lVar6 = *(long *)(lVar8 + 0x78);
            if (lVar6 != 0) {
              if (*(uint *)(lVar6 + 0x18) <= *(uint *)(lVar8 + 0x80)) goto LAB_024730fc;
              lVar8 = *(long *)(lVar6 + (long)(int)*(uint *)(lVar8 + 0x80) * 8 + 0x20);
              if (lVar8 != 0) {
                if ((bRam0000000004fa5561 & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cf5ef0);
                  FUN_02132f7c(PTR_DAT_04cb1c18);
                  bRam0000000004fa5561 = 1;
                }
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_43c84f8
                            (0,*(undefined8 *)PTR_DAT_04cb1c18,0);
                }
                lVar6 = *(long *)(lVar8 + 0x10);
                if (lVar6 != 0) {
                  if (pcRam0000000004fa5580 == (code *)0x0) {
                    pcRam0000000004fa5580 = (code *)FUN_02132f40(&UNK_00e5bea3);
                  }
                    /* WARNING: Could not recover jumptable at 0x04448210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000004fa5580)(lVar6,0);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_43c84f8
                          (lVar8,*(undefined8 *)PTR_DAT_04cb1c18,0);
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

