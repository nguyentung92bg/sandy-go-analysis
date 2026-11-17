/* IL2CPP: Dino.BusSand.Core.StageEngine$$RescueTicks
int32_t Dino_BusSand_Core_StageEngine__RescueTicks (float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$RescueTicks
   int32_t Dino_BusSand_Core_StageEngine__RescueTicks (float seconds, const MethodInfo* method); */

int Dino_BusSand_Core_StageEngine__RescueTicks_2423258(float param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dStack_18;
  
  if ((bRam0000000004f9cb9e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb9e = 1;
  }
  if (param_1 <= 0.0) {
    return 0;
  }
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar3 = (double)param_1 * 60.0;
  dVar2 = (double)FUN_049b52f0(dVar3,&dStack_18);
  if (0.0 <= dVar3) {
    if (dVar2 != 0.5) {
      dStack_18 = (double)(long)(dVar3 + 0.5);
      goto LAB_02523324;
    }
    dVar2 = 1.0;
  }
  else {
    if (dVar2 != -0.5) {
      dStack_18 = (double)(long)(dVar3 + -0.5);
      goto LAB_02523324;
    }
    dVar2 = -1.0;
  }
  if (((long)dStack_18 & 1U) != 0) {
    dStack_18 = dStack_18 + dVar2;
  }
LAB_02523324:
  iVar1 = -0x80000000;
  if (dStack_18 != INFINITY) {
    iVar1 = (int)dStack_18;
  }
  return iVar1;
}

