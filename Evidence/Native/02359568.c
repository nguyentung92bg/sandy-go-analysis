/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingExpr.Parser$$get_Peek
uint16_t Dino_BusSand_App_Meta_YachtRacingExpr_Parser__get_Peek (Dino_BusSand_App_Meta_YachtRacingExpr_Parser_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingExpr.Parser$$get_Peek
   uint16_t Dino_BusSand_App_Meta_YachtRacingExpr_Parser__get_Peek
   (Dino_BusSand_App_Meta_YachtRacingExpr_Parser_o* __this, const MethodInfo* method); */

undefined2 Dino_BusSand_App_Meta_YachtRacingExpr_Parser__get_Peek_2259568(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < *(int *)(lVar2 + 0x10)) {
    if ((long)*(int *)(lVar2 + 0x10) <= (long)(ulong)uVar1) {
      System_ThrowHelper__ThrowIndexOutOfRangeException_484fd6c(0,(ulong)uVar1,0);
    }
    return *(undefined2 *)(lVar2 + (long)(int)uVar1 * 2 + 0x14);
  }
  return 0;
}

