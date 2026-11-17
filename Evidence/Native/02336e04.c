/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$OnLevelWin
void Dino_BusSand_App_Meta_GiftPackFeature__OnLevelWin (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t type, int32_t clearedLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$OnLevelWin
   void Dino_BusSand_App_Meta_GiftPackFeature__OnLevelWin (Dino_BusSand_App_Meta_GiftPackFeature_o*
   __this, int32_t type, int32_t clearedLevel, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__OnLevelWin_2236e04(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR_DAT_04cb3390;
  if ((bRam0000000004f9bead & 1) == 0) {
                    /* try { // try from 02336e2c to 02436e3f has its CatchHandler @ 02336e4c */
    FUN_02132f7c(PTR_DAT_04cb3390);
    bRam0000000004f9bead = 1;
  }
  Dino_BusSand_App_Meta_GiftPackFeature__EnsureInit_2235d04(param_1);
                    /* try { // try from 02336e40 to 02436e63 has its CatchHandler @ 02336df8 */
  lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02336e2c with catch @ 02336e4c
                        */
  if (lVar4 != 0) {
    uVar7 = *(undefined8 *)puVar1;
    *(undefined4 *)(lVar4 + 0x20) = 0;
    lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar7);
    if (lVar4 != 0) {
                    /* try { // try from 02336e64 to 02436e7b has its CatchHandler @ 02336eac */
                    /* try { // try from 02336e7c to 02436e9b has its CatchHandler @ 02336df8 */
      *(int *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) + 1;
      if ((bRam0000000004f9beb0 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb3398);
        FUN_02132f7c(PTR_DAT_04cb33a0);
        FUN_02132f7c(PTR_DAT_04cb33a8);
        FUN_02132f7c(PTR_DAT_04caec48);
        FUN_02132f7c(PTR_DAT_04cb33c0);
        FUN_02132f7c(PTR_DAT_04caefe8);
        FUN_02132f7c(PTR_DAT_04cb3390);
        bRam0000000004f9beb0 = 1;
      }
      puVar2 = PTR_DAT_04cb3390;
      puVar1 = PTR_DAT_04caec48;
      uStack_40 = 0;
      uStack_48 = 0;
      lStack_38 = 0;
      Dino_BusSand_App_Meta_GiftPackFeature__SyncGoldenProgress_2237278(param_1);
      Dino_BusSand_App_Meta_GiftPackFeature__EvaluateAllPacks_22368ec(param_1);
      Dino_BusSand_App_Meta_GiftPackFeature__CheckGoldenCoinSettlement_2236d50(param_1);
      Dino_BusSand_App_Meta_GiftPackFeature__TryCloseCurrentGoldenPackIfAllClaimed_2236dd0(param_1);
      lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar2);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

