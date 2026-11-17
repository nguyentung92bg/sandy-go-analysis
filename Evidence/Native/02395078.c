/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_WantsHome
bool Dino_BusSand_App_Meta_WinStreak__get_WantsHome (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_WantsHome
   bool Dino_BusSand_App_Meta_WinStreak__get_WantsHome (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_WinStreak__get_WantsHome_2295078(void)

{
  int iVar1;
  long lVar2;
  
  iVar1 = Dino_BusSand_App_Meta_WinStreak__get_Current_2293690();
  if (iVar1 != 2) {
    return false;
  }
  lVar2 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x14) != '\0') {
      return false;
    }
    lVar2 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
    if (lVar2 != 0) {
      return *(char *)(lVar2 + 0x28) == '\0';
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

