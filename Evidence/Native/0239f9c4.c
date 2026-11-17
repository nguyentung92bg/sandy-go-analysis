/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$DeclineRevive
void Dino_BusSand_App_Gameplay_GameplayController__DeclineRevive (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$DeclineRevive
   void Dino_BusSand_App_Gameplay_GameplayController__DeclineRevive
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController__DeclineRevive_229f9c4(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x20) != 3) {
    return;
  }
  if (*(int *)(param_1 + 0x20) != 5) {
    *(undefined4 *)(param_1 + 0x20) = 5;
    Dino_BusSand_App_Gameplay_GameplayController__ClearHandlers_229d4e4(param_1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    lVar1 = *(long *)(param_1 + 0x70);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0239d5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),5,*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
  return;
}

