/* IL2CPP: Dino.BusSand.GameAudio$$get_SoundOn
bool Dino_BusSand_GameAudio__get_SoundOn (Dino_BusSand_GameAudio_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAudio$$get_SoundOn
   bool Dino_BusSand_GameAudio__get_SoundOn (Dino_BusSand_GameAudio_o* __this, const MethodInfo*
   method); */

undefined1 Dino_BusSand_GameAudio__get_SoundOn_237dc3c(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cab1f0;
  if ((bRam0000000004f9c81f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    bRam0000000004f9c81f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b886 == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    cRam0000000004f9b886 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined1 *)(*(long *)(lVar2 + 0xb8) + 0x29);
}

