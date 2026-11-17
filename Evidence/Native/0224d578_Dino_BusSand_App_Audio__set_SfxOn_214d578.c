/* IL2CPP: Dino.BusSand.App.Audio$$set_SfxOn
void Dino_BusSand_App_Audio__set_SfxOn (bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Audio$$set_SfxOn
   void Dino_BusSand_App_Audio__set_SfxOn (bool value, const MethodInfo* method); */

void Dino_BusSand_App_Audio__set_SfxOn_214d578(byte param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar10;
  uint uVar11;
  
  puVar3 = PTR_DAT_04cab1f0;
  if ((bRam0000000004f9b79f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    bRam0000000004f9b79f = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cab1f0;
  uVar9 = 0;
  if ((bRam0000000004f9c7e0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c7e0 = 1;
    uVar9 = extraout_x1;
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
    uVar9 = extraout_x1_00;
  }
  cVar4 = cRam0000000004f9b88a;
  *(byte *)(*(long *)(lVar5 + 0xb8) + 0x29) = param_1 & 1;
  if (cVar4 == '\0') {
    FUN_02132f7c(puVar3,uVar9);
    lVar5 = *(long *)puVar3;
    cRam0000000004f9b88a = '\x01';
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  uVar9 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    cRam0000000004f9b88a = '\x01';
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_04cab1f0;
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9c7f9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c7f9 = 1;
  }
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar3;
  }
  if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x29) == '\0') {
    Dino_BusSand_AudioHub__StopAllSfx_2376378(lVar5);
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar7 = *(long *)(lVar5 + 0x78);
  if (lVar7 != 0) {
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar1) {
      uVar11 = 0;
      do {
        if (uVar1 <= uVar11) goto LAB_024730fc;
        lVar10 = *(long *)(lVar7 + (long)(int)uVar11 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_024730f8;
        uVar9 = UnityEngine_AudioSource__get_clip_434866c(lVar10,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
        if ((uVar6 & 1) == 0) {
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar8 = *(long *)puVar3;
          }
          if (*(char *)(*(long *)(lVar8 + 0xb8) + 0x2a) == '\0') {
            uVar6 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar10,0);
            if ((uVar6 & 1) != 0) {
              UnityEngine_AudioSource__Pause_43488c0(lVar10,0);
              goto LAB_02472fe8;
            }
            lVar8 = *(long *)puVar3;
          }
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar8 = *(long *)puVar3;
          }
          if (((*(char *)(*(long *)(lVar8 + 0xb8) + 0x2a) != '\0') &&
              (uVar6 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar10,0), (uVar6 & 1) == 0))
             && (*(long *)(lVar5 + 0x88) != 0)) {
            lVar8 = *(long *)(lVar5 + 0x78);
            if (lVar8 == 0) goto LAB_024730f8;
            if (*(uint *)(lVar8 + 0x18) <= *(uint *)(lVar5 + 0x80)) goto LAB_024730fc;
            uVar9 = *(undefined8 *)(lVar8 + (long)(int)*(uint *)(lVar5 + 0x80) * 8 + 0x20);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar10,uVar9,0);
            if ((uVar6 & 1) != 0) {
              UnityEngine_AudioSource__UnPause_4348974(lVar10,0);
            }
          }
        }
LAB_02472fe8:
        uVar1 = *(uint *)(lVar7 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar1);
    }
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar3;
    }
    if ((*(char *)(*(long *)(lVar7 + 0xb8) + 0x2a) == '\0') || (*(long *)(lVar5 + 0x88) == 0)) {
      return;
    }
    lVar7 = *(long *)(lVar5 + 0x78);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(lVar5 + 0x80)) {
LAB_024730fc:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      lVar7 = *(long *)(lVar7 + (long)(int)*(uint *)(lVar5 + 0x80) * 8 + 0x20);
      if (lVar7 != 0) {
        uVar6 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar7,0);
        if ((uVar6 & 1) != 0) {
          return;
        }
        lVar7 = *(long *)(lVar5 + 0x78);
        if (lVar7 != 0) {
          if (*(uint *)(lVar7 + 0x18) <= *(uint *)(lVar5 + 0x80)) goto LAB_024730fc;
          lVar7 = *(long *)(lVar7 + (long)(int)*(uint *)(lVar5 + 0x80) * 8 + 0x20);
          if (lVar7 != 0) {
            uVar9 = UnityEngine_AudioSource__get_clip_434866c(lVar7,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar2);
            }
            uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
            if ((uVar6 & 1) == 0) {
              return;
            }
            lVar7 = *(long *)(lVar5 + 0x78);
            if (lVar7 != 0) {
              if (*(uint *)(lVar7 + 0x18) <= *(uint *)(lVar5 + 0x80)) goto LAB_024730fc;
              lVar5 = *(long *)(lVar7 + (long)(int)*(uint *)(lVar5 + 0x80) * 8 + 0x20);
              if (lVar5 != 0) {
                if ((bRam0000000004fa5561 & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cf5ef0);
                  FUN_02132f7c(PTR_DAT_04cb1c18);
                  bRam0000000004fa5561 = 1;
                }
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_43c84f8
                            (0,*(undefined8 *)PTR_DAT_04cb1c18,0);
                }
                lVar7 = *(long *)(lVar5 + 0x10);
                if (lVar7 != 0) {
                  if (pcRam0000000004fa5580 == (code *)0x0) {
                    pcRam0000000004fa5580 = (code *)FUN_02132f40(&UNK_00e5bea3);
                  }
                    /* WARNING: Could not recover jumptable at 0x04448210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000004fa5580)(lVar7,0);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_43c84f8
                          (lVar5,*(undefined8 *)PTR_DAT_04cb1c18,0);
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

