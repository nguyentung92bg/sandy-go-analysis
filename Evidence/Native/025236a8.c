/* IL2CPP: Dino.BusSand.Core.TruckGrid$$get_Count
int32_t Dino_BusSand_Core_TruckGrid__get_Count (Dino_BusSand_Core_TruckGrid_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.TruckGrid$$get_Count
   int32_t Dino_BusSand_Core_TruckGrid__get_Count (Dino_BusSand_Core_TruckGrid_o* __this, const
   MethodInfo* method); */

int Dino_BusSand_Core_TruckGrid__get_Count_24236a8(long param_1)

{
  long lVar1;
  
  if ((bRam0000000004f9cbd8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbed90);
    bRam0000000004f9cbd8 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    return *(int *)(lVar1 + 0x20) - *(int *)(lVar1 + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

