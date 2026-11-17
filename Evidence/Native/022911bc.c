/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel.<GetReward>d__24$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleResultPanel__GetReward_d__24__MoveNext (Dino_BusSand_App_UI_BattleRoyaleResultPanel__GetReward_d__24_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel.<GetReward>d__24$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleResultPanel__GetReward_d__24__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleResultPanel__GetReward_d__24_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_BattleRoyaleResultPanel__GetReward_d__24__MoveNext_21911bc
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_68 [24];
  
  if ((bRam0000000004f9b9a9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 02291224 to 0239122b has its CatchHandler @ 02291444 */
    FUN_02132f7c(PTR_DAT_04cae060);
                    /* try { // try from 0229122c to 0239122f has its CatchHandler @ 02291434 */
                    /* try { // try from 02291230 to 0239123b has its CatchHandler @ 0229143c */
    FUN_02132f7c(PTR_DAT_04cae068);
    FUN_02132f7c(PTR_DAT_04caca88);
                    /* try { // try from 02291244 to 02391247 has its CatchHandler @ 02291430 */
    FUN_02132f7c(PTR_DAT_04cae070);
                    /* try { // try from 02291254 to 023912d3 has its CatchHandler @ 02291464 */
    FUN_02132f7c(PTR_DAT_04cae078);
    FUN_02132f7c(PTR_DAT_04cae080);
    FUN_02132f7c(PTR_DAT_04cadf50);
    bRam0000000004f9b9a9 = 1;
  }
  iVar1 = *(int *)(param_4 + 0x10);
  lVar10 = *(long *)(param_4 + 0x20);
  plVar4 = (long *)0x0;
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        return 0;
      }
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      if ((*(long *)(param_4 + 0x28) == 0) ||
         (*(undefined1 *)(*(long *)(param_4 + 0x28) + 0x10) = 0, lVar10 == 0)) goto LAB_0229170c;
                    /* try { // try from 022912e0 to 023912ef has its CatchHandler @ 0229142c */
                    /* try { // try from 022912f0 to 023912ff has its CatchHandler @ 02291428 */
      lVar5 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar10,*(undefined8 *)PTR_DAT_04cae078,0);
                    /* try { // try from 02291300 to 0239130b has its CatchHandler @ 02291410 */
      lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
      plVar4 = (long *)System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
                                 (lVar6,*(undefined8 *)PTR_DAT_04caca50);
      if (lVar6 == 0) goto LAB_0229170c;
                    /* try { // try from 0229132c to 0239133b has its CatchHandler @ 0229140c */
      lVar8 = *(long *)(lVar6 + 0x10);
      uVar11 = *(undefined8 *)(lVar10 + 0x60);
      uVar12 = *(undefined8 *)(lVar10 + 0x68);
      lVar9 = *(long *)PTR_DAT_04cae058;
                    /* try { // try from 0229133c to 0239134b has its CatchHandler @ 02291408 */
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_0229170c;
      uVar2 = *(uint *)(lVar6 + 0x18);
                    /* try { // try from 0229134c to 02391357 has its CatchHandler @ 02291404 */
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (long)(int)uVar2 * 0x10;
        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar8 + 0x20) = uVar11;
        *(undefined8 *)(lVar8 + 0x28) = uVar12;
      }
      else {
                    /* try { // try from 02291554 to 023915bb has its CatchHandler @ 02291480 */
        System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                  (lVar6,uVar11,uVar12,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* catch() { ... } // from try @ 022914f0 with catch @ 02291584 */
                    /* catch() { ... } // from try @ 022914c0 with catch @ 02291588 */
      plVar4 = (long *)UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
      if (((ulong)plVar4 & 1) == 0) {
        lVar5 = UnityEngine_Component__get_transform_43bcd18(lVar10,0);
        plVar4 = (long *)0x0;
      }
      if (lVar5 == 0) goto LAB_0229170c;
      uVar13 = UnityEngine_Transform__get_position_43d0e48(lVar5,0);
                    /* try { // try from 022915bc to 023915f7 has its CatchHandler @ 022915bc
                       catch() { ... } // from try @ 022915bc with catch @ 022915bc
                       catch() { ... } // from try @ 02291720 with catch @ 022915bc */
      uVar12 = *(undefined8 *)(param_4 + 0x28);
      uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar11,uVar12,*(undefined8 *)PTR_DAT_04cae060,0);
                    /* try { // try from 022915f8 to 0239171f has its CatchHandler @ 02291738 */
      Dino_BusSand_App_UI_CommerceRewardFly__Fly_22a8d24(uVar13,param_2,param_3,lVar6,uVar11,0,0);
      *(undefined4 *)(param_4 + 0x30) = 0;
      goto LAB_02291618;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    puVar3 = PTR_DAT_04ca9ae8;
                    /* catch() { ... } // from try @ 022912f0 with catch @ 02291428 */
    if (lVar10 == 0) goto LAB_0229170c;
                    /* catch() { ... } // from try @ 022912e0 with catch @ 0229142c */
                    /* catch() { ... } // from try @ 02291244 with catch @ 02291430 */
                    /* catch() { ... } // from try @ 0229122c with catch @ 02291434 */
    uVar11 = *(undefined8 *)(lVar10 + 0x58);
                    /* catch() { ... } // from try @ 02290680 with catch @ 02291438 */
                    /* catch() { ... } // from try @ 02291230 with catch @ 0229143c */
                    /* catch() { ... } // from try @ 0229111c with catch @ 02291440 */
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0229114c with catch @ 02291444
                       catch() { ... } // from try @ 02291224 with catch @ 02291444 */
      thunk_FUN_0218fdac();
    }
                    /* catch() { ... } // from try @ 0229115c with catch @ 02291448 */
                    /* catch() { ... } // from try @ 02291390 with catch @ 0229144c
                       catch() { ... } // from try @ 022913c8 with catch @ 0229144c */
    plVar4 = (long *)UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
    if (((ulong)plVar4 & 1) != 0) {
      if (*(long *)(lVar10 + 0x58) == 0) goto LAB_0229170c;
                    /* catch() { ... } // from try @ 02291254 with catch @ 02291464
                       catch() { ... } // from try @ 02291378 with catch @ 02291464 */
                    /* catch() { ... } // from try @ 022905f4 with catch @ 02291468 */
      *(undefined1 *)(*(long *)(lVar10 + 0x58) + 0x24) = 1;
    }
                    /* catch() { ... } // from try @ 0229068c with catch @ 0229146c */
    if (*(long *)(lVar10 + 0x40) != 0) {
      Dino_BusSand_App_Meta_BattleRoyaleCore__ExecuteCommand_2221c88
                (auStack_68,*(long *)(lVar10 + 0x40),0);
    }
                    /* try { // try from 02291480 to 023914bf has its CatchHandler @ 02291480
                       catch() { ... } // from try @ 02291480 with catch @ 02291480
                       catch() { ... } // from try @ 02291554 with catch @ 02291480 */
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(lVar10,*(undefined8 *)PTR_DAT_04cadf50,1,0);
    uVar11 = *(undefined8 *)(lVar10 + 0x48);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
                    /* try { // try from 022914c0 to 023914cf has its CatchHandler @ 02291588 */
    if (((uVar7 & 1) != 0) && (*(char *)(lVar10 + 0x70) != '\0')) {
      uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae068);
      System_Object___ctor_4870e5c(uVar11,0);
                    /* try { // try from 022914f0 to 023914ff has its CatchHandler @ 02291584 */
      *(undefined8 *)(param_4 + 0x28) = uVar11;
      thunk_FUN_02134474((undefined8 *)(param_4 + 0x28),uVar11);
      uVar13 = Dino_BusSand_App_UI_BattleRoyaleUi__Play_219a580
                         (*(undefined8 *)(lVar10 + 0x48),*(undefined8 *)PTR_DAT_04cae070,0);
                    /* try { // try from 02291518 to 02391553 has its CatchHandler @ 02291590 */
      uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(uVar13,uVar11,0);
      *(undefined8 *)(param_4 + 0x18) = uVar11;
      thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),uVar11);
      *(undefined4 *)(param_4 + 0x10) = 1;
      return 1;
    }
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        if (iVar1 != 4) {
          return 0;
        }
        *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
        if (lVar10 != 0) {
LAB_02291410:
                    /* catch() { ... } // from try @ 02291300 with catch @ 02291410 */
          Dino_BusSand_App_UI_BattleRoyaleResultPanel__CloseFlow_2190534(lVar10);
          return 0;
        }
        goto LAB_0229170c;
      }
                    /* try { // try from 02291378 to 02391387 has its CatchHandler @ 02291464 */
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      puVar3 = PTR_DAT_04ca9ae8;
      if (lVar10 == 0) goto LAB_0229170c;
                    /* try { // try from 02291388 to 0239138f has its CatchHandler @ 02291400 */
                    /* try { // try from 02291390 to 0239139b has its CatchHandler @ 0229144c */
      uVar11 = *(undefined8 *)(lVar10 + 0x48);
      *(undefined4 *)(lVar10 + 0x74) = 2;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
      if ((uVar7 & 1) == 0) goto LAB_02291410;
                    /* try { // try from 022913bc to 023913c7 has its CatchHandler @ 022913fc */
                    /* try { // try from 022913c8 to 023913d3 has its CatchHandler @ 0229144c */
      uVar13 = Dino_BusSand_App_UI_BattleRoyaleUi__Play_219a580
                         (*(undefined8 *)(lVar10 + 0x48),*(undefined8 *)PTR_DAT_04cae080,0);
                    /* try { // try from 022913d4 to 0239147f has its CatchHandler @ 02290594 */
      uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(uVar13,uVar11,0);
      *(undefined8 *)(param_4 + 0x18) = uVar11;
                    /* catch() { ... } // from try @ 022913bc with catch @ 022913fc */
                    /* catch() { ... } // from try @ 02291388 with catch @ 02291400 */
                    /* catch() { ... } // from try @ 0229134c with catch @ 02291404 */
      thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),uVar11);
                    /* catch() { ... } // from try @ 0229133c with catch @ 02291408 */
      uVar13 = 4;
                    /* catch() { ... } // from try @ 0229132c with catch @ 0229140c */
      goto LAB_022916e8;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
LAB_02291618:
    plVar4 = (long *)(param_4 + 0x28);
    if (*plVar4 == 0) goto LAB_0229170c;
    if ((*(char *)(*plVar4 + 0x10) == '\0') && (fVar15 = *(float *)(param_4 + 0x30), fVar15 < 5.0))
    {
      fVar14 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      *(undefined8 *)(param_4 + 0x18) = 0;
      *(float *)(param_4 + 0x30) = fVar15 + fVar14;
      thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),0);
      uVar13 = 2;
      goto LAB_022916e8;
    }
    *plVar4 = 0;
    plVar4 = (long *)thunk_FUN_02134474(plVar4,0);
    if (lVar10 == 0) goto LAB_0229170c;
  }
  uVar11 = *(undefined8 *)(lVar10 + 0x58);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
  if ((uVar7 & 1) != 0) {
    plVar4 = (long *)0x0;
    if (*(long *)(lVar10 + 0x58) == 0) {
LAB_0229170c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224(plVar4);
    }
    Dino_BusSand_App_UI_CommerceCoinBar__OnFlyArrived_22a87b4(*(long *)(lVar10 + 0x58),0);
  }
  uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
  UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f800000,uVar11,0);
  *(undefined8 *)(param_4 + 0x18) = uVar11;
  thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),uVar11);
  uVar13 = 3;
LAB_022916e8:
  *(undefined4 *)(param_4 + 0x10) = uVar13;
  return 1;
}

