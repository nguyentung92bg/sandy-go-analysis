/* IL2CPP: Dino.BusSand.App.Meta.DailyGift$$get_On
bool Dino_BusSand_App_Meta_DailyGift__get_On (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyGift$$get_On
   bool Dino_BusSand_App_Meta_DailyGift__get_On (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_DailyGift__get_On_220dedc(void)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_04cac458;
  if ((bRam0000000004f9bd1f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    bRam0000000004f9bd1f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_App_Meta_FeatureGate__On_220b9e8(1,0);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = Dino_BusSand_App_Meta_Monetization__get_DailyGiftEnabled_2267ee8(0), (uVar4 & 1) == 0)
     ) {
    bVar2 = false;
  }
  else {
    iVar3 = Dino_BusSand_App_Meta_Monetization__get_DailyGiftDays_2267f84(0);
    bVar2 = 0 < iVar3;
  }
  return bVar2;
}

