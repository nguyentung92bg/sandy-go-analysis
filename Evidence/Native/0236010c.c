/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$.ctor
void Dino_BusSand_App_Meta_RacingRobotSession___ctor (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, int32_t stage, Dino_BusSand_App_Meta_RacingStageConfig_o* stageCfg, Dino_BusSand_App_Meta_RacingRobotGlobalConfig_o* global, System_Collections_Generic_List_RacingRobotAgent__o* agents, Dino_BusSand_App_Meta_RacingRobotSave_o* data, int64_t startMs, int64_t expMs, bool resume, float stageThreshold, System_Random_o* rng, System_Func_long__o* now, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$.ctor
   void Dino_BusSand_App_Meta_RacingRobotSession___ctor (Dino_BusSand_App_Meta_RacingRobotSession_o*
   __this, int32_t stage, Dino_BusSand_App_Meta_RacingStageConfig_o* stageCfg,
   Dino_BusSand_App_Meta_RacingRobotGlobalConfig_o* global,
   System_Collections_Generic_List_RacingRobotAgent__o* agents,
   Dino_BusSand_App_Meta_RacingRobotSave_o* data, int64_t startMs, int64_t expMs, bool resume, float
   stageThreshold, System_Random_o* rng, System_Func_long__o* now, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotSession___ctor_226010c
               (undefined4 param_1,long param_2,undefined4 param_3,long param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,long param_8,long param_9,byte param_10,
               undefined8 param_11,long param_12)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  
  puVar3 = PTR_DAT_04cb43f8;
  puVar2 = PTR_DAT_04cb43f0;
  if ((bRam0000000004f9c03b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb43f8);
    FUN_02132f7c(PTR_DAT_04cb43f0);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c03b = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_HashSet_object____ctor_37e5358(uVar4,*(undefined8 *)puVar3);
  *(undefined8 *)(param_2 + 0x48) = uVar4;
  thunk_FUN_02134474((undefined8 *)(param_2 + 0x48),uVar4);
  System_Object___ctor_4870e5c(param_2,0);
  *(undefined4 *)(param_2 + 0x10) = param_3;
  *(long *)(param_2 + 0x18) = param_4;
  thunk_FUN_02134474((long *)(param_2 + 0x18),param_4);
  *(undefined8 *)(param_2 + 0x20) = param_5;
  thunk_FUN_02134474((undefined8 *)(param_2 + 0x20),param_5);
  *(undefined8 *)(param_2 + 0x28) = param_6;
  thunk_FUN_02134474((undefined8 *)(param_2 + 0x28),param_6);
  *(undefined8 *)(param_2 + 0x30) = param_7;
  thunk_FUN_02134474((undefined8 *)(param_2 + 0x30),param_7);
  *(undefined8 *)(param_2 + 0x38) = param_11;
  thunk_FUN_02134474((undefined8 *)(param_2 + 0x38),param_11);
  *(long *)(param_2 + 0x40) = param_12;
  thunk_FUN_02134474((long *)(param_2 + 0x40),param_12);
  *(undefined4 *)(param_2 + 0x58) = param_1;
  *(long *)(param_2 + 0x70) = param_8;
  puVar2 = PTR_DAT_04caa200;
  if (param_9 - param_8 == 0 || param_9 < param_8) {
    fVar7 = 3.4028235e+38;
  }
  else {
    fVar7 = (float)(param_9 - param_8) / 1000.0;
  }
  if (param_4 != 0) {
    iVar1 = *(int *)(param_4 + 0x14);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = System_Math__Min_4831144((float)iVar1,fVar7,0);
    *(undefined4 *)(param_2 + 0x5c) = uVar6;
    if ((param_10 & 1) != 0) {
      if (param_12 == 0) goto LAB_0236031c;
      lVar5 = (**(code **)(param_12 + 0x18))
                        (*(undefined8 *)(param_12 + 0x40),*(undefined8 *)(param_12 + 0x28));
      uVar6 = *(undefined4 *)(param_2 + 0x5c);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar6 = System_Math__Min_4831144((float)(lVar5 - param_8) / 1000.0,uVar6,0);
      *(undefined4 *)(param_2 + 0x60) = uVar6;
    }
    return;
  }
LAB_0236031c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

