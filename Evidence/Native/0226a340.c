/* IL2CPP: Dino.BusSand.App.GameApp$$<GiveUp>b__110_0
void Dino_BusSand_App_GameApp___GiveUp_b__110_0 (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$<GiveUp>b__110_0
   void Dino_BusSand_App_GameApp___GiveUp_b__110_0 (Dino_BusSand_App_GameApp_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_GameApp___GiveUp_b__110_0_216a340(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar1 + 0x20) != 3) {
    return;
  }
  if (*(int *)(lVar1 + 0x20) != 5) {
    *(undefined4 *)(lVar1 + 0x20) = 5;
    Dino_BusSand_App_Gameplay_GameplayController__ClearHandlers_229d4e4(lVar1);
    *(undefined4 *)(lVar1 + 0x60) = 0;
    lVar1 = *(long *)(lVar1 + 0x70);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0239d5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),5,*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
  return;
}

