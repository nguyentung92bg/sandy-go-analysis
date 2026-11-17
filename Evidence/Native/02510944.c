/* IL2CPP: Dino.BusSand.Core.LevelData$$Load
Dino_BusSand_Core_LevelData_o* Dino_BusSand_Core_LevelData__Load (int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.LevelData$$Load
   Dino_BusSand_Core_LevelData_o* Dino_BusSand_Core_LevelData__Load (int32_t level, const
   MethodInfo* method); */

void Dino_BusSand_Core_LevelData__Load_2410944(undefined4 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04cbe560;
  if ((bRam0000000004f9cb44 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe560);
    bRam0000000004f9cb44 = 1;
  }
  uStack_24 = param_1;
  uVar2 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_24);
  System_String__Format_46c8eb8(*(undefined8 *)puVar1,uVar2,0);
  Dino_BusSand_Core_LevelData__LoadByName_2410854();
  return;
}

