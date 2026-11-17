/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$OnStartYachtRacing
void Dino_BusSand_App_Meta_YachtRacingCore__OnStartYachtRacing (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, System_String_o* playerName, System_Func_string__o* randomName, System_Collections_Generic_List_int__o* headIds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$OnStartYachtRacing
   void Dino_BusSand_App_Meta_YachtRacingCore__OnStartYachtRacing
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, System_String_o* playerName,
   System_Func_string__o* randomName, System_Collections_Generic_List_int__o* headIds, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingCore__OnStartYachtRacing_22578a8
               (long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  undefined1 auVar15 [16];
  
                    /* try { // try from 023578a8 to 024578af has its CatchHandler @ 023579d8 */
                    /* try { // try from 023578dc to 024578e3 has its CatchHandler @ 023579f4 */
  if ((bRam0000000004f9bff0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3f00);
    FUN_02132f7c(PTR_DAT_04cb3f08);
                    /* try { // try from 023578f8 to 02457917 has its CatchHandler @ 023579e8 */
    FUN_02132f7c(PTR_DAT_04cb3de8);
    FUN_02132f7c(PTR_DAT_04cb3ea0);
    FUN_02132f7c(PTR_DAT_04cae228);
                    /* try { // try from 02357924 to 0245792f has its CatchHandler @ 023579d0 */
    FUN_02132f7c(PTR_DAT_04cb3ea8);
                    /* try { // try from 02357930 to 0245793b has its CatchHandler @ 023579cc */
    FUN_02132f7c(PTR_DAT_04cae230);
    FUN_02132f7c(PTR_DAT_04caf748);
                    /* try { // try from 02357940 to 0245794f has its CatchHandler @ 023579c8 */
    FUN_02132f7c(PTR_DAT_04cb3f10);
                    /* try { // try from 02357950 to 02457967 has its CatchHandler @ 023579ec */
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bff0 = 1;
  }
                    /* try { // try from 02357968 to 024579bf has its CatchHandler @ 02357838 */
  if ((*(long *)(param_1 + 0x10) != 0) && (lVar11 = *(long *)(param_1 + 0x20), lVar11 != 0)) {
    uVar6 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x78);
    uVar7 = (**(code **)(lVar11 + 0x18))
                      (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
    if (*(long *)(param_1 + 0x10) != 0) {
      Dino_BusSand_App_Meta_YachtRacingCore__StartStage_225574c
                (param_1,uVar6,uVar7,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x70));
      if (*(long *)(param_1 + 0x58) == 0) {
        return;
      }
      lVar11 = Dino_BusSand_App_Meta_RacingRobotSession__GetRankings_2263304
                         (*(long *)(param_1 + 0x58),0);
      plVar13 = *(long **)(param_1 + 0x18);
                    /* try { // try from 023579c0 to 024579c3 has its CatchHandler @ 023579f0 */
      iVar5 = Dino_BusSand_App_Meta_YachtRacingCore__MaxBotCount_225521c(param_1,0xffffffff);
      puVar4 = PTR_DAT_04cb3de8;
      puVar3 = PTR_DAT_04caf748;
                    /* try { // try from 023579c4 to 024579c7 has its CatchHandler @ 023579d4 */
      if (plVar13 != (long *)0x0) {
                    /* catch() { ... } // from try @ 02357940 with catch @ 023579c8
                       try { // try from 023579c8 to 02457a0b has its CatchHandler @ 02357838 */
                    /* catch() { ... } // from try @ 02357930 with catch @ 023579cc */
                    /* catch() { ... } // from try @ 02357924 with catch @ 023579d0 */
                    /* catch() { ... } // from try @ 023579c4 with catch @ 023579d4 */
                    /* catch() { ... } // from try @ 023578a8 with catch @ 023579d8 */
                    /* catch() { ... } // from try @ 023578a4 with catch @ 023579dc */
                    /* catch() { ... } // from try @ 0235789c with catch @ 023579e0 */
                    /* catch() { ... } // from try @ 02357898 with catch @ 023579e4 */
                    /* catch() { ... } // from try @ 023578f8 with catch @ 023579e8 */
                    /* catch() { ... } // from try @ 02357950 with catch @ 023579ec */
        iVar5 = (**(code **)(*plVar13 + 0x198))
                          (plVar13,0,iVar5 + 1,*(undefined8 *)(*plVar13 + 0x1a0));
                    /* catch() { ... } // from try @ 023579c0 with catch @ 023579f0 */
                    /* catch() { ... } // from try @ 023578dc with catch @ 023579f4 */
        lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
        System_Collections_Generic_List_object____ctor_3a8138c(lVar8,*(undefined8 *)puVar4);
        puVar3 = PTR_DAT_04cb3f10;
                    /* try { // try from 02357a0c to 02457a23 has its CatchHandler @ 02357ab0 */
        if (lVar11 != 0) {
          if (0 < *(int *)(lVar11 + 0x18)) {
                    /* try { // try from 02357a24 to 02457a9b has its CatchHandler @ 02357838 */
            iVar14 = 0;
            do {
              auVar15 = System_Collections_Generic_List_RacingRanking___get_Item_3a9a630
                                  (lVar11,iVar14,*(undefined8 *)PTR_DAT_04cb3ea8);
              lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
              Dino_BusSand_App_Meta_YachtRacingBot___ctor_2257cac();
              if (lVar9 == 0) goto LAB_02357ca8;
              *(byte *)(lVar9 + 0x2c) = auVar15[8] & 1;
              *(int *)(lVar9 + 0x10) = auVar15._0_4_;
              *(int *)(lVar9 + 0x14) = auVar15._4_4_;
              iVar1 = iVar14 + 1;
              *(int *)(lVar9 + 0x18) = auVar15._4_4_;
              *(int *)(lVar9 + 0x28) = iVar1;
              if ((auVar15._8_8_ & 1) == 0) {
                if (param_3 == 0) {
                  uVar7 = *(undefined8 *)PTR_DAT_04ca9c30;
                }
                else {
                  uVar7 = (**(code **)(param_3 + 0x18))
                                    (*(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x28)
                                    );
                }
                *(undefined8 *)(lVar9 + 0x20) = uVar7;
                thunk_FUN_02134474();
                if ((param_4 == 0) || (*(int *)(param_4 + 0x18) < 1)) {
                  uVar6 = 0;
                }
                else {
                  plVar13 = *(long **)(param_1 + 0x18);
                  if (plVar13 == (long *)0x0) goto LAB_02357ca8;
                  uVar6 = (**(code **)(*plVar13 + 0x198))
                                    (plVar13,0,*(int *)(param_4 + 0x18),
                                     *(undefined8 *)(*plVar13 + 0x1a0));
                  uVar6 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                    (param_4,uVar6,*(undefined8 *)PTR_DAT_04cae230);
                }
                *(undefined4 *)(lVar9 + 0x1c) = uVar6;
                *(bool *)(lVar9 + 0x2d) = iVar14 <= iVar5;
                if (lVar8 == 0) goto LAB_02357ca8;
                lVar10 = *(long *)(lVar8 + 0x10);
                lVar12 = *(long *)PTR_DAT_04cb3f00;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar10 == 0) goto LAB_02357ca8;
                uVar2 = *(uint *)(lVar8 + 0x18);
                if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                  plVar13 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
                  *plVar13 = lVar9;
                  thunk_FUN_02134474(plVar13,lVar9);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                            (lVar8,lVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                    /* try { // try from 02357a9c to 02457aab has its CatchHandler @ 02357ab0 */
                lVar10 = *(long *)PTR_DAT_04ca9c30;
                    /* try { // try from 02357aac to 02457ab3 has its CatchHandler @ 02357838 */
                if (param_2 != 0) {
                  lVar10 = param_2;
                }
                    /* catch() { ... } // from try @ 02357a0c with catch @ 02357ab0
                       catch() { ... } // from try @ 02357a9c with catch @ 02357ab0 */
                *(long *)(lVar9 + 0x20) = lVar10;
                    /* try { // try from 02357ab4 to 02457ab7 has its CatchHandler @ 02357ac0 */
                    /* try { // try from 02357ab8 to 02457ac3 has its CatchHandler @ 02357838 */
                thunk_FUN_02134474((long *)(lVar9 + 0x20));
                uVar6 = Dino_BusSand_App_Meta_YachtRacingCore__get_PlayerHeadId_22540e8();
                    /* catch() { ... } // from try @ 02357ab4 with catch @ 02357ac0 */
                    /* try { // try from 02357ac4 to 02457ca7 has its CatchHandler @ 02357ac4
                       catch() { ... } // from try @ 02357ac4 with catch @ 02357ac4
                       catch() { ... } // from try @ 02357cdc with catch @ 02357ac4
                       catch() { ... } // from try @ 02357d30 with catch @ 02357ac4
                       catch() { ... } // from try @ 02357d80 with catch @ 02357ac4 */
                *(undefined4 *)(lVar9 + 0x1c) = uVar6;
                *(undefined1 *)(lVar9 + 0x2d) = 1;
                if (lVar8 == 0) goto LAB_02357ca8;
                System_Collections_Generic_List_object___Insert_3a828b4
                          (lVar8,0,lVar9,*(undefined8 *)PTR_DAT_04cb3f08);
              }
              iVar14 = iVar1;
            } while (iVar1 < *(int *)(lVar11 + 0x18));
          }
          lVar11 = *(long *)(param_1 + 0x20);
          *(undefined8 *)(param_1 + 100) = _UNK_00e6a1d0;
          if (lVar11 != 0) {
            lVar9 = *(long *)(param_1 + 0x10);
            uVar7 = (**(code **)(lVar11 + 0x18))
                              (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
            if (lVar9 != 0) {
              Dino_BusSand_App_Meta_YachtRacingData__EnterNewStage_2257d04(lVar9,lVar8,uVar7);
              Dino_BusSand_App_Meta_YachtRacingCore__Track_225659c(param_1,0,0,0,0,0,0);
              lVar11 = *(long *)(param_1 + 0x10);
              if (lVar11 != 0) {
                *(undefined4 *)(lVar11 + 0x7c) = *(undefined4 *)(lVar11 + 0x78);
                Dino_BusSand_App_Meta_YachtRacingCore__ApplyState_225550c(param_1,3);
                lVar11 = *(long *)(param_1 + 0x28);
                if (lVar11 == 0) {
                  return;
                }
                    /* WARNING: Could not recover jumptable at 0x02357c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar11 + 0x18))
                          (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_02357ca8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02357ca8 to 02457cab has its CatchHandler @ 02357d04 */
  FUN_02133224();
}

