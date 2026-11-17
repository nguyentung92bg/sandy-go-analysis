/* IL2CPP: Dino.BusSand.Core.BusDef$$get_HasStation
bool Dino_BusSand_Core_BusDef__get_HasStation (Dino_BusSand_Core_BusDef_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.BusDef$$get_HasStation
   bool Dino_BusSand_Core_BusDef__get_HasStation (Dino_BusSand_Core_BusDef_o* __this, const
   MethodInfo* method); */

bool Dino_BusSand_Core_BusDef__get_HasStation_2410d40(long param_1)

{
  if ((0 < *(int *)(param_1 + 0x34)) && (*(long *)(param_1 + 0x58) != 0)) {
    return *(char *)(*(long *)(param_1 + 0x58) + 0x10) != '\0';
  }
  return false;
}

