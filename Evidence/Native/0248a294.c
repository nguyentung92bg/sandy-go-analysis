/* IL2CPP: Dino.BusSand.RenderQuality$$get_BlobShadowStrength
float Dino_BusSand_RenderQuality__get_BlobShadowStrength (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.RenderQuality$$get_BlobShadowStrength
   float Dino_BusSand_RenderQuality__get_BlobShadowStrength (const MethodInfo* method); */

undefined4 Dino_BusSand_RenderQuality__get_BlobShadowStrength_238a294(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_DAT_04cb27f8;
  if ((bRam0000000004f9c891 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb27f8);
    bRam0000000004f9c891 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = Dino_BusSand_RenderQuality__get_RealShadows_238a174();
  uVar3 = _UNK_00e203f4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0x3f800000;
  }
  return uVar3;
}

