/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$NotifySpecialLevelExit
void Dino_BusSand_App_Meta_RacingRobotSession__NotifySpecialLevelExit (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$NotifySpecialLevelExit
   void Dino_BusSand_App_Meta_RacingRobotSession__NotifySpecialLevelExit
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotSession__NotifySpecialLevelExit_22639b4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  if ((bRam0000000004f9c041 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c041 = 1;
  }
  puVar1 = PTR_DAT_04caa200;
  if (0 < *(long *)(param_1 + 0x78)) {
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar5 = *(float *)(param_1 + 0x68);
    lVar2 = (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28))
    ;
    lVar3 = *(long *)(param_1 + 0x78);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    fVar4 = (float)System_Math__Min_4831144((float)(lVar2 - lVar3) / 1000.0,0x43960000,0);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(float *)(param_1 + 0x68) = fVar5 + fVar4;
  }
  return;
}

