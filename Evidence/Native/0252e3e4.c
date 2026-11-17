/* IL2CPP: Dino.BusSand.Core.Lift$$get_FloorsLeft
int32_t Dino_BusSand_Core_Lift__get_FloorsLeft (Dino_BusSand_Core_Lift_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Lift$$get_FloorsLeft
   int32_t Dino_BusSand_Core_Lift__get_FloorsLeft (Dino_BusSand_Core_Lift_o* __this, const
   MethodInfo* method); */

undefined4 Dino_BusSand_Core_Lift__get_FloorsLeft_242e3e4(long param_1)

{
  if ((bRam0000000004f9cbf7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbef38);
    bRam0000000004f9cbf7 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

