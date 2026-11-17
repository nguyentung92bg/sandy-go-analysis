/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$NotifySpecialLevelEnter
void Dino_BusSand_App_Meta_RacingRobotSession__NotifySpecialLevelEnter (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$NotifySpecialLevelEnter
   void Dino_BusSand_App_Meta_RacingRobotSession__NotifySpecialLevelEnter
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotSession__NotifySpecialLevelEnter_2263978(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x78) < 1) {
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28))
    ;
    *(undefined8 *)(param_1 + 0x78) = uVar1;
  }
  return;
}

