/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$SetCommand
void Dino_BusSand_App_Meta_BattleRoyaleCore__SetCommand (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, int32_t cmd, bool noStepFail, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$SetCommand
   void Dino_BusSand_App_Meta_BattleRoyaleCore__SetCommand
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, int32_t cmd, bool noStepFail, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleCore__SetCommand_2222bc4
               (long param_1,int param_2,byte param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  uVar1 = Dino_BusSand_App_Meta_SystemOpen__Guided_2243224(4,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_02322c8c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x10) != 0) {
    Dino_BusSand_App_Meta_BattleRoyaleCore__ExecuteCommand_2221c88(auStack_38,param_1);
  }
  uVar1 = Dino_BusSand_App_Meta_BattleRoyaleCore__IsCheatData_2221168(param_1);
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar1 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(4,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) goto LAB_02322c8c;
  if (*(int *)(lVar2 + 0x48) == 0) {
    return;
  }
  *(int *)(lVar2 + 0x10) = param_2;
  if (param_2 != 2) {
    if (param_2 != 1) goto LAB_02322c58;
    *(byte *)(lVar2 + 0xa8) = param_3 & 1;
  }
  Dino_BusSand_App_Meta_BattleRoyaleCore__PersonDeadByStage_2222c90(param_1);
LAB_02322c58:
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02322c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
  return;
}

