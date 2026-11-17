/* IL2CPP: Dino.BusSand.App.Audio$$get_MusicOn
bool Dino_BusSand_App_Audio__get_MusicOn (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Audio$$get_MusicOn
   bool Dino_BusSand_App_Audio__get_MusicOn (const MethodInfo* method); */

undefined1 Dino_BusSand_App_Audio__get_MusicOn_214d5d0(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cab1f0;
  if ((bRam0000000004f9b7a0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    bRam0000000004f9b7a0 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b887 == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    cRam0000000004f9b887 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined1 *)(*(long *)(lVar2 + 0xb8) + 0x2a);
}

