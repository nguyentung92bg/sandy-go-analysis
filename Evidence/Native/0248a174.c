/* IL2CPP: Dino.BusSand.RenderQuality$$get_RealShadows
bool Dino_BusSand_RenderQuality__get_RealShadows (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.RenderQuality$$get_RealShadows
   bool Dino_BusSand_RenderQuality__get_RealShadows (const MethodInfo* method); */

bool Dino_BusSand_RenderQuality__get_RealShadows_238a174(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb27f8;
  if ((bRam0000000004f9c88f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb27f8);
    bRam0000000004f9c88f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9c49a == '\0') {
    FUN_02132f7c(PTR_DAT_04cb27f8);
    cRam0000000004f9c49a = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return **(int **)(lVar2 + 0xb8) != 0;
}

