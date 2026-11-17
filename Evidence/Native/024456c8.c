/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<DailyRewards>b__40_6
bool Dino_BusSand_Cheat_AutoQa___c___DailyRewards_b__40_6 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x044c6fd8) */
/* WARNING: Removing unreachable block (ram,0x044c7008) */
/* WARNING: Removing unreachable block (ram,0x044c701c) */
/* WARNING: Removing unreachable block (ram,0x044c7020) */
/* WARNING: Removing unreachable block (ram,0x044c6fdc) */
/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<DailyRewards>b__40_6
   bool Dino_BusSand_Cheat_AutoQa___c___DailyRewards_b__40_6 (Dino_BusSand_Cheat_AutoQa___c_o*
   __this, const MethodInfo* method); */

bool Dino_BusSand_Cheat_AutoQa___c___DailyRewards_b__40_6_23456c8(void)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  
                    /* try { // try from 024456c8 to 025456cb has its CatchHandler @ 024456e4 */
  puVar1 = PTR_DAT_04cb9568;
                    /* try { // try from 024456cc to 025456e7 has its CatchHandler @ 024455c8 */
  if ((bRam0000000004f9c6cd & 1) == 0) {
                    /* catch() { ... } // from try @ 024456c8 with catch @ 024456e4 */
                    /* try { // try from 024456e8 to 025456ef has its CatchHandler @ 024456f8 */
    FUN_02132f7c(PTR_DAT_04cb9568);
                    /* try { // try from 024456f0 to 025456fb has its CatchHandler @ 024455c8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024456e8 with catch @ 024456f8
                        */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 024456fc to 025457b3 has its CatchHandler @ 024456fc
                       catch() { ... } // from try @ 024456fc with catch @ 024456fc
                       catch() { ... } // from try @ 02445830 with catch @ 024456fc
                       catch() { ... } // from try @ 02445884 with catch @ 024456fc
                       catch() { ... } // from try @ 024458a8 with catch @ 024456fc */
    FUN_02132f7c(PTR_DAT_04cb97b8);
    bRam0000000004f9c6cd = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
  if (lVar3 != 0) {
    uVar4 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (lVar3,*(undefined8 *)PTR_DAT_04cb97b8);
    if ((uVar4 & 1) != 0) {
      return false;
    }
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
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

