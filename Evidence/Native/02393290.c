/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_CurrentCycle
int32_t Dino_BusSand_App_Meta_WinStreak__get_CurrentCycle (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_CurrentCycle
   int32_t Dino_BusSand_App_Meta_WinStreak__get_CurrentCycle (const MethodInfo* method); */

int Dino_BusSand_App_Meta_WinStreak__get_CurrentCycle_2293290(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  puVar1 = PTR_DAT_04caa200;
  if ((bRam0000000004f9c1e8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c1e8 = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_WinStreak__get_Now_22931d8();
  lVar4 = Dino_BusSand_App_Meta_WinStreak__get_Anchor_2292a64();
  iVar2 = Dino_BusSand_App_Meta_WinStreak__get_CycleDays_22929c4();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  dVar5 = (double)(lVar3 - lVar4) / (double)((long)iVar2 * 0x15180);
  iVar2 = -0x80000000;
  if ((double)(long)dVar5 != INFINITY) {
    iVar2 = (int)dVar5;
  }
  return iVar2;
}

