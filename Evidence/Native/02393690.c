/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_Current
int32_t Dino_BusSand_App_Meta_WinStreak__get_Current (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_Current
   int32_t Dino_BusSand_App_Meta_WinStreak__get_Current (const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_WinStreak__get_Current_2293690(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  if ((bRam0000000004f9c1ee & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5428);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c1ee = 1;
  }
  uVar4 = Dino_BusSand_App_Meta_WinStreak__get_Enabled_22928b8();
  puVar1 = PTR_DAT_04cabaf8;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
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
    if (*(long *)(*(long *)(lVar5 + 0xb8) + 0x10) != 0) {
      lVar5 = Dino_BusSand_App_Meta_WinStreak__get_Checkpoints_2292b2c();
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) == 0) {
          return 0;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        iVar2 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
        iVar3 = Dino_BusSand_App_Meta_WinStreak__get_UnlockLevel_2292964();
        if (iVar2 < iVar3) {
          return 1;
        }
        lVar5 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
        if (lVar5 != 0) {
          iVar2 = *(int *)(lVar5 + 0x10);
          iVar3 = Dino_BusSand_App_Meta_WinStreak__get_CurrentCycle_2293290();
          if (iVar3 <= iVar2) {
            if (*(char *)(lVar5 + 0x14) != '\0') {
              return 3;
            }
            return 2;
          }
          if ((*(char *)(lVar5 + 0x14) == '\0') || (*(int *)(lVar5 + 0x10) == -0x80000000)) {
            return 2;
          }
          lVar5 = Dino_BusSand_App_Meta_WinStreak__ReachedUnclaimed_22937e4();
          if (lVar5 != 0) {
            if (*(int *)(lVar5 + 0x18) < 1) {
              return 2;
            }
            return 4;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return 0;
}

