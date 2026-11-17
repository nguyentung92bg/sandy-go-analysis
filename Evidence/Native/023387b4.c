/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$IsInCooldown
bool Dino_BusSand_App_Meta_GiftPackFeature__IsInCooldown (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, Dino_BusSand_App_Meta_GiftPackConfig_o* c, Dino_BusSand_App_Meta_GiftPackState_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$IsInCooldown
   bool Dino_BusSand_App_Meta_GiftPackFeature__IsInCooldown
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, Dino_BusSand_App_Meta_GiftPackConfig_o* c,
   Dino_BusSand_App_Meta_GiftPackState_o* s, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_GiftPackFeature__IsInCooldown_22387b4
               (undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  if ((bRam0000000004f9bec1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd0);
    FUN_02132f7c(PTR_DAT_04caa468);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caa538);
    bRam0000000004f9bec1 = 1;
  }
  auStack_48._8_8_ = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  auStack_48._0_8_ = 0;
  uStack_58 = 0;
  if (param_2 == 0) {
    return false;
  }
  if (param_3 == 0) {
    return false;
  }
  uVar4 = Dino_BusSand_App_Meta_GiftPackCycle__IsFixedCyclePack_223208c(param_2);
  puVar3 = PTR_DAT_04caec48;
  if ((uVar4 & 1) == 0) {
    lVar7 = *(long *)(param_3 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar5 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
    if (lVar5 / 1000 < lVar7) {
      return true;
    }
    lVar7 = 0x2c;
    if (*(char *)(param_3 + 0x6c) != '\0') {
      lVar7 = 0x34;
    }
    iVar2 = *(int *)(param_2 + lVar7);
    if ((0 < iVar2) && (uVar1 = *(uint *)(param_3 + 0x48), 0 < (int)uVar1)) {
      if (*(int *)(*(long *)PTR_DAT_04caa468 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      System_DateTime___ctor_480f3a0
                (&uStack_38,(ulong)uVar1 / 10000,uVar1 / 100 + (uVar1 / 10000) * -100,uVar1 % 100,0,
                 0,0,1,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar7 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
      if (*(int *)(*(long *)PTR_DAT_04cacfd0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      auStack_48 = System_DateTimeOffset__FromUnixTimeSeconds_4815244(lVar7 / 1000,0);
      uStack_50 = System_DateTimeOffset__get_UtcDateTime_4814760(auStack_48,0);
      uVar6 = System_DateTime__get_Date_4810dd0(&uStack_50,0);
      uStack_58 = System_DateTime__op_Subtraction_4812f34(uVar6,uStack_38,0);
      if (*(int *)(*(long *)PTR_DAT_04caa538 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa538);
      }
      dVar8 = (double)System_TimeSpan__get_TotalDays_4846afc(&uStack_58,0);
      return dVar8 < (double)iVar2;
    }
  }
  return false;
}

