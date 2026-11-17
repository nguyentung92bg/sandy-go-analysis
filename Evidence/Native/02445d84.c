/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<BusStreak>b__42_5
bool Dino_BusSand_Cheat_AutoQa___c___BusStreak_b__42_5 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x044c6fd8) */
/* WARNING: Removing unreachable block (ram,0x044c7008) */
/* WARNING: Removing unreachable block (ram,0x044c701c) */
/* WARNING: Removing unreachable block (ram,0x044c7020) */
/* WARNING: Removing unreachable block (ram,0x044c6fdc) */
/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<BusStreak>b__42_5
   bool Dino_BusSand_Cheat_AutoQa___c___BusStreak_b__42_5 (Dino_BusSand_Cheat_AutoQa___c_o* __this,
   const MethodInfo* method); */

bool Dino_BusSand_Cheat_AutoQa___c___BusStreak_b__42_5_2345d84(void)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c6d9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb9788);
    bRam0000000004f9c6d9 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x39) != '\0') {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar3 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
      if (lVar3 == 0) goto LAB_02445e74;
      uVar4 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                        (lVar3,*(undefined8 *)PTR_DAT_04cb9788);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar3 = Dino_BusSand_Cheat_AutoQa__TopPopup_2342698();
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
        puVar1 = PTR_DAT_04ca9ae8;
        if ((bRam0000000004fa8637 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
          bRam0000000004fa8637 = 1;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if ((bRam0000000004fa85fa & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          bRam0000000004fa85fa = 1;
        }
        if (lVar3 == 0) {
          bVar2 = true;
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          bVar2 = *(long *)(lVar3 + 0x10) == 0;
        }
        return bVar2;
      }
    }
    return false;
  }
LAB_02445e74:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

