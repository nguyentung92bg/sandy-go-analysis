/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$Drop
float Dino_BusSand_App_UI_HomeToonRig__Drop (float close, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$Drop
   float Dino_BusSand_App_UI_HomeToonRig__Drop (float close, const MethodInfo* method); */

float Dino_BusSand_App_UI_HomeToonRig__Drop_22f59d4(float param_1)

{
  float fVar1;
  
  if (0.0 <= param_1) {
    param_1 = (float)NEON_fminnm(param_1,0x3f800000);
    fVar1 = _UNK_00e1ff28;
  }
  else {
    fVar1 = _UNK_00e207cc;
    if (param_1 <= _UNK_00e20864) {
      param_1 = _UNK_00e20864;
    }
  }
  return param_1 * fVar1;
}

