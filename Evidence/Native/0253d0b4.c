/* IL2CPP: Dino.BusSand.Sdk.CrashlyticsSink$$Key
void Dino_BusSand_Sdk_CrashlyticsSink__Key (Dino_BusSand_Sdk_CrashlyticsSink_o* __this, System_String_o* key, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.CrashlyticsSink$$Key
   void Dino_BusSand_Sdk_CrashlyticsSink__Key (Dino_BusSand_Sdk_CrashlyticsSink_o* __this,
   System_String_o* key, System_String_o* value, const MethodInfo* method); */

void Dino_BusSand_Sdk_CrashlyticsSink__Key_243d0b4
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_04cc31e0;
  if ((bRam0000000004f9d454 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc31e0,param_3,0);
    bRam0000000004f9d454 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar2 = (long *)Firebase_Crashlytics_Crashlytics_PlatformAccessor__get_Impl_249e024();
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0259e154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x198))(plVar2,param_2,param_3,*(undefined8 *)(*plVar2 + 0x1a0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

