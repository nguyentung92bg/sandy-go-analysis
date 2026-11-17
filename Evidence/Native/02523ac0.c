/* IL2CPP: Dino.BusSand.Core.Garage$$get_Remaining
int32_t Dino_BusSand_Core_Garage__get_Remaining (Dino_BusSand_Core_Garage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Garage$$get_Remaining
   int32_t Dino_BusSand_Core_Garage__get_Remaining (Dino_BusSand_Core_Garage_o* __this, const
   MethodInfo* method); */

undefined4 Dino_BusSand_Core_Garage__get_Remaining_2423ac0(long param_1)

{
  if ((bRam0000000004f9cbec & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbed98);
    bRam0000000004f9cbec = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

