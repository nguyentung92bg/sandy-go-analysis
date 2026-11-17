/* IL2CPP: Dino.BusSand.Core.Lift$$get_Occupant
int32_t Dino_BusSand_Core_Lift__get_Occupant (Dino_BusSand_Core_Lift_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Lift$$get_Occupant
   int32_t Dino_BusSand_Core_Lift__get_Occupant (Dino_BusSand_Core_Lift_o* __this, const MethodInfo*
   method); */

undefined4 Dino_BusSand_Core_Lift__get_Occupant_242e4a0(long param_1)

{
  long lVar1;
  
  if ((bRam0000000004f9cbf9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cae230);
    bRam0000000004f9cbf9 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar1 + 0x18) < 1) {
    return 0xffffffff;
  }
  if (*(int *)(lVar1 + 0x18) == 0) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_48509f0
              (0,0,*(undefined8 *)PTR_DAT_04cae230);
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      return *(undefined4 *)(lVar1 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

