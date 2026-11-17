/* IL2CPP: Dino.Tracking.ServerTrackingCore$$WriteNumberPair
void Dino_Tracking_ServerTrackingCore__WriteNumberPair (System_Text_StringBuilder_o* sb, System_String_o* key, int64_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingCore$$WriteNumberPair
   void Dino_Tracking_ServerTrackingCore__WriteNumberPair (System_Text_StringBuilder_o* sb,
   System_String_o* key, int64_t value, const MethodInfo* method); */

void Dino_Tracking_ServerTrackingCore__WriteNumberPair_246162c
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uStack_28 = param_3;
  if ((bRam0000000004f9ce2b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa370);
    bRam0000000004f9ce2b = 1;
  }
  Dino_Tracking_ServerTrackingCore__WriteStringValue_2461b8c(param_1,param_2);
  puVar1 = PTR_DAT_04caa370;
  if (param_1 != 0) {
    System_Text_StringBuilder__Append_46dd710(param_1,0x3a,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
    uVar2 = System_Int64__ToString_482eba4(&uStack_28,uVar2,0);
    System_Text_StringBuilder__Append_46dcdf4(param_1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

