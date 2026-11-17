/* IL2CPP: Dino.BusSand.View.StageLayout$$Depth
float Dino_BusSand_View_StageLayout__Depth (Dino_BusSand_View_StageLayout_o* __this, UnityEngine_Vector3_o p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.StageLayout$$Depth
   float Dino_BusSand_View_StageLayout__Depth (Dino_BusSand_View_StageLayout_o* __this,
   UnityEngine_Vector3_o p, const MethodInfo* method); */

float Dino_BusSand_View_StageLayout__Depth_23e6f00
                (float param_1,float param_2,float param_3,long param_4)

{
  return (param_3 - (float)((ulong)*(undefined8 *)(param_4 + 0x18) >> 0x20)) *
         (float)((ulong)*(undefined8 *)(param_4 + 0x38) >> 0x20) +
         (param_1 - *(float *)(param_4 + 0x14)) * *(float *)(param_4 + 0x34) +
         (param_2 - (float)*(undefined8 *)(param_4 + 0x18)) * (float)*(undefined8 *)(param_4 + 0x38)
  ;
}

