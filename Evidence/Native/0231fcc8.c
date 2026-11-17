/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_FinalRows
System_Collections_Generic_List_BattleRoyaleFinalStage__o* Dino_BusSand_App_Meta_BattleRoyaleCore__get_FinalRows (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_FinalRows
   System_Collections_Generic_List_BattleRoyaleFinalStage__o*
   Dino_BusSand_App_Meta_BattleRoyaleCore__get_FinalRows (Dino_BusSand_App_Meta_BattleRoyaleCore_o*
   __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleCore__get_FinalRows_221fcc8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x48);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    lVar1 = Dino_BusSand_App_Meta_BattleRoyaleFinalStage__LoadAll_221fd04();
    *plVar2 = lVar1;
    thunk_FUN_02134474(plVar2,lVar1);
  }
  return lVar1;
}

