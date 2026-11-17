/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$NeedShowGoldenCoinSettlement
bool Dino_BusSand_App_Meta_GiftPackFeature__NeedShowGoldenCoinSettlement (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t* packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$NeedShowGoldenCoinSettlement
   bool Dino_BusSand_App_Meta_GiftPackFeature__NeedShowGoldenCoinSettlement
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t* packId, const MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_GiftPackFeature__NeedShowGoldenCoinSettlement_223daa0
          (undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  *param_2 = 0;
  lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc();
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x28) != '\0') {
      lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__FindFirstConfig_2234c34(param_1,3);
      if (lVar3 == 0) {
        return 0;
      }
      iVar1 = *(int *)(lVar3 + 0x10);
      if (0 < iVar1) {
        lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(param_1,iVar1);
        if (lVar3 == 0) goto LAB_0233db3c;
        if (((*(char *)(lVar3 + 0x30) == '\0') ||
            (lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__RemainingSeconds_223a6bc(param_1,iVar1),
            lVar3 < 1)) &&
           (iVar2 = Dino_BusSand_App_Meta_GiftPackFeature__UnclaimedGoldenCoins_223d5dc
                              (param_1,iVar1), 0 < iVar2)) {
          *param_2 = iVar1;
          return 1;
        }
      }
    }
    return 0;
  }
LAB_0233db3c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

