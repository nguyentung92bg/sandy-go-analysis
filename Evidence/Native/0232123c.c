/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$IsInColdTimeStamp
bool Dino_BusSand_App_Meta_BattleRoyaleCore__IsInColdTimeStamp (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$IsInColdTimeStamp
   bool Dino_BusSand_App_Meta_BattleRoyaleCore__IsInColdTimeStamp
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_BattleRoyaleCore__IsInColdTimeStamp_222123c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar1 = (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28))
    ;
    if (*(long *)(param_1 + 0x10) != 0) {
      return lVar1 < *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

