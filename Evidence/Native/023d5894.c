/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$SlopeAt
float Dino_BusSand_App_UI_HomeAtelier__SlopeAt (Dino_BusSand_App_UI_HomeAtelier_o* __this, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$SlopeAt
   float Dino_BusSand_App_UI_HomeAtelier__SlopeAt (Dino_BusSand_App_UI_HomeAtelier_o* __this, float
   x, const MethodInfo* method); */

float Dino_BusSand_App_UI_HomeAtelier__SlopeAt_22d5894(float param_1,long param_2)

{
  float fVar1;
  
  if (*(long *)(param_2 + 0x38) != 0) {
    fVar1 = *(float *)(*(long *)(param_2 + 0x38) + 0xec) + 34.0;
    fVar1 = (float)atanf(((fVar1 + fVar1) * param_1) / _UNK_00e1ff7c);
    return fVar1 * _UNK_00e20410;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

