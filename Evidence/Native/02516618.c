/* IL2CPP: Dino.BusSand.Core.Road$$NormalStep
double Dino_BusSand_Core_Road__NormalStep (Dino_BusSand_Core_Road_o* __this, Dino_BusSand_Core_RoadBus_o* b, double pos, int32_t leavingTicks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$NormalStep
   double Dino_BusSand_Core_Road__NormalStep (Dino_BusSand_Core_Road_o* __this,
   Dino_BusSand_Core_RoadBus_o* b, double pos, int32_t leavingTicks, const MethodInfo* method); */

undefined8
Dino_BusSand_Core_Road__NormalStep_2416618
          (undefined8 param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  if ((bRam0000000004f9cb66 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb66 = 1;
  }
  if (param_3 != 0) {
    if (*(int *)(param_3 + 0x28) == 2) {
      Dino_BusSand_Core_Road__SpeedGrainsPerTickAt_2412994(param_1,param_2);
      if (*(long *)(param_2 + 0x10) != 0) {
        Dino_BusSand_Core_Road__LeavingFactorAt_2416450(param_2,param_4);
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        return 0;
      }
    }
    else {
      if (*(int *)(param_3 + 0x28) != 3) {
        uVar1 = Dino_BusSand_Core_Road__IsInReturnStraight_2412920(param_1);
        if (*(long *)(param_2 + 0x10) != 0) {
          return uVar1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(param_2 + 0x10) != 0) {
        uVar1 = Dino_BusSand_Core_Road__LeavingFactorAt_2416450(param_2,param_4);
        return uVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

