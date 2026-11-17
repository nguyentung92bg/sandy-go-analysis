/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$NumberShows
float Dino_BusSand_App_UI_HomeAtelier__NumberShows (Dino_BusSand_App_UI_HomeAtelier_o* __this, Dino_BusSand_App_UI_HomeAtelier_Sheet_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$NumberShows
   float Dino_BusSand_App_UI_HomeAtelier__NumberShows (Dino_BusSand_App_UI_HomeAtelier_o* __this,
   Dino_BusSand_App_UI_HomeAtelier_Sheet_o* s, const MethodInfo* method); */

float Dino_BusSand_App_UI_HomeAtelier__NumberShows_22d74f8(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((param_2 != 0) && (*(long *)(param_2 + 0x18) != 0)) {
    fVar1 = (float)UnityEngine_RectTransform__get_anchoredPosition_43cf828
                             (*(long *)(param_2 + 0x18),0);
    if (*(long *)(param_1 + 0x20) != 0) {
      fVar2 = -70.0;
      fVar3 = fVar1 + *(float *)(param_1 + 100) * _UNK_00e20960 + -70.0 + 70.0;
      fVar1 = *(float *)(param_2 + 0x98);
      UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_1 + 0x20),0);
      fVar1 = -(fVar3 - fVar1);
      if (fVar1 <= fVar3) {
        fVar1 = fVar3;
      }
      fVar2 = ((fVar2 * 0.5 - fVar1) + -8.0) / 40.0;
      fVar1 = 1.0;
      if (fVar2 <= 1.0) {
        fVar1 = fVar2;
      }
      fVar3 = 0.0;
      if (0.0 <= fVar2) {
        fVar3 = fVar1;
      }
      return fVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

