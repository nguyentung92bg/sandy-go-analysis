/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$IsActive
bool Dino_BusSand_App_Meta_BattleRoyaleCore__IsActive (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$IsActive
   bool Dino_BusSand_App_Meta_BattleRoyaleCore__IsActive (Dino_BusSand_App_Meta_BattleRoyaleCore_o*
   __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_BattleRoyaleCore__IsActive_22211a8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if ((*(long *)(lVar1 + 0x28) < 1) || (*(long *)(lVar1 + 0x30) < 1)) {
      return false;
    }
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 != 0) {
      lVar1 = (**(code **)(lVar1 + 0x18))
                        (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      if (*(long *)(param_1 + 0x10) != 0) {
        if (lVar1 < *(long *)(*(long *)(param_1 + 0x10) + 0x28)) {
          return false;
        }
        lVar1 = *(long *)(param_1 + 0x20);
        if (lVar1 != 0) {
          lVar1 = (**(code **)(lVar1 + 0x18))
                            (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
          if (*(long *)(param_1 + 0x10) != 0) {
            return lVar1 <= *(long *)(*(long *)(param_1 + 0x10) + 0x30);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

