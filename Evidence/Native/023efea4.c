/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$get_UiCam
UnityEngine_Camera_o* Dino_BusSand_App_UI_HomeStage__get_UiCam (Dino_BusSand_App_UI_HomeStage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$get_UiCam
   UnityEngine_Camera_o* Dino_BusSand_App_UI_HomeStage__get_UiCam (Dino_BusSand_App_UI_HomeStage_o*
   __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_HomeStage__get_UiCam_22efea4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000004f9c462 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c462 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar2 = PTR_DAT_04cad1b0;
  uVar4 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  uVar4 = 0;
  if ((uVar3 & 1) != 0) {
    if (cRam0000000004f9b94d == '\0') {
      uVar4 = FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    if (**(long **)(*(long *)puVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar4);
    }
    uVar4 = *(undefined8 *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x20);
  }
  return uVar4;
}

