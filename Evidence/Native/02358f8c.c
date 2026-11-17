/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$get_PeriodCurrentStageCount
int32_t Dino_BusSand_App_Meta_YachtRacingData__get_PeriodCurrentStageCount (Dino_BusSand_App_Meta_YachtRacingData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$get_PeriodCurrentStageCount
   int32_t Dino_BusSand_App_Meta_YachtRacingData__get_PeriodCurrentStageCount
   (Dino_BusSand_App_Meta_YachtRacingData_o* __this, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_YachtRacingData__get_PeriodCurrentStageCount_2258f8c(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  iVar3 = *(int *)(param_1 + 0x78);
  if (iVar3 == 1) {
    puVar5 = (uint *)(param_1 + 0x8c);
  }
  else if (iVar3 == 2) {
    puVar5 = (uint *)(param_1 + 0x90);
  }
  else {
    if (iVar3 != 3) {
      return 0;
    }
    puVar5 = (uint *)(param_1 + 0x94);
  }
  uVar4 = *puVar5;
  uVar2 = uVar4;
  if (uVar4 < 2) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (-1 < (int)uVar4) {
    uVar1 = uVar2;
  }
  return uVar1;
}

