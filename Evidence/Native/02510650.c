/* IL2CPP: Dino.BusSand.Core.LevelCatalog$$get_Count
int32_t Dino_BusSand_Core_LevelCatalog__get_Count (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.LevelCatalog$$get_Count
   int32_t Dino_BusSand_Core_LevelCatalog__get_Count (const MethodInfo* method); */

undefined4 Dino_BusSand_Core_LevelCatalog__get_Count_2410650(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb1868;
  if ((bRam0000000004f9cb3c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1868);
    FUN_02132f7c(PTR_DAT_04caba60);
    bRam0000000004f9cb3c = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Core_LevelCatalog__Ensure_240fb0c();
  lVar2 = **(long **)(*(long *)puVar1 + 0xb8);
  if (lVar2 != 0) {
    return *(undefined4 *)(lVar2 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

