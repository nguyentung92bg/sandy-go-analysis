/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$OnQuit
void Dino_BusSand_App_Meta_GiftPackFeature__OnQuit (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02336f2c) */
/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$OnQuit
   void Dino_BusSand_App_Meta_GiftPackFeature__OnQuit (Dino_BusSand_App_Meta_GiftPackFeature_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__OnQuit_2237204(undefined8 param_1)

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
  
                    /* try { // try from 02337204 to 0243721f has its CatchHandler @ 0233745c */
  Dino_BusSand_App_Meta_GiftPackFeature__EnsureInit_2235d04();
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
  Dino_BusSand_App_Meta_GiftPackFeature__EvaluateAllPacks_22368ec(param_1);
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

