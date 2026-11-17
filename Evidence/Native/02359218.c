/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingExpr$$TryEvaluate
bool Dino_BusSand_App_Meta_YachtRacingExpr__TryEvaluate (System_String_o* formula, System_Collections_Generic_Dictionary_string__double__o* vars, System_Random_o* rng, double* result, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingExpr$$TryEvaluate
   bool Dino_BusSand_App_Meta_YachtRacingExpr__TryEvaluate (System_String_o* formula,
   System_Collections_Generic_Dictionary_string__double__o* vars, System_Random_o* rng, double*
   result, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_YachtRacingExpr__TryEvaluate_2259218
               (long param_1,undefined8 param_2,long param_3,ulong *param_4)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((bRam0000000004f9c005 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3f68);
    FUN_02132f7c(PTR_DAT_04cae330);
    FUN_02132f7c(PTR_DAT_04cab270);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c005 = 1;
  }
  *param_4 = 0;
  uVar2 = System_String__IsNullOrWhiteSpace_46d20a0(param_1,0);
  if ((uVar2 & 1) == 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar3 = System_String__Replace_46d4a70
                      (param_1,*(undefined8 *)PTR_DAT_04cab270,*(undefined8 *)PTR_DAT_04ca9c30,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar4 = System_String__ToLowerInvariant_46d6ce8(lVar3,0);
    if (param_3 == 0) {
      param_3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae330);
      System_Random___ctor_4840a9c(param_3,0);
    }
    lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb3f68);
    Dino_BusSand_App_Meta_YachtRacingExpr_Parser___ctor_2259474(lVar3,uVar4,param_2,param_3);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = Dino_BusSand_App_Meta_YachtRacingExpr_Parser__ParseExpression_22594d4(lVar3);
    lVar6 = *(long *)(lVar3 + 0x10);
    *param_4 = uVar2;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(lVar3 + 0x18) != *(int *)(lVar6 + 0x10)) {
      uVar4 = System_Int32__ToString_482d750(lVar3 + 0x18,0);
      uVar5 = thunk_FUN_021985a8(PTR_DAT_04cb3f70);
      uVar4 = System_String__Concat_46c82e0(uVar5,uVar4,0);
      thunk_FUN_021985a8(PTR_DAT_04cb3f78);
      uVar5 = thunk_FUN_0216e89c();
      System_FormatException___ctor_4818b54(uVar5,uVar4,0);
      uVar4 = thunk_FUN_021985a8(PTR_DAT_04cb3f80);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar5,uVar4);
    }
    bVar1 = (uVar2 & 0x7fffffffffffffff) < 0x7ff0000000000001;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

