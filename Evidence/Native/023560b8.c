/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$UserScoreFor
float Dino_BusSand_App_Meta_YachtRacingCore__UserScoreFor (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, int32_t stage, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$UserScoreFor
   float Dino_BusSand_App_Meta_YachtRacingCore__UserScoreFor
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, int32_t stage, const MethodInfo* method); */

undefined1  [16]
Dino_BusSand_App_Meta_YachtRacingCore__UserScoreFor_22560b8(long param_1,int param_2)

{
  float *pfVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000004f9bfed & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3e90);
    FUN_02132f7c(PTR_DAT_04cb3eb0);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bfed = 1;
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    if (*(char *)(param_1 + 0x48) == '\0') {
      System_ThrowHelper__ThrowInvalidOperationException_InvalidOperation_NoValue_4850928
                (0,*(undefined8 *)PTR_DAT_04cb3eb0);
    }
    return ZEXT416(*(uint *)(param_1 + 0x4c));
  }
  lVar5 = Dino_BusSand_App_Meta_RacingRobotGlobalConfig__Load_225d264(0);
  if (lVar5 == 0) {
    return ZEXT816(0);
  }
  lVar6 = *(long *)(param_1 + 0x40);
  if (lVar6 == 0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (float)(**(code **)(lVar6 + 0x18))
                             (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
  }
  puVar2 = PTR_DAT_04cabaf8;
  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar2;
  }
  if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x10) == 0) {
    uVar3 = 1;
  }
  else {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
  }
  auVar8 = Dino_BusSand_App_Meta_RacingRobotScore__CalcStage1Score_2265760(0,fVar7,lVar5,0,uVar3,0);
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0xa0), lVar6 != 0)) {
    pfVar1 = (float *)(lVar6 + 0x18);
    if (lVar5 == 0) {
      return ZEXT816(0);
    }
    if (param_2 == 3) {
      iVar4 = 2;
    }
    else {
      if (param_2 != 2) {
        return auVar8;
      }
      iVar4 = 1;
      pfVar1 = (float *)(lVar6 + 0x14);
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(iVar4,0,0);
    }
    fVar7 = *(float *)(lVar5 + 0x2c) * (float)(*(int *)(lVar5 + 0x20) * iVar4) +
            *(float *)(lVar5 + 0x28) * fVar7;
    if (0.0 < fVar7) {
      auVar8 = ZEXT416((uint)(auVar8._0_4_ / ((*pfVar1 / fVar7) * *(float *)(lVar5 + 0x24) + 1.0)));
    }
    return auVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

