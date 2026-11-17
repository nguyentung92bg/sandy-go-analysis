/* IL2CPP: Dino.BusSand.App.Meta.FeatureGate$$get_WinStreak
bool Dino_BusSand_App_Meta_FeatureGate__get_WinStreak (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0230ba8c) */
/* WARNING: Removing unreachable block (ram,0x0230ba98) */
/* WARNING: Removing unreachable block (ram,0x0230baa0) */
/* IL2CPP: Dino.BusSand.App.Meta.FeatureGate$$get_WinStreak
   bool Dino_BusSand_App_Meta_FeatureGate__get_WinStreak (const MethodInfo* method); */

undefined1 Dino_BusSand_App_Meta_FeatureGate__get_WinStreak_220b998(void)

{
  undefined *puVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_04cac458;
  if ((bRam0000000004f9bcee & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    bRam0000000004f9bcee = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cac458;
  if ((bRam0000000004f9bcf3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cb2140);
    bRam0000000004f9bcf3 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 != 0) {
    uVar4 = System_Collections_Generic_HashSet_Int32Enum___Contains_37decd4
                      (lVar3,0xf,*(undefined8 *)PTR_DAT_04cb2140);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

