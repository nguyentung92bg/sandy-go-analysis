/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$ShouldShowLockedBtn
bool Dino_BusSand_App_Meta_StreakTowerUtil__ShouldShowLockedBtn (int32_t activity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$ShouldShowLockedBtn
   bool Dino_BusSand_App_Meta_StreakTowerUtil__ShouldShowLockedBtn (int32_t activity, const
   MethodInfo* method); */

bool Dino_BusSand_App_Meta_StreakTowerUtil__ShouldShowLockedBtn_2252580(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  if ((bRam0000000004f9bfd9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bfd9 = 1;
  }
  uVar2 = param_1 - 1;
  if ((uVar2 < 0xb) && ((0x41fU >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
    iVar1 = *(int *)(&UNK_00e6c070 + (ulong)uVar2 * 4);
    iVar4 = Dino_BusSand_App_Meta_SystemOpen__UnlockLevel_2242f94(param_1);
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabaf8);
    }
    iVar5 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
    bVar3 = iVar4 + iVar1 <= iVar5;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

