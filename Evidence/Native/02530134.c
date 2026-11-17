/* IL2CPP: Dino.BusSand.Sdk.DatabucketsBoot$$set_Endpoint
void Dino_BusSand_Sdk_DatabucketsBoot__set_Endpoint (System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DatabucketsBoot$$set_Endpoint
   void Dino_BusSand_Sdk_DatabucketsBoot__set_Endpoint (System_String_o* value, const MethodInfo*
   method); */

void Dino_BusSand_Sdk_DatabucketsBoot__set_Endpoint_2430134(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR_DAT_04cbef68;
  if ((bRam0000000004f9cc0f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbef68);
    bRam0000000004f9cc0f = 1;
  }
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = param_1;
  uVar2 = *(ulong *)(*(long *)puVar1 + 0xb8);
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (uVar2 >> 0xc & 0x3f),(uVar2 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

