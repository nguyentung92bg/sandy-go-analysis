/* IL2CPP: Dino.BusSand.App.Ads$$get_LastRewardedStatus
System_String_o* Dino_BusSand_App_Ads__get_LastRewardedStatus (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads$$get_LastRewardedStatus
   System_String_o* Dino_BusSand_App_Ads__get_LastRewardedStatus (const MethodInfo* method); */

undefined8 Dino_BusSand_App_Ads__get_LastRewardedStatus_2176bc8(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cabaa8;
  if ((bRam0000000004f9b8e3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    bRam0000000004f9b8e3 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x28);
}

