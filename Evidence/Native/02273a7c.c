/* IL2CPP: Dino.BusSand.App.CrashContext$$Value
System_String_o* Dino_BusSand_App_CrashContext__Value (System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext$$Value
   System_String_o* Dino_BusSand_App_CrashContext__Value (System_String_o* key, const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_CrashContext__Value_2173a7c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cac450;
  if ((bRam0000000004f9b8bd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04cab608);
    bRam0000000004f9b8bd = 1;
  }
  lVar2 = *(long *)puVar1;
  uStack_28 = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 != 0) {
    uVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (lVar2,param_1,&uStack_28,*(undefined8 *)PTR_DAT_04cab608);
    if ((uVar3 & 1) == 0) {
      uStack_28 = 0;
    }
    return uStack_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

