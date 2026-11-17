/* IL2CPP: Dino.BusSand.Core.Road$$get_Count
int32_t Dino_BusSand_Core_Road__get_Count (Dino_BusSand_Core_Road_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$get_Count
   int32_t Dino_BusSand_Core_Road__get_Count (Dino_BusSand_Core_Road_o* __this, const MethodInfo*
   method); */

int Dino_BusSand_Core_Road__get_Count_2411ee8(long param_1)

{
  long lVar1;
  
  if ((bRam0000000004f9cb53 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe5e8);
    bRam0000000004f9cb53 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    return *(int *)(lVar1 + 0x20) - *(int *)(lVar1 + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

