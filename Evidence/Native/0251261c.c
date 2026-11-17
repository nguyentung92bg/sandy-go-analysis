/* IL2CPP: Dino.BusSand.Core.Road$$LoopHasRoomFor
bool Dino_BusSand_Core_Road__LoopHasRoomFor (Dino_BusSand_Core_Road_o* __this, Dino_BusSand_Core_RoadBus_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.Road$$LoopHasRoomFor
   bool Dino_BusSand_Core_Road__LoopHasRoomFor (Dino_BusSand_Core_Road_o* __this,
   Dino_BusSand_Core_RoadBus_o* e, const MethodInfo* method); */

bool Dino_BusSand_Core_Road__LoopHasRoomFor_241261c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000004f9cb59 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1890);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cbe5f0);
    bRam0000000004f9cb59 = 1;
  }
  puVar2 = PTR_DAT_04cb1898;
  puVar1 = PTR_DAT_04cb1890;
  lVar5 = *(long *)(param_1 + 0x10);
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  if (lVar5 != 0) {
    if (*(char *)(lVar5 + 0x4c) == '\0') {
      bVar3 = true;
    }
    else {
      if ((param_2 == 0) || (*(long *)(param_1 + 0x50) == 0)) goto LAB_02512780;
      dVar6 = (double)*(int *)(lVar5 + 0x24) + (double)*(int *)(lVar5 + 0x24) +
              (double)*(int *)(param_2 + 0x1c);
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_58,*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_04cbe5f0);
      while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_58,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
        if (lStack_48 != param_2) {
          if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(int *)(lStack_48 + 0x28) - 1U < 2) {
            if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            dVar6 = dVar6 + (double)(*(int *)(*(long *)(param_1 + 0x10) + 0x24) +
                                    *(int *)(lStack_48 + 0x1c));
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_58,*(undefined8 *)puVar1);
      bVar3 = dVar6 <= (double)*(int *)(param_1 + 0x24) + _UNK_00e6a008;
    }
    return bVar3;
  }
LAB_02512780:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

