/* IL2CPP: Dino.BusSand.Core.Lane$$get_IsSpent
bool Dino_BusSand_Core_Lane__get_IsSpent (Dino_BusSand_Core_Lane_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Lane$$get_IsSpent
   bool Dino_BusSand_Core_Lane__get_IsSpent (Dino_BusSand_Core_Lane_o* __this, const MethodInfo*
   method); */

bool Dino_BusSand_Core_Lane__get_IsSpent_242ee9c(long param_1)

{
  bool bVar1;
  
  if ((bRam0000000004f9cc03 & 1) == 0) {
                    /* try { // try from 0252eebc to 0262eec3 has its CatchHandler @ 0252f744 */
    FUN_02132f7c(PTR_DAT_04cbed98);
    bRam0000000004f9cc03 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) == 0) {
      bVar1 = *(int *)(param_1 + 0x30) == -1;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

