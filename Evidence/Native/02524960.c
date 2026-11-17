/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_ShouldAutoSpeedUp
bool Dino_BusSand_Core_StageEngine__get_ShouldAutoSpeedUp (Dino_BusSand_Core_StageEngine_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_ShouldAutoSpeedUp
   bool Dino_BusSand_Core_StageEngine__get_ShouldAutoSpeedUp (Dino_BusSand_Core_StageEngine_o*
   __this, const MethodInfo* method); */

uint Dino_BusSand_Core_StageEngine__get_ShouldAutoSpeedUp_2424960(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if (*(char *)(param_1 + 0x80) != '\0') {
    return 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar5 = Dino_BusSand_Core_TruckGrid__get_IsEmpty_2424904();
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    iVar4 = Dino_BusSand_Core_StageEngine__get_GarageRemaining_24236f8(param_1);
    if (iVar4 != 0) {
      return 0;
    }
    iVar4 = Dino_BusSand_Core_StageEngine__get_LiftRemaining_2423838(param_1);
    if (iVar4 != 0) {
      return 0;
    }
    iVar4 = Dino_BusSand_Core_StageEngine__get_LaneRemaining_242397c(param_1);
    if (iVar4 != 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      if (0 < *(int *)(*(long *)(param_1 + 0x18) + 0x70)) {
        return 1;
      }
      lVar6 = *(long *)(param_1 + 0x20);
      if (lVar6 != 0) {
        if ((bRam0000000004f9cb56 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cb1890,0);
          FUN_02132f7c(PTR_DAT_04cb1898);
          FUN_02132f7c(PTR_DAT_04cb18a0);
          FUN_02132f7c(PTR_DAT_04cbe5f0);
          bRam0000000004f9cb56 = 1;
        }
        puVar2 = PTR_DAT_04cb1898;
        puVar1 = PTR_DAT_04cb1890;
        lVar6 = *(long *)(lVar6 + 0x50);
        uStack_38 = 0;
        uStack_30 = 0;
        lStack_28 = 0;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_38,lVar6,*(undefined8 *)PTR_DAT_04cbe5f0);
        do {
          uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_38,*(undefined8 *)puVar2);
          if ((uVar3 & 1) == 0) break;
          if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        } while ((*(uint *)(lStack_28 + 0x28) & 0xfffffffe) != 2);
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_38,*(undefined8 *)puVar1);
        return uVar3 & 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

