/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$ApplySpecialLose
void Dino_BusSand_App_Meta_BattleRoyaleFeature__ApplySpecialLose (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$ApplySpecialLose
   void Dino_BusSand_App_Meta_BattleRoyaleFeature__ApplySpecialLose
   (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleFeature__ApplySpecialLose_22268ec(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_38 [32];
  
  lVar3 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_Core_22262b8();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  bVar1 = *(byte *)(param_1 + 0x20);
  uVar2 = Dino_BusSand_App_Meta_SystemOpen__Guided_2243224(4,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(lVar3 + 0x10) == 0) {
LAB_02322c8c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(*(long *)(lVar3 + 0x10) + 0x10) != 0) {
      Dino_BusSand_App_Meta_BattleRoyaleCore__ExecuteCommand_2221c88(auStack_38,lVar3);
    }
    uVar2 = Dino_BusSand_App_Meta_BattleRoyaleCore__IsCheatData_2221168(lVar3);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(4,0), (uVar2 & 1) != 0)) {
      lVar4 = *(long *)(lVar3 + 0x10);
      if (lVar4 == 0) goto LAB_02322c8c;
      if (*(int *)(lVar4 + 0x48) != 0) {
        *(undefined4 *)(lVar4 + 0x10) = 1;
        *(byte *)(lVar4 + 0xa8) = bVar1 & 1;
        Dino_BusSand_App_Meta_BattleRoyaleCore__PersonDeadByStage_2222c90(lVar3);
        lVar3 = *(long *)(lVar3 + 0x28);
        if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02322c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
          return;
        }
      }
    }
  }
  return;
}

