/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$OnProcessFlyEnd
void Dino_BusSand_App_Meta_YachtRacingCore__OnProcessFlyEnd (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$OnProcessFlyEnd
   void Dino_BusSand_App_Meta_YachtRacingCore__OnProcessFlyEnd
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingCore__OnProcessFlyEnd_2258ab8(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0x70) = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x2c) == 6) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(lVar1 + 0x2c) != 7) {
      lVar2 = *(long *)(param_1 + 0x28);
      *(undefined4 *)(lVar1 + 0x2c) = 7;
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      }
      lVar1 = *(long *)(param_1 + 0x30);
      if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0235555c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        return;
      }
    }
    return;
  }
  return;
}

