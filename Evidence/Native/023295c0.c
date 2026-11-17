/* IL2CPP: Dino.BusSand.App.Meta.LiveClock$$get_UtcMs
int64_t Dino_BusSand_App_Meta_LiveClock__get_UtcMs (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveClock$$get_UtcMs
   int64_t Dino_BusSand_App_Meta_LiveClock__get_UtcMs (const MethodInfo* method); */

long Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_30 [16];
  
  puVar1 = PTR_DAT_04cacfd0;
  if ((bRam0000000004f9bef7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd0);
    FUN_02132f7c(PTR_DAT_04cb2e08);
    bRam0000000004f9bef7 = 1;
  }
  puVar2 = PTR_DAT_04cb2e08;
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auStack_30 = System_DateTimeOffset__get_UtcNow_48145cc(0);
  lVar3 = System_DateTimeOffset__ToUnixTimeMilliseconds_48161b4(auStack_30,0);
  return **(long **)(*(long *)puVar2 + 0xb8) + lVar3;
}

