/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_StuckHelpEnabled
bool Dino_BusSand_App_Meta_Monetization__get_StuckHelpEnabled (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_StuckHelpEnabled
   bool Dino_BusSand_App_Meta_Monetization__get_StuckHelpEnabled (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_Monetization__get_StuckHelpEnabled_226869c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_04cb1e60;
  if ((bRam0000000004f9c095 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1e60);
    bRam0000000004f9c095 = 1;
  }
  puVar1 = PTR_DAT_04cb1d58;
  uVar6 = *(undefined8 *)puVar2;
  if ((bRam0000000004f9c061 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04cb1ed8);
    bRam0000000004f9c061 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = Dino_BusSand_App_Meta_EconomySettings__Row_22054c8(uVar6,0);
  bVar3 = false;
  if (lVar5 != 0) {
    iVar4 = Dino_BusSand_App_Meta_Monetization__RowInt_2266340
                      (uVar6,*(undefined8 *)PTR_DAT_04cb1ed8,1);
    bVar3 = iVar4 != 0;
  }
  return bVar3;
}

