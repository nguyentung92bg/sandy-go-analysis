/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$get_UiOn
bool Dino_BusSand_App_Meta_JourneyTracking__get_UiOn (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$get_UiOn
   bool Dino_BusSand_App_Meta_JourneyTracking__get_UiOn (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_JourneyTracking__get_UiOn_221d814(void)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04cacfd8;
  if ((bRam0000000004f9bda5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bda5 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_Meta_MonetizationSettings__get_UiJourneyOn_2269240(0);
  puVar1 = PTR_DAT_04cabaf8;
  if ((uVar3 & 1) == 0) {
    bVar2 = false;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
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
    bVar2 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10) != 0;
  }
  return bVar2;
}

