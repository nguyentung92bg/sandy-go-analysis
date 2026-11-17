/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$Wrap
float Dino_BusSand_App_UI_KitAdopt__Wrap (float deg, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$Wrap
   float Dino_BusSand_App_UI_KitAdopt__Wrap (float deg, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_KitAdopt__Wrap_227d254(undefined4 param_1)

{
  float extraout_s0;
  float fVar1;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined8 extraout_var_00;
  undefined8 uVar4;
  undefined1 auVar2 [16];
  
  fmodf(param_1,0x43b40000);
  if (extraout_s0 <= 180.0) {
    fVar1 = extraout_s0;
    uVar3 = extraout_var;
    uVar4 = extraout_var_00;
    if (-180.0 <= extraout_s0) goto LAB_0237d298;
    fVar1 = 360.0;
  }
  else {
    fVar1 = -360.0;
  }
  fVar1 = extraout_s0 + fVar1;
  uVar3 = 0;
  uVar4 = 0;
LAB_0237d298:
  auVar2._4_4_ = uVar3;
  auVar2._0_4_ = fVar1;
  auVar2._8_8_ = uVar4;
  return auVar2;
}

