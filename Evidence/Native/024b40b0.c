/* IL2CPP: Dino.BusSand.View.GasHose$$Bezier
UnityEngine_Vector3_o Dino_BusSand_View_GasHose__Bezier (UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, UnityEngine_Vector3_o c, UnityEngine_Vector3_o d, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GasHose$$Bezier
   UnityEngine_Vector3_o Dino_BusSand_View_GasHose__Bezier (UnityEngine_Vector3_o a,
   UnityEngine_Vector3_o b, UnityEngine_Vector3_o c, UnityEngine_Vector3_o d, float t, const
   MethodInfo* method); */

float Dino_BusSand_View_GasHose__Bezier_23b40b0
                (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  float fVar1;
  float in_stack_00000000;
  float in_stack_00000010;
  float in_stack_00000020;
  
  fVar1 = 1.0 - in_stack_00000020;
  return in_stack_00000010 * in_stack_00000020 * in_stack_00000020 * in_stack_00000020 +
         in_stack_00000000 * fVar1 * 3.0 * in_stack_00000020 * in_stack_00000020 +
         param_1 * fVar1 * fVar1 * fVar1 + param_4 * fVar1 * fVar1 * 3.0 * in_stack_00000020;
}

