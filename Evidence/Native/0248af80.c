/* IL2CPP: Dino.BusSand.RenderQuality$$SetupPackCamera
void Dino_BusSand_RenderQuality__SetupPackCamera (UnityEngine_Camera_o* cam, int32_t rendererIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.RenderQuality$$SetupPackCamera
   void Dino_BusSand_RenderQuality__SetupPackCamera (UnityEngine_Camera_o* cam, int32_t
   rendererIndex, const MethodInfo* method); */

void Dino_BusSand_RenderQuality__SetupPackCamera_238af80(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int extraout_w1;
  
  puVar1 = PTR_DAT_04cb27f8;
  if ((bRam0000000004f9c89a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbbd90);
    FUN_02132f7c(PTR_DAT_04cb27f8);
    FUN_02132f7c(PTR_DAT_04cbbd50);
    bRam0000000004f9c89a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_RenderQuality__Initialize_238a2f8();
  puVar2 = PTR_DAT_04cbbd50;
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_1 != 0) {
    UnityEngine_Camera__set_allowHDR_43563b8(param_1,0,0);
    UnityEngine_Camera__set_allowMSAA_4356530(param_1,0,0);
    lVar3 = UnityEngine_Rendering_Universal_CameraExtensions__GetUniversalAdditionalCameraData_423d2c4
                      (param_1,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    lVar4 = UnityEngine_Rendering_Universal_UniversalRenderPipeline__get_asset_423e5ac(0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
    if ((-1 < param_2) && ((uVar5 & 1) != 0)) {
      if (lVar4 == 0) goto LAB_0248b0d4;
      UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset__get_rendererDataList_41dbc9c
                (lVar4,0);
      if (param_2 < extraout_w1) {
        if (lVar3 == 0) goto LAB_0248b0d4;
        *(int *)(lVar3 + 0x38) = param_2;
        goto LAB_0248b0ac;
      }
    }
    if (lVar3 != 0) {
LAB_0248b0ac:
      *(undefined1 *)(lVar3 + 0x4c) = 0;
      *(undefined4 *)(lVar3 + 0x50) = 0;
      *(undefined1 *)(lVar3 + 0x20) = 0;
      *(undefined2 *)(lVar3 + 0x58) = 0;
      *(undefined4 *)(lVar3 + 0x24) = 2;
      return;
    }
  }
LAB_0248b0d4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

