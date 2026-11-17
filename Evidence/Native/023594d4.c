/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingExpr.Parser$$ParseExpression
double Dino_BusSand_App_Meta_YachtRacingExpr_Parser__ParseExpression (Dino_BusSand_App_Meta_YachtRacingExpr_Parser_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingExpr.Parser$$ParseExpression
   double Dino_BusSand_App_Meta_YachtRacingExpr_Parser__ParseExpression
   (Dino_BusSand_App_Meta_YachtRacingExpr_Parser_o* __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Meta_YachtRacingExpr_Parser__ParseExpression_22594d4(long param_1)

{
  int iVar1;
  short sVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar3 = (double)Dino_BusSand_App_Meta_YachtRacingExpr_Parser__ParseTerm_225959c();
  while( true ) {
    sVar2 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser__get_Peek_2259568(param_1);
    if ((sVar2 != 0x2b) &&
       (sVar2 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser__get_Peek_2259568(param_1),
       sVar2 != 0x2d)) break;
    iVar1 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar1 + 1;
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    sVar2 = System_String__get_Chars_46ccb24(*(long *)(param_1 + 0x10),iVar1,0);
    dVar4 = (double)Dino_BusSand_App_Meta_YachtRacingExpr_Parser__ParseTerm_225959c(param_1);
    if (sVar2 != 0x2b) {
      dVar4 = -dVar4;
    }
    dVar3 = dVar3 + dVar4;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar3;
  return auVar5;
}

