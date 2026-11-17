/* IL2CPP: Dino.BusSand.App.Meta.NoAdsFeature$$.ctor
void Dino_BusSand_App_Meta_NoAdsFeature___ctor (Dino_BusSand_App_Meta_NoAdsFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.NoAdsFeature$$.ctor
   void Dino_BusSand_App_Meta_NoAdsFeature___ctor (Dino_BusSand_App_Meta_NoAdsFeature_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_Meta_NoAdsFeature___ctor_22437a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar2 = PTR_DAT_04cb3910;
  puVar1 = PTR_DAT_04cb00a0;
  if ((bRam0000000004f9bf24 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3910);
    FUN_02132f7c(PTR_DAT_04cb00a0);
    bRam0000000004f9bf24 = 1;
  }
  Dino_BusSand_App_Meta_LiveFeature_object____ctor_2ae640c(param_1,*(undefined8 *)puVar2);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar4 = *(long *)(lVar3 + 0xb8);
  if (*(long *)(lVar4 + 8) != 0) {
    return;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
  }
  puVar5 = (undefined8 *)(lVar4 + 8);
  *puVar5 = param_1;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                 ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

