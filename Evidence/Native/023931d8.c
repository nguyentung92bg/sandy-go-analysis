/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_Now
int64_t Dino_BusSand_App_Meta_WinStreak__get_Now (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_Now
   int64_t Dino_BusSand_App_Meta_WinStreak__get_Now (const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_WinStreak__get_Now_22931d8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [16];
  
  puVar1 = PTR_DAT_04cb5400;
  if ((bRam0000000004f9c1e7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5460);
    FUN_02132f7c(PTR_DAT_04cb24d0);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb5400);
    bRam0000000004f9c1e7 = 1;
  }
  if (*(char *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) != '\0') {
    return *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  }
  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cacfd0;
  if ((bRam0000000004f9c0f0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd0);
    bRam0000000004f9c0f0 = 1;
  }
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auStack_30 = System_DateTimeOffset__get_UtcNow_48145cc(0);
  uVar2 = System_DateTimeOffset__ToUnixTimeSeconds_48160f8(auStack_30,0);
  return uVar2;
}

