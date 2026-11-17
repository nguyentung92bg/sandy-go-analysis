/* IL2CPP: Dino.BusSand.App.Meta.WinChest$$OnWin
bool Dino_BusSand_App_Meta_WinChest__OnWin (int32_t wonLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinChest$$OnWin
   bool Dino_BusSand_App_Meta_WinChest__OnWin (int32_t wonLevel, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_WinChest__OnWin_220da3c(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd1d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd1d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (cRam0000000004f9bdf9 == '\0') {
    FUN_02132f7c(PTR_DAT_04cb21c0);
    cRam0000000004f9bdf9 = '\x01';
  }
  puVar2 = PTR_DAT_04cb21c0;
  **(undefined1 **)(*(long *)PTR_DAT_04cb21c0 + 0xb8) = 0;
  uVar6 = Dino_BusSand_App_Meta_WinChest__get_On_220d720();
  if (((uVar6 & 1) != 0) &&
     (iVar3 = Dino_BusSand_App_Meta_Monetization__get_WinChestFromLevel_2267c54(0), iVar3 <= param_1
     )) {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(lVar5 + 0x180) == '\0') {
      if (cRam0000000004f9bdf9 == '\0') {
        FUN_02132f7c(PTR_DAT_04cb21c0);
        cRam0000000004f9bdf9 = '\x01';
      }
      puVar7 = *(undefined1 **)(*(long *)puVar2 + 0xb8);
      iVar3 = *(int *)(lVar5 + 0x178) + 1;
      *(int *)(lVar5 + 0x178) = iVar3;
      *puVar7 = 1;
      iVar4 = Dino_BusSand_App_Meta_WinChest__get_Need_220d790();
      if (iVar4 <= iVar3) {
        *(undefined1 *)(lVar5 + 0x180) = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
      return *(char *)(lVar5 + 0x180) != '\0';
    }
  }
  return false;
}

