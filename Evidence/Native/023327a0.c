/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$MonthlyRange
bool Dino_BusSand_App_Meta_GiftPackCycle__MonthlyRange (System_DateTime_o now, int32_t startDay, int32_t startSec, int32_t endDay, int32_t endSec, int64_t* start, int64_t* end, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$MonthlyRange
   bool Dino_BusSand_App_Meta_GiftPackCycle__MonthlyRange (System_DateTime_o now, int32_t startDay,
   int32_t startSec, int32_t endDay, int32_t endSec, int64_t* start, int64_t* end, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_Meta_GiftPackCycle__MonthlyRange_22327a0
          (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_04caa468;
  uStack_48 = param_1;
  if ((bRam0000000004f9be83 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa468);
    bRam0000000004f9be83 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = System_DateTime__get_Year_481174c(&uStack_48,0);
  uVar3 = System_DateTime__get_Month_4811460(&uStack_48,0);
  uStack_58 = Dino_BusSand_App_Meta_GiftPackCycle__MonthDate_2232e44(uVar2,uVar3,param_2,param_3);
  uVar4 = System_DateTime__op_GreaterThan_4813144(uStack_58,uStack_48,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_60 = System_DateTime__AddMonths_4810174(&uStack_48,0xffffffff,0);
    uVar2 = System_DateTime__get_Year_481174c(&uStack_60,0);
    uVar3 = System_DateTime__get_Month_4811460(&uStack_60,0);
    uStack_58 = Dino_BusSand_App_Meta_GiftPackCycle__MonthDate_2232e44(uVar2,uVar3,param_2,param_3);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = System_DateTime__get_Year_481174c(&uStack_58,0);
  uVar3 = System_DateTime__get_Month_4811460(&uStack_58,0);
  uVar5 = Dino_BusSand_App_Meta_GiftPackCycle__MonthDate_2232e44(uVar2,uVar3,param_4,param_5);
  uVar4 = System_DateTime__op_LessThanOrEqual_48130d8(uVar5,uStack_58,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_68 = System_DateTime__AddMonths_4810174(&uStack_58,1,0);
    uVar2 = System_DateTime__get_Year_481174c(&uStack_68,0);
    uVar3 = System_DateTime__get_Month_4811460(&uStack_68,0);
    uVar5 = Dino_BusSand_App_Meta_GiftPackCycle__MonthDate_2232e44(uVar2,uVar3,param_4,param_5);
  }
  uVar6 = Dino_BusSand_App_Meta_GiftPackCycle__ToUnix_2232d8c(uStack_58);
  *param_6 = uVar6;
  uVar5 = Dino_BusSand_App_Meta_GiftPackCycle__ToUnix_2232d8c(uVar5);
  *param_7 = uVar5;
  return 1;
}

