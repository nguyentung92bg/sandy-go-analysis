/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi.<>c$$<Install>b__3_0
bool Dino_BusSand_App_UI_GiftPackUi___c___Install_b__3_0 (Dino_BusSand_App_UI_GiftPackUi___c_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi.<>c$$<Install>b__3_0
   bool Dino_BusSand_App_UI_GiftPackUi___c___Install_b__3_0 (Dino_BusSand_App_UI_GiftPackUi___c_o*
   __this, int32_t id, const MethodInfo* method); */

bool Dino_BusSand_App_UI_GiftPackUi___c___Install_b__3_0_21adee8
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04caec48;
  if ((bRam0000000004f9ba76 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    bRam0000000004f9ba76 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
  bVar2 = false;
  if (lVar4 != 0) {
    iVar3 = Dino_BusSand_App_Meta_GiftPackFeature__PackIdByShopItem_2234d90(lVar4,param_2,0);
    if (iVar3 < 1) {
      bVar2 = false;
    }
    else {
      iVar3 = Dino_BusSand_App_Meta_GiftPackFeature__RecommendedGoldenPackId_223be20(lVar4,0);
      bVar2 = 0 < iVar3;
    }
  }
  return bVar2;
}

