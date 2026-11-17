/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$get_I
Dino_BusSand_App_Meta_GiftPackFeature_o* Dino_BusSand_App_Meta_GiftPackFeature__get_I (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$get_I
   Dino_BusSand_App_Meta_GiftPackFeature_o* Dino_BusSand_App_Meta_GiftPackFeature__get_I (const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cac668;
  if ((bRam0000000004f9be98 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caf6f8);
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9be98 = 1;
  }
  puVar2 = PTR_DAT_04caf6f8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Meta_LiveOps__Get_object__27ef0a4(*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_04caec48;
  if (lVar3 == 0) {
    lVar3 = *(long *)PTR_DAT_04caec48;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x20);
  }
  return lVar3;
}

