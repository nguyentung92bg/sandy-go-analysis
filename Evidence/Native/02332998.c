/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$DailyRange
bool Dino_BusSand_App_Meta_GiftPackCycle__DailyRange (System_DateTime_o now, int32_t startSec, int32_t endSec, int64_t* start, int64_t* end, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$DailyRange
   bool Dino_BusSand_App_Meta_GiftPackCycle__DailyRange (System_DateTime_o now, int32_t startSec,
   int32_t endSec, int64_t* start, int64_t* end, const MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_GiftPackCycle__DailyRange_2232998
          (undefined8 param_1,int param_2,int param_3,undefined8 *param_4,undefined8 *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04caa468;
  uStack_38 = param_1;
  if ((bRam0000000004f9be84 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa468);
    bRam0000000004f9be84 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uStack_58 = System_DateTime__get_Date_4810dd0(&uStack_38,0);
  uStack_48 = System_DateTime__AddSeconds_48106f4((double)param_2,&uStack_58,0);
  uVar2 = System_DateTime__op_GreaterThan_4813144(uStack_48,uStack_38,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_48 = System_DateTime__AddDays_48100a0(0xbff0000000000000,&uStack_48,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uStack_58 = System_DateTime__get_Date_4810dd0(&uStack_38,0);
  uStack_50 = System_DateTime__AddSeconds_48106f4((double)param_3,&uStack_58,0);
  uVar2 = System_DateTime__op_LessThanOrEqual_48130d8(uStack_50,uStack_48,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_50 = System_DateTime__AddDays_48100a0(0x3ff0000000000000,&uStack_50,0);
  }
  uVar3 = Dino_BusSand_App_Meta_GiftPackCycle__ToUnix_2232d8c(uStack_48);
  *param_4 = uVar3;
  uVar3 = Dino_BusSand_App_Meta_GiftPackCycle__ToUnix_2232d8c(uStack_50);
  *param_5 = uVar3;
  return 1;
}

