/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$TryActivateFromPendingQueue
void Dino_BusSand_App_Meta_GiftPackFeature__TryActivateFromPendingQueue (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$TryActivateFromPendingQueue
   void Dino_BusSand_App_Meta_GiftPackFeature__TryActivateFromPendingQueue
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__TryActivateFromPendingQueue_2236a88(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  
                    /* try { // try from 02336a88 to 02436a8f has its CatchHandler @ 02336af4 */
  puVar1 = PTR_DAT_04caec48;
                    /* try { // try from 02336a90 to 02436aa7 has its CatchHandler @ 02335df0 */
                    /* try { // try from 02336aa8 to 02436aab has its CatchHandler @ 02336ab0 */
                    /* catch() { ... } // from try @ 02336aa8 with catch @ 02336ab0 */
  if ((bRam0000000004f9bebb & 1) == 0) {
                    /* try { // try from 02336ab8 to 02436abf has its CatchHandler @ 02336af4 */
                    /* try { // try from 02336ac0 to 02436ad7 has its CatchHandler @ 02335df0 */
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04cb3490);
                    /* try { // try from 02336ad8 to 02436adb has its CatchHandler @ 02336ae0 */
    FUN_02132f7c(PTR_DAT_04cb3498);
                    /* catch() { ... } // from try @ 02336ad8 with catch @ 02336ae0 */
                    /* try { // try from 02336ae4 to 02436aeb has its CatchHandler @ 02336af4 */
    FUN_02132f7c(PTR_DAT_04cb34a0);
                    /* try { // try from 02336aec to 02436af7 has its CatchHandler @ 02335df0 */
    FUN_02132f7c(PTR_DAT_04cb3390);
                    /* catch() { ... } // from try @ 0233697c with catch @ 02336af4
                       catch() { ... } // from try @ 023369ac with catch @ 02336af4
                       catch() { ... } // from try @ 023369ec with catch @ 02336af4
                       catch() { ... } // from try @ 02336a28 with catch @ 02336af4
                       catch() { ... } // from try @ 02336a58 with catch @ 02336af4
                       catch() { ... } // from try @ 02336a88 with catch @ 02336af4
                       catch() { ... } // from try @ 02336ab8 with catch @ 02336af4
                       catch() { ... } // from try @ 02336ae4 with catch @ 02336af4 */
                    /* try { // try from 02336af8 to 02436baf has its CatchHandler @ 02336af8
                       catch() { ... } // from try @ 02336af8 with catch @ 02336af8
                       catch() { ... } // from try @ 02336cc8 with catch @ 02336af8
                       catch() { ... } // from try @ 02336d60 with catch @ 02336af8
                       catch() { ... } // from try @ 02336dbc with catch @ 02336af8
                       catch() { ... } // from try @ 02336dec with catch @ 02336af8 */
    bRam0000000004f9bebb = 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  if (**(char **)(lVar4 + 0xb8) == '\0') {
    return;
  }
  lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                    (param_1,*(undefined8 *)PTR_DAT_04cb3390);
  puVar3 = PTR_DAT_04cb34a0;
  puVar2 = PTR_DAT_04cb3490;
  if ((lVar4 != 0) && (lVar5 = *(long *)(lVar4 + 0x18), lVar5 != 0)) {
    iVar11 = 0;
    iVar12 = 0;
    do {
      while( true ) {
        if (*(int *)(lVar5 + 0x18) <= iVar11) {
          return;
        }
        if ((0 < *(int *)(param_1 + 0x40)) && (*(int *)(param_1 + 0x40) <= iVar12)) {
          return;
        }
        lVar5 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar5,iVar11,*(undefined8 *)puVar3);
        if ((lVar5 == 0) ||
           (lVar6 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8
                              (param_1,*(undefined4 *)(lVar5 + 0x10)), lVar6 == 0))
        goto LAB_02336c04;
                    /* try { // try from 02336bb0 to 02436bcb has its CatchHandler @ 02336d64 */
        if (*(long *)(lVar5 + 0x28) < 1) break;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar7 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
        if (*(long *)(lVar5 + 0x28) <= lVar7 / 1000) break;
        lVar5 = *(long *)(lVar4 + 0x18);
        iVar11 = iVar11 + 1;
joined_r0x02336d2c:
        if (lVar5 == 0) goto LAB_02336d30;
      }
                    /* try { // try from 02336bec to 02436c2f has its CatchHandler @ 02336d7c */
      lVar7 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8
                        (param_1,*(undefined4 *)(lVar5 + 0x10));
      if (lVar7 == 0) break;
      if (*(char *)(lVar7 + 0x30) != '\0') {
LAB_02336c04:
        if (*(long *)(lVar4 + 0x18) != 0) {
          System_Collections_Generic_List_object___RemoveAt_3a833a0
                    (*(long *)(lVar4 + 0x18),iVar11,*(undefined8 *)puVar2);
          lVar5 = *(long *)(lVar4 + 0x18);
          goto joined_r0x02336d2c;
        }
        break;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 02336c54 to 02436c5b has its CatchHandler @ 02336d60 */
      if ((((0 < *(int *)(lVar6 + 0x20)) && (*(int *)(lVar6 + 0x20) <= *(int *)(lVar7 + 0x1c))) ||
          (uVar8 = Dino_BusSand_App_Meta_GiftPackFeature__IsPackDisabled_2234ee8
                             (param_1,*(undefined4 *)(lVar6 + 0x10)), (uVar8 & 1) != 0)) ||
         (uVar8 = Dino_BusSand_App_Meta_GiftPackFeature__HasActivatedCurrentCycle_22389e0
                            (uVar8,lVar6,lVar7), (uVar8 & 1) != 0)) goto LAB_02336c04;
      uVar8 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar5 + 0x30),0);
      if ((uVar8 & 1) == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar9 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
                    /* try { // try from 02336ca0 to 02436cc7 has its CatchHandler @ 02336d70 */
        uVar10 = Dino_BusSand_App_Meta_GiftPackCycle__GetCurrentPeriodKey_22322cc
                           (lVar6,lVar9 / 1000);
        uVar8 = System_String__op_Inequality_46d110c(uVar10,*(undefined8 *)(lVar5 + 0x30),0);
        if ((uVar8 & 1) != 0) goto LAB_02336c04;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar9 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
                    /* try { // try from 02336cc8 to 02436d53 has its CatchHandler @ 02336af8 */
      uVar8 = Dino_BusSand_App_Meta_GiftPackCycle__IsInCycleTimeWindow_22320ec
                        (lVar6,lVar9 / 1000,*(int *)(lVar7 + 0x14) == 0);
      if ((uVar8 & 1) == 0) goto LAB_02336c04;
      if (*(long *)(lVar4 + 0x18) == 0) break;
      System_Collections_Generic_List_object___RemoveAt_3a833a0
                (*(long *)(lVar4 + 0x18),iVar11,*(undefined8 *)puVar2);
      Dino_BusSand_App_Meta_GiftPackFeature__ActivatePack_2239a54
                (param_1,*(undefined4 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x18),1);
      lVar5 = *(long *)(lVar4 + 0x18);
      iVar12 = iVar12 + 1;
    } while (lVar5 != 0);
  }
LAB_02336d30:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

