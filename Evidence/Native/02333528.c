/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$WeekStartUnix
int64_t Dino_BusSand_App_Meta_GiftPackCycle__WeekStartUnix (int64_t unix, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$WeekStartUnix
   int64_t Dino_BusSand_App_Meta_GiftPackCycle__WeekStartUnix (int64_t unix, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_GiftPackCycle__WeekStartUnix_2233528(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_04cacfd0;
  if ((bRam0000000004f9be89 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd0);
    FUN_02132f7c(PTR_DAT_04caa468);
    bRam0000000004f9be89 = 1;
  }
  puVar1 = PTR_DAT_04caa468;
  auStack_38._8_8_ = 0;
  uStack_28 = 0;
  uStack_40 = 0;
  auStack_38._0_8_ = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auStack_38 = System_DateTimeOffset__FromUnixTimeSeconds_4815244(param_1,0);
  uStack_28 = System_DateTimeOffset__get_UtcDateTime_4814760(auStack_38,0);
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar5);
  }
  uStack_40 = System_DateTime__get_Date_4810dd0(&uStack_28,0);
  iVar3 = System_DateTime__get_DayOfWeek_48110b4(&uStack_28,0);
  uVar4 = System_DateTime__AddDays_48100a0((double)(1 - iVar3),&uStack_40,0);
  iVar3 = System_DateTime__get_DayOfWeek_48110b4(&uStack_28,0);
  if (iVar3 == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_40 = System_DateTime__get_Date_4810dd0(&uStack_28,0);
    uVar4 = System_DateTime__AddDays_48100a0(0xc018000000000000,&uStack_40,0);
  }
  Dino_BusSand_App_Meta_GiftPackCycle__ToUnix_2232d8c(uVar4);
  return;
}

