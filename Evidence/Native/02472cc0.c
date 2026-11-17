/* IL2CPP: Dino.BusSand.AudioHub$$get_SfxOn
bool Dino_BusSand_AudioHub__get_SfxOn (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$get_SfxOn
   bool Dino_BusSand_AudioHub__get_SfxOn (const MethodInfo* method); */

undefined1 Dino_BusSand_AudioHub__get_SfxOn_2372cc0(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cab1f0;
  if ((bRam0000000004f9c7df & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    bRam0000000004f9c7df = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined1 *)(*(long *)(lVar2 + 0xb8) + 0x29);
}

