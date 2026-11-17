/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$get_GoldenPackId
int32_t Dino_BusSand_App_Meta_GiftPackFeature__get_GoldenPackId (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$get_GoldenPackId
   int32_t Dino_BusSand_App_Meta_GiftPackFeature__get_GoldenPackId
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_GiftPackFeature__get_GoldenPackId_223b618(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = Dino_BusSand_App_Meta_GiftPackFeature__FindFirstConfig_2234c34(param_1,3);
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 0x10);
  }
  return uVar1;
}

