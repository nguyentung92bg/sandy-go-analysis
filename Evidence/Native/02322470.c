/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$ResetData
void Dino_BusSand_App_Meta_BattleRoyaleCore__ResetData (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$ResetData
   void Dino_BusSand_App_Meta_BattleRoyaleCore__ResetData (Dino_BusSand_App_Meta_BattleRoyaleCore_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleCore__ResetData_2222470(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    Dino_BusSand_App_Meta_BattleRoyaleRules__ClearGroup_22224c4();
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x30) = 0;
      *(undefined8 *)(lVar1 + 0x48) = 0;
      *(undefined8 *)(lVar1 + 0x50) = 0;
      lVar2 = *(long *)(param_1 + 0x28);
      *(undefined4 *)(lVar1 + 100) = 0;
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023224b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

