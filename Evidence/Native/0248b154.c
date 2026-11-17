/* IL2CPP: Dino.BusSand.RenderQuality$$SetupUiCamera
void Dino_BusSand_RenderQuality__SetupUiCamera (UnityEngine_Camera_o* cam, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.RenderQuality$$SetupUiCamera
   void Dino_BusSand_RenderQuality__SetupUiCamera (UnityEngine_Camera_o* cam, const MethodInfo*
   method); */

void Dino_BusSand_RenderQuality__SetupUiCamera_238b154(long param_1)

{
  long lVar1;
  
  lVar1 = UnityEngine_Rendering_Universal_CameraExtensions__GetUniversalAdditionalCameraData_423d2c4
                    (param_1,0);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x4c) = 0;
    *(undefined4 *)(lVar1 + 0x50) = 0;
    *(undefined1 *)(lVar1 + 0x20) = 0;
    if (param_1 != 0) {
      UnityEngine_Camera__set_allowHDR_43563b8(param_1,0,0);
      if ((bRam0000000004fa5baf & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf6278,0,0);
        bRam0000000004fa5baf = 1;
      }
      if (param_1 != 0) {
        lVar1 = *(long *)(param_1 + 0x10);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
        }
        if (pcRam0000000004fa5cf8 == (code *)0x0) {
          pcRam0000000004fa5cf8 = (code *)FUN_02132f40(&UNK_00e2c8dd);
        }
                    /* WARNING: Could not recover jumptable at 0x044565a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa5cf8)(lVar1,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

