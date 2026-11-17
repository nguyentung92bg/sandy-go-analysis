/* IL2CPP: Dino.BusSand.Core.Garage$$get_IsSpent
bool Dino_BusSand_Core_Garage__get_IsSpent (Dino_BusSand_Core_Garage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Garage$$get_IsSpent
   bool Dino_BusSand_Core_Garage__get_IsSpent (Dino_BusSand_Core_Garage_o* __this, const MethodInfo*
   method); */

bool Dino_BusSand_Core_Garage__get_IsSpent_242b764(long param_1)

{
  bool bVar1;
  
  if ((bRam0000000004f9cbed & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbed98);
    bRam0000000004f9cbed = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x30) + 0x18) == 0) {
      bVar1 = *(int *)(param_1 + 0x38) == -1;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

