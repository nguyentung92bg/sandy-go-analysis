/* IL2CPP: Dino.BusSand.App.GameApp$$get_ReviveAdsLeft
int32_t Dino_BusSand_App_GameApp__get_ReviveAdsLeft (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$get_ReviveAdsLeft
   int32_t Dino_BusSand_App_GameApp__get_ReviveAdsLeft (Dino_BusSand_App_GameApp_o* __this, const
   MethodInfo* method); */

uint Dino_BusSand_App_GameApp__get_ReviveAdsLeft_21645f4(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  puVar5 = PTR_DAT_04cac440;
  if ((bRam0000000004f9b84c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9b84c = 1;
  }
  puVar4 = PTR_DAT_04caa200;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar6 = Dino_BusSand_App_Meta_Economy__get_ReviveAds_22049f0(0);
  iVar2 = *(int *)(param_1 + 0x5c);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  uVar3 = iVar6 - iVar2;
  uVar1 = 0;
  if (uVar3 < 0x80000000) {
    uVar1 = uVar3;
  }
  return uVar1;
}

