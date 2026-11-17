/* IL2CPP: Dino.BusSand.Core.SandRandom$$NextBool
bool Dino_BusSand_Core_SandRandom__NextBool (Dino_BusSand_Core_SandRandom_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandRandom$$NextBool
   bool Dino_BusSand_Core_SandRandom__NextBool (Dino_BusSand_Core_SandRandom_o __this, const
   MethodInfo* method); */

uint Dino_BusSand_Core_SandRandom__NextBool_2417108(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  uVar1 = uVar1 ^ uVar1 << 0xd;
  uVar1 = uVar1 ^ uVar1 >> 0x11;
  *param_1 = uVar1 ^ uVar1 << 5;
  return uVar1 & 1;
}

