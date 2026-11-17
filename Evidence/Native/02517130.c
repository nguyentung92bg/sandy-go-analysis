/* IL2CPP: Dino.BusSand.Core.SandRandom$$NextFloat
float Dino_BusSand_Core_SandRandom__NextFloat (Dino_BusSand_Core_SandRandom_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandRandom$$NextFloat
   float Dino_BusSand_Core_SandRandom__NextFloat (Dino_BusSand_Core_SandRandom_o __this, const
   MethodInfo* method); */

float Dino_BusSand_Core_SandRandom__NextFloat_2417130(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  uVar1 = uVar1 ^ uVar1 << 0xd;
  uVar1 = uVar1 ^ uVar1 >> 0x11;
  uVar1 = uVar1 ^ uVar1 << 5;
  *param_1 = uVar1;
  return (float)(uVar1 >> 8) / 16777216.0;
}

