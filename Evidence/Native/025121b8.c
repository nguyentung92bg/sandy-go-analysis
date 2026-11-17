/* IL2CPP: Dino.BusSand.Core.Road$$get_IsFull
bool Dino_BusSand_Core_Road__get_IsFull (Dino_BusSand_Core_Road_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$get_IsFull
   bool Dino_BusSand_Core_Road__get_IsFull (Dino_BusSand_Core_Road_o* __this, const MethodInfo*
   method); */

bool Dino_BusSand_Core_Road__get_IsFull_24121b8(long param_1)

{
  int iVar1;
  
  iVar1 = Dino_BusSand_Core_Road__get_ActiveCount_2412078();
  return *(int *)(param_1 + 0x38) <= iVar1;
}

