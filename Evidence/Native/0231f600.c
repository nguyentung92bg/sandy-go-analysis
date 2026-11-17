/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_Personas
System_Collections_Generic_List_BattleRoyalePersona__o* Dino_BusSand_App_Meta_BattleRoyaleCore__get_Personas (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_Personas
   System_Collections_Generic_List_BattleRoyalePersona__o*
   Dino_BusSand_App_Meta_BattleRoyaleCore__get_Personas (Dino_BusSand_App_Meta_BattleRoyaleCore_o*
   __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleCore__get_Personas_221f600(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x40);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    lVar1 = Dino_BusSand_App_Meta_BattleRoyalePersona__LoadAll_221f63c();
    *plVar2 = lVar1;
    thunk_FUN_02134474(plVar2,lVar1);
  }
  return lVar1;
}

