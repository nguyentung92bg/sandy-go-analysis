/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$get_Sun
UnityEngine_Vector3_o Dino_BusSand_App_UI_HomeStage__get_Sun (Dino_BusSand_App_UI_HomeStage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$get_Sun
   UnityEngine_Vector3_o Dino_BusSand_App_UI_HomeStage__get_Sun (Dino_BusSand_App_UI_HomeStage_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeStage__get_Sun_22ee3e8
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_04caa208;
  if (*(long *)(param_4 + 0x78) == 0) {
    if (cRam0000000004f9bcf8 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9bcf8 = '\x01';
    }
    lVar3 = *(long *)(*(long *)puVar2 + 0xb8);
    fVar5 = *(float *)(lVar3 + 0x18);
    param_2 = *(float *)(lVar3 + 0x1c);
    param_3 = *(float *)(lVar3 + 0x20);
  }
  else {
    fVar5 = (float)Dino_BusSand_App_UI_HomeBus__get_LightDir_22dff74(*(long *)(param_4 + 0x78),0);
  }
  puVar1 = PTR_DAT_04caa200;
  if (param_2 < 0.25) {
    if (cRam0000000004f9b65c == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b65c = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar7 = SQRT(param_3 * param_3 + fVar5 * fVar5);
    if (fVar7 <= _UNK_00e20a08) {
      if (cRam0000000004f9b65d == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65d = '\x01';
      }
      uVar4 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
      param_3 = *(float *)(*(undefined8 **)(*(long *)puVar2 + 0xb8) + 1);
    }
    else {
      param_3 = param_3 / fVar7;
      uVar4 = CONCAT44(0.0 / fVar7,fVar5 / fVar7);
    }
    param_3 = param_3 * _UNK_00e200c0;
    if (cRam0000000004f9bcf8 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9bcf8 = '\x01';
    }
    uVar6 = NEON_fmov(0x3e800000,4);
    uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    fVar5 = (float)uVar4 * 0.96824586 + (float)uVar8 * (float)uVar6;
    param_2 = (float)((ulong)uVar4 >> 0x20) * 0.96824586 +
              (float)((ulong)uVar8 >> 0x20) * (float)((ulong)uVar6 >> 0x20);
    param_3 = param_3 + *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) * 0.25;
  }
  if (cRam0000000004f9b65c == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b65c = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (SQRT(param_3 * param_3 + fVar5 * fVar5 + param_2 * param_2) <= _UNK_00e20a08) {
    if (cRam0000000004f9b65d == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65d = '\x01';
    }
    uVar4 = *(undefined8 *)puVar2;
  }
  return;
}

