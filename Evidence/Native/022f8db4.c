/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$RootCanvasSize
UnityEngine_Vector2_o Dino_BusSand_App_UI_YachtRacingUi__RootCanvasSize (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$RootCanvasSize
   UnityEngine_Vector2_o Dino_BusSand_App_UI_YachtRacingUi__RootCanvasSize (const MethodInfo*
   method); */

float Dino_BusSand_App_UI_YachtRacingUi__RootCanvasSize_21f8db4
                (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((bRam0000000004f9bc58 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9bc58 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar3 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
  plVar4 = (long *)0x0;
  if ((uVar2 & 1) != 0) {
    if (lVar3 == 0) goto LAB_022f8f34;
    uVar5 = *(undefined8 *)(lVar3 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    plVar4 = (long *)0x0;
    if ((uVar2 & 1) != 0) {
      if (*(long *)(lVar3 + 0x28) == 0) goto LAB_022f8f34;
      plVar4 = (long *)UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar3 + 0x28),0);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
      }
      else if (*plVar4 != *(long *)PTR_DAT_04cabdb0) {
        plVar4 = (long *)0x0;
      }
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(plVar4,0,0);
  if ((uVar2 & 1) == 0) {
    if (plVar4 == (long *)0x0) {
LAB_022f8f34:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_RectTransform__get_rect_43cf450(plVar4,0);
    if (param_3 <= 1.0 || param_4 <= 1.0) {
      param_3 = 1080.0;
    }
  }
  else {
    param_3 = 1080.0;
  }
  return param_3;
}

