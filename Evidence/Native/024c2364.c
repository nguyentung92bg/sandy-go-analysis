/* IL2CPP: Dino.BusSand.View.MechanicLayer$$W
UnityEngine_Vector3_o Dino_BusSand_View_MechanicLayer__W (Dino_BusSand_View_MechanicLayer_o* __this, double x, double z, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer$$W
   UnityEngine_Vector3_o Dino_BusSand_View_MechanicLayer__W (Dino_BusSand_View_MechanicLayer_o*
   __this, double x, double z, const MethodInfo* method); */

float Dino_BusSand_View_MechanicLayer__W_23c2364(double param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x28);
  if (lVar1 != 0) {
    return *(float *)(lVar1 + 0x108) +
           *(float *)(lVar1 + 0xfc) * (float)(param_1 - (double)*(int *)(lVar1 + 0x118) / 2.0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

