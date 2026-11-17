/* IL2CPP: Dino.BusSand.Sdk.DatabucketsBoot$$set_Attempted
void Dino_BusSand_Sdk_DatabucketsBoot__set_Attempted (bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DatabucketsBoot$$set_Attempted
   void Dino_BusSand_Sdk_DatabucketsBoot__set_Attempted (bool value, const MethodInfo* method); */

void Dino_BusSand_Sdk_DatabucketsBoot__set_Attempted_24301d4(byte param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04cbef68;
  if ((bRam0000000004f9cc11 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbef68);
    bRam0000000004f9cc11 = 1;
  }
  *(byte *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = param_1 & 1;
  return;
}

