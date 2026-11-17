/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_SecondsLeft
int64_t Dino_BusSand_App_Meta_WinStreak__get_SecondsLeft (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_SecondsLeft
   int64_t Dino_BusSand_App_Meta_WinStreak__get_SecondsLeft (const MethodInfo* method); */

ulong Dino_BusSand_App_Meta_WinStreak__get_SecondsLeft_2293368(void)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  puVar2 = PTR_DAT_04caa200;
  if ((bRam0000000004f9c1e9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c1e9 = 1;
  }
  iVar3 = Dino_BusSand_App_Meta_WinStreak__get_CurrentCycle_2293290();
  lVar5 = Dino_BusSand_App_Meta_WinStreak__get_Anchor_2292a64();
  iVar4 = Dino_BusSand_App_Meta_WinStreak__get_CycleDays_22929c4();
  lVar6 = Dino_BusSand_App_Meta_WinStreak__get_Now_22931d8();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar7 = (lVar5 - lVar6) + ((long)iVar3 * 0x15180 + 0x15180) * (long)iVar4;
  uVar1 = 0;
  if (uVar7 < 0x8000000000000000) {
    uVar1 = uVar7;
  }
  return uVar1;
}

