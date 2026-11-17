/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$Consumed
void Dino_BusSand_App_Gameplay_GameplayController__Consumed (Dino_BusSand_App_Gameplay_GameplayController_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$Consumed
   void Dino_BusSand_App_Gameplay_GameplayController__Consumed
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, int32_t id, const MethodInfo* method);
    */

void Dino_BusSand_App_Gameplay_GameplayController__Consumed_229f5dc(long param_1,undefined4 param_2)

{
  long lVar1;
  
  Dino_BusSand_App_Gameplay_GameplayController__ClearHandlers_229d4e4();
  lVar1 = *(long *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0239f620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),param_2,*(undefined8 *)(lVar1 + 0x28))
    ;
    return;
  }
  return;
}

