/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider$$set_QaServer
void Dino_BusSand_Sdk_SandBusTrackingProvider__set_QaServer (bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider$$set_QaServer
   void Dino_BusSand_Sdk_SandBusTrackingProvider__set_QaServer (bool value, const MethodInfo*
   method); */

void Dino_BusSand_Sdk_SandBusTrackingProvider__set_QaServer_2439294(byte param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04cbf3d0;
  if ((bRam0000000004f9cc63 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf3d0);
    bRam0000000004f9cc63 = 1;
  }
  **(byte **)(*(long *)puVar1 + 0xb8) = param_1 & 1;
  return;
}

