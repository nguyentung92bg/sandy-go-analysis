/* IL2CPP: Dino.BusSand.AudioHub$$get_PreloadDone
bool Dino_BusSand_AudioHub__get_PreloadDone (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$get_PreloadDone
   bool Dino_BusSand_AudioHub__get_PreloadDone (const MethodInfo* method); */

undefined1 Dino_BusSand_AudioHub__get_PreloadDone_2372c08(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cab1f0;
  if ((bRam0000000004f9c7dd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    bRam0000000004f9c7dd = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined1 *)(*(long *)(lVar2 + 0xb8) + 0x28);
}

