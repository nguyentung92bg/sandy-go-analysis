/* IL2CPP: Dino.BusSand.View.ChainRig$$get_Any
bool Dino_BusSand_View_ChainRig__get_Any (Dino_BusSand_View_ChainRig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.ChainRig$$get_Any
   bool Dino_BusSand_View_ChainRig__get_Any (Dino_BusSand_View_ChainRig_o* __this, const MethodInfo*
   method); */

bool Dino_BusSand_View_ChainRig__get_Any_23917b8(long param_1)

{
  if ((bRam0000000004f9c8cb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc0f0);
    bRam0000000004f9c8cb = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    return 0 < *(int *)(*(long *)(param_1 + 0x30) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

