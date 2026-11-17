/* IL2CPP: Dino.Tracking.CustomParameterValue$$ValidateKey
bool Dino_Tracking_CustomParameterValue__ValidateKey (System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.CustomParameterValue$$ValidateKey
   bool Dino_Tracking_CustomParameterValue__ValidateKey (System_String_o* key, const MethodInfo*
   method); */

uint Dino_Tracking_CustomParameterValue__ValidateKey_2476d80(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  
  if ((bRam0000000004f9cece & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caaba0);
    FUN_02132f7c(PTR_DAT_04cc18b8);
    FUN_02132f7c(PTR_DAT_04cc0168);
    bRam0000000004f9cece = 1;
  }
  uVar3 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  puVar2 = PTR_DAT_04cc18b8;
  puVar1 = PTR_DAT_04cc0168;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04caaba0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_Debugger__LogWarning_2481e30(*(undefined8 *)puVar2,*(undefined8 *)puVar1,0);
  }
  return (uVar3 ^ 0xffffffff) & 1;
}

