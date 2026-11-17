/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_JamPressure
float Dino_BusSand_Core_StageEngine__get_JamPressure (Dino_BusSand_Core_StageEngine_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_JamPressure
   float Dino_BusSand_Core_StageEngine__get_JamPressure (Dino_BusSand_Core_StageEngine_o* __this,
   const MethodInfo* method); */

long Dino_BusSand_Core_StageEngine__get_JamPressure_2426a34(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  if ((bRam0000000004f9cba6 & 1) == 0) {
    lVar1 = FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cba6 = 1;
  }
  if ((*(char *)(param_1 + 0x80) == '\0') && (0 < *(int *)(param_1 + 0xa8))) {
    lVar1 = *(long *)(param_1 + 0x78);
    lVar2 = *(long *)(param_1 + 0xb0);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    System_Math__Max_4830fd4(0,lVar1 - lVar2,0);
    return 0;
  }
  return lVar1;
}

