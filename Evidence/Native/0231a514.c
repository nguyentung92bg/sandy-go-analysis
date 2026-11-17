/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$TowerWins
int32_t Dino_BusSand_App_Meta_GameTracking__TowerWins (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$TowerWins
   int32_t Dino_BusSand_App_Meta_GameTracking__TowerWins (const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_GameTracking__TowerWins_221a514(void)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = Dino_BusSand_App_Meta_WinStreak__get_Current_2293690(0);
  if (iVar1 == 3) {
    lVar3 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = *(undefined4 *)(lVar3 + 0x18);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

