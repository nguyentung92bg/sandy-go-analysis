/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<QuitPause>b__44_14
bool Dino_BusSand_Cheat_AutoQa___c___QuitPause_b__44_14 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x044c6fd8) */
/* WARNING: Removing unreachable block (ram,0x044c7008) */
/* WARNING: Removing unreachable block (ram,0x044c701c) */
/* WARNING: Removing unreachable block (ram,0x044c7020) */
/* WARNING: Removing unreachable block (ram,0x044c6fdc) */
/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<QuitPause>b__44_14
   bool Dino_BusSand_Cheat_AutoQa___c___QuitPause_b__44_14 (Dino_BusSand_Cheat_AutoQa___c_o* __this,
   const MethodInfo* method); */

bool Dino_BusSand_Cheat_AutoQa___c___QuitPause_b__44_14_2346744(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c6ea & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c6ea = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_Cheat_AutoQa__TopPopup_2342698();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa8637 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
    bRam0000000004fa8637 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if ((bRam0000000004fa85fa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004fa85fa = 1;
  }
  if (lVar4 == 0) {
    bVar3 = true;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    bVar3 = *(long *)(lVar4 + 0x10) == 0;
  }
  return bVar3;
}

