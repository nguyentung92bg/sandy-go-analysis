/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$get_LightDir
UnityEngine_Vector3_o Dino_BusSand_App_UI_HomeBus__get_LightDir (Dino_BusSand_App_UI_HomeBus_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$get_LightDir
   UnityEngine_Vector3_o Dino_BusSand_App_UI_HomeBus__get_LightDir (Dino_BusSand_App_UI_HomeBus_o*
   __this, const MethodInfo* method); */

float Dino_BusSand_App_UI_HomeBus__get_LightDir_22dff74
                (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  puVar1 = PTR_DAT_04ca9ae8;
  lVar2 = *(long *)(param_4 + 0x18);
  if (lVar2 == 0) {
    if (cRam0000000004f9bcf8 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9bcf8 = '\x01';
    }
    return *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
  }
  if ((bRam0000000004f9c47b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb71b0,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c47b = 1;
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  puVar1 = PTR_DAT_04cb71b0;
  if ((uVar3 & 1) == 0) {
    lVar5 = *(long *)(lVar2 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_04cb71b0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (lVar5 == 0) {
LAB_023f54f0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = UnityEngine_Material__HasProperty_437c01c
                      (lVar5,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x60),0);
    if ((uVar3 & 1) != 0) {
      lVar2 = *(long *)(lVar2 + 0x30);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (lVar2 == 0) goto LAB_023f54f0;
      fVar6 = (float)UnityEngine_Material__GetVector_4383a74
                               (lVar2,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x60),0);
      fVar7 = param_3 * param_3 + fVar6 * fVar6 + param_2 * param_2;
      if (_UNK_00e20900 < fVar7) {
        if (cRam0000000004f9b65c == '\0') {
          FUN_02132f7c(PTR_DAT_04caa200);
          cRam0000000004f9b65c = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar7 = SQRT(fVar7);
        if (_UNK_00e20a08 < fVar7) {
          return fVar6 / fVar7;
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

