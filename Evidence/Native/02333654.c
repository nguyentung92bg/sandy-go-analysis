/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$DayKey
int32_t Dino_BusSand_App_Meta_GiftPackCycle__DayKey (int64_t unix, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$DayKey
   int32_t Dino_BusSand_App_Meta_GiftPackCycle__DayKey (int64_t unix, const MethodInfo* method); */

int Dino_BusSand_App_Meta_GiftPackCycle__DayKey_2233654(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_04cacfd0;
  if ((bRam0000000004f9be8a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd0);
    FUN_02132f7c(PTR_DAT_04caa468);
    bRam0000000004f9be8a = 1;
  }
  puVar1 = PTR_DAT_04caa468;
  uStack_28 = 0;
  auStack_38._0_8_ = 0;
  auStack_38._8_8_ = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auStack_38 = System_DateTimeOffset__FromUnixTimeSeconds_4815244(param_1,0);
  uStack_28 = System_DateTimeOffset__get_UtcDateTime_4814760(auStack_38,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  iVar3 = System_DateTime__get_Year_481174c(&uStack_28,0);
  iVar4 = System_DateTime__get_Month_4811460(&uStack_28,0);
  iVar5 = System_DateTime__get_Day_481105c(&uStack_28,0);
  return iVar3 * 10000 + iVar4 * 100 + iVar5;
}

