/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$SyncGoldenProgress
void Dino_BusSand_App_Meta_GiftPackFeature__SyncGoldenProgress (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$SyncGoldenProgress
   void Dino_BusSand_App_Meta_GiftPackFeature__SyncGoldenProgress
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__SyncGoldenProgress_2237278(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  if ((bRam0000000004f9bed8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caefa8);
    FUN_02132f7c(PTR_DAT_04caeea8);
    FUN_02132f7c(PTR_DAT_04caeeb0);
    FUN_02132f7c(PTR_DAT_04caeeb8);
                    /* try { // try from 023372d4 to 024372fb has its CatchHandler @ 02337464 */
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04cb34b0);
    FUN_02132f7c(PTR_DAT_04caeec0);
    FUN_02132f7c(PTR_DAT_04caefe0);
    FUN_02132f7c(PTR_DAT_04cb34b8);
    FUN_02132f7c(PTR_DAT_04caf048);
    FUN_02132f7c(PTR_DAT_04cb34c0);
    FUN_02132f7c(PTR_DAT_04cb3390);
                    /* try { // try from 0233733c to 02437363 has its CatchHandler @ 02337470 */
    FUN_02132f7c(PTR_DAT_04cb34c8);
    FUN_02132f7c(PTR_DAT_04cb3328);
    bRam0000000004f9bed8 = 1;
  }
  puStack_78 = (undefined8 *)0x0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
                    /* try { // try from 02337364 to 024373eb has its CatchHandler @ 02336f40 */
  lVar9 = Dino_BusSand_App_Meta_GiftPackFeature__FindFirstConfig_2234c34(param_1,3);
  if ((lVar9 != 0) && (iVar1 = *(int *)(lVar9 + 0x10), 0 < iVar1)) {
    lVar9 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)PTR_DAT_04cb3390);
    puVar5 = PTR_DAT_04caec48;
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x70), lVar9 == 0)) {
LAB_023376b8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 023376b8 to 024376db has its CatchHandler @ 02337564 */
      FUN_02133224();
    }
    iVar2 = *(int *)(lVar9 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = Dino_BusSand_App_Meta_GiftPackFeature__get_CurLevel_22352c4();
    Dino_BusSand_App_Meta_GoldenGiftState__SyncPassLevelCount_2233904(lVar9,uVar7);
    iVar3 = *(int *)(lVar9 + 0x10);
    if (iVar2 < iVar3) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar10 = Dino_BusSand_App_Meta_GiftPackFeature__GoldenStages_223b83c(iVar1);
      if (lVar10 == 0) goto LAB_023376b8;
                    /* try { // try from 023373ec to 024373ef has its CatchHandler @ 023374c0 */
                    /* try { // try from 023373f0 to 024373f3 has its CatchHandler @ 02337474 */
                    /* try { // try from 023373f4 to 024373f7 has its CatchHandler @ 02336f40 */
      if (*(int *)(lVar10 + 0x18) != 0) {
                    /* try { // try from 023373f8 to 024373ff has its CatchHandler @ 023374b4 */
                    /* try { // try from 02337400 to 02437403 has its CatchHandler @ 02337470 */
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    /* try { // try from 02337404 to 02437407 has its CatchHandler @ 023374c0 */
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 02337408 to 0243740f has its CatchHandler @ 02337464 */
                    /* try { // try from 02337410 to 0243741b has its CatchHandler @ 023374b4 */
        uVar7 = Dino_BusSand_App_Meta_GiftPackFeature__ReachedStage_223bef0(lVar10,iVar2);
                    /* try { // try from 0233741c to 0243741f has its CatchHandler @ 02337474 */
                    /* try { // try from 02337420 to 02437427 has its CatchHandler @ 02337458 */
        iVar8 = Dino_BusSand_App_Meta_GiftPackFeature__ReachedStage_223bef0(lVar10,iVar3);
                    /* try { // try from 02337428 to 02437433 has its CatchHandler @ 023374c0 */
                    /* try { // try from 02337434 to 0243743f has its CatchHandler @ 02337474 */
        lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb34c0);
                    /* catch() { ... } // from try @ 02337120 with catch @ 02337440
                       try { // try from 02337440 to 02437493 has its CatchHandler @ 02336f40 */
                    /* catch() { ... } // from try @ 023370c0 with catch @ 02337444 */
                    /* catch() { ... } // from try @ 023370a4 with catch @ 02337448 */
                    /* catch() { ... } // from try @ 02337164 with catch @ 0233744c */
        System_Collections_Generic_List_GiftPackFeature_GoldenStage____ctor_3b3a62c
                  (lVar11,*(undefined8 *)PTR_DAT_04cb34b8);
                    /* catch() { ... } // from try @ 02337230 with catch @ 02337450 */
                    /* catch() { ... } // from try @ 02337028 with catch @ 02337454 */
                    /* catch() { ... } // from try @ 023371cc with catch @ 02337458
                       catch() { ... } // from try @ 02337420 with catch @ 02337458 */
                    /* catch() { ... } // from try @ 02337204 with catch @ 0233745c */
                    /* catch() { ... } // from try @ 02337074 with catch @ 02337460 */
                    /* catch() { ... } // from try @ 023372d4 with catch @ 02337464
                       catch() { ... } // from try @ 02337408 with catch @ 02337464 */
        System_Collections_Generic_List_GiftPackFeature_GoldenStage___GetEnumerator_3b3b948
                  (&uStack_a0,lVar10,*(undefined8 *)PTR_DAT_04caeec0);
        puVar6 = PTR_DAT_04cb34b0;
        puVar5 = PTR_DAT_04caeeb0;
                    /* catch() { ... } // from try @ 0233733c with catch @ 02337470
                       catch() { ... } // from try @ 02337400 with catch @ 02337470 */
                    /* catch() { ... } // from try @ 023370e0 with catch @ 02337474
                       catch() { ... } // from try @ 023373f0 with catch @ 02337474
                       catch() { ... } // from try @ 0233741c with catch @ 02337474
                       catch() { ... } // from try @ 02337434 with catch @ 02337474 */
        puStack_78 = puStack_98;
        uStack_80 = uStack_a0;
        uStack_68 = uStack_88;
        uStack_70 = uStack_90;
        uStack_a0 = 0;
        puStack_98 = &uStack_80;
LAB_02337490:
                    /* try { // try from 02337494 to 02437497 has its CatchHandler @ 023374a0 */
        uVar12 = System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___MoveNext_3610858
                           (&uStack_80,*(undefined8 *)puVar5);
        if ((uVar12 & 1) != 0) {
                    /* catch() { ... } // from try @ 02337494 with catch @ 023374a0 */
                    /* try { // try from 023374a8 to 024374af has its CatchHandler @ 02337560 */
          iVar14 = (int)(uStack_70 >> 0x20);
                    /* try { // try from 023374b0 to 024374df has its CatchHandler @ 02336f40 */
                    /* catch() { ... } // from try @ 02337044 with catch @ 023374b4
                       catch() { ... } // from try @ 023373f8 with catch @ 023374b4
                       catch() { ... } // from try @ 02337410 with catch @ 023374b4 */
          if ((iVar2 < iVar14) && (iVar14 <= iVar3)) {
            if (lVar11 != 0) {
                    /* catch() { ... } // from try @ 02337250 with catch @ 023374c0
                       catch() { ... } // from try @ 023373ec with catch @ 023374c0
                       catch() { ... } // from try @ 02337404 with catch @ 023374c0
                       catch() { ... } // from try @ 02337428 with catch @ 023374c0 */
              lVar10 = *(long *)(lVar11 + 0x10);
              lVar16 = *(long *)puVar6;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar10 != 0) {
                uVar4 = *(uint *)(lVar11 + 0x18);
                    /* try { // try from 023374e0 to 024374e3 has its CatchHandler @ 023374ec */
                if (uVar4 < *(uint *)(lVar10 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)uVar4 * 0xc;
                    /* catch() { ... } // from try @ 023374e0 with catch @ 023374ec */
                  *(uint *)(lVar11 + 0x18) = uVar4 + 1;
                    /* try { // try from 023374f4 to 024374fb has its CatchHandler @ 02337560 */
                  *(ulong *)(lVar10 + 0x20) = uStack_70;
                  *(undefined4 *)(lVar10 + 0x28) = (undefined4)uStack_68;
                    /* try { // try from 023374fc to 02437513 has its CatchHandler @ 02336f40 */
                }
                else {
                  System_Collections_Generic_List_GiftPackFeature_GoldenStage___AddWithResize_3b3aee8
                            (lVar11,uStack_70,uStack_68 & 0xffffffff,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    /* try { // try from 02337514 to 02437517 has its CatchHandler @ 0233751c */
                }
                goto LAB_02337490;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          goto LAB_02337490;
        }
                    /* catch() { ... } // from try @ 02337514 with catch @ 0233751c */
                    /* try { // try from 02337524 to 0243752b has its CatchHandler @ 02337560 */
        System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___Dispose_3610854
                  (&uStack_80,*(undefined8 *)PTR_DAT_04caeea8);
        puVar6 = PTR_DAT_04cb3328;
                    /* try { // try from 0233752c to 02437543 has its CatchHandler @ 02336f40 */
        if (lVar11 == 0) goto LAB_023376b8;
        if (*(int *)(lVar11 + 0x18) != 0) {
          lVar10 = *(long *)PTR_DAT_04cb3328;
                    /* try { // try from 02337544 to 02437547 has its CatchHandler @ 0233754c */
          if (*(int *)(lVar10 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02337544 with catch @ 0233754c */
            thunk_FUN_0218fdac();
                    /* try { // try from 02337550 to 02437557 has its CatchHandler @ 02337560 */
            lVar10 = *(long *)puVar6;
          }
          puVar15 = *(undefined8 **)(lVar10 + 0xb8);
                    /* try { // try from 02337558 to 02437563 has its CatchHandler @ 02336f40 */
          lVar16 = puVar15[4];
          if (lVar16 == 0) {
                    /* catch() { ... } // from try @ 023374a8 with catch @ 02337560
                       catch() { ... } // from try @ 023374f4 with catch @ 02337560
                       catch() { ... } // from try @ 02337524 with catch @ 02337560
                       catch() { ... } // from try @ 02337550 with catch @ 02337560 */
                    /* try { // try from 02337564 to 024375d3 has its CatchHandler @ 02337564
                       catch() { ... } // from try @ 02337564 with catch @ 02337564
                       catch() { ... } // from try @ 0233767c with catch @ 02337564
                       catch() { ... } // from try @ 023376b8 with catch @ 02337564
                       catch() { ... } // from try @ 023376f4 with catch @ 02337564 */
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              puVar15 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
            }
            uVar17 = *puVar15;
            lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caefa8);
            System_Comparison_GiftPackFeature_GoldenStage____ctor_332a458
                      (lVar16,uVar17,*(undefined8 *)PTR_DAT_04cb34c8,0);
            plVar13 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20);
            *plVar13 = lVar16;
            thunk_FUN_02134474(plVar13,lVar16);
          }
          System_Collections_Generic_List_GiftPackFeature_GoldenStage___Sort_3b3c9e0
                    (lVar11,lVar16,*(undefined8 *)PTR_DAT_04caefe0);
          puVar6 = PTR_DAT_04caeec0;
                    /* try { // try from 023375d4 to 024375d7 has its CatchHandler @ 0233767c */
                    /* try { // try from 023375e4 to 02437607 has its CatchHandler @ 02337680 */
          System_Collections_Generic_List_GiftPackFeature_GoldenStage___GetEnumerator_3b3b948
                    (&uStack_a0,lVar11,*(undefined8 *)PTR_DAT_04caeec0);
          uStack_80 = uStack_a0;
          uStack_a0 = 0;
          puStack_78 = puStack_98;
          uStack_68 = uStack_88;
          uStack_70 = uStack_90;
          puStack_98 = &uStack_80;
          while (uVar12 = System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___MoveNext_3610858
                                    (&uStack_80,*(undefined8 *)puVar5), (uVar12 & 1) != 0) {
                    /* try { // try from 02337620 to 0243763f has its CatchHandler @ 02337684 */
            Dino_BusSand_App_Meta_GiftPackTrack__GoldStageAdvance_223c028
                      (param_1,iVar1,uStack_70 & 0xffffffff,0,0,uVar7,iVar8);
          }
          System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___Dispose_3610854
                    (&uStack_80,*(undefined8 *)PTR_DAT_04caeea8);
          if (*(char *)(lVar9 + 0x28) != '\0') {
                    /* try { // try from 02337650 to 0243767b has its CatchHandler @ 02337688 */
            if ((0 < iVar8) && (*(int *)(lVar9 + 0x44) < 1)) {
              *(int *)(lVar9 + 0x44) = iVar8;
            }
            System_Collections_Generic_List_GiftPackFeature_GoldenStage___GetEnumerator_3b3b948
                      (&uStack_a0,lVar11,*(undefined8 *)puVar6);
            uStack_80 = uStack_a0;
            uStack_a0 = 0;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023375d4 with catch @ 0233767c
                       try { // try from 0233767c to 0243769f has its CatchHandler @ 02337564 */
            puStack_78 = puStack_98;
            uStack_68 = uStack_88;
            uStack_70 = uStack_90;
            puStack_98 = &uStack_80;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023375e4 with catch @ 02337680
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02337620 with catch @ 02337684
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02337650 with catch @ 02337688
                        */
            while (uVar12 = System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___MoveNext_3610858
                                      (&uStack_80,*(undefined8 *)puVar5), (uVar12 & 1) != 0) {
                    /* try { // try from 023376a0 to 024376b7 has its CatchHandler @ 023376ec */
              Dino_BusSand_App_Meta_GiftPackTrack__GoldStageAdvance_223c028
                        (param_1,iVar1,uStack_70 & 0xffffffff,1,*(undefined4 *)(lVar9 + 0x44),uVar7,
                         iVar8);
            }
            FUN_01e78478(&uStack_a0);
          }
                    /* catch() { ... } // from try @ 023376a0 with catch @ 023376ec
                       catch() { ... } // from try @ 023376dc with catch @ 023376ec */
                    /* try { // try from 023376f0 to 024376f3 has its CatchHandler @ 023376fc */
                    /* try { // try from 023376f4 to 024376ff has its CatchHandler @ 02337564 */
          Dino_BusSand_App_Meta_GiftPackFeature__CheckGoldenAllStagesForcePopup_223c88c
                    (param_1,iVar1);
        }
      }
    }
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023376f0 with catch @ 023376fc
                        */
                    /* try { // try from 02337700 to 024377a3 has its CatchHandler @ 02337700
                       catch() { ... } // from try @ 02337700 with catch @ 02337700
                       catch() { ... } // from try @ 0233792c with catch @ 02337700
                       catch() { ... } // from try @ 023379b8 with catch @ 02337700
                       catch() { ... } // from try @ 023379d8 with catch @ 02337700
                       catch() { ... } // from try @ 02337a38 with catch @ 02337700
                       catch() { ... } // from try @ 02337a68 with catch @ 02337700
                       catch() { ... } // from try @ 02337a94 with catch @ 02337700 */
  return;
}

