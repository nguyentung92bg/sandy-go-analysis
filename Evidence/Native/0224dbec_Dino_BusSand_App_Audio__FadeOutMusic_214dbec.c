/* IL2CPP: Dino.BusSand.App.Audio$$FadeOutMusic
void Dino_BusSand_App_Audio__FadeOutMusic (float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Audio$$FadeOutMusic
   void Dino_BusSand_App_Audio__FadeOutMusic (float seconds, const MethodInfo* method); */

void Dino_BusSand_App_Audio__FadeOutMusic_214dbec(float param_1)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  
  puVar1 = PTR_DAT_04cab1f0;
  if ((bRam0000000004f9b7a6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    bRam0000000004f9b7a6 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    cRam0000000004f9b88a = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x98) = 0;
    fVar3 = 1.0 / param_1;
    if (param_1 <= 0.0) {
      fVar3 = 100.0;
    }
    *(float *)(lVar2 + 0x9c) = fVar3;
    return;
  }
  return;
}

