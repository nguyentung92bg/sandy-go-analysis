/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Browse
void Dino_BusSand_App_UI_HomeAtelier__Browse (Dino_BusSand_App_UI_HomeAtelier_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Browse
   void Dino_BusSand_App_UI_HomeAtelier__Browse (Dino_BusSand_App_UI_HomeAtelier_o* __this, float
   dt, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier__Browse_22d7970(undefined4 param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_2 + 200) == '\0') {
    fVar1 = *(float *)(param_2 + 0xb0);
    if (*(char *)(param_2 + 0xc9) != '\0') {
      fVar1 = (float)UnityEngine_Mathf__SmoothDamp_43b0840
                               (*(float *)(param_2 + 0xb0),*(undefined4 *)(param_2 + 0xb8),
                                _UNK_00e20aec,0x7f800000,param_1,param_2 + 0xb4,0);
      fVar2 = *(float *)(param_2 + 0xb8);
      *(float *)(param_2 + 0xb0) = fVar1;
      if (ABS(fVar1 - fVar2) < _UNK_00e1fec8) {
        *(float *)(param_2 + 0xb0) = fVar2;
        *(undefined1 *)(param_2 + 0xc9) = 0;
        fVar1 = fVar2;
      }
    }
    if (((0.0 < fVar1) && (*(char *)(param_2 + 0xc9) == '\0')) &&
       (4.5 < *(float *)(param_2 + 0xec) - *(float *)(param_2 + 0xbc))) {
      *(undefined4 *)(param_2 + 0xb8) = 0;
      *(undefined1 *)(param_2 + 0xc9) = 1;
    }
  }
  else {
    fVar1 = *(float *)(param_2 + 0xb0);
  }
  *(float *)(param_2 + 0x5c) = (float)*(int *)(param_2 + 0x58) - fVar1;
  return;
}

