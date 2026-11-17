/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$AtStake
bool Dino_BusSand_App_Meta_PassportFeature__AtStake (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$AtStake
   bool Dino_BusSand_App_Meta_PassportFeature__AtStake (Dino_BusSand_App_Meta_PassportFeature_o*
   __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_PassportFeature__AtStake_2246768(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam0000000004f9bf60 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    bRam0000000004f9bf60 = 1;
  }
  uVar3 = Dino_BusSand_App_Meta_PassportFeature__NeedShowPassportContinue_22466cc(param_1);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar4 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
    bVar1 = false;
    if (lVar4 != 0) {
      iVar2 = Dino_BusSand_App_Meta_GiftPackFeature__RecommendedGoldenPackId_223be20(lVar4,0);
      bVar1 = 0 < iVar2;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

