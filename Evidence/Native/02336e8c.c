/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$RoundEnd
void Dino_BusSand_App_Meta_GiftPackFeature__RoundEnd (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, bool win, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$RoundEnd
   void Dino_BusSand_App_Meta_GiftPackFeature__RoundEnd (Dino_BusSand_App_Meta_GiftPackFeature_o*
   __this, bool win, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__RoundEnd_2236e8c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
                    /* try { // try from 02336e9c to 02436eab has its CatchHandler @ 02336eac */
                    /* catch() { ... } // from try @ 02336e64 with catch @ 02336eac
                       catch() { ... } // from try @ 02336e9c with catch @ 02336eac */
  if ((bRam0000000004f9beb0 & 1) == 0) {
                    /* try { // try from 02336eb0 to 02436eb3 has its CatchHandler @ 02336ebc */
                    /* try { // try from 02336eb4 to 02436ebf has its CatchHandler @ 02336df8 */
    FUN_02132f7c(PTR_DAT_04cb3398);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02336eb0 with catch @ 02336ebc
                        */
                    /* catch() { ... } // from try @ 02336ec8 with catch @ 02336ec0
                       catch() { ... } // from try @ 02336f00 with catch @ 02336ec0
                       catch() { ... } // from try @ 02336f34 with catch @ 02336ec0 */
                    /* try { // try from 02336ec4 to 02436ec7 has its CatchHandler @ 02336ed0 */
    FUN_02132f7c(PTR_DAT_04cb33a0);
                    /* try { // try from 02336ec8 to 02436ee7 has its CatchHandler @ 02336ec0 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02336ec4 with catch @ 02336ed0
                        */
    FUN_02132f7c(PTR_DAT_04cb33a8);
    FUN_02132f7c(PTR_DAT_04caec48);
                    /* try { // try from 02336ee8 to 02436eff has its CatchHandler @ 02336f2c */
    FUN_02132f7c(PTR_DAT_04cb33c0);
    FUN_02132f7c(PTR_DAT_04caefe8);
                    /* try { // try from 02336f00 to 02436f1b has its CatchHandler @ 02336ec0 */
    FUN_02132f7c(PTR_DAT_04cb3390);
    bRam0000000004f9beb0 = 1;
  }
  puVar2 = PTR_DAT_04cb3390;
  puVar1 = PTR_DAT_04caec48;
  uStack_40 = 0;
                    /* try { // try from 02336f1c to 02436f2b has its CatchHandler @ 02336f2c */
  uStack_48 = 0;
  lStack_38 = 0;
  if ((param_2 & 1) != 0) {
                    /* catch() { ... } // from try @ 02336ee8 with catch @ 02336f2c
                       catch() { ... } // from try @ 02336f1c with catch @ 02336f2c */
                    /* try { // try from 02336f30 to 02436f33 has its CatchHandler @ 02336f3c */
    Dino_BusSand_App_Meta_GiftPackFeature__SyncGoldenProgress_2237278(param_1);
  }
                    /* try { // try from 02336f34 to 02436f3f has its CatchHandler @ 02336ec0 */
  Dino_BusSand_App_Meta_GiftPackFeature__EvaluateAllPacks_22368ec(param_1);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02336f30 with catch @ 02336f3c
                        */
                    /* try { // try from 02336f40 to 02437027 has its CatchHandler @ 02336f40
                       catch() { ... } // from try @ 02336f40 with catch @ 02336f40
                       catch() { ... } // from try @ 02337364 with catch @ 02336f40
                       catch() { ... } // from try @ 023373f4 with catch @ 02336f40
                       catch() { ... } // from try @ 02337440 with catch @ 02336f40
                       catch() { ... } // from try @ 023374b0 with catch @ 02336f40
                       catch() { ... } // from try @ 023374fc with catch @ 02336f40
                       catch() { ... } // from try @ 0233752c with catch @ 02336f40
                       catch() { ... } // from try @ 02337558 with catch @ 02336f40 */
  Dino_BusSand_App_Meta_GiftPackFeature__CheckGoldenCoinSettlement_2236d50(param_1);
  Dino_BusSand_App_Meta_GiftPackFeature__TryCloseCurrentGoldenPackIfAllClaimed_2236dd0(param_1);
  lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar2)
  ;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  lVar5 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x54) = 0;
    *(long *)(lVar4 + 0x48) = lVar5 / 1000;
    puVar3 = PTR_DAT_04cb33a0;
    puVar2 = PTR_DAT_04cb3398;
    puVar1 = PTR_DAT_04caefe8;
    if (*(long *)(lVar4 + 0x10) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_48,*(long *)(lVar4 + 0x10),*(undefined8 *)PTR_DAT_04cb33c0);
      while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_48,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
        if (lStack_38 != 0) {
          *(undefined4 *)(lStack_38 + 0x38) = 0;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_48,*(undefined8 *)puVar2);
      Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,*(undefined8 *)puVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

