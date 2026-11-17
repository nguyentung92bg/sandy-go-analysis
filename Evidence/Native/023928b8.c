/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_Enabled
bool Dino_BusSand_App_Meta_WinStreak__get_Enabled (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_Enabled
   bool Dino_BusSand_App_Meta_WinStreak__get_Enabled (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_WinStreak__get_Enabled_22928b8(void)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04cac458;
  if ((bRam0000000004f9c1e0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cb2838);
    FUN_02132f7c(PTR_DAT_04cb1ed8);
    bRam0000000004f9c1e0 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_Meta_FeatureGate__get_WinStreak_220b998(0);
  puVar1 = PTR_DAT_04cb2838;
  if ((uVar3 & 1) == 0) {
    bVar2 = false;
  }
  else {
    lVar4 = Dino_BusSand_App_Meta_WinStreak__Row_22927fc(*(undefined8 *)PTR_DAT_04cb2838);
    bVar2 = false;
    if (lVar4 != 0) {
      lVar4 = Dino_BusSand_App_Meta_WinStreak__Num_229286c
                        (*(undefined8 *)puVar1,*(undefined8 *)PTR_DAT_04cb1ed8,1);
      bVar2 = lVar4 != 0;
    }
  }
  return bVar2;
}

