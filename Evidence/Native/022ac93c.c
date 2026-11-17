/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$GoldenTotalCoins
int32_t Dino_BusSand_App_UI_GiftPackUi__GoldenTotalCoins (int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$GoldenTotalCoins
   int32_t Dino_BusSand_App_UI_GiftPackUi__GoldenTotalCoins (int32_t packId, const MethodInfo*
   method); */

int Dino_BusSand_App_UI_GiftPackUi__GoldenTotalCoins_21ac93c(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04caec48;
  if ((bRam0000000004f9ba67 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caeea8);
    FUN_02132f7c(PTR_DAT_04caeeb0);
    FUN_02132f7c(PTR_DAT_04caeeb8);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caeec0);
    bRam0000000004f9ba67 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__GoldenStages_223b83c(param_1,0);
  puVar2 = PTR_DAT_04caeeb0;
  puVar1 = PTR_DAT_04caeea8;
  if (lVar3 != 0) {
    System_Collections_Generic_List_GiftPackFeature_GoldenStage___GetEnumerator_3b3b948
              (&uStack_50,lVar3,*(undefined8 *)PTR_DAT_04caeec0);
    iVar5 = 0;
    while (uVar4 = System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___MoveNext_3610858
                             (&uStack_50,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      iVar5 = (int)uStack_38 + iVar5;
    }
    System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___Dispose_3610854
              (&uStack_50,*(undefined8 *)puVar1);
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

