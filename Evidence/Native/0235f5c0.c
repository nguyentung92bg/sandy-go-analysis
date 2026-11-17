/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotAgent$$SetProgress
void Dino_BusSand_App_Meta_RacingRobotAgent__SetProgress (Dino_BusSand_App_Meta_RacingRobotAgent_o* __this, int32_t progress, bool preserveAchievedTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotAgent$$SetProgress
   void Dino_BusSand_App_Meta_RacingRobotAgent__SetProgress
   (Dino_BusSand_App_Meta_RacingRobotAgent_o* __this, int32_t progress, bool preserveAchievedTime,
   const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotAgent__SetProgress_225f5c0
               (long param_1,undefined4 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_DAT_04caa200;
  if ((bRam0000000004f9c02f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c02f = 1;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = System_Math__Min_4831118(uVar2,param_2,0);
  uVar2 = System_Math__Max_4830fc8(0,uVar2,0);
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  *(undefined4 *)(param_1 + 0x90) = 0;
  uVar2 = Dino_BusSand_App_Meta_RacingRobotAgent__CalcRequiredSeconds_225eff8(param_1,uVar2);
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  if ((param_3 & 1) == 0) {
    *(undefined4 *)(param_1 + 0xac) = 0x7f7fffff;
  }
  return;
}

