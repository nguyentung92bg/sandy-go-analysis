/* IL2CPP: Dino.BusSand.Core.StageEngine$$EvaluateTermination
void Dino_BusSand_Core_StageEngine__EvaluateTermination (Dino_BusSand_Core_StageEngine_o* __this, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.StageEngine$$EvaluateTermination
   void Dino_BusSand_Core_StageEngine__EvaluateTermination (Dino_BusSand_Core_StageEngine_o* __this,
   System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method); */

void Dino_BusSand_Core_StageEngine__EvaluateTermination_2426550(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 auStack_40 [2];
  
  if ((bRam0000000004f9cbc1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbede8);
    bRam0000000004f9cbc1 = 1;
  }
  if (*(char *)(param_1 + 0x80) != '\0') {
    return;
  }
  uVar7 = Dino_BusSand_Core_StageEngine__get_IsClearedBoard_2424554(param_1);
  if ((uVar7 & 1) == 0) {
    if (*(long *)(param_1 + 0x90) == 0) goto LAB_025267e4;
    iVar4 = System_Collections_Generic_Dictionary_int__long___get_Count_34338d8
                      (*(long *)(param_1 + 0x90),*(undefined8 *)PTR_DAT_04cbede8);
    if (iVar4 == 0) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_025267e4;
      uVar7 = Dino_BusSand_Core_TruckGrid__get_IsEmpty_2424904();
      if ((uVar7 & 1) != 0) {
        iVar4 = Dino_BusSand_Core_StageEngine__get_LiftRemaining_2423838(param_1);
        iVar5 = Dino_BusSand_Core_StageEngine__get_LaneRemaining_242397c(param_1);
        iVar6 = Dino_BusSand_Core_StageEngine__get_GarageRemaining_24236f8(param_1);
        if (iVar5 + iVar4 + iVar6 < 1) goto LAB_025265e4;
      }
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_025267e4;
      uVar7 = Dino_BusSand_Core_TruckGrid__get_AnyTappable_242b910();
      if (((uVar7 & 1) != 0) ||
         (uVar7 = Dino_BusSand_Core_StageEngine__AnyEmitterCanEmit_2429f94(param_1),
         (uVar7 & 1) != 0)) goto LAB_025265e4;
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_025267e4;
      iVar4 = Dino_BusSand_Core_Road__get_ActiveCount_2412078(*(long *)(param_1 + 0x20),0);
      if ((iVar4 < 1) ||
         (uVar7 = Dino_BusSand_Core_StageEngine__AnyDuneStanding_242ba64(param_1), (uVar7 & 1) == 0)
         ) {
        bVar3 = false;
        uVar8 = 1;
        goto LAB_025265b8;
      }
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_025267e4;
      uVar7 = Dino_BusSand_Core_Road__AnyBusLeavingMoving_24125c4
                        (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x78),0x78,0);
      if ((uVar7 & 1) != 0) {
        return;
      }
      lVar9 = *(long *)(param_1 + 0x18);
      if (lVar9 == 0) goto LAB_025267e4;
      if (*(char *)(lVar9 + 0x75) == '\0') {
        return;
      }
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_025267e4;
      uVar7 = Dino_BusSand_Core_Road__AnyActiveBusCanCollect_24168e8
                        (*(long *)(param_1 + 0x20),lVar9,0);
      if ((uVar7 & 1) != 0) {
        return;
      }
      bVar3 = true;
    }
    else {
LAB_025265e4:
      bVar3 = false;
    }
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_025267e4;
    uVar7 = Dino_BusSand_Core_Road__AnyBusLeavingMoving_24125c4
                      (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x78),0x78,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_025267e4;
    if (*(char *)(*(long *)(param_1 + 0x18) + 0x75) == '\0') {
      return;
    }
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_025267e4;
    iVar4 = Dino_BusSand_Core_Road__get_ActiveCount_2412078(*(long *)(param_1 + 0x20),0);
    if (iVar4 == 0) {
      return;
    }
    if (bVar3) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_025267e4;
      if (*(char *)(*(long *)(param_1 + 0x20) + 0xb0) == '\0') goto LAB_02526794;
LAB_0252663c:
      if (*(long *)(param_1 + 0x20) == 0) {
LAB_025267e4:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar7 = Dino_BusSand_Core_Road__AnyLoopBusCanCollect_2416a64
                        (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),0);
    }
    else {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_025267e4;
      uVar7 = Dino_BusSand_Core_TruckGrid__get_IsEmpty_2424904();
      if ((uVar7 & 1) == 0) {
        lVar9 = *(long *)(param_1 + 0x20);
        if (lVar9 == 0) goto LAB_025267e4;
        bVar3 = *(char *)(lVar9 + 0xb0) != '\0';
LAB_0252677c:
        uVar7 = Dino_BusSand_Core_Road__get_IsFull_24121b8(lVar9,0);
        if ((!bVar3) && ((uVar7 & 1) == 0)) {
          return;
        }
      }
      else {
        uVar7 = Dino_BusSand_Core_StageEngine__AnyEmitterCanEmit_2429f94(param_1);
        lVar9 = *(long *)(param_1 + 0x20);
        if (lVar9 == 0) goto LAB_025267e4;
        bVar3 = *(char *)(lVar9 + 0xb0) != '\0';
        if ((uVar7 & 1) != 0) goto LAB_0252677c;
      }
      if (bVar3) goto LAB_0252663c;
LAB_02526794:
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_025267e4;
      uVar7 = Dino_BusSand_Core_Road__AnyActiveBusCanCollect_24168e8
                        (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),0);
    }
    if (((uVar7 & 1) != 0) ||
       (((*(char *)(param_1 + 0x108) != '\0' &&
         (uVar7 = Dino_BusSand_Core_StageEngine__TrySweep_2425d50(param_1,param_2,1),
         (uVar7 & 1) != 0)) || (0 < *(int *)(param_1 + 0xe8))))) {
      return;
    }
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uVar8 = 0;
LAB_025265b8:
  if ((bRam0000000004f9cbc4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb58d0);
    bRam0000000004f9cbc4 = 1;
  }
  *(undefined1 *)(param_1 + 0x80) = 1;
  *(bool *)(param_1 + 0x81) = bVar3;
  *(undefined4 *)(param_1 + 0x84) = uVar8;
  puVar2 = PTR_DAT_04cb58d0;
  if (param_2 != 0) {
    if (bVar3) {
      uStack_50 = _UNK_00e69738;
    }
    else {
      uStack_50 = CONCAT44(uVar8,0x15);
    }
    auStack_40[0] = 0;
    uStack_48 = 0;
    thunk_FUN_02134474(auStack_40,0);
    lVar10 = *(long *)puVar2;
    lVar9 = *(long *)(param_2 + 0x10);
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(param_2 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      lVar9 = lVar9 + (long)(int)uVar1 * 0x18;
      *(uint *)(param_2 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar9 + 0x30) = auStack_40[0];
      *(undefined8 *)(lVar9 + 0x28) = uStack_48;
      *(undefined8 *)(lVar9 + 0x20) = uStack_50;
      thunk_FUN_02134474((undefined8 *)(lVar9 + 0x30),0);
    }
    else {
      System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                (param_2,&uStack_50,
                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
  }
  return;
}

