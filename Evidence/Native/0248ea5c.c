/* IL2CPP: Dino.BusSand.View.PackPalette$$Lab
UnityEngine_Vector3_o Dino_BusSand_View_PackPalette__Lab (UnityEngine_Color_o c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PackPalette$$Lab
   UnityEngine_Vector3_o Dino_BusSand_View_PackPalette__Lab (UnityEngine_Color_o c, const
   MethodInfo* method); */

float Dino_BusSand_View_PackPalette__Lab_238ea5c(float param_1,float param_2,float param_3)

{
  float fVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  puVar2 = PTR_DAT_04cb70d8;
  if ((bRam0000000004f9c8c0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb70d8);
    bRam0000000004f9c8c0 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar1 = _UNK_00e206c0;
  if (param_1 <= _UNK_00e206c0) {
    param_1 = param_1 / _UNK_00e20894;
  }
  else {
    param_1 = (float)func_0x049b5300((param_1 + _UNK_00e204a8) / _UNK_00e207b0,_UNK_00e1feac);
  }
  if (param_2 <= fVar1) {
    param_2 = param_2 / _UNK_00e20894;
  }
  else {
    param_2 = (float)func_0x049b5300((param_2 + _UNK_00e204a8) / _UNK_00e207b0,_UNK_00e1feac);
  }
  if (param_3 <= fVar1) {
    param_3 = param_3 / _UNK_00e20894;
  }
  else {
    param_3 = (float)func_0x049b5300((param_3 + _UNK_00e204a8) / _UNK_00e207b0,_UNK_00e1feac);
  }
  fVar1 = _UNK_00e2092c;
  fVar5 = (param_1 * _UNK_00e1ff98 + param_2 * _UNK_00e20898 + param_3 * _UNK_00e1ff40) /
          _UNK_00e1ff9c;
  fVar4 = param_1 * _UNK_00e1ff44 + param_2 * _UNK_00e1fe84 + param_3 * _UNK_00e2089c;
  param_1 = param_1 * _UNK_00e1ffa0;
  param_2 = param_2 * _UNK_00e2050c;
  param_3 = param_3 * _UNK_00e1ff48;
  if (fVar4 <= _UNK_00e2092c) {
    fVar3 = fVar4 * _UNK_00e2000c + _UNK_00e2036c;
  }
  else {
    fVar3 = (float)func_0x049b5300(fVar4,_UNK_00e200b0);
  }
  fVar6 = _UNK_00e201b4;
  if (fVar1 < fVar5) {
    func_0x049b5300(fVar5,_UNK_00e200b0);
  }
  fVar6 = (param_1 + param_2 + param_3) / fVar6;
  if (fVar1 < fVar4) {
    func_0x049b5300(fVar4,_UNK_00e200b0);
  }
  if (fVar1 < fVar6) {
    func_0x049b5300(fVar6,_UNK_00e200b0);
  }
  return fVar3 * 116.0 + -16.0;
}

