/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Pointer
System_Nullable_Vector3__o Dino_BusSand_App_UI_HomeBus__Pointer (Dino_BusSand_App_UI_HomeBus_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Pointer
   System_Nullable_Vector3__o Dino_BusSand_App_UI_HomeBus__Pointer (Dino_BusSand_App_UI_HomeBus_o*
   __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_HomeBus__Pointer_22e4410(long param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_c4 [68];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c415 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb18b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c415 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if (((uVar4 & 1) == 0) && (*(int *)(param_1 + 0x50) == 0)) {
    iVar3 = UnityEngine_Input__get_touchCount_443092c(0);
    if (iVar3 < 1) {
      uVar4 = UnityEngine_Input__GetMouseButton_4430020(0,0);
      if ((uVar4 & 1) == 0) goto LAB_023e4498;
      UnityEngine_Input__get_mousePosition_4430454(0);
    }
    else {
      UnityEngine_Input__GetTouch_44300d4(auStack_c4,0,0);
      func_0x049b5410(&uStack_80,auStack_c4,0x44);
      UnityEngine_Touch__get_position_442f55c(&uStack_80,0);
    }
    Dino_BusSand_App_UI_HomeBus__EyeDepth_22e4704(param_1);
    uStack_30 = 0;
    uStack_28 = 0;
    System_Nullable_Vector3____ctor_2bd0e4c(&uStack_30,*(undefined8 *)PTR_DAT_04cb18b8);
  }
  else {
LAB_023e4498:
    uStack_30 = 0;
    uStack_28 = 0;
  }
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = uStack_30;
  return auVar1;
}

