/* IL2CPP: Dino.BusSand.Sdk.CrashlyticsSink$$NonFatal
void Dino_BusSand_Sdk_CrashlyticsSink__NonFatal (Dino_BusSand_Sdk_CrashlyticsSink_o* __this, System_String_o* message, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.CrashlyticsSink$$NonFatal
   void Dino_BusSand_Sdk_CrashlyticsSink__NonFatal (Dino_BusSand_Sdk_CrashlyticsSink_o* __this,
   System_String_o* message, const MethodInfo* method); */

void Dino_BusSand_Sdk_CrashlyticsSink__NonFatal_243d0d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_04ca9c80;
  if ((bRam0000000004f9cc7f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9c80);
    bRam0000000004f9cc7f = 1;
  }
  uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Exception___ctor_4864510(uVar2,param_2,0);
  puVar1 = PTR_DAT_04cc31e0;
  if ((bRam0000000004f9d455 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc31e0,0);
    bRam0000000004f9d455 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar3 = (long *)Firebase_Crashlytics_Crashlytics_PlatformAccessor__get_Impl_249e024();
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0259e1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x1a8))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x1b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

