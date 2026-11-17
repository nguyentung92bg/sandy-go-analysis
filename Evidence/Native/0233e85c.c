/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$PriceDiscount
int32_t Dino_BusSand_App_Meta_GiftPackTrack__PriceDiscount (int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$PriceDiscount
   int32_t Dino_BusSand_App_Meta_GiftPackTrack__PriceDiscount (int32_t storeItemId, const
   MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_GiftPackTrack__PriceDiscount_223e85c(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uStack_24;
  
  puVar2 = PTR_DAT_04caecb0;
  puVar1 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9beec & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caecb0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9beec = 1;
  }
  uStack_24 = 0;
  uVar3 = Dino_BusSand_App_Meta_GiftPackTrack__Row_223e618(param_1);
  uVar3 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar3,*(undefined8 *)puVar2,0);
  uVar3 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar3,*(undefined8 *)puVar1,0);
  System_Int32__TryParse_482de64(uVar3,&uStack_24,0);
  return uStack_24;
}

