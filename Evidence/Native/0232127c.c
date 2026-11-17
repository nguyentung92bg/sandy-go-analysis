/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_RemainDurationSeconds
int32_t Dino_BusSand_App_Meta_BattleRoyaleCore__get_RemainDurationSeconds (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_RemainDurationSeconds
   int32_t Dino_BusSand_App_Meta_BattleRoyaleCore__get_RemainDurationSeconds
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

int Dino_BusSand_App_Meta_BattleRoyaleCore__get_RemainDurationSeconds_222127c(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  long lVar3;
  long lVar4;
  
  if ((*(long *)(param_1 + 0x10) != 0) && (lVar3 = *(long *)(param_1 + 0x20), lVar3 != 0)) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
    lVar3 = (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28))
    ;
    lVar4 = lVar4 - lVar3;
    auVar2 = SEXT816(lVar4) * SEXT816(0x20c49ba5e353f7cf);
    iVar1 = (int)(auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f);
    if (lVar4 < 1) {
      iVar1 = 0;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

