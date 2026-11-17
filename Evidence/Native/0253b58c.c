/* IL2CPP: Dino.BusSand.Sdk.SdkBootstrap$$set_Installed
void Dino_BusSand_Sdk_SdkBootstrap__set_Installed (bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SdkBootstrap$$set_Installed
   void Dino_BusSand_Sdk_SdkBootstrap__set_Installed (bool value, const MethodInfo* method); */

void Dino_BusSand_Sdk_SdkBootstrap__set_Installed_243b58c(byte param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04cbf490;
  if ((bRam0000000004f9cc74 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf490);
    bRam0000000004f9cc74 = 1;
  }
  **(byte **)(*(long *)puVar1 + 0xb8) = param_1 & 1;
  return;
}

