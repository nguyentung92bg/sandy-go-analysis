/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$FirstReward
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_UI_BattleRoyaleUi__FirstReward (Dino_BusSand_App_Meta_BattleRoyaleCore_o* core, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$FirstReward
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_UI_BattleRoyaleUi__FirstReward (Dino_BusSand_App_Meta_BattleRoyaleCore_o* core,
   const MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyaleUi__FirstReward_219d3ac(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  if ((bRam0000000004f9ba05 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    bRam0000000004f9ba05 = 1;
  }
  if ((param_1 == 0) ||
     (lVar2 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_RewardPool_22210ac(param_1,0), lVar2 == 0)
     ) {
    puVar1 = PTR_DAT_04caca50;
    lVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
    System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
              (lVar2,*(undefined8 *)puVar1);
  }
  return lVar2;
}

