/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_Today
int64_t Dino_BusSand_App_Meta_BattleRoyaleCore__get_Today (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_Today
   int64_t Dino_BusSand_App_Meta_BattleRoyaleCore__get_Today
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleCore__get_Today_221f5a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar1 = (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28))
    ;
    return lVar1 / 86400000;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

