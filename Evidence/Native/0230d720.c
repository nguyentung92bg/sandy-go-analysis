/* IL2CPP: Dino.BusSand.App.Meta.WinChest$$get_On
bool Dino_BusSand_App_Meta_WinChest__get_On (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinChest$$get_On
   bool Dino_BusSand_App_Meta_WinChest__get_On (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_WinChest__get_On_220d720(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_04cac458;
  if ((bRam0000000004f9bd17 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    bRam0000000004f9bd17 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_Meta_FeatureGate__On_220b9e8(0,0);
  puVar1 = PTR_DAT_04cb1eb8;
  if ((uVar5 & 1) != 0) {
    if ((bRam0000000004f9c085 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cb1eb8);
      bRam0000000004f9c085 = 1;
    }
    puVar2 = PTR_DAT_04cb1d58;
    uVar7 = *(undefined8 *)puVar1;
    if ((bRam0000000004f9c061 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cb1d58);
      FUN_02132f7c(PTR_DAT_04cb1ed8);
      bRam0000000004f9c061 = 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar6 = Dino_BusSand_App_Meta_EconomySettings__Row_22054c8(uVar7,0);
    bVar3 = false;
    if (lVar6 != 0) {
      iVar4 = Dino_BusSand_App_Meta_Monetization__RowInt_2266340
                        (uVar7,*(undefined8 *)PTR_DAT_04cb1ed8,1);
      bVar3 = iVar4 != 0;
    }
    return bVar3;
  }
  return false;
}

