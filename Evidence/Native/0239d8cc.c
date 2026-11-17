/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$Update
void Dino_BusSand_App_Gameplay_GameplayController__Update (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$Update
   void Dino_BusSand_App_Gameplay_GameplayController__Update
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController__Update_229d8cc(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dStack_28;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c239 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab380);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c239 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
  if (((uVar5 & 1) != 0) ||
     (lVar6 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1), lVar6 == 0)
     ) {
    return;
  }
  if ((*(int *)(param_1 + 0xa0) < 1) && (*(int *)(param_1 + 0x20) == 2)) {
    bVar3 = false;
    if (*(char *)(param_1 + 0x58) != '\0') {
      bVar3 = *(char *)(*(long *)(*(long *)PTR_DAT_04cab380 + 0xb8) + 5) == '\0';
    }
  }
  else {
    bVar3 = false;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(bool *)(*(long *)(param_1 + 0x38) + 0x41) = bVar3;
  Dino_BusSand_App_Gameplay_GameplayController__UpdateJamHold_229d9bc(param_1);
  lVar6 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248();
  if (lVar6 == 0) {
    return;
  }
  if (*(long *)(lVar6 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar4 = Dino_BusSand_Core_TruckGrid__get_Count_24236a8(*(long *)(lVar6 + 0x28),0);
  fVar9 = (float)Dino_BusSand_Core_StageEngine__get_Progress_2423b08(lVar6,0);
  if (cRam0000000004f9b891 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b891 = '\x01';
  }
  fVar9 = (1.0 - fVar9) * 100.0;
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar11 = (double)fVar9;
  dVar10 = (double)FUN_049b52f0(dVar11,&dStack_28);
  if (0.0 <= fVar9) {
    if (dVar10 != 0.5) {
      dStack_28 = (double)(long)(dVar11 + 0.5);
      goto LAB_0239d7b8;
    }
    dVar10 = 1.0;
  }
  else {
    if (dVar10 != -0.5) {
      dStack_28 = (double)(long)(dVar11 + -0.5);
      goto LAB_0239d7b8;
    }
    dVar10 = -1.0;
  }
  if (((long)dStack_28 & 1U) != 0) {
    dStack_28 = dStack_28 + dVar10;
  }
LAB_0239d7b8:
  uVar7 = (uint)dStack_28;
  if (99 < (int)uVar7) {
    uVar7 = 100;
  }
  uVar1 = 0;
  if (dStack_28 != INFINITY) {
    uVar1 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
  }
  *(uint *)(param_1 + 0x40) = uVar1;
  if (iVar4 != *(int *)(param_1 + 0x24)) {
    lVar6 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x24) = iVar4;
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0239d81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),iVar4,*(undefined8 *)(lVar6 + 0x28))
      ;
      return;
    }
  }
  return;
}

