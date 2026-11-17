/* IL2CPP: Dino.BusSand.App.CrashContext$$get_PreviousBootStopped
System_String_o* Dino_BusSand_App_CrashContext__get_PreviousBootStopped (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext$$get_PreviousBootStopped
   System_String_o* Dino_BusSand_App_CrashContext__get_PreviousBootStopped (const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_CrashContext__get_PreviousBootStopped_2172820(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cac450;
  if ((bRam0000000004f9b8ae & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac450);
    bRam0000000004f9b8ae = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x28);
}

