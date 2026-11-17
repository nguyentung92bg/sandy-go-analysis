/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$TryGetCycleRange
bool Dino_BusSand_App_Meta_GiftPackCycle__TryGetCycleRange (Dino_BusSand_App_Meta_GiftPackConfig_o* c, int64_t unix, int64_t* start, int64_t* end, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$TryGetCycleRange
   bool Dino_BusSand_App_Meta_GiftPackCycle__TryGetCycleRange
   (Dino_BusSand_App_Meta_GiftPackConfig_o* c, int64_t unix, int64_t* start, int64_t* end, const
   MethodInfo* method); */

uint Dino_BusSand_App_Meta_GiftPackCycle__TryGetCycleRange_2232180
               (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f9be81 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd0);
    bRam0000000004f9be81 = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
                    /* try { // try from 023321c8 to 024321d3 has its CatchHandler @ 023322a8 */
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  *param_4 = 0;
  *param_3 = 0;
  uVar2 = Dino_BusSand_App_Meta_GiftPackCycle__IsFixedCyclePack_223208c(param_1);
                    /* try { // try from 023321d8 to 024321e3 has its CatchHandler @ 023324d4 */
  uVar1 = 0;
  if ((uVar2 & 1) == 0) goto LAB_02332294;
                    /* try { // try from 023321e4 to 024321e7 has its CatchHandler @ 023324d0 */
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 023320d8 with catch @ 023322c8 */
    FUN_02133224();
  }
  uVar2 = Dino_BusSand_App_Meta_GiftPackCycle__TryParseCycleTime_2232654
                    (*(undefined8 *)(param_1 + 0x78),(long)&uStack_38 + 4,&uStack_38);
                    /* try { // try from 02332204 to 0243221f has its CatchHandler @ 023322c4 */
  if (((uVar2 & 1) == 0) ||
     (uVar2 = Dino_BusSand_App_Meta_GiftPackCycle__TryParseCycleTime_2232654
                        (*(undefined8 *)(param_1 + 0x80),(long)&uStack_40 + 4,&uStack_40),
     (uVar2 & 1) == 0)) {
LAB_02332290:
                    /* try { // try from 02332290 to 02432293 has its CatchHandler @ 023322b4 */
    uVar1 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04cacfd0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 02332228 to 02432243 has its CatchHandler @ 023322c0 */
    auStack_50 = System_DateTimeOffset__FromUnixTimeSeconds_4815244(param_2,0);
    uVar3 = System_DateTimeOffset__get_UtcDateTime_4814760(auStack_50,0);
    uVar1 = *(uint *)(param_1 + 0x44);
                    /* try { // try from 0233224c to 02432267 has its CatchHandler @ 0233229c */
    if (uVar1 < 3) {
      uVar1 = Dino_BusSand_App_Meta_GiftPackCycle__WeeklyRange_2232afc
                        (uVar3,uVar1,uStack_38._4_4_,uStack_38 & 0xffffffff,uStack_40._4_4_,
                         uStack_40 & 0xffffffff,param_3,param_4);
      goto LAB_02332294;
    }
    if (uVar1 == 4) {
                    /* catch() { ... } // from try @ 02332294 with catch @ 023322ac */
                    /* catch() { ... } // from try @ 023320ac with catch @ 023322b0 */
                    /* catch() { ... } // from try @ 02332290 with catch @ 023322b4 */
                    /* catch() { ... } // from try @ 02332160 with catch @ 023322b8 */
                    /* catch() { ... } // from try @ 02332044 with catch @ 023322bc */
      Dino_BusSand_App_Meta_GiftPackCycle__DailyRange_2232998
                (uVar3,uStack_38 & 0xffffffff,uStack_40 & 0xffffffff,param_3,param_4);
    }
    else {
                    /* try { // try from 02332270 to 0243228b has its CatchHandler @ 02332298 */
      if (uVar1 != 3) goto LAB_02332290;
      Dino_BusSand_App_Meta_GiftPackCycle__MonthlyRange_22327a0
                (uVar3,uStack_38._4_4_,uStack_38 & 0xffffffff,uStack_40._4_4_,uStack_40 & 0xffffffff
                 ,param_3,param_4);
    }
                    /* catch() { ... } // from try @ 02332228 with catch @ 023322c0 */
    uVar1 = 1;
                    /* catch() { ... } // from try @ 02332204 with catch @ 023322c4 */
  }
LAB_02332294:
                    /* try { // try from 02332294 to 02432297 has its CatchHandler @ 023322ac */
                    /* catch() { ... } // from try @ 02332270 with catch @ 02332298
                       try { // try from 02332298 to 024322e3 has its CatchHandler @ 02331ecc */
                    /* catch() { ... } // from try @ 0233224c with catch @ 0233229c */
                    /* catch() { ... } // from try @ 0233217c with catch @ 023322a0 */
                    /* catch() { ... } // from try @ 02332060 with catch @ 023322a4 */
                    /* catch() { ... } // from try @ 023321c8 with catch @ 023322a8 */
  return uVar1 & 1;
}

