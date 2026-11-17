/* IL2CPP: Dino.BusSand.Core.SimBot$$Play
int32_t Dino_BusSand_Core_SimBot__Play (Dino_BusSand_Core_StageEngine_o* e, int32_t maxTicks, int32_t decisionEvery, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SimBot$$Play
   int32_t Dino_BusSand_Core_SimBot__Play (Dino_BusSand_Core_StageEngine_o* e, int32_t maxTicks,
   int32_t decisionEvery, const MethodInfo* method); */

int Dino_BusSand_Core_SimBot__Play_241d5bc(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  Dino_BusSand_Core_StageEngine__Settle_241d654();
  if (param_2 < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    iVar3 = 0;
    do {
      if (*(char *)(param_1 + 0x80) != '\0') {
        return iVar2;
      }
      iVar1 = 0;
      if (param_3 != 0) {
        iVar1 = iVar3 / param_3;
      }
      if ((iVar3 == iVar1 * param_3) &&
         (iVar1 = Dino_BusSand_Core_SimBot__BestTap_241b8c0(0x3f800000,param_1), -1 < iVar1)) {
        Dino_BusSand_Core_StageEngine__TapTruck_241d6d8(param_1,iVar1);
        iVar2 = iVar2 + 1;
      }
      Dino_BusSand_Core_StageEngine__Tick_241dbd8(param_1);
      iVar3 = iVar3 + 1;
    } while (param_2 != iVar3);
  }
  return iVar2;
}

