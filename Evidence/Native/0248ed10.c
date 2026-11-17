/* IL2CPP: Dino.BusSand.View.PackPalette$$Distance
double Dino_BusSand_View_PackPalette__Distance (UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PackPalette$$Distance
   double Dino_BusSand_View_PackPalette__Distance (UnityEngine_Vector3_o a, UnityEngine_Vector3_o b,
   const MethodInfo* method); */

undefined1  [16]
Dino_BusSand_View_PackPalette__Distance_238ed10
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  undefined1 auVar1 [16];
  
  if (cRam0000000004f9c959 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9c959 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auVar1._0_8_ = (double)SQRT((param_3 - param_6) * (param_3 - param_6) +
                              (param_1 - param_4) * (param_1 - param_4) +
                              (param_2 - param_5) * (param_2 - param_5));
  auVar1._8_8_ = 0;
  return auVar1;
}

