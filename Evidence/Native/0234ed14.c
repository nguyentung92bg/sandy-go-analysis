/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$BuildWinRewards
System_Collections_Generic_List_int__o* Dino_BusSand_App_Meta_StreakRateFeature__BuildWinRewards (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s, bool track, int32_t* getedIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$BuildWinRewards
   System_Collections_Generic_List_int__o* Dino_BusSand_App_Meta_StreakRateFeature__BuildWinRewards
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s,
   bool track, int32_t* getedIndex, const MethodInfo* method); */

long Dino_BusSand_App_Meta_StreakRateFeature__BuildWinRewards_224ed14
               (undefined8 param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  
  puVar3 = PTR_DAT_04cad6e8;
  puVar2 = PTR_DAT_04caa1c8;
  if ((bRam0000000004f9bfb8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    bRam0000000004f9bfb8 = 1;
  }
  uVar6 = *(undefined8 *)puVar2;
  *param_4 = 0xffffffff;
  lVar7 = thunk_FUN_0216e89c(uVar6);
  uVar6 = System_Collections_Generic_List_int____ctor_3a2b7dc(lVar7,*(undefined8 *)puVar3);
  if ((param_2 != 0) && (*(char *)(param_2 + 0x54) != '\0')) {
    iVar4 = Dino_BusSand_App_Meta_StreakRateFeature__WinAddScore_224c840(uVar6,param_2);
    lVar8 = Dino_BusSand_App_Meta_StreakRateFeature__NeedScores_224bf28(param_1,param_2);
    lVar9 = Dino_BusSand_App_Meta_StreakRateFeature__RewardIds_224bf94(param_1,param_2);
    if (0 < iVar4) {
      if (lVar8 == 0) {
LAB_0234ef28:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(lVar8 + 0x18) != 0) {
        uVar10 = *(uint *)(param_2 + 0x48);
        iVar4 = *(int *)(param_2 + 0x4c) + iVar4;
        iVar5 = Dino_BusSand_App_Meta_StreakRateFeature__CurMaxScore_224c1d0(param_1,param_2);
        uVar14 = (ulong)uVar10;
        if (iVar5 <= iVar4) {
          if (lVar9 == 0) goto LAB_0234ef28;
          uVar14 = (ulong)(int)uVar10;
          lVar15 = uVar14 << 0x20;
                    /* try { // try from 0234ee24 to 0244ee2b has its CatchHandler @ 0234f408 */
          do {
            lVar15 = lVar15 + 0x100000000;
            uVar10 = (uint)*(undefined8 *)(lVar9 + 0x18);
            if ((long)(int)uVar10 <= (long)uVar14) break;
            uVar13 = (uint)uVar14;
            if (uVar10 <= uVar13) {
LAB_0234ef2c:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
                    /* try { // try from 0234ee40 to 0244ee57 has its CatchHandler @ 0234f320 */
            uVar1 = *(undefined4 *)(lVar9 + 0x20 + uVar14 * 4);
            if ((param_3 & 1) != 0) {
              Dino_BusSand_App_Meta_StreakRateFeature__TrackUnlock_224f208(param_1,uVar13 + 1,uVar1)
              ;
            }
                    /* try { // try from 0234ee5c to 0244ee67 has its CatchHandler @ 0234f33c */
            if (lVar7 == 0) goto LAB_0234ef28;
            lVar11 = *(long *)(lVar7 + 0x10);
                    /* try { // try from 0234ee6c to 0244ee77 has its CatchHandler @ 0234f324 */
            lVar12 = *(long *)PTR_DAT_04caa160;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_0234ef28;
            uVar10 = *(uint *)(lVar7 + 0x18);
                    /* try { // try from 0234ee88 to 0244ee8b has its CatchHandler @ 0234f2f4 */
                    /* try { // try from 0234ee8c to 0244ee97 has its CatchHandler @ 0234f328 */
            if (uVar10 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar10 + 1;
                    /* try { // try from 0234ee9c to 0244eea7 has its CatchHandler @ 0234f340 */
              *(undefined4 *)(lVar11 + (long)(int)uVar10 * 4 + 0x20) = uVar1;
            }
            else {
                    /* try { // try from 0234eea8 to 0244ef3b has its CatchHandler @ 0234eb70 */
              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                        (lVar7,uVar1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            uVar13 = uVar13 + 1;
            if ((int)(*(uint *)(lVar8 + 0x18) - 1) < (int)uVar13) {
              uVar14 = (ulong)uVar13;
              break;
            }
            if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_0234ef2c;
            iVar4 = iVar4 - iVar5;
            uVar14 = uVar14 + 1;
            iVar5 = *(int *)(lVar8 + (lVar15 >> 0x1e) + 0x20);
          } while (iVar5 <= iVar4);
        }
        *param_4 = (int)uVar14;
      }
    }
  }
  return lVar7;
}

