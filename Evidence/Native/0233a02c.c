/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$BreakIceOutsideCycleConsumedPeriodKey
System_String_o* Dino_BusSand_App_Meta_GiftPackFeature__BreakIceOutsideCycleConsumedPeriodKey (Dino_BusSand_App_Meta_GiftPackConfig_o* c, int64_t unix, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$BreakIceOutsideCycleConsumedPeriodKey
   System_String_o* Dino_BusSand_App_Meta_GiftPackFeature__BreakIceOutsideCycleConsumedPeriodKey
   (Dino_BusSand_App_Meta_GiftPackConfig_o* c, int64_t unix, const MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_GiftPackFeature__BreakIceOutsideCycleConsumedPeriodKey_223a02c
          (long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uStack_4c;
  undefined1 auStack_48 [16];
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = 0;
  lStack_28 = 0;
  auStack_48._8_8_ = 0;
  lStack_38 = 0;
  uVar5 = Dino_BusSand_App_Meta_GiftPackCycle__TryGetCycleRange_2232180
                    (param_1,param_2,&lStack_28,&lStack_30);
  lVar1 = lStack_28;
  lVar7 = param_2;
  if ((((uVar5 & 1) != 0) && (lVar7 = lVar1, lStack_30 < param_2)) &&
     (bVar2 = Dino_BusSand_App_Meta_GiftPackCycle__TryGetNextPeriodRange_2232608
                        (param_1,lStack_28,&lStack_38,auStack_48 + 8), lVar7 = lStack_38,
     (bVar2 & 0 < lStack_38) == 0)) {
    lVar7 = lVar1;
  }
  if ((bRam0000000004f9be80 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04cacfd0);
    FUN_02132f7c(PTR_DAT_04caa468);
    FUN_02132f7c(PTR_DAT_04cb3240);
    FUN_02132f7c(PTR_DAT_04cb3248);
    FUN_02132f7c(PTR_DAT_04cb3250);
    FUN_02132f7c(PTR_DAT_04cb3258);
    FUN_02132f7c(PTR_DAT_04cb3260);
    bRam0000000004f9be80 = 1;
  }
  lStack_30 = 0;
  lStack_28 = 0;
  auStack_48._8_8_ = 0;
  lStack_38 = 0;
  auStack_48._0_8_ = 0;
  uStack_4c = 0;
  uVar5 = Dino_BusSand_App_Meta_GiftPackCycle__TryGetCycleRange_2232180
                    (param_1,lVar7,&lStack_28,&lStack_38);
  lVar1 = lStack_28;
  if ((uVar5 & 1) == 0) {
    uVar3 = **(undefined8 **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04cacfd0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    auStack_48 = System_DateTimeOffset__FromUnixTimeSeconds_4815244(lVar1,0);
    lStack_30 = System_DateTimeOffset__get_UtcDateTime_4814760(auStack_48,0);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(param_1 + 0x44) == 4) {
      if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
      puVar6 = (undefined8 *)PTR_DAT_04cb3250;
      if (*(int *)(*(long *)PTR_DAT_04caa468 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa468);
        puVar6 = (undefined8 *)PTR_DAT_04cb3250;
      }
    }
    else {
      if (*(int *)(param_1 + 0x44) != 3) {
        if (*(int *)(*(long *)PTR_DAT_04caa468 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uStack_4c = System_DateTime__get_Year_481174c(&lStack_30,0);
        uVar3 = System_Int32__ToString_482d7e4(&uStack_4c,*(undefined8 *)PTR_DAT_04cb3260,0);
        uStack_4c = Dino_BusSand_App_Meta_GiftPackCycle__GetIsoWeek_2232530(lStack_30);
        uVar4 = System_Int32__ToString_482d7e4(&uStack_4c,*(undefined8 *)PTR_DAT_04cb3240,0);
        uVar3 = System_String__Concat_46d2b84(uVar3,*(undefined8 *)PTR_DAT_04cb3248,uVar4,0);
        return uVar3;
      }
      if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
      puVar6 = (undefined8 *)PTR_DAT_04cb3258;
      if (*(int *)(*(long *)PTR_DAT_04caa468 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa468);
        puVar6 = (undefined8 *)PTR_DAT_04cb3258;
      }
    }
    uVar3 = System_DateTime__ToString_4812608(&lStack_30,*puVar6,uVar3,0);
  }
  return uVar3;
}

