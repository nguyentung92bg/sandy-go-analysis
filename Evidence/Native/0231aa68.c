/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$StreakPoints
int32_t Dino_BusSand_App_Meta_GameTracking__StreakPoints (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$StreakPoints
   int32_t Dino_BusSand_App_Meta_GameTracking__StreakPoints (const MethodInfo* method); */

uint Dino_BusSand_App_Meta_GameTracking__StreakPoints_221aa68(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  
  puVar2 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd7e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bd7e = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Meta_GameTracking__get_Streak_221a54c();
  if ((((lVar4 == 0) ||
       (lVar5 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(lVar4,0),
       lVar5 == 0)) ||
      (uVar6 = Dino_BusSand_App_Meta_StreakRateFeature__get_IsOpen_224c000(lVar4,0),
      (uVar6 & 1) == 0)) ||
     (uVar6 = Dino_BusSand_App_Meta_StreakRateFeature__IsTimeFinished_224cee8(lVar4,lVar5,0),
     (uVar6 & 1) != 0)) {
    return 0xffffffff;
  }
  lVar7 = Dino_BusSand_App_Meta_StreakRateFeature__NeedScores_224bf28(lVar4,lVar5,0);
  iVar1 = *(int *)(lVar5 + 0x4c);
  if (*(char *)(lVar5 + 0x54) == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = Dino_BusSand_App_Meta_StreakRateFeature__WinAddScore_224c840(lVar4,lVar5,0);
  }
  uVar6 = (ulong)*(uint *)(lVar5 + 0x48);
  uVar12 = iVar3 + iVar1;
  if (0 < (int)*(uint *)(lVar5 + 0x48)) {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar9 = (uint)*(ulong *)(lVar7 + 0x18);
    uVar8 = (ulong)(uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU));
    uVar10 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
    piVar11 = (int *)(lVar7 + 0x20);
    do {
      if (uVar8 == 0) break;
      if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar6 = uVar6 - 1;
      uVar10 = uVar10 - 1;
      uVar8 = uVar8 - 1;
      uVar12 = *piVar11 + uVar12;
      piVar11 = piVar11 + 1;
    } while (uVar6 != 0);
  }
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = 0;
  if (uVar12 < 0x80000000) {
    uVar9 = uVar12;
  }
  return uVar9;
}

