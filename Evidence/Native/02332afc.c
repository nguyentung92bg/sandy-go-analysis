/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$WeeklyRange
bool Dino_BusSand_App_Meta_GiftPackCycle__WeeklyRange (System_DateTime_o now, int32_t cycleType, int32_t startDay, int32_t startSec, int32_t endDay, int32_t endSec, int64_t* start, int64_t* end, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$WeeklyRange
   bool Dino_BusSand_App_Meta_GiftPackCycle__WeeklyRange (System_DateTime_o now, int32_t cycleType,
   int32_t startDay, int32_t startSec, int32_t endDay, int32_t endSec, int64_t* start, int64_t* end,
   const MethodInfo* method); */

bool Dino_BusSand_App_Meta_GiftPackCycle__WeeklyRange_2232afc
               (undefined8 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
               undefined8 *param_7,undefined8 *param_8)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = param_1;
  if ((bRam0000000004f9be82 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa468);
    bRam0000000004f9be82 = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  *param_8 = 0;
  bVar1 = param_3 - 1U < 7 && param_5 - 1U < 7;
  *param_7 = 0;
  puVar2 = PTR_DAT_04caa468;
  if (bVar1) {
    if (*(int *)(*(long *)PTR_DAT_04caa468 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_78 = System_DateTime__get_Date_4810dd0(&uStack_58,0);
    iVar3 = System_DateTime__get_DayOfWeek_48110b4(&uStack_58,0);
    uStack_60 = System_DateTime__AddDays_48100a0((double)(1 - iVar3),&uStack_78,0);
    iVar3 = System_DateTime__get_DayOfWeek_48110b4(&uStack_58,0);
    if (iVar3 == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uStack_78 = System_DateTime__get_Date_4810dd0(&uStack_58,0);
      uStack_60 = System_DateTime__AddDays_48100a0(0xc018000000000000,&uStack_78,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_78 = System_DateTime__AddDays_48100a0((double)(int)(param_3 - 1U),&uStack_60,0);
    uStack_68 = System_DateTime__AddSeconds_48106f4((double)param_4,&uStack_78,0);
    uVar4 = System_DateTime__op_GreaterThan_4813144(uStack_68,uStack_58,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uStack_68 = System_DateTime__AddDays_48100a0(0xc01c000000000000,&uStack_68,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_78 = System_DateTime__AddDays_48100a0((double)(int)(param_5 - 1U),&uStack_60,0);
    uStack_70 = System_DateTime__AddSeconds_48106f4((double)param_6,&uStack_78,0);
    uVar4 = System_DateTime__op_LessThanOrEqual_48130d8(uStack_70,uStack_68,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uStack_70 = System_DateTime__AddDays_48100a0(0x401c000000000000,&uStack_70,0);
    }
    if ((param_2 - 1U < 2) &&
       (uVar4 = Dino_BusSand_App_Meta_GiftPackCycle__GetIsoWeek_2232530(uStack_68),
       (param_2 == 1) == ((uVar4 & 1) == 0))) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uStack_68 = System_DateTime__AddDays_48100a0(0x401c000000000000,&uStack_68,0);
      uStack_70 = System_DateTime__AddDays_48100a0(0x401c000000000000,&uStack_70,0);
    }
    uVar5 = Dino_BusSand_App_Meta_GiftPackCycle__ToUnix_2232d8c(uStack_68);
    *param_7 = uVar5;
    uVar5 = Dino_BusSand_App_Meta_GiftPackCycle__ToUnix_2232d8c(uStack_70);
    *param_8 = uVar5;
  }
  return bVar1;
}

