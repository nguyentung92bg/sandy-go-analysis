/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$TryGetNextPeriodRange
bool Dino_BusSand_App_Meta_GiftPackCycle__TryGetNextPeriodRange (Dino_BusSand_App_Meta_GiftPackConfig_o* c, int64_t currentPeriodStart, int64_t* start, int64_t* end, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$TryGetNextPeriodRange
   bool Dino_BusSand_App_Meta_GiftPackCycle__TryGetNextPeriodRange
   (Dino_BusSand_App_Meta_GiftPackConfig_o* c, int64_t currentPeriodStart, int64_t* start, int64_t*
   end, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_GiftPackCycle__TryGetNextPeriodRange_2232608
               (long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_4 = 0;
  *param_3 = 0;
  if ((param_1 == 0) || (param_2 < 1)) {
                    /* try { // try from 02332640 to 0243264f has its CatchHandler @ 02332650 */
    return 0;
  }
  uVar1 = *(int *)(param_1 + 0x44) - 1;
  if (uVar1 < 4) {
    lVar4 = *(long *)(&UNK_00e6bf70 + (ulong)uVar1 * 8);
  }
  else {
    lVar4 = 0x93a80;
  }
                    /* catch() { ... } // from try @ 02332500 with catch @ 02332650
                       catch() { ... } // from try @ 02332640 with catch @ 02332650 */
  if ((bRam0000000004f9be81 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd0);
    bRam0000000004f9be81 = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  *param_4 = 0;
  *param_3 = 0;
  uVar2 = Dino_BusSand_App_Meta_GiftPackCycle__IsFixedCyclePack_223208c(param_1);
  uVar1 = 0;
  if ((uVar2 & 1) == 0) goto LAB_02332294;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar2 = Dino_BusSand_App_Meta_GiftPackCycle__TryParseCycleTime_2232654
                    (*(undefined8 *)(param_1 + 0x78),(long)&uStack_38 + 4,&uStack_38);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = Dino_BusSand_App_Meta_GiftPackCycle__TryParseCycleTime_2232654
                        (*(undefined8 *)(param_1 + 0x80),(long)&uStack_40 + 4,&uStack_40),
     (uVar2 & 1) == 0)) {
LAB_02332290:
    uVar1 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04cacfd0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    auStack_50 = System_DateTimeOffset__FromUnixTimeSeconds_4815244(lVar4 + param_2,0);
    uVar3 = System_DateTimeOffset__get_UtcDateTime_4814760(auStack_50,0);
    uVar1 = *(uint *)(param_1 + 0x44);
    if (uVar1 < 3) {
      uVar1 = Dino_BusSand_App_Meta_GiftPackCycle__WeeklyRange_2232afc
                        (uVar3,uVar1,uStack_38._4_4_,uStack_38 & 0xffffffff,uStack_40._4_4_,
                         uStack_40 & 0xffffffff,param_3,param_4);
      goto LAB_02332294;
    }
    if (uVar1 == 4) {
      Dino_BusSand_App_Meta_GiftPackCycle__DailyRange_2232998
                (uVar3,uStack_38 & 0xffffffff,uStack_40 & 0xffffffff,param_3,param_4);
    }
    else {
      if (uVar1 != 3) goto LAB_02332290;
      Dino_BusSand_App_Meta_GiftPackCycle__MonthlyRange_22327a0
                (uVar3,uStack_38._4_4_,uStack_38 & 0xffffffff,uStack_40._4_4_,uStack_40 & 0xffffffff
                 ,param_3,param_4);
    }
    uVar1 = 1;
  }
LAB_02332294:
  return uVar1 & 1;
}

