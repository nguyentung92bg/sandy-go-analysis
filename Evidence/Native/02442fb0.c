/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$Reason
System_String_o* Dino_BusSand_Cheat_AutoQa__Reason (System_String_o* slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$Reason
   System_String_o* Dino_BusSand_Cheat_AutoQa__Reason (System_String_o* slot, const MethodInfo*
   method); */

undefined8 Dino_BusSand_Cheat_AutoQa__Reason_2342fb0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cabaa8;
  if ((bRam0000000004f9c6a5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    bRam0000000004f9c6a5 = 1;
  }
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Ads__CanShowInterstitial_21763a0(param_1,&uStack_28,0);
  return uStack_28;
}

