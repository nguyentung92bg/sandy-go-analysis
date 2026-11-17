/* IL2CPP: Dino.BusSand.App.Levels.LevelDatabase$$DesignLevelId
int32_t Dino_BusSand_App_Levels_LevelDatabase__DesignLevelId (int32_t displayLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Levels.LevelDatabase$$DesignLevelId
   int32_t Dino_BusSand_App_Levels_LevelDatabase__DesignLevelId (int32_t displayLevel, const
   MethodInfo* method); */

uint Dino_BusSand_App_Levels_LevelDatabase__DesignLevelId_229ad40(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  
  puVar3 = PTR_DAT_04cb1868;
  if ((bRam0000000004f9c21b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1868);
    bRam0000000004f9c21b = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_Core_LevelCatalog__get_Count_2410650(0);
  if ((int)uVar4 < (int)param_1) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar5 = Dino_BusSand_Core_LevelCatalog__get_LoopFrom_24106c4(0);
    if (uVar4 - iVar5 < 0x7fffffff) {
      iVar1 = (uVar4 - iVar5) + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = (int)(~uVar4 + param_1) / iVar1;
      }
      uVar4 = ((~uVar4 + param_1) - iVar2 * iVar1) + iVar5;
    }
  }
  else {
    uVar4 = param_1;
    if ((int)param_1 < 2) {
      uVar4 = 1;
    }
  }
  return uVar4;
}

