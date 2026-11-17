/* IL2CPP: Dino.BusSand.Core.LevelCatalog$$get_EndSuctionPct
int32_t Dino_BusSand_Core_LevelCatalog__get_EndSuctionPct (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.LevelCatalog$$get_EndSuctionPct
   int32_t Dino_BusSand_Core_LevelCatalog__get_EndSuctionPct (const MethodInfo* method); */

undefined4 Dino_BusSand_Core_LevelCatalog__get_EndSuctionPct_2410720(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04cb1868;
  if ((bRam0000000004f9cb3e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1868);
    bRam0000000004f9cb3e = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Core_LevelCatalog__Ensure_240fb0c();
  return *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc);
}

