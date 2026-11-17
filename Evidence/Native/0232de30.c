/* IL2CPP: Dino.BusSand.App.Meta.Ev07Util.Rng$$NextU64
uint64_t Dino_BusSand_App_Meta_Ev07Util_Rng__NextU64 (Dino_BusSand_App_Meta_Ev07Util_Rng_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Ev07Util.Rng$$NextU64
   uint64_t Dino_BusSand_App_Meta_Ev07Util_Rng__NextU64 (Dino_BusSand_App_Meta_Ev07Util_Rng_o
   __this, const MethodInfo* method); */

ulong Dino_BusSand_App_Meta_Ev07Util_Rng__NextU64_222de30(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1 + 0x9e3779b97f4a7c15;
  *param_1 = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * -0x40a7b892e31b1a47;
  uVar1 = (uVar1 ^ uVar1 >> 0x1b) * -0x6b2fb644ecceee15;
  return uVar1 ^ uVar1 >> 0x1f;
}

