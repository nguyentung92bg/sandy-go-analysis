/* IL2CPP: Dino.BusSand.App.Meta.Economy$$ItemPrice
int32_t Dino_BusSand_App_Meta_Economy__ItemPrice (int32_t item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Economy$$ItemPrice
   int32_t Dino_BusSand_App_Meta_Economy__ItemPrice (int32_t item, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Economy__ItemPrice_2203f6c(undefined4 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04cac440;
  if ((bRam0000000004f9bcbe & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac440);
    bRam0000000004f9bcbe = 1;
  }
  uStack_24 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = Dino_BusSand_App_Meta_Economy__ShopId_2203ca8(param_1);
  Dino_BusSand_App_Meta_Economy__ShopPrice_2203d48(uVar2,&uStack_24);
  return;
}

