/* IL2CPP: Dino.BusSand.Core.BusFootprint$$LengthGrains
int32_t Dino_BusSand_Core_BusFootprint__LengthGrains (int32_t k, int32_t grainsPerCell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.BusFootprint$$LengthGrains
   int32_t Dino_BusSand_Core_BusFootprint__LengthGrains (int32_t k, int32_t grainsPerCell, const
   MethodInfo* method); */

int Dino_BusSand_Core_BusFootprint__LengthGrains_2411548(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  
  iVar1 = 0xc3dc;
  if (param_1 != 1) {
    iVar1 = 0xf8c7;
  }
  iVar2 = 0x999c;
  if (param_1 != 0) {
    iVar2 = iVar1;
  }
  auVar3 = SEXT816((long)iVar2 * (long)param_2 * 2 + 0x3a92) * SEXT816(0x45eedbb3a5b7215d);
  return (int)(auVar3._8_8_ >> 0xd) - (auVar3._12_4_ >> 0x1f);
}

