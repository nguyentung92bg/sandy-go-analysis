/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$SpeedIndexOf
int32_t Dino_BusSand_Cheat_CheatManager__SpeedIndexOf (Dino_BusSand_Cheat_CheatManager_o* __this, float s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$SpeedIndexOf
   int32_t Dino_BusSand_Cheat_CheatManager__SpeedIndexOf (Dino_BusSand_Cheat_CheatManager_o* __this,
   float s, const MethodInfo* method); */

uint Dino_BusSand_Cheat_CheatManager__SpeedIndexOf_2365324(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  if ((*(long *)(param_2 + 0x100) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_2 + 0x100) + 0x28), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar4 = (uint)*(ulong *)(lVar3 + 0x18);
  if ((int)uVar4 < 1) {
                    /* try { // try from 02465394 to 025653af has its CatchHandler @ 02465034 */
    uVar2 = 0;
  }
  else {
    uVar5 = 0;
    uVar1 = 0;
    do {
                    /* try { // try from 02465360 to 02565363 has its CatchHandler @ 02465370 */
                    /* try { // try from 02465364 to 02565367 has its CatchHandler @ 02465034 */
      if (((*(ulong *)(lVar3 + 0x18) & 0xffffffff) == uVar5) || (uVar4 <= uVar1)) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
                    /* try { // try from 02465368 to 0256536b has its CatchHandler @ 0246536c */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02465368 with catch @ 0246536c
                       try { // try from 0246536c to 0256538f has its CatchHandler @ 02465034 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02465360 with catch @ 02465370
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02465168 with catch @ 02465374
                        */
      uVar2 = (uint)uVar5;
      if (ABS(*(float *)(lVar3 + (long)(int)uVar1 * 4 + 0x20) - param_1) <=
          ABS(*(float *)(lVar3 + 0x20 + uVar5 * 4) - param_1)) {
        uVar2 = uVar1;
      }
      uVar5 = uVar5 + 1;
      uVar1 = uVar2;
    } while ((uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar5);
  }
  return uVar2;
}

