/* IL2CPP: Dino.BusSand.Core.TruckGrid$$get_IsEmpty
bool Dino_BusSand_Core_TruckGrid__get_IsEmpty (Dino_BusSand_Core_TruckGrid_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.TruckGrid$$get_IsEmpty
   bool Dino_BusSand_Core_TruckGrid__get_IsEmpty (Dino_BusSand_Core_TruckGrid_o* __this, const
   MethodInfo* method); */

bool Dino_BusSand_Core_TruckGrid__get_IsEmpty_2424904(long param_1)

{
  int iVar1;
  
  if ((bRam0000000004f9cbd9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbed90);
    bRam0000000004f9cbd9 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar1 = System_Collections_Generic_Dictionary_int__object___get_Count_3436fc4
                      (*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_04cbed90);
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

