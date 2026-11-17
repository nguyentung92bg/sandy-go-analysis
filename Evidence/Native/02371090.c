/* IL2CPP: Dino.BusSand.App.Meta.Profile$$Now
int64_t Dino_BusSand_App_Meta_Profile__Now (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$Now
   int64_t Dino_BusSand_App_Meta_Profile__Now (const MethodInfo* method); */

void Dino_BusSand_App_Meta_Profile__Now_2271090(void)

{
  undefined *puVar1;
  undefined1 auStack_30 [16];
  
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
  System_DateTimeOffset__ToUnixTimeSeconds_48160f8(auStack_30,0);
  return;
}

