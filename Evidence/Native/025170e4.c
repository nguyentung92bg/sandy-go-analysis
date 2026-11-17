/* IL2CPP: Dino.BusSand.Core.SandRandom$$NextUInt
uint32_t Dino_BusSand_Core_SandRandom__NextUInt (Dino_BusSand_Core_SandRandom_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandRandom$$NextUInt
   uint32_t Dino_BusSand_Core_SandRandom__NextUInt (Dino_BusSand_Core_SandRandom_o __this, const
   MethodInfo* method); */

void Dino_BusSand_Core_SandRandom__NextUInt_24170e4(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  uVar1 = uVar1 ^ uVar1 << 0xd;
  uVar1 = uVar1 ^ uVar1 >> 0x11;
  *param_1 = uVar1 ^ uVar1 << 5;
  return;
}

