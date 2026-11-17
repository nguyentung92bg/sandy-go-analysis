/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleConfig$$.ctor
void Dino_BusSand_App_Meta_BattleRoyaleConfig___ctor (Dino_BusSand_App_Meta_BattleRoyaleConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleConfig$$.ctor
   void Dino_BusSand_App_Meta_BattleRoyaleConfig___ctor (Dino_BusSand_App_Meta_BattleRoyaleConfig_o*
   __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Meta_BattleRoyaleConfig___ctor_2225fd4(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_04caca60;
  puVar1 = PTR_DAT_04caca50;
  if ((bRam0000000004f9bdd5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    bRam0000000004f9bdd5 = 1;
  }
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
            (uVar3,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x38),uVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

