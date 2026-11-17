/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$Day
System_String_o* Dino_BusSand_App_Meta_GameTracking__Day (int64_t unixSeconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$Day
   System_String_o* Dino_BusSand_App_Meta_GameTracking__Day (int64_t unixSeconds, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_GameTracking__Day_2219c04(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  
  puVar2 = PTR_DAT_04cacfd0;
  if ((bRam0000000004f9bd72 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd0);
    FUN_02132f7c(PTR_DAT_04caa468);
    FUN_02132f7c(PTR_DAT_04cb2748);
    bRam0000000004f9bd72 = 1;
  }
  puVar1 = PTR_DAT_04caa468;
  auStack_30._8_8_ = 0;
  uStack_38 = 0;
  auStack_30._0_8_ = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cb2748;
  auStack_30 = System_DateTimeOffset__FromUnixTimeSeconds_4815244(param_1,0);
  uStack_38 = System_DateTimeOffset__get_UtcDateTime_4814760(auStack_30,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  System_DateTime__ToString_4812530(&uStack_38,*(undefined8 *)puVar2,0);
  return;
}

