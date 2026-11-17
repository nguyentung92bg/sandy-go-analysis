/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$UnclaimedGoldenCoins
int32_t Dino_BusSand_App_Meta_GiftPackFeature__UnclaimedGoldenCoins (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$UnclaimedGoldenCoins
   int32_t Dino_BusSand_App_Meta_GiftPackFeature__UnclaimedGoldenCoins
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method); */

int Dino_BusSand_App_Meta_GiftPackFeature__UnclaimedGoldenCoins_223d5dc
              (undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9bedc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caeea8);
    FUN_02132f7c(PTR_DAT_04caeeb0);
    FUN_02132f7c(PTR_DAT_04caeeb8);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04caeec0);
    bRam0000000004f9bedc = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lVar6 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc(param_1);
  if (lVar6 != 0) {
    if (*(char *)(lVar6 + 0x28) == '\0') {
      iVar9 = 0;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar7 = Dino_BusSand_App_Meta_GiftPackFeature__GoldenStages_223b83c(param_2);
      puVar4 = PTR_DAT_04caeeb0;
      puVar3 = PTR_DAT_04caeea8;
      puVar2 = PTR_DAT_04cad860;
      if (lVar7 == 0) goto LAB_0233d748;
      System_Collections_Generic_List_GiftPackFeature_GoldenStage___GetEnumerator_3b3b948
                (&uStack_60,lVar7,*(undefined8 *)PTR_DAT_04caeec0);
      iVar9 = 0;
      while (uVar8 = System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___MoveNext_3610858
                               (&uStack_60,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
        if ((int)((ulong)uStack_50 >> 0x20) <= *(int *)(lVar6 + 0x10)) {
          if (*(long *)(lVar6 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          iVar5 = (int)uStack_48;
          uVar8 = System_Collections_Generic_List_int___Contains_3a2c3ec
                            (*(long *)(lVar6 + 0x30),uStack_50,*(undefined8 *)puVar2);
          iVar1 = 0;
          if ((uVar8 & 1) == 0) {
            iVar1 = iVar5;
          }
          iVar9 = iVar1 + iVar9;
        }
      }
      System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___Dispose_3610854
                (&uStack_60,*(undefined8 *)puVar3);
    }
    return iVar9;
  }
LAB_0233d748:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

