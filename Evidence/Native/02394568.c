/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$Claimed
bool Dino_BusSand_App_Meta_WinStreak__Claimed (Dino_BusSand_App_Meta_WinStreakCheckpoint_o* cp, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$Claimed
   bool Dino_BusSand_App_Meta_WinStreak__Claimed (Dino_BusSand_App_Meta_WinStreakCheckpoint_o* cp,
   const MethodInfo* method); */

bool Dino_BusSand_App_Meta_WinStreak__Claimed_2294568(long param_1)

{
  int iVar1;
  long lVar2;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0239455c with catch @ 0239456c
                        */
  if ((bRam0000000004f9c1f5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad860);
    bRam0000000004f9c1f5 = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
  if (((lVar2 != 0) && (param_1 != 0)) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      iVar1 = System_Array__IndexOf_int__297cf74
                        (*(undefined8 *)(lVar2 + 0x10),*(undefined4 *)(param_1 + 0x14),0,
                         *(int *)(lVar2 + 0x18),
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)
                                                  PTR_DAT_04cad860 + 0x20) + 0xc0) + 0xd0) + 0x20) +
                                    0xc0) + 0x150));
      return iVar1 != -1;
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

