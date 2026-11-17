/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$OnPlayerProgressChanged
void Dino_BusSand_App_Meta_RacingRobotSession__OnPlayerProgressChanged (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, int32_t newProgress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$OnPlayerProgressChanged
   void Dino_BusSand_App_Meta_RacingRobotSession__OnPlayerProgressChanged
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, int32_t newProgress, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_RacingRobotSession__OnPlayerProgressChanged_2262b0c
               (long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x6d) == '\0') {
    iVar1 = *(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x50) = param_2;
    Dino_BusSand_App_Meta_RacingRobotSession__Tick_22611fc();
    if (iVar1 < param_2) {
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x60);
      Dino_BusSand_App_Meta_RacingRobotSession__HandleAntiStack_2261d48(param_1,param_2);
    }
    else if (param_2 == 0) {
      *(undefined4 *)(param_1 + 100) = 0;
    }
    if (*(char *)(param_1 + 0x6c) != '\0') {
      Dino_BusSand_App_Meta_RacingRobotSession__HandlePayProtectProgressUpdate_2262ba4
                (param_1,param_2);
    }
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(*(long *)(param_1 + 0x18) + 0x18) <= param_2) {
      if (*(char *)(param_1 + 0x6d) == '\0') {
        *(undefined1 *)(param_1 + 0x6d) = 1;
        if (*(long *)(param_1 + 0x30) != 0) {
          Dino_BusSand_App_Meta_RacingRobotSave__ClearAgentSnapshot_225fbb0();
        }
        lVar2 = *(long *)(param_1 + 0x88);
        if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023630d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),1,*(undefined8 *)(lVar2 + 0x28))
          ;
          return;
        }
      }
      return;
    }
  }
  return;
}

