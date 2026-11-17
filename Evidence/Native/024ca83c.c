/* IL2CPP: Dino.BusSand.View.MechanicLayer$$KeyFacing
UnityEngine_Quaternion_o Dino_BusSand_View_MechanicLayer__KeyFacing (bool art, float swing, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$KeyFacing
   UnityEngine_Quaternion_o Dino_BusSand_View_MechanicLayer__KeyFacing (bool art, float swing, const
   MethodInfo* method); */

float Dino_BusSand_View_MechanicLayer__KeyFacing_23ca83c
                (float param_1,float param_2,float param_3,float param_4,ulong param_5)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar1 = PTR_DAT_04cbc250;
  if ((bRam0000000004f9c9e3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc250);
    bRam0000000004f9c9e3 = 1;
  }
  if ((param_5 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar4 = (float)Dino_BusSand_View_StageLayout__get_FacingRotation_23e8a38(0);
    param_1 = param_1 * _UNK_00e20a74;
    fVar10 = param_4;
    fVar5 = _UNK_00e2082c;
    fVar6 = (float)UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,_UNK_00e2082c,param_1,0);
    fVar4 = param_4 * fVar6 + fVar4 * fVar10;
    fVar10 = param_2 * param_1;
    fVar5 = param_3 * fVar5;
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar2 = (float)Dino_BusSand_View_StageLayout__get_FacingRotation_23e8a38(0);
    fVar8 = 0.0;
    fVar6 = param_4;
    fVar7 = _UNK_00e20418;
    fVar3 = (float)UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,_UNK_00e20418,0,0);
    fVar9 = (param_4 * fVar6 - fVar2 * fVar3) - param_2 * fVar7;
    fVar5 = 0.0;
    fVar11 = fVar9 - param_3 * fVar8;
    fVar10 = 0.0;
    fVar4 = (float)UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                             (param_1 * _UNK_00e20a74,0,0,fVar9,0);
    fVar4 = fVar4 * fVar11 +
            fVar9 * ((param_2 * fVar8 + param_4 * fVar3 + fVar2 * fVar6) - param_3 * fVar7);
    fVar10 = fVar10 * ((param_3 * fVar3 + param_4 * fVar7 + param_2 * fVar6) - fVar2 * fVar8);
    fVar5 = fVar5 * ((fVar2 * fVar7 + param_4 * fVar8 + param_3 * fVar6) - param_2 * fVar3);
  }
  return (fVar10 + fVar4) - fVar5;
}

