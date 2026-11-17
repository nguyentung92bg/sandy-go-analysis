/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$get_PlayerHeadId
int32_t Dino_BusSand_App_UI_YachtRacingUi__get_PlayerHeadId (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$get_PlayerHeadId
   int32_t Dino_BusSand_App_UI_YachtRacingUi__get_PlayerHeadId (const MethodInfo* method); */

int Dino_BusSand_App_UI_YachtRacingUi__get_PlayerHeadId_21f5f98(void)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_04cae570;
  if ((bRam0000000004f9bc45 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae570);
    bRam0000000004f9bc45 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cae570;
  if ((bRam0000000004f9c0bd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae570);
    bRam0000000004f9c0bd = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
  iVar3 = 0x30d41;
  if ((lVar2 != 0) && (iVar3 = *(int *)(lVar2 + 0x150), *(int *)(lVar2 + 0x150) < 1)) {
    iVar3 = 0x30d41;
  }
  return iVar3;
}

