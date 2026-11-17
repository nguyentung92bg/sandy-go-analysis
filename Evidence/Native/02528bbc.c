/* IL2CPP: Dino.BusSand.Core.StageEngine$$SyncStations
void Dino_BusSand_Core_StageEngine__SyncStations (Dino_BusSand_Core_StageEngine_o* __this, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$SyncStations
   void Dino_BusSand_Core_StageEngine__SyncStations (Dino_BusSand_Core_StageEngine_o* __this,
   System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method); */

void Dino_BusSand_Core_StageEngine__SyncStations_2428bbc(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000004f9cbb6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5648);
    FUN_02132f7c(PTR_DAT_04cb5650);
    FUN_02132f7c(PTR_DAT_04cb5658);
    FUN_02132f7c(PTR_DAT_04cb5660);
    FUN_02132f7c(PTR_DAT_04cbec38);
    bRam0000000004f9cbb6 = 1;
  }
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (*(long *)(param_1 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((param_2 != 0) && (*(int *)(*(long *)(param_1 + 0x138) + 0x18) != 0)) {
    System_Collections_Generic_List_SimEvent___GetEnumerator_3ac0844
              (&uStack_50,param_2,*(undefined8 *)PTR_DAT_04cb5660);
    puVar1 = PTR_DAT_04cb5650;
    do {
      uVar2 = System_Collections_Generic_List_Enumerator_SimEvent___MoveNext_35e048c
                        (&uStack_50,*(undefined8 *)puVar1);
      if ((uVar2 & 1) == 0) goto LAB_02528c8c;
    } while ((int)uStack_40 != 0x17);
    Dino_BusSand_Core_StageEngine__SyncBlockers_24221e0(param_1);
LAB_02528c8c:
    System_Collections_Generic_List_Enumerator_SimEvent___Dispose_35e0488
              (&uStack_50,*(undefined8 *)PTR_DAT_04cb5648);
  }
  return;
}

