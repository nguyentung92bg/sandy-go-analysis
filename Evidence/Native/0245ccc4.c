/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$get_VisibleToasts
int32_t Dino_BusSand_Cheat_CheatManager__get_VisibleToasts (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$get_VisibleToasts
   int32_t Dino_BusSand_Cheat_CheatManager__get_VisibleToasts (Dino_BusSand_Cheat_CheatManager_o*
   __this, const MethodInfo* method); */

undefined4 Dino_BusSand_Cheat_CheatManager__get_VisibleToasts_235ccc4(long param_1)

{
  if ((bRam0000000004f9c732 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba490);
    bRam0000000004f9c732 = 1;
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x160) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

