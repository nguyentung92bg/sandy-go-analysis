/* IL2CPP: Dino.BusSand.RenderQuality$$SetupGameCamera
void Dino_BusSand_RenderQuality__SetupGameCamera (UnityEngine_Camera_o* cam, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.RenderQuality$$SetupGameCamera
   void Dino_BusSand_RenderQuality__SetupGameCamera (UnityEngine_Camera_o* cam, const MethodInfo*
   method); */

void Dino_BusSand_RenderQuality__SetupGameCamera_238ace8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int extraout_w1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar12;
  int *piVar13;
  long *plVar14;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_04cb27f8;
  if ((bRam0000000004f9c899 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbbd90);
    FUN_02132f7c(PTR_DAT_04cb27f8);
    FUN_02132f7c(PTR_DAT_04cbbd50);
    bRam0000000004f9c899 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_RenderQuality__Initialize_238a2f8();
  if (cRam0000000004f9c49a == '\0') {
    FUN_02132f7c(PTR_DAT_04cb27f8);
    cRam0000000004f9c49a = '\x01';
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_04cbbd50;
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_1 != 0) {
    UnityEngine_Camera__set_allowHDR_43563b8(param_1,**(int **)(lVar7 + 0xb8) != 0,0);
    UnityEngine_Camera__set_allowMSAA_4356530(param_1,1,0);
    UnityEngine_Camera__set_nearClipPlane_4355c40(0x41f00000,param_1,0);
    UnityEngine_Camera__set_farClipPlane_4355dc8(0x435c0000,param_1,0);
    lVar7 = UnityEngine_Rendering_Universal_CameraExtensions__GetUniversalAdditionalCameraData_423d2c4
                      (param_1,0);
    lVar12 = *(long *)puVar3;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar12);
    }
    uVar8 = UnityEngine_Rendering_Universal_UniversalRenderPipeline__get_asset_423e5ac(0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
    if ((uVar9 & 1) == 0) {
      lVar12 = *(long *)puVar2;
    }
    else {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar12 = UnityEngine_Rendering_Universal_UniversalRenderPipeline__get_asset_423e5ac(0);
      if (lVar12 == 0) goto LAB_0248af7c;
      UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset__get_rendererDataList_41dbc9c
                (lVar12,0);
      lVar12 = *(long *)puVar2;
      if (1 < extraout_w1) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9c49a == '\0') {
          FUN_02132f7c(PTR_DAT_04cb27f8);
          cRam0000000004f9c49a = '\x01';
        }
        lVar12 = *(long *)puVar2;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar12 = *(long *)puVar2;
        }
        if (lVar7 == 0) goto LAB_0248af7c;
        *(uint *)(lVar7 + 0x38) = (uint)(**(int **)(lVar12 + 0xb8) == 2);
      }
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    bVar5 = Dino_BusSand_RenderQuality__get_PostProcessing_238a204();
    if (lVar7 != 0) {
      *(byte *)(lVar7 + 0x4c) = bVar5 & 1;
      *(undefined4 *)(lVar7 + 0x50) = 0;
      *(undefined1 *)(lVar7 + 0x20) = 1;
      *(undefined2 *)(lVar7 + 0x58) = 0x101;
      uVar6 = UnityEngine_LayerMask__op_Implicit_43c2d3c(0xffffffff,0);
      cVar4 = cRam0000000004f9c49a;
      *(undefined4 *)(lVar7 + 0x3c) = uVar6;
      if (cVar4 == '\0') {
        FUN_02132f7c(PTR_DAT_04cb27f8);
        cRam0000000004f9c49a = '\x01';
      }
      lVar12 = *(long *)puVar2;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar12 = *(long *)puVar2;
      }
      uVar6 = 1;
      if (**(int **)(lVar12 + 0xb8) != 2) {
        uVar6 = 2;
      }
      *(undefined4 *)(lVar7 + 0x24) = uVar6;
      lVar7 = UnityEngine_Rendering_Universal_CameraExtensions__GetUniversalAdditionalCameraData_423d2c4
                        (param_1,0,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(lVar7 + 0x48) != 0) {
        uVar9 = UnityEngine_Rendering_Universal_UniversalAdditionalCameraData__get_requiresVolumeFrameworkUpdate_423d3c8
                          (lVar7);
        *(undefined4 *)(lVar7 + 0x48) = 0;
        if (((uVar9 & 1) != 0) &&
           (uVar9 = UnityEngine_Rendering_Universal_UniversalAdditionalCameraData__get_requiresVolumeFrameworkUpdate_423d3c8
                              (lVar7), puVar2 = PTR_DAT_04cc6830, (uVar9 & 1) == 0)) {
          if ((bRam0000000004fa3eaf & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04ca9af8);
            FUN_02132f7c(PTR_DAT_04cc6830);
            FUN_02132f7c(PTR_DAT_04cf0ef8);
            bRam0000000004fa3eaf = 1;
          }
          uStack_38 = 0;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar12 = UnityEngine_Rendering_VolumeManager__get_instance_412c3d0(0);
          if (lVar12 != 0) {
            if (*(char *)(lVar12 + 0x68) == '\0') {
              if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              puVar2 = PTR_DAT_04ca9af8;
              uVar8 = 0;
              uVar10 = *(undefined8 *)PTR_DAT_04cf0ef8;
              if ((bRam0000000004fa6266 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04ca9af8,0);
                FUN_02132f7c(PTR_DAT_04ce7050);
                bRam0000000004fa6266 = 1;
                uVar8 = extraout_x1;
              }
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                uVar8 = extraout_x1_00;
              }
              if (cRam0000000004f9d848 == '\0') {
                FUN_02132f7c(PTR_DAT_04ca9af8,uVar8);
                cRam0000000004f9d848 = '\x01';
              }
              lVar7 = *(long *)puVar2;
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar7 = *(long *)puVar2;
              }
              plVar14 = *(long **)(*(long *)(lVar7 + 0xb8) + 8);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar7 = *plVar14;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04ce7050) {
                    puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                    goto LAB_044616fc;
                  }
                  uVar9 = uVar9 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)FUN_0216b7a4(plVar14,*(long *)PTR_DAT_04ce7050,3);
LAB_044616fc:
                    /* WARNING: Could not recover jumptable at 0x04461714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar11)(plVar14,0,uVar10,puVar11[1]);
              return;
            }
            if (lVar7 != 0) {
              uVar9 = UnityEngine_Rendering_Universal_UniversalAdditionalCameraData__get_requiresVolumeFrameworkUpdate_423d3c8
                                (lVar7);
              if ((uVar9 & 1) == 0) {
                if (*(long *)(lVar7 + 0xc0) == 0) {
                  UnityEngine_Rendering_Universal_UniversalAdditionalCameraData__GetOrCreateVolumeStack_423d584
                            (lVar7);
                }
                UnityEngine_Rendering_Universal_CameraExtensions__GetVolumeLayerMaskAndTrigger_423d6b4
                          (param_1,lVar7,&stack0xffffffffffffffdc,&uStack_38);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                lVar12 = UnityEngine_Rendering_VolumeManager__get_instance_412c3d0(0);
                if (lVar12 == 0) goto LAB_0433d580;
                UnityEngine_Rendering_VolumeManager__Update_413a600
                          (lVar12,*(undefined8 *)(lVar7 + 0xc0),uStack_38,0,0);
              }
              return;
            }
          }
LAB_0433d580:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
      return;
    }
  }
LAB_0248af7c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

