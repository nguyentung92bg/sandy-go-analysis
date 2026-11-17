/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$CanStartNewRound
bool Dino_BusSand_App_Meta_BattleRoyaleCore__CanStartNewRound (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$CanStartNewRound
   bool Dino_BusSand_App_Meta_BattleRoyaleCore__CanStartNewRound
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_BattleRoyaleCore__CanStartNewRound_2221adc(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
LAB_02321b6c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = *(int *)(lVar2 + 0x48);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      return true;
    }
  }
  else if (iVar1 != 2) {
    if (iVar1 == 3) {
      return *(int *)(lVar2 + 0x4c) < 1;
    }
    if (iVar1 == 4) {
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 != 0) {
        lVar2 = (**(code **)(lVar2 + 0x18))
                          (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        if (*(long *)(param_1 + 0x10) != 0) {
          return *(long *)(*(long *)(param_1 + 0x10) + 0x18) <= lVar2;
        }
      }
      goto LAB_02321b6c;
    }
  }
  return false;
}

