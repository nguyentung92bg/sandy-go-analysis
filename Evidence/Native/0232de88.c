/* IL2CPP: Dino.BusSand.App.Meta.Ev07Util.Rng$$Range
int32_t Dino_BusSand_App_Meta_Ev07Util_Rng__Range (Dino_BusSand_App_Meta_Ev07Util_Rng_o __this, int32_t minIncl, int32_t maxIncl, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Ev07Util.Rng$$Range
   int32_t Dino_BusSand_App_Meta_Ev07Util_Rng__Range (Dino_BusSand_App_Meta_Ev07Util_Rng_o __this,
   int32_t minIncl, int32_t maxIncl, const MethodInfo* method); */

int Dino_BusSand_App_Meta_Ev07Util_Rng__Range_222de88(ulong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  if (param_3 - param_2 != 0 && param_2 <= param_3) {
    iVar1 = (param_3 - param_2) + 1;
    uVar3 = *param_1 + 0x9e3779b97f4a7c15;
    *param_1 = uVar3;
    uVar3 = (uVar3 ^ uVar3 >> 0x1e) * -0x40a7b892e31b1a47;
    uVar3 = (uVar3 ^ uVar3 >> 0x1b) * -0x6b2fb644ecceee15;
    uVar3 = uVar3 ^ uVar3 >> 0x1f;
    iVar2 = 0;
    if ((long)iVar1 != 0) {
      iVar2 = (int)(uVar3 / (ulong)(long)iVar1);
    }
    param_2 = ((int)uVar3 - iVar2 * iVar1) + param_2;
  }
  return param_2;
}

