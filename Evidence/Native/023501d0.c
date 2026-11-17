/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$TrackRewardItems
System_Collections_Generic_List_object__o* Dino_BusSand_App_Meta_StreakTowerUtil__TrackRewardItems (int32_t rewardId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$TrackRewardItems
   System_Collections_Generic_List_object__o*
   Dino_BusSand_App_Meta_StreakTowerUtil__TrackRewardItems (int32_t rewardId, const MethodInfo*
   method); */

long Dino_BusSand_App_Meta_StreakTowerUtil__TrackRewardItems_22501d0(undefined4 param_1)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  int iStack_dc;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar5 = PTR_DAT_04ca9b98;
                    /* try { // try from 023501d0 to 024501ef has its CatchHandler @ 0234fafc */
  puVar4 = PTR_DAT_04ca9b90;
                    /* catch() { ... } // from try @ 0234ff6c with catch @ 023501d4
                       catch() { ... } // from try @ 023500c4 with catch @ 023501d4
                       catch() { ... } // from try @ 023500e0 with catch @ 023501d4 */
                    /* try { // try from 023501f0 to 02450207 has its CatchHandler @ 023502c8 */
                    /* try { // try from 02350208 to 024502b3 has its CatchHandler @ 0234fafc */
  if ((bRam0000000004f9bfd5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04caab38);
    FUN_02132f7c(PTR_DAT_04ca9b50);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04cae8f8);
    FUN_02132f7c(PTR_DAT_04cae900);
    FUN_02132f7c(PTR_DAT_04cae908);
    FUN_02132f7c(PTR_DAT_04ca9ba0);
    FUN_02132f7c(PTR_DAT_04cae918);
    FUN_02132f7c(PTR_DAT_04ca9b98);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04ca9b90);
    FUN_02132f7c(PTR_DAT_04cac768);
    FUN_02132f7c(PTR_DAT_04cacc78);
                    /* try { // try from 023502b4 to 024502c3 has its CatchHandler @ 023502c8 */
    FUN_02132f7c(PTR_DAT_04cacc88);
                    /* try { // try from 023502c4 to 024502cb has its CatchHandler @ 0234fafc */
    bRam0000000004f9bfd5 = 1;
  }
                    /* catch() { ... } // from try @ 023501f0 with catch @ 023502c8
                       catch() { ... } // from try @ 023502b4 with catch @ 023502c8 */
                    /* try { // try from 023502cc to 024502cf has its CatchHandler @ 023502d8 */
                    /* try { // try from 023502d0 to 024502db has its CatchHandler @ 0234fafc */
  uStack_70 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
                    /* catch() { ... } // from try @ 02350194 with catch @ 023502d8
                       catch() { ... } // from try @ 023501c8 with catch @ 023502d8
                       catch() { ... } // from try @ 023502cc with catch @ 023502d8 */
  uStack_a0 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar8,*(undefined8 *)puVar5);
  lVar9 = Dino_BusSand_App_Meta_StreakTowerUtil__Rewards_2251c7c(param_1);
  puVar6 = PTR_DAT_04cae900;
  puVar5 = PTR_DAT_04caab38;
  puVar4 = PTR_DAT_04ca9ba0;
  if (lVar9 != 0) {
    System_Collections_Generic_List_ActivityRewardEntry___GetEnumerator_39e28ec
              (&uStack_d8,lVar9,*(undefined8 *)PTR_DAT_04cae918);
    puVar3 = PTR_DAT_04ca9ac8;
    puStack_88 = puStack_d0;
    uStack_90 = uStack_d8;
    uStack_78 = uStack_c0;
    uStack_80 = uStack_c8;
    uStack_70 = uStack_b8;
    uStack_d8 = 0;
    puStack_d0 = &uStack_90;
LAB_02350354:
    uVar10 = System_Collections_Generic_List_Enumerator_ActivityRewardEntry___MoveNext_35bed20
                       (&uStack_90,*(undefined8 *)puVar6);
    if ((uVar10 & 1) != 0) {
      uStack_a8 = uStack_78;
      uStack_a0 = uStack_70;
      uStack_b0 = uStack_80;
      uVar10 = uStack_b0;
      uStack_b0._0_4_ = (int)uStack_80;
      bVar1 = 0 < (int)uStack_b0;
      uStack_b0 = uStack_80;
      if (bVar1) {
        uStack_b0 = uVar10;
        lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b08);
        System_Collections_Generic_Dictionary_object__object____ctor_34b3628
                  (lVar9,*(undefined8 *)PTR_DAT_04ca9b50);
        uVar11 = System_Int32__ToString_482d750(&uStack_b0,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_Dictionary_object__object___Add_34b43a4
                  (lVar9,*(undefined8 *)PTR_DAT_04cac768,uVar11,*(undefined8 *)puVar5);
        uVar10 = uStack_b0;
        bVar7 = (byte)uStack_a0;
        if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar11 = Dino_BusSand_App_Analytics__ItemName_2174510(uVar10 & 0xffffffff,bVar7 & 1,0);
        System_Collections_Generic_Dictionary_object__object___Add_34b43a4
                  (lVar9,*(undefined8 *)PTR_DAT_04cacc78,uVar11,*(undefined8 *)puVar5);
        iStack_dc = 3;
        if ((int)uStack_b0 != 0x2711) {
          iStack_dc = 1;
        }
        iStack_dc = iStack_dc * (int)uStack_a8;
        uVar15 = *(undefined8 *)PTR_DAT_04cacc88;
        uVar11 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),&iStack_dc);
        System_Collections_Generic_Dictionary_object__object___Add_34b43a4
                  (lVar9,uVar15,uVar11,*(undefined8 *)puVar5);
        if (lVar8 != 0) {
          lVar13 = *(long *)(lVar8 + 0x10);
          lVar14 = *(long *)puVar4;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar13 != 0) {
            uVar2 = *(uint *)(lVar8 + 0x18);
            if (uVar2 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar2 + 1;
              plVar12 = (long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
              *plVar12 = lVar9;
              thunk_FUN_02134474(plVar12,lVar9);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar8,lVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_02350354;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_02350354;
    }
    System_Collections_Generic_List_Enumerator_ActivityRewardEntry___Dispose_35bed1c
              (&uStack_90,*(undefined8 *)PTR_DAT_04cae8f8);
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x18) < 1) {
        lVar8 = 0;
      }
      return lVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

