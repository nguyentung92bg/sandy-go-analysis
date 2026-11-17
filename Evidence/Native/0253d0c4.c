/* IL2CPP: Dino.BusSand.Sdk.CrashlyticsSink$$Log
void Dino_BusSand_Sdk_CrashlyticsSink__Log (Dino_BusSand_Sdk_CrashlyticsSink_o* __this, System_String_o* line, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.CrashlyticsSink$$Log
   void Dino_BusSand_Sdk_CrashlyticsSink__Log (Dino_BusSand_Sdk_CrashlyticsSink_o* __this,
   System_String_o* line, const MethodInfo* method); */

void Dino_BusSand_Sdk_CrashlyticsSink__Log_243d0c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_04cc31e0;
  if ((bRam0000000004f9d453 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc31e0,0);
    bRam0000000004f9d453 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar2 = (long *)Firebase_Crashlytics_Crashlytics_PlatformAccessor__get_Impl_249e024();
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0259e0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x188))(plVar2,param_2,*(undefined8 *)(*plVar2 + 400));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

