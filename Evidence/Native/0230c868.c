/* IL2CPP: Dino.BusSand.App.Meta.StarterOffer$$get_On
bool Dino_BusSand_App_Meta_StarterOffer__get_On (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StarterOffer$$get_On
   bool Dino_BusSand_App_Meta_StarterOffer__get_On (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_StarterOffer__get_On_220c868(void)

{
  undefined *puVar1;
  bool bVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04cac458;
  if ((bRam0000000004f9bd09 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cad200);
    bRam0000000004f9bd09 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_App_Meta_FeatureGate__On_220b9e8(4,0);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = Dino_BusSand_App_Meta_Monetization__get_StarterEnabled_22678d8(0), (uVar4 & 1) == 0))
  {
    bVar2 = false;
  }
  else {
    uVar3 = Dino_BusSand_App_Meta_Monetization__get_StarterStoreItem_2267990(0);
    if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac018);
    }
    lVar5 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)PTR_DAT_04cad200,uVar3,0);
    bVar2 = lVar5 != 0;
  }
  return bVar2;
}

