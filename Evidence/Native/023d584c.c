/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$LineAt
float Dino_BusSand_App_UI_HomeAtelier__LineAt (Dino_BusSand_App_UI_HomeAtelier_o* __this, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$LineAt
   float Dino_BusSand_App_UI_HomeAtelier__LineAt (Dino_BusSand_App_UI_HomeAtelier_o* __this, float
   x, const MethodInfo* method); */

float Dino_BusSand_App_UI_HomeAtelier__LineAt_22d584c(float param_1,long param_2)

{
  if (*(long *)(param_2 + 0x38) != 0) {
    return *(float *)(param_2 + 0x60) +
           (1.0 - (param_1 / 720.0) * (param_1 / 720.0)) *
           (*(float *)(*(long *)(param_2 + 0x38) + 0xec) + 34.0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

