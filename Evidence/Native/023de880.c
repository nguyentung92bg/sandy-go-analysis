/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$Box
float Dino_BusSand_App_UI_AtelierArt__Box (UnityEngine_Vector2_o p, UnityEngine_Vector2_o half, float r, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$Box
   float Dino_BusSand_App_UI_AtelierArt__Box (UnityEngine_Vector2_o p, UnityEngine_Vector2_o half,
   float r, const MethodInfo* method); */

float Dino_BusSand_App_UI_AtelierArt__Box_22de880
                (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (cRam0000000004f9b9de == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b9de = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar1 = (ABS(param_2) - param_4) + param_5;
  fVar3 = (ABS(param_1) - param_3) + param_5;
  fVar2 = fVar1;
  if (fVar1 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar4 = fVar3;
  if (fVar3 <= 0.0) {
    fVar4 = 0.0;
  }
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  fVar3 = (float)NEON_fminnm(fVar3,0);
  fVar2 = (param_5 - (fVar3 + SQRT(fVar4 * fVar4 + fVar2 * fVar2))) + 0.5;
  fVar3 = 1.0;
  if (fVar2 <= 1.0) {
    fVar3 = fVar2;
  }
  fVar1 = 0.0;
  if (0.0 <= fVar2) {
    fVar1 = fVar3;
  }
  return fVar1;
}

