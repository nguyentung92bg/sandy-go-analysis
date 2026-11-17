/* IL2CPP: Dino.BusSand.App.Meta.NoAdsFeature$$get_I
Dino_BusSand_App_Meta_NoAdsFeature_o* Dino_BusSand_App_Meta_NoAdsFeature__get_I (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.NoAdsFeature$$get_I
   Dino_BusSand_App_Meta_NoAdsFeature_o* Dino_BusSand_App_Meta_NoAdsFeature__get_I (const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_NoAdsFeature__get_I_2243704(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cac668;
  if ((bRam0000000004f9bf23 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3908);
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04cb00a0);
    bRam0000000004f9bf23 = 1;
  }
  puVar2 = PTR_DAT_04cb3908;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Meta_LiveOps__Get_object__27ef0a4(*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_04cb00a0;
  if (lVar3 == 0) {
    lVar3 = *(long *)PTR_DAT_04cb00a0;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  }
  return lVar3;
}

