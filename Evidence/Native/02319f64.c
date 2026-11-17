/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$get_TowerCycle
int32_t Dino_BusSand_App_Meta_GameTracking__get_TowerCycle (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$get_TowerCycle
   int32_t Dino_BusSand_App_Meta_GameTracking__get_TowerCycle (const MethodInfo* method); */

int Dino_BusSand_App_Meta_GameTracking__get_TowerCycle_2219f64(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  
  lVar3 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x14) == '\0') {
LAB_02319f98:
      puVar1 = PTR_DAT_04caa200;
      uVar4 = 0;
      if ((bRam0000000004f9c1e8 & 1) == 0) {
        uVar4 = FUN_02132f7c(PTR_DAT_04caa200);
        bRam0000000004f9c1e8 = 1;
      }
      lVar3 = Dino_BusSand_App_Meta_WinStreak__get_Now_22931d8(uVar4);
      lVar5 = Dino_BusSand_App_Meta_WinStreak__get_Anchor_2292a64();
      iVar2 = Dino_BusSand_App_Meta_WinStreak__get_CycleDays_22929c4();
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      dVar6 = (double)(lVar3 - lVar5) / (double)((long)iVar2 * 0x15180);
      iVar2 = -0x80000000;
      if ((double)(long)dVar6 != INFINITY) {
        iVar2 = (int)dVar6;
      }
      return iVar2;
    }
    lVar3 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x10) == -0x80000000) goto LAB_02319f98;
      lVar3 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
      if (lVar3 != 0) {
        return *(int *)(lVar3 + 0x10);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

