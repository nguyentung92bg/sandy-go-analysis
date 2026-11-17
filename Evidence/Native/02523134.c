/* IL2CPP: Dino.BusSand.Core.TruckGrid$$SetColorBlockers
void Dino_BusSand_Core_TruckGrid__SetColorBlockers (Dino_BusSand_Core_TruckGrid_o* __this, System_Collections_Generic_List_ValueTuple_BusObb__byte___o* gates, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.TruckGrid$$SetColorBlockers
   void Dino_BusSand_Core_TruckGrid__SetColorBlockers (Dino_BusSand_Core_TruckGrid_o* __this,
   System_Collections_Generic_List_ValueTuple_BusObb__byte___o* gates, const MethodInfo* method); */

void Dino_BusSand_Core_TruckGrid__SetColorBlockers_2423134(long param_1,long param_2)

{
  long lVar1;
  
  if ((bRam0000000004f9cbe1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbed78);
    FUN_02132f7c(PTR_DAT_04cbed80);
    bRam0000000004f9cbe1 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x18) = 0;
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
    if (param_2 != 0) {
      System_Collections_Generic_List_ValueTuple_BusObb__byte____AddRange_3999aec
                (lVar1,param_2,*(undefined8 *)PTR_DAT_04cbed78);
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

