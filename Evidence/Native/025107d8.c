/* IL2CPP: Dino.BusSand.Core.LevelCatalog$$Load
Dino_BusSand_Core_LevelData_o* Dino_BusSand_Core_LevelCatalog__Load (int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.LevelCatalog$$Load
   Dino_BusSand_Core_LevelData_o* Dino_BusSand_Core_LevelCatalog__Load (int32_t level, const
   MethodInfo* method); */

void Dino_BusSand_Core_LevelCatalog__Load_24107d8(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb1868;
  if ((bRam0000000004f9cb41 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1868);
    bRam0000000004f9cb41 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Core_LevelCatalog__FileFor_2410524(param_1);
  lVar2 = Dino_BusSand_Core_LevelData__LoadByName_2410854();
  if ((lVar2 == 0) && (lVar2 = Dino_BusSand_Core_LevelData__Load_2410944(1), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(char *)(lVar2 + 0x48) != '\0') {
    *(undefined4 *)(lVar2 + 0x10) = param_1;
  }
  return;
}

