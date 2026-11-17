/* IL2CPP: Dino.BusSand.Core.Lift$$get_IsSpent
bool Dino_BusSand_Core_Lift__get_IsSpent (Dino_BusSand_Core_Lift_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Lift$$get_IsSpent
   bool Dino_BusSand_Core_Lift__get_IsSpent (Dino_BusSand_Core_Lift_o* __this, const MethodInfo*
   method); */

bool Dino_BusSand_Core_Lift__get_IsSpent_242e42c(long param_1)

{
  bool bVar1;
  
  if ((bRam0000000004f9cbf8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbef38);
    FUN_02132f7c(PTR_DAT_04cae228);
    bRam0000000004f9cbf8 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x30) + 0x18) == 0) {
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_0252e49c;
      bVar1 = *(int *)(*(long *)(param_1 + 0x68) + 0x18) == 0;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_0252e49c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

