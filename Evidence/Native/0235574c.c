/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$StartStage
void Dino_BusSand_App_Meta_YachtRacingCore__StartStage (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, int32_t stage, int64_t startMs, int64_t expMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$StartStage
   void Dino_BusSand_App_Meta_YachtRacingCore__StartStage (Dino_BusSand_App_Meta_YachtRacingCore_o*
   __this, int32_t stage, int64_t startMs, int64_t expMs, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingCore__StartStage_225574c
               (long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
                    /* try { // try from 02355760 to 02455a37 has its CatchHandler @ 02355760
                       catch() { ... } // from try @ 02355760 with catch @ 02355760
                       catch() { ... } // from try @ 02355b08 with catch @ 02355760
                       catch() { ... } // from try @ 02355d10 with catch @ 02355760
                       catch() { ... } // from try @ 02355f34 with catch @ 02355760
                       catch() { ... } // from try @ 02355f8c with catch @ 02355760
                       catch() { ... } // from try @ 02355fe0 with catch @ 02355760 */
  if ((bRam0000000004f9bfee & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420);
    FUN_02132f7c(PTR_DAT_04cb3e88);
    FUN_02132f7c(PTR_DAT_04cb3e90);
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04cb3e98);
    bRam0000000004f9bfee = 1;
  }
  puVar1 = PTR_DAT_04caadd0;
  Dino_BusSand_App_Meta_YachtRacingCore__EndStage_225605c(param_1);
  *(undefined4 *)(param_1 + 0x60) = 0;
  lVar2 = Dino_BusSand_App_Meta_RacingRobotGlobalConfig__Load_225d264(0);
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28))
    ;
  }
  uVar10 = Dino_BusSand_App_Meta_YachtRacingCore__UserScoreFor_22560b8(param_1,param_2);
  lVar4 = FUN_02133068(*(undefined8 *)puVar1,3);
  if (param_2 == 3) {
    uVar11 = Dino_BusSand_App_Meta_YachtRacingCore__UserScoreFor_22560b8(param_1,1);
    if (lVar4 == 0) goto LAB_023559f8;
    uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
    if (uVar5 == 0) {
LAB_023559fc:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    *(undefined4 *)(lVar4 + 0x20) = uVar11;
    if (*(char *)(param_1 + 0x48) == '\0') {
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0xa0), lVar6 == 0)) goto LAB_023559f8;
      uVar11 = Dino_BusSand_App_Meta_RacingRobotScore__CalcUserScore_22656dc
                         (uVar11,*(undefined4 *)(lVar6 + 0x14),0,uVar9,2,lVar2,0);
      uVar5 = *(ulong *)(lVar4 + 0x18);
    }
    else {
      uVar11 = *(undefined4 *)(param_1 + 0x4c);
    }
    if (((uVar5 & 0xfffffffe) == 0) || (*(undefined4 *)(lVar4 + 0x24) = uVar11, (uint)uVar5 < 3))
    goto LAB_023559fc;
    puVar7 = (undefined4 *)(lVar4 + 0x28);
LAB_023558f0:
    *puVar7 = uVar10;
  }
  else {
    if (param_2 == 2) {
      uVar11 = Dino_BusSand_App_Meta_YachtRacingCore__UserScoreFor_22560b8(param_1,1);
      if (lVar4 == 0) goto LAB_023559f8;
      if ((*(int *)(lVar4 + 0x18) == 0) ||
         (*(undefined4 *)(lVar4 + 0x20) = uVar11, *(int *)(lVar4 + 0x18) == 1)) goto LAB_023559fc;
      puVar7 = (undefined4 *)(lVar4 + 0x24);
      goto LAB_023558f0;
    }
    if (param_2 == 1) {
      if (lVar4 == 0) goto LAB_023559f8;
      if (*(int *)(lVar4 + 0x18) == 0) goto LAB_023559fc;
      puVar7 = (undefined4 *)(lVar4 + 0x20);
      goto LAB_023558f0;
    }
  }
  if (lVar2 == 0) {
    uVar9 = 0x7f7fffff;
  }
  else {
    uVar9 = Dino_BusSand_App_Meta_RacingRobotScore__StageThreshold_22658e8(uVar9,param_2,lVar2,0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = Dino_BusSand_App_Meta_RacingRobotSession__Begin_2260320
                      (uVar10,uVar9,*(undefined4 *)(param_1 + 0x50),param_2,param_3,param_4,
                       *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xa0),lVar4,
                       *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),0);
    plVar8 = (long *)(param_1 + 0x58);
    *plVar8 = lVar2;
    thunk_FUN_02134474(plVar8,lVar2);
    puVar1 = PTR_DAT_04cb3e98;
    lVar2 = *plVar8;
    if (lVar2 != 0) {
      uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
      System_Action_bool____ctor_35ee0e8(uVar3,param_1,*(undefined8 *)puVar1,0);
      Dino_BusSand_App_Meta_RacingRobotSession__add_OnStageEnd_225fe74(lVar2,uVar3,0);
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_023559f8;
      Dino_BusSand_App_Meta_RacingRobotSession__Tick_22611fc(*(long *)(param_1 + 0x58),0);
      lVar2 = *(long *)(param_1 + 0x28);
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023559dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        return;
      }
    }
    return;
  }
LAB_023559f8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

