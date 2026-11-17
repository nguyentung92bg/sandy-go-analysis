/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$OutSine
float Dino_BusSand_App_UI_CommerceUi__OutSine (float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$OutSine
   float Dino_BusSand_App_UI_CommerceUi__OutSine (float t, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommerceUi__OutSine_22ac64c(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0;
  if (param_1 <= 1.0) {
    fVar2 = param_1;
  }
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = fVar2 * _UNK_00e2082c * 0.5;
  }
  (*(code *)PTR_sinf_04d166d8)(fVar1);
  return;
}

