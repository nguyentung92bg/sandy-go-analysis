/* IL2CPP: Dino.BusSand.View.PackVehicle$$Lean
void Dino_BusSand_View_PackVehicle__Lean (Dino_BusSand_View_PackVehicle_o* __this, float pitch, float roll, UnityEngine_Vector3_o offset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PackVehicle$$Lean
   void Dino_BusSand_View_PackVehicle__Lean (Dino_BusSand_View_PackVehicle_o* __this, float pitch,
   float roll, UnityEngine_Vector3_o offset, const MethodInfo* method); */

void Dino_BusSand_View_PackVehicle__Lean_23d81cc
               (float param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
               ,long param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_2 = param_2 * _UNK_00e20a74;
  uVar2 = 0;
  uVar3 = param_4;
  uVar1 = UnityEngine_Quaternion__Internal_FromEulerRad_43af004(param_1 * _UNK_00e20a74,0);
  *(undefined4 *)(param_6 + 0x80) = uVar1;
  *(undefined4 *)(param_6 + 0x84) = uVar2;
  *(float *)(param_6 + 0x88) = param_2;
  *(undefined4 *)(param_6 + 0x8c) = uVar3;
  *(undefined4 *)(param_6 + 0x90) = param_3;
  *(undefined4 *)(param_6 + 0x94) = param_4;
  *(undefined4 *)(param_6 + 0x98) = param_5;
  return;
}

