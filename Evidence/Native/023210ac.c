/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_RewardPool
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_Meta_BattleRoyaleCore__get_RewardPool (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_RewardPool
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_Meta_BattleRoyaleCore__get_RewardPool (Dino_BusSand_App_Meta_BattleRoyaleCore_o*
   __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_BattleRoyaleCore__get_RewardPool_22210ac(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000004f9bdbf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    bRam0000000004f9bdbf = 1;
  }
  lVar1 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config_22206d8(param_1);
  if ((lVar1 == 0) &&
     (lVar1 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_DefaultConfig_2220774(param_1), lVar1 == 0
     )) {
    uVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
    System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
              (uVar2,*(undefined8 *)PTR_DAT_04caca50);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
  }
  return uVar2;
}

