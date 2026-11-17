/* IL2CPP: Dino.BusSand.Core.Road$$AtExitBranch
bool Dino_BusSand_Core_Road__AtExitBranch (Dino_BusSand_Core_Road_o* __this, Dino_BusSand_Core_RoadBus_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$AtExitBranch
   bool Dino_BusSand_Core_Road__AtExitBranch (Dino_BusSand_Core_Road_o* __this,
   Dino_BusSand_Core_RoadBus_o* b, const MethodInfo* method); */

uint Dino_BusSand_Core_Road__AtExitBranch_24162d0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9cb62 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae220);
    bRam0000000004f9cb62 = 1;
  }
  uStack_28 = 0;
  if ((param_2 != 0) && (*(long *)(param_1 + 0x68) != 0)) {
    uVar2 = System_Collections_Generic_HashSet_int___Contains_37db5b4
                      (*(long *)(param_1 + 0x68),*(undefined4 *)(param_2 + 0x10),
                       *(undefined8 *)PTR_DAT_04cae220);
    if ((uVar2 & 1) == 0) {
      if ((double)*(int *)(param_1 + 0x20) <= *(double *)(param_2 + 0x40)) {
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_02516394;
        if (*(double *)(param_2 + 0x40) <
            (double)(*(int *)(*(long *)(param_1 + 0x10) + 0x20) + *(int *)(param_1 + 0x20))) {
          uVar1 = Dino_BusSand_Core_Road__TryBoardFootprint_2415a10
                            (param_1,param_2,(long)&uStack_28 + 4,&uStack_28);
          goto LAB_02516380;
        }
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
LAB_02516380:
    return uVar1 & 1;
  }
LAB_02516394:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

