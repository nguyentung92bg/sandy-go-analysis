/* IL2CPP: Dino.BusSand.View.GameView$$<Load>b__100_0
int32_t Dino_BusSand_View_GameView___Load_b__100_0 (Dino_BusSand_View_GameView_o* __this, uint8_t x, uint8_t y, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$<Load>b__100_0
   int32_t Dino_BusSand_View_GameView___Load_b__100_0 (Dino_BusSand_View_GameView_o* __this, uint8_t
   x, uint8_t y, const MethodInfo* method); */

void Dino_BusSand_View_GameView___Load_b__100_0_23abc18
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x18), lVar2 != 0)) {
    uStack_14 = Dino_BusSand_Core_SandGrid__CountOf_241764c(lVar2,param_3,0);
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x18), lVar2 != 0)) {
      uVar1 = Dino_BusSand_Core_SandGrid__CountOf_241764c(lVar2,param_2,0);
                    /* try { // try from 024abc70 to 025abe0f has its CatchHandler @ 024abc70
                       catch() { ... } // from try @ 024abc70 with catch @ 024abc70
                       catch() { ... } // from try @ 024abee8 with catch @ 024abc70
                       catch() { ... } // from try @ 024abf1c with catch @ 024abc70
                       catch() { ... } // from try @ 024abf58 with catch @ 024abc70
                       catch() { ... } // from try @ 024abf7c with catch @ 024abc70 */
      System_Int32__CompareTo_482d6dc(&uStack_14,uVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

