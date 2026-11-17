/* IL2CPP: Dino.BusSand.View.PropKit.MeshBuilder$$<Box>g__P|7_0
UnityEngine_Vector3_o Dino_BusSand_View_PropKit_MeshBuilder___Box_g__P_7_0 (float x, float y, float z, Dino_BusSand_View_PropKit_MeshBuilder___c__DisplayClass7_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PropKit.MeshBuilder$$<Box>g__P|7_0
   UnityEngine_Vector3_o Dino_BusSand_View_PropKit_MeshBuilder___Box_g__P_7_0 (float x, float y,
   float z, Dino_BusSand_View_PropKit_MeshBuilder___c__DisplayClass7_0_o* , const MethodInfo*
   method); */

float Dino_BusSand_View_PropKit_MeshBuilder___Box_g__P_7_0_23df918
                (float param_1,float param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *param_4;
  fVar1 = (float)UnityEngine_Quaternion__op_Multiply_43af48c
                           (param_4[3],param_4[4],param_4[5],param_4[6],param_4[7] * param_1,
                            param_4[8] * param_2,param_4[9] * param_3,0);
  return fVar2 + fVar1;
}

