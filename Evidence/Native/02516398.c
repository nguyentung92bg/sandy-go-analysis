/* IL2CPP: Dino.BusSand.Core.Road$$TrainMayExit
bool Dino_BusSand_Core_Road__TrainMayExit (Dino_BusSand_Core_Road_o* __this, Dino_BusSand_Core_RoadBus_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$TrainMayExit
   bool Dino_BusSand_Core_Road__TrainMayExit (Dino_BusSand_Core_Road_o* __this,
   Dino_BusSand_Core_RoadBus_o* b, const MethodInfo* method); */

bool Dino_BusSand_Core_Road__TrainMayExit_2416398(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lStack_28;
  
  if ((bRam0000000004f9cb6a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe5f8);
    FUN_02132f7c(PTR_DAT_04cbe5e8);
    bRam0000000004f9cb6a = 1;
  }
  lStack_28 = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
    iVar1 = System_Collections_Generic_Dictionary_int__object___get_Count_3436fc4
                      (*(long *)(param_1 + 0x78),*(undefined8 *)PTR_DAT_04cbe5e8);
    if (iVar1 == 0) {
      return true;
    }
    if ((param_2 != 0) && (*(long *)(param_1 + 0x78) != 0)) {
      uVar2 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                        (*(long *)(param_1 + 0x78),*(undefined4 *)(param_2 + 0x10),&lStack_28,
                         *(undefined8 *)PTR_DAT_04cbe5f8);
      if ((uVar2 & 1) == 0) {
        return true;
      }
      if (lStack_28 != 0) {
        return *(int *)(lStack_28 + 0x28) == 3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

