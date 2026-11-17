/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeFeature$$get_Unlocked
bool Dino_BusSand_App_Meta_DailyChallengeFeature__get_Unlocked (Dino_BusSand_App_Meta_DailyChallengeFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeFeature$$get_Unlocked
   bool Dino_BusSand_App_Meta_DailyChallengeFeature__get_Unlocked
   (Dino_BusSand_App_Meta_DailyChallengeFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_DailyChallengeFeature__get_Unlocked_222f980(void)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9be63 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf808);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9be63 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_04caf808;
  if (*(long *)(*(long *)(lVar4 + 0xb8) + 0x10) == 0) {
    bVar2 = false;
  }
  else {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar3 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    bVar2 = 0x1c < iVar3 + -1;
  }
  return bVar2;
}

