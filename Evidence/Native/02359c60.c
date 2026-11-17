/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingExpr.Parser$$Expect
void Dino_BusSand_App_Meta_YachtRacingExpr_Parser__Expect (Dino_BusSand_App_Meta_YachtRacingExpr_Parser_o* __this, uint16_t c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingExpr.Parser$$Expect
   void Dino_BusSand_App_Meta_YachtRacingExpr_Parser__Expect
   (Dino_BusSand_App_Meta_YachtRacingExpr_Parser_o* __this, uint16_t c, const MethodInfo* method);
    */

void Dino_BusSand_App_Meta_YachtRacingExpr_Parser__Expect_2259c60(long param_1,ushort param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort auStack_24 [2];
  
  auStack_24[0] = param_2;
  uVar1 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser__get_Peek_2259568();
  if (uVar1 == param_2) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return;
  }
  FUN_01e78ee0(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x88));
  uVar2 = System_Char__ToString_47ac098(auStack_24,0);
  uVar3 = System_Int32__ToString_482d750(param_1 + 0x18,0);
                    /* try { // try from 02359cd0 to 02459cf7 has its CatchHandler @ 0235a5ac */
  uVar4 = thunk_FUN_021985a8(PTR_DAT_04cb3fe8);
  uVar5 = thunk_FUN_021985a8(PTR_DAT_04cb3fe0);
  uVar2 = System_String__Concat_46d30e8(uVar4,uVar2,uVar5,uVar3,0);
                    /* try { // try from 02359d14 to 02459d2b has its CatchHandler @ 0235a5b4 */
  thunk_FUN_021985a8(PTR_DAT_04cb3f78);
  uVar3 = thunk_FUN_0216e89c();
  System_FormatException___ctor_4818b54(uVar3,uVar2,0);
  uVar2 = thunk_FUN_021985a8(PTR_DAT_04cb3ff0);
                    /* try { // try from 02359d38 to 02459d43 has its CatchHandler @ 0235a598 */
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar3,uVar2);
}

