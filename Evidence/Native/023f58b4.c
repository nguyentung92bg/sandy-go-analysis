/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$Lean
void Dino_BusSand_App_UI_HomeToonRig__Lean (Dino_BusSand_App_UI_HomeToonRig_o* __this, float pitch, float roll, UnityEngine_Vector3_o offset, float stretch, float breath, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$Lean
   void Dino_BusSand_App_UI_HomeToonRig__Lean (Dino_BusSand_App_UI_HomeToonRig_o* __this, float
   pitch, float roll, UnityEngine_Vector3_o offset, float stretch, float breath, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_HomeToonRig__Lean_22f58b4
               (float param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
               ,undefined4 param_6,undefined4 param_7,long param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_2 = param_2 * _UNK_00e20a74;
  uVar2 = 0;
  uVar3 = param_4;
  uVar1 = UnityEngine_Quaternion__Internal_FromEulerRad_43af004(param_1 * _UNK_00e20a74,0);
  *(undefined4 *)(param_8 + 0xec) = uVar1;
  *(undefined4 *)(param_8 + 0xf0) = uVar2;
  *(float *)(param_8 + 0xf4) = param_2;
  *(undefined4 *)(param_8 + 0xf8) = uVar3;
  *(undefined4 *)(param_8 + 0xfc) = param_3;
  *(undefined4 *)(param_8 + 0x100) = param_4;
  *(undefined4 *)(param_8 + 0x104) = param_5;
  *(undefined4 *)(param_8 + 0x10c) = param_6;
  *(undefined4 *)(param_8 + 0x108) = param_7;
  return;
}

