/* IL2CPP: Dino.BusSand.App.Meta.HallQueue$$get_Count
int32_t Dino_BusSand_App_Meta_HallQueue__get_Count (Dino_BusSand_App_Meta_HallQueue_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.HallQueue$$get_Count
   int32_t Dino_BusSand_App_Meta_HallQueue__get_Count (Dino_BusSand_App_Meta_HallQueue_o* __this,
   const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_HallQueue__get_Count_2240760(long param_1)

{
  if ((bRam0000000004f9befa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3780);
    bRam0000000004f9befa = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

