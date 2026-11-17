/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$get_TowerAttempt
int32_t Dino_BusSand_App_Meta_GameTracking__get_TowerAttempt (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$get_TowerAttempt
   int32_t Dino_BusSand_App_Meta_GameTracking__get_TowerAttempt (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_GameTracking__get_TowerAttempt_221a058(void)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x14) == '\0') {
      bVar1 = false;
    }
    else {
      lVar2 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
      if (lVar2 == 0) goto LAB_0231a09c;
      bVar1 = *(int *)(lVar2 + 0x10) != -0x80000000;
    }
    return bVar1;
  }
LAB_0231a09c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

