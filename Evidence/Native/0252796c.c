/* IL2CPP: Dino.BusSand.Core.StageEngine$$WaitingReason
int32_t Dino_BusSand_Core_StageEngine__WaitingReason (Dino_BusSand_Core_Truck_o* t, System_Collections_Generic_List_Truck__o* chain, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$WaitingReason
   int32_t Dino_BusSand_Core_StageEngine__WaitingReason (Dino_BusSand_Core_Truck_o* t,
   System_Collections_Generic_List_Truck__o* chain, const MethodInfo* method); */

undefined4 Dino_BusSand_Core_StageEngine__WaitingReason_242796c(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000004f9cbac & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cbc4c0);
    bRam0000000004f9cbac = 1;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x30) < 1) {
      if (*(int *)(param_1 + 0x34) < 1) {
        if (param_2 == 0) goto LAB_02527a94;
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_38,param_2,*(undefined8 *)PTR_DAT_04cbc4c0);
        puVar1 = PTR_DAT_04cab9e8;
        do {
          uVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_38,*(undefined8 *)puVar1);
          if ((uVar2 & 1) == 0) {
            uVar3 = 0;
            goto LAB_02527a68;
          }
          if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (0 < *(int *)(lStack_28 + 0x30)) {
            uVar3 = 1;
            goto LAB_02527a68;
          }
        } while (*(int *)(lStack_28 + 0x34) < 1);
        uVar3 = 2;
LAB_02527a68:
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_38,*(undefined8 *)PTR_DAT_04cab9e0);
      }
      else {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = 1;
    }
    return uVar3;
  }
LAB_02527a94:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

