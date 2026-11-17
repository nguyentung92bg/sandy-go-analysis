/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$AutoChangeToNotStart
void Dino_BusSand_App_Meta_BattleRoyaleCore__AutoChangeToNotStart (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$AutoChangeToNotStart
   void Dino_BusSand_App_Meta_BattleRoyaleCore__AutoChangeToNotStart
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleCore__AutoChangeToNotStart_222211c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x48) == 1) {
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 == 0) goto LAB_02322180;
      lVar3 = *(long *)(lVar1 + 0x30);
      lVar1 = (**(code **)(lVar2 + 0x18))
                        (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      if (lVar3 < lVar1) {
        lVar1 = *(long *)(param_1 + 0x10);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(int *)(lVar1 + 0x48) != 0) {
          lVar2 = *(long *)(param_1 + 0x28);
          *(undefined4 *)(lVar1 + 0x48) = 0;
          if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0232210c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28))
            ;
            return;
          }
        }
        return;
      }
    }
    return;
  }
LAB_02322180:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

