/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$RemainSec
int32_t Dino_BusSand_App_Meta_StreakRateFeature__RemainSec (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$RemainSec
   int32_t Dino_BusSand_App_Meta_StreakRateFeature__RemainSec
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s,
   const MethodInfo* method); */

void Dino_BusSand_App_Meta_StreakRateFeature__RemainSec_2250138(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
                    /* catch() { ... } // from try @ 02350084 with catch @ 02350138 */
                    /* catch() { ... } // from try @ 023500d8 with catch @ 0235013c */
                    /* catch() { ... } // from try @ 02350044 with catch @ 02350140 */
                    /* catch() { ... } // from try @ 023500d4 with catch @ 02350144 */
                    /* catch() { ... } // from try @ 0235000c with catch @ 02350148 */
                    /* catch() { ... } // from try @ 023500d0 with catch @ 0235014c */
  if ((bRam0000000004f9bfbc & 1) == 0) {
                    /* catch() { ... } // from try @ 0234ffd8 with catch @ 02350150 */
                    /* catch() { ... } // from try @ 023500cc with catch @ 02350154 */
                    /* catch() { ... } // from try @ 0234ff44 with catch @ 02350158 */
    FUN_02132f7c(PTR_DAT_04caa200);
                    /* catch() { ... } // from try @ 0234fd28 with catch @ 0235015c
                       catch() { ... } // from try @ 023500dc with catch @ 0235015c
                       catch() { ... } // from try @ 023500f4 with catch @ 0235015c
                       catch() { ... } // from try @ 02350100 with catch @ 0235015c */
    bRam0000000004f9bfbc = 1;
  }
  puVar1 = PTR_DAT_04caa200;
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 0x38);
    lVar2 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
                    /* try { // try from 0235017c to 0245017f has its CatchHandler @ 0235018c */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0235017c with catch @ 0235018c */
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
                    /* try { // try from 02350194 to 0245019b has its CatchHandler @ 023502d8 */
                    /* try { // try from 0235019c to 024501b3 has its CatchHandler @ 0234fafc */
                    /* try { // try from 023501b4 to 024501b7 has its CatchHandler @ 023501c0 */
    System_Math__Max_4830fd4(0,(lVar3 - lVar2) / 1000,0);
                    /* catch() { ... } // from try @ 023501b4 with catch @ 023501c0 */
                    /* try { // try from 023501c8 to 024501cf has its CatchHandler @ 023502d8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

