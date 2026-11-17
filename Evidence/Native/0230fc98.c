/* IL2CPP: Dino.BusSand.App.Meta.Session$$OnResume
bool Dino_BusSand_App_Meta_Session__OnResume (int64_t pausedAt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Session$$OnResume
   bool Dino_BusSand_App_Meta_Session__OnResume (int64_t pausedAt, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_Session__OnResume_220fc98(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lStack_28;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd38 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04cacfd8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cacfe0);
    FUN_02132f7c(PTR_DAT_04cb2290);
    FUN_02132f7c(PTR_DAT_04cb2298);
    bRam0000000004f9bd38 = 1;
  }
  lStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  uVar5 = 0;
  if ((0 < param_1) && (*(long *)(*(long *)(lVar3 + 0xb8) + 0x10) != 0)) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
    if (lVar3 - param_1 < 0x708) {
      uVar5 = 0;
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_Profile__NewSession_2271ac0(0);
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      *(int *)(lVar3 + 0x138) = *(int *)(lVar3 + 0x138) + 1;
      Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
      if (*(int *)(*(long *)PTR_DAT_04cabaa8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Ads__OnColdStart_216a6d8(0);
      if (*(int *)(*(long *)PTR_DAT_04cacfe0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_Segments__Compute_220f784();
      Dino_BusSand_App_Meta_WelcomeBack__OnColdStart_220ea0c();
      puVar2 = PTR_DAT_04cacfd8;
      lVar3 = *(long *)PTR_DAT_04cacfd8;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x50);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      }
      puVar2 = PTR_DAT_04cb1d58;
      lVar3 = *(long *)PTR_DAT_04cb1d58;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x20);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lStack_28 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
      lStack_28 = lStack_28 - param_1;
      uVar4 = System_Int64__ToString_482e7e4(&lStack_28,0);
      uVar4 = System_String__Concat_46d2b84
                        (*(undefined8 *)PTR_DAT_04cb2298,uVar4,*(undefined8 *)PTR_DAT_04cb2290,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__Log_4360fc8(uVar4,0);
      uVar5 = 1;
    }
  }
  return uVar5;
}

