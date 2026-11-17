/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton.<>c__DisplayClass20_0$$<Fresh>b__1
void Dino_BusSand_App_UI_BattleRoyaleHallButton___c__DisplayClass20_0___Fresh_b__1 (Dino_BusSand_App_UI_BattleRoyaleHallButton___c__DisplayClass20_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0228be08) */
/* WARNING: Removing unreachable block (ram,0x0228be0c) */
/* WARNING: Removing unreachable block (ram,0x0228be24) */
/* WARNING: Removing unreachable block (ram,0x0228be28) */
/* WARNING: Removing unreachable block (ram,0x0228be44) */
/* WARNING: Removing unreachable block (ram,0x0228be88) */
/* WARNING: Removing unreachable block (ram,0x0228be4c) */
/* WARNING: Removing unreachable block (ram,0x0228be60) */
/* WARNING: Removing unreachable block (ram,0x0229a130) */
/* WARNING: Removing unreachable block (ram,0x0229a150) */
/* WARNING: Removing unreachable block (ram,0x0229a15c) */
/* WARNING: Removing unreachable block (ram,0x0229a160) */
/* WARNING: Removing unreachable block (ram,0x0229a174) */
/* WARNING: Removing unreachable block (ram,0x0229a178) */
/* WARNING: Removing unreachable block (ram,0x0229a194) */
/* WARNING: Removing unreachable block (ram,0x0229a1a4) */
/* WARNING: Removing unreachable block (ram,0x0229a1ac) */
/* WARNING: Removing unreachable block (ram,0x0229a1f4) */
/* WARNING: Removing unreachable block (ram,0x0229a1b4) */
/* WARNING: Removing unreachable block (ram,0x0229a1f0) */
/* WARNING: Removing unreachable block (ram,0x0229a1bc) */
/* WARNING: Removing unreachable block (ram,0x0229a1e0) */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton.<>c__DisplayClass20_0$$<Fresh>b__1
   void Dino_BusSand_App_UI_BattleRoyaleHallButton___c__DisplayClass20_0___Fresh_b__1
   (Dino_BusSand_App_UI_BattleRoyaleHallButton___c__DisplayClass20_0_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_BattleRoyaleHallButton___c__DisplayClass20_0___Fresh_b__1_218c39c
               (long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    Dino_BusSand_App_Meta_BattleRoyaleCore__RefreshTime_2221ee0(*(long *)(param_1 + 0x18),0);
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 != 0) {
      if ((bRam0000000004f9b980 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04cadcf0);
        bRam0000000004f9b980 = 1;
      }
      Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(*(undefined8 *)(lVar1 + 0x40),1,0);
      Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(*(undefined8 *)(lVar1 + 0x38),0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

