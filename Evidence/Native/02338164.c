/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$TrackGoldenPurchaseUnlock
void Dino_BusSand_App_Meta_GiftPackFeature__TrackGoldenPurchaseUnlock (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$TrackGoldenPurchaseUnlock
   void Dino_BusSand_App_Meta_GiftPackFeature__TrackGoldenPurchaseUnlock
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__TrackGoldenPurchaseUnlock_2238164
               (undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  puVar3 = PTR_DAT_04caec48;
  if ((bRam0000000004f9bee0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caefa8);
    FUN_02132f7c(PTR_DAT_04caeea8);
    FUN_02132f7c(PTR_DAT_04caeeb0);
    FUN_02132f7c(PTR_DAT_04caeeb8);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04cb34b0);
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04caeec0);
    FUN_02132f7c(PTR_DAT_04caefe0);
    FUN_02132f7c(PTR_DAT_04cb34b8);
    FUN_02132f7c(PTR_DAT_04caf048);
    FUN_02132f7c(PTR_DAT_04cb34c0);
                    /* try { // try from 0233822c to 02438233 has its CatchHandler @ 023384b4 */
    FUN_02132f7c(PTR_DAT_04cb3390);
    FUN_02132f7c(PTR_DAT_04cb3500);
                    /* try { // try from 02338244 to 0243824b has its CatchHandler @ 023384b0 */
    FUN_02132f7c(PTR_DAT_04cb3328);
    bRam0000000004f9bee0 = 1;
  }
  puVar5 = PTR_DAT_04cb3390;
                    /* try { // try from 0233825c to 02438263 has its CatchHandler @ 02338404 */
  puStack_78 = (undefined8 *)0x0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 02338274 to 02438297 has its CatchHandler @ 02338410 */
    thunk_FUN_0218fdac();
  }
  lVar8 = Dino_BusSand_App_Meta_GiftPackFeature__GoldenStages_223b83c(param_2);
  lVar9 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar5)
  ;
  puVar3 = PTR_DAT_04cb34b8;
  if (lVar9 != 0) {
    lVar18 = *(long *)(lVar9 + 0x70);
                    /* try { // try from 023382a8 to 024382cf has its CatchHandler @ 0233840c */
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb34c0);
    System_Collections_Generic_List_GiftPackFeature_GoldenStage____ctor_3b3a62c
              (lVar9,*(undefined8 *)puVar3);
    puVar6 = PTR_DAT_04cb34b0;
    puVar5 = PTR_DAT_04caeeb0;
    puVar3 = PTR_DAT_04cad860;
    if (lVar8 != 0) {
                    /* try { // try from 023382dc to 024382e7 has its CatchHandler @ 02338400 */
      System_Collections_Generic_List_GiftPackFeature_GoldenStage___GetEnumerator_3b3b948
                (&uStack_a0,lVar8,*(undefined8 *)PTR_DAT_04caeec0);
      uStack_80 = uStack_a0;
      uStack_a0 = 0;
      puStack_78 = puStack_98;
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      puStack_98 = &uStack_80;
LAB_02338304:
      uVar10 = System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___MoveNext_3610858
                         (&uStack_80,*(undefined8 *)puVar5);
      uVar12 = uStack_70;
      puVar4 = PTR_DAT_04caeea8;
      if ((uVar10 & 1) != 0) {
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
                    /* try { // try from 02338328 to 0243834f has its CatchHandler @ 02338408 */
        if ((int)(uStack_70 >> 0x20) <= *(int *)(lVar18 + 0x10)) {
          if (*(long *)(lVar18 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar1 = (undefined4)uStack_68;
          uVar16 = uStack_68 & 0xffffffff;
          uVar10 = System_Collections_Generic_List_int___Contains_3a2c3ec
                             (*(long *)(lVar18 + 0x30),uStack_70 & 0xffffffff,*(undefined8 *)puVar3)
          ;
          if ((uVar10 & 1) == 0) {
            if (lVar9 != 0) {
              lVar13 = *(long *)(lVar9 + 0x10);
              lVar15 = *(long *)puVar6;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar13 != 0) {
                uVar2 = *(uint *)(lVar9 + 0x18);
                if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)uVar2 * 0xc;
                  *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                  *(ulong *)(lVar13 + 0x20) = uVar12;
                  *(undefined4 *)(lVar13 + 0x28) = uVar1;
                }
                else {
                  System_Collections_Generic_List_GiftPackFeature_GoldenStage___AddWithResize_3b3aee8
                            (lVar9,uVar12,uVar16,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_02338304;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        }
        goto LAB_02338304;
      }
                    /* try { // try from 023383b4 to 024383bb has its CatchHandler @ 023384a8 */
      System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___Dispose_3610854
                (&uStack_80,*(undefined8 *)PTR_DAT_04caeea8);
      puVar3 = PTR_DAT_04cb3328;
                    /* try { // try from 023383c0 to 024383db has its CatchHandler @ 02338410 */
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x18) != 0) {
          lVar13 = *(long *)PTR_DAT_04cb3328;
          if (*(int *)(lVar13 + 0xe4) == 0) {
                    /* try { // try from 023383e0 to 024383fb has its CatchHandler @ 0233840c */
            thunk_FUN_0218fdac();
            lVar13 = *(long *)puVar3;
          }
          puVar14 = *(undefined8 **)(lVar13 + 0xb8);
          lVar15 = puVar14[5];
          if (lVar15 == 0) {
            if (*(int *)(lVar13 + 0xe4) == 0) {
                    /* try { // try from 023383fc to 0243842b has its CatchHandler @ 02338058 */
              thunk_FUN_0218fdac();
                    /* catch() { ... } // from try @ 023382dc with catch @ 02338400 */
                    /* catch() { ... } // from try @ 0233825c with catch @ 02338404 */
              puVar14 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
            }
                    /* catch() { ... } // from try @ 02338328 with catch @ 02338408 */
                    /* catch() { ... } // from try @ 023382a8 with catch @ 0233840c
                       catch() { ... } // from try @ 023383e0 with catch @ 0233840c */
                    /* catch() { ... } // from try @ 02338274 with catch @ 02338410
                       catch() { ... } // from try @ 023383c0 with catch @ 02338410 */
            uVar17 = *puVar14;
            lVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caefa8);
                    /* try { // try from 0233842c to 0243842f has its CatchHandler @ 0233849c */
                    /* try { // try from 02338430 to 0243847b has its CatchHandler @ 02338058 */
            System_Comparison_GiftPackFeature_GoldenStage____ctor_332a458
                      (lVar15,uVar17,*(undefined8 *)PTR_DAT_04cb3500,0);
            plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
            *plVar11 = lVar15;
            thunk_FUN_02134474(plVar11,lVar15);
          }
          System_Collections_Generic_List_GiftPackFeature_GoldenStage___Sort_3b3c9e0
                    (lVar9,lVar15,*(undefined8 *)PTR_DAT_04caefe0);
          if (lVar18 == 0) goto LAB_02338540;
          uVar1 = *(undefined4 *)(lVar18 + 0x10);
                    /* try { // try from 0233847c to 02438483 has its CatchHandler @ 023384ac */
          if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
                    /* try { // try from 02338488 to 0243848f has its CatchHandler @ 023384f0 */
          iVar7 = Dino_BusSand_App_Meta_GiftPackFeature__ReachedStage_223bef0(lVar8,uVar1);
                    /* try { // try from 02338490 to 024384d3 has its CatchHandler @ 02338058 */
                    /* catch() { ... } // from try @ 0233842c with catch @ 0233849c */
          if ((0 < iVar7) && (*(int *)(lVar18 + 0x44) < 1)) {
                    /* catch() { ... } // from try @ 023383b4 with catch @ 023384a8 */
            *(int *)(lVar18 + 0x44) = iVar7;
          }
                    /* catch() { ... } // from try @ 0233847c with catch @ 023384ac */
                    /* catch() { ... } // from try @ 02338244 with catch @ 023384b0 */
                    /* catch() { ... } // from try @ 0233822c with catch @ 023384b4 */
          System_Collections_Generic_List_GiftPackFeature_GoldenStage___GetEnumerator_3b3b948
                    (&uStack_a0,lVar9,*(undefined8 *)PTR_DAT_04caeec0);
          uStack_80 = uStack_a0;
          uStack_a0 = 0;
          puStack_78 = puStack_98;
          uStack_68 = uStack_88;
          uStack_70 = uStack_90;
          puStack_98 = &uStack_80;
                    /* try { // try from 023384d4 to 024384d7 has its CatchHandler @ 023384dc */
                    /* catch() { ... } // from try @ 023384d4 with catch @ 023384dc */
                    /* try { // try from 023384e0 to 024384e7 has its CatchHandler @ 023384f0 */
          while (uVar12 = System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___MoveNext_3610858
                                    (&uStack_80,*(undefined8 *)puVar5), (uVar12 & 1) != 0) {
                    /* try { // try from 023384e8 to 024384f3 has its CatchHandler @ 02338058 */
                    /* catch() { ... } // from try @ 02338488 with catch @ 023384f0
                       catch() { ... } // from try @ 023384e0 with catch @ 023384f0 */
            Dino_BusSand_App_Meta_GiftPackTrack__GoldStageAdvance_223c028
                      (param_1,param_2,uStack_70 & 0xffffffff,1,*(undefined4 *)(lVar18 + 0x44),0,
                       iVar7);
          }
          System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___Dispose_3610854
                    (&uStack_80,*(undefined8 *)puVar4);
        }
        return;
      }
    }
  }
LAB_02338540:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

