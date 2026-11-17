/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$LockInput
void Dino_BusSand_App_Gameplay_GameplayController__LockInput (Dino_BusSand_App_Gameplay_GameplayController_o* __this, bool on, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$LockInput
   void Dino_BusSand_App_Gameplay_GameplayController__LockInput
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, bool on, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController__LockInput_229dd28(long param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(int *)(param_1 + 0xa0) - 1;
    if ((param_2 & 1) != 0) {
      uVar1 = *(int *)(param_1 + 0xa0) + 1;
    }
    *(uint *)(param_1 + 0xa0) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

