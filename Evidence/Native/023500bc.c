/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$get_RoundNo
int32_t Dino_BusSand_App_Meta_StreakRateFeature__get_RoundNo (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$get_RoundNo
   int32_t Dino_BusSand_App_Meta_StreakRateFeature__get_RoundNo
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_StreakRateFeature__get_RoundNo_22500bc(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cb3b48;
                    /* try { // try from 023500c4 to 024500cb has its CatchHandler @ 023501d4 */
                    /* try { // try from 023500cc to 024500cf has its CatchHandler @ 02350154 */
                    /* try { // try from 023500d0 to 024500d3 has its CatchHandler @ 0235014c */
                    /* try { // try from 023500d4 to 024500d7 has its CatchHandler @ 02350144 */
                    /* try { // try from 023500d8 to 024500db has its CatchHandler @ 0235013c */
  if ((bRam0000000004f9bfbb & 1) == 0) {
                    /* try { // try from 023500dc to 024500df has its CatchHandler @ 0235015c */
                    /* try { // try from 023500e0 to 024500eb has its CatchHandler @ 023501d4 */
    FUN_02132f7c(PTR_DAT_04cb3b48);
                    /* try { // try from 023500ec to 024500ef has its CatchHandler @ 02350114 */
    bRam0000000004f9bfbb = 1;
  }
                    /* try { // try from 023500f0 to 024500f3 has its CatchHandler @ 02350134 */
                    /* try { // try from 023500f4 to 024500f7 has its CatchHandler @ 0235015c */
                    /* try { // try from 023500f8 to 024500ff has its CatchHandler @ 02350128 */
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar3 != 0) {
                    /* try { // try from 02350100 to 0245010b has its CatchHandler @ 0235015c */
    if (*(int *)(lVar3 + 0x1c) < 1) {
                    /* catch() { ... } // from try @ 0234fc98 with catch @ 02350124 */
      uVar2 = 1;
    }
    else {
                    /* catch() { ... } // from try @ 0234fd00 with catch @ 0235010c
                       try { // try from 0235010c to 0245017b has its CatchHandler @ 0234fafc */
                    /* catch() { ... } // from try @ 0234fcdc with catch @ 02350110 */
                    /* catch() { ... } // from try @ 023500ec with catch @ 02350114 */
      lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 0234fea0 with catch @ 02350118 */
      if (lVar3 == 0) goto LAB_02350134;
                    /* catch() { ... } // from try @ 0234fef8 with catch @ 0235011c */
      uVar2 = *(undefined4 *)(lVar3 + 0x1c);
                    /* catch() { ... } // from try @ 0234fd64 with catch @ 02350120 */
    }
                    /* catch() { ... } // from try @ 0234fdd0 with catch @ 02350128
                       catch() { ... } // from try @ 023500f8 with catch @ 02350128 */
    return uVar2;
  }
LAB_02350134:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0234fe50 with catch @ 02350134
                       catch() { ... } // from try @ 023500f0 with catch @ 02350134 */
  FUN_02133224();
}

