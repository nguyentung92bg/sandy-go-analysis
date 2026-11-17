/* IL2CPP: Dino.BusSand.App.RenderSetup$$Apply
void Dino_BusSand_App_RenderSetup__Apply (UnityEngine_Camera_o* cam, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.RenderSetup$$Apply
   void Dino_BusSand_App_RenderSetup__Apply (UnityEngine_Camera_o* cam, const MethodInfo* method);
    */

void Dino_BusSand_App_RenderSetup__Apply_217cbec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b90a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad358);
    bRam0000000004f9b90a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar3 & 1) == 0) {
    if (param_1 == 0) {
LAB_0227cd30:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Camera__set_allowHDR_43563b8(param_1,0,0);
    UnityEngine_Camera__set_allowMSAA_4356530(param_1,1,0);
    UnityEngine_Camera__set_clearFlags_4358bd4(param_1,2,0);
    puVar2 = PTR_DAT_04cad358;
    lVar4 = *(long *)PTR_DAT_04cad358;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    puVar5 = *(undefined4 **)(lVar4 + 0xb8);
    UnityEngine_Camera__set_backgroundColor_4358a4c(*puVar5,puVar5[1],puVar5[2],puVar5[3],param_1,0)
    ;
    UnityEngine_Camera__set_cullingMask_435768c(param_1,0xbfffffff,0);
    lVar4 = UnityEngine_Rendering_Universal_CameraExtensions__GetUniversalAdditionalCameraData_423d2c4
                      (param_1,0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar6);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (lVar4 == 0) goto LAB_0227cd30;
      *(undefined4 *)(lVar4 + 0x2c) = 0;
      *(undefined1 *)(lVar4 + 0x20) = 1;
      *(undefined1 *)(lVar4 + 0x4c) = 0;
      *(undefined4 *)(lVar4 + 0x50) = 0;
      *(undefined1 *)(lVar4 + 0x59) = 0;
      *(undefined8 *)(lVar4 + 0x24) = 0x200000002;
    }
  }
  return;
}

