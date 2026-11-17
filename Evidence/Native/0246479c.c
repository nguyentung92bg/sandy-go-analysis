/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$get_Speed
float Dino_BusSand_Cheat_CheatManager__get_Speed (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$get_Speed
   float Dino_BusSand_Cheat_CheatManager__get_Speed (Dino_BusSand_Cheat_CheatManager_o* __this,
   const MethodInfo* method); */

undefined4 Dino_BusSand_Cheat_CheatManager__get_Speed_236479c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
                    /* try { // try from 024647a0 to 025647bf has its CatchHandler @ 024640b4 */
                    /* catch() { ... } // from try @ 024645a4 with catch @ 024647a4 */
  if ((*(long *)(param_1 + 0x100) == 0) ||
     (lVar4 = *(long *)(*(long *)(param_1 + 0x100) + 0x28), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 024647c0 with catch @ 024647e4 */
    FUN_02133224();
  }
  uVar2 = *(uint *)(param_1 + 0x13c);
  uVar3 = *(uint *)(lVar4 + 0x18) - 1;
                    /* try { // try from 024647c0 to 025647c3 has its CatchHandler @ 024647e4 */
  uVar1 = uVar2;
  if ((int)uVar3 <= (int)uVar2) {
    uVar1 = uVar3;
  }
                    /* try { // try from 024647c4 to 025647e7 has its CatchHandler @ 024640b4 */
  uVar3 = 0;
  if (-1 < (int)uVar2) {
    uVar3 = uVar1;
  }
  if (uVar3 < *(uint *)(lVar4 + 0x18)) {
    return *(undefined4 *)(lVar4 + (long)(int)uVar3 * 4 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024647e8 to 025647ef has its CatchHandler @ 024647f8 */
  FUN_0213322c();
}

