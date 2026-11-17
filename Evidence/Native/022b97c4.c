/* IL2CPP: Dino.BusSand.App.UI.GoldenView$$get_BuyItem
int32_t Dino_BusSand_App_UI_GoldenView__get_BuyItem (Dino_BusSand_App_UI_GoldenView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenView$$get_BuyItem
   int32_t Dino_BusSand_App_UI_GoldenView__get_BuyItem (Dino_BusSand_App_UI_GoldenView_o* __this,
   const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_GoldenView__get_BuyItem_21b97c4(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar2 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc(*(long *)(param_1 + 0x10),0)
     , lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x28) != '\0') {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != 0) {
      uVar1 = Dino_BusSand_App_Meta_GiftPackFeature__get_GoldenPackId_223b618(lVar2,0);
      lVar2 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(lVar2,uVar1,0);
      if (lVar2 == 0) {
        return 0;
      }
      lVar2 = *(long *)(param_1 + 0x10);
      if (lVar2 != 0) {
        uVar1 = Dino_BusSand_App_Meta_GiftPackFeature__get_GoldenPackId_223b618(lVar2,0);
        lVar2 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(lVar2,uVar1,0);
        if (lVar2 != 0) {
          return *(undefined4 *)(lVar2 + 0x18);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

