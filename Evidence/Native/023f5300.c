/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$get_LightDir
UnityEngine_Vector3_o Dino_BusSand_App_UI_HomeToonRig__get_LightDir (Dino_BusSand_App_UI_HomeToonRig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$get_LightDir
   UnityEngine_Vector3_o Dino_BusSand_App_UI_HomeToonRig__get_LightDir
   (Dino_BusSand_App_UI_HomeToonRig_o* __this, const MethodInfo* method); */

float Dino_BusSand_App_UI_HomeToonRig__get_LightDir_22f5300
                (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c47b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb71b0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c47b = 1;
  }
  uVar3 = *(undefined8 *)(param_4 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
  puVar1 = PTR_DAT_04cb71b0;
  if ((uVar2 & 1) == 0) {
    lVar4 = *(long *)(param_4 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_04cb71b0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (lVar4 == 0) {
LAB_023f54f0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = UnityEngine_Material__HasProperty_437c01c
                      (lVar4,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x60),0);
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(param_4 + 0x30);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (lVar4 == 0) goto LAB_023f54f0;
      fVar5 = (float)UnityEngine_Material__GetVector_4383a74
                               (lVar4,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x60),0);
      fVar6 = param_3 * param_3 + fVar5 * fVar5 + param_2 * param_2;
      if (_UNK_00e20900 < fVar6) {
        if (cRam0000000004f9b65c == '\0') {
          FUN_02132f7c(PTR_DAT_04caa200);
          cRam0000000004f9b65c = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar6 = SQRT(fVar6);
        if (_UNK_00e20a08 < fVar6) {
          return fVar5 / fVar6;
        }
        if (cRam0000000004f9b65d == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65d = '\x01';
        }
        return **(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      }
    }
  }
  if (cRam0000000004f9bcf8 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9bcf8 = '\x01';
  }
  return *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
}

