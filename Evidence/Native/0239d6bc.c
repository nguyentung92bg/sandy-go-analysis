/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$RefreshCounters
void Dino_BusSand_App_Gameplay_GameplayController__RefreshCounters (Dino_BusSand_App_Gameplay_GameplayController_o* __this, bool force, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$RefreshCounters
   void Dino_BusSand_App_Gameplay_GameplayController__RefreshCounters
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, bool force, const MethodInfo* method);
    */

void Dino_BusSand_App_Gameplay_GameplayController__RefreshCounters_229d6bc
               (long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dStack_28;
  
  lVar3 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248();
  if (lVar3 == 0) {
    return;
  }
  if (*(long *)(lVar3 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar2 = Dino_BusSand_Core_TruckGrid__get_Count_24236a8(*(long *)(lVar3 + 0x28),0);
  fVar5 = (float)Dino_BusSand_Core_StageEngine__get_Progress_2423b08(lVar3,0);
  if (cRam0000000004f9b891 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b891 = '\x01';
  }
  fVar5 = (1.0 - fVar5) * 100.0;
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar7 = (double)fVar5;
  dVar6 = (double)FUN_049b52f0(dVar7,&dStack_28);
  if (0.0 <= fVar5) {
    if (dVar6 != 0.5) {
      dStack_28 = (double)(long)(dVar7 + 0.5);
      goto LAB_0239d7b8;
    }
    dVar6 = 1.0;
  }
  else {
    if (dVar6 != -0.5) {
      dStack_28 = (double)(long)(dVar7 + -0.5);
      goto LAB_0239d7b8;
    }
    dVar6 = -1.0;
  }
  if (((long)dStack_28 & 1U) != 0) {
    dStack_28 = dStack_28 + dVar6;
  }
LAB_0239d7b8:
  uVar4 = (uint)dStack_28;
  if (99 < (int)uVar4) {
    uVar4 = 100;
  }
  uVar1 = 0;
  if (dStack_28 != INFINITY) {
    uVar1 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  }
  *(uint *)(param_1 + 0x40) = uVar1;
  if (((param_2 & 1) != 0) || (iVar2 != *(int *)(param_1 + 0x24))) {
    lVar3 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x24) = iVar2;
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0239d81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),iVar2,*(undefined8 *)(lVar3 + 0x28))
      ;
      return;
    }
  }
  return;
}

