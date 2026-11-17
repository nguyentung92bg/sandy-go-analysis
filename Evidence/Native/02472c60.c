/* IL2CPP: Dino.BusSand.AudioHub$$set_PreloadDone
void Dino_BusSand_AudioHub__set_PreloadDone (bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$set_PreloadDone
   void Dino_BusSand_AudioHub__set_PreloadDone (bool value, const MethodInfo* method); */

void Dino_BusSand_AudioHub__set_PreloadDone_2372c60(byte param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cab1f0;
  if ((bRam0000000004f9c7de & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    bRam0000000004f9c7de = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  *(byte *)(*(long *)(lVar2 + 0xb8) + 0x28) = param_1 & 1;
  return;
}

