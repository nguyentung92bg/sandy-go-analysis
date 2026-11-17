/* IL2CPP: Dino.BusSand.Core.SimEvent$$.ctor
void Dino_BusSand_Core_SimEvent___ctor (Dino_BusSand_Core_SimEvent_o __this, int32_t type, int32_t a, int32_t b, Dino_BusSand_Core_GrainPoint_array* samples, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SimEvent$$.ctor
   void Dino_BusSand_Core_SimEvent___ctor (Dino_BusSand_Core_SimEvent_o __this, int32_t type,
   int32_t a, int32_t b, Dino_BusSand_Core_GrainPoint_array* samples, const MethodInfo* method); */

void Dino_BusSand_Core_SimEvent___ctor_241dc50
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  puVar1 = (undefined8 *)(param_1 + 4);
  *puVar1 = param_5;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

