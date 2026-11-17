/* IL2CPP: Dino.BusSand.App.Tween$$Color
Dino_BusSand_App_Tween_o* Dino_BusSand_App_Tween__Color (System_Action_Color__o* setter, UnityEngine_Color_o from, UnityEngine_Color_o to, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Tween$$Color
   Dino_BusSand_App_Tween_o* Dino_BusSand_App_Tween__Color (System_Action_Color__o* setter,
   UnityEngine_Color_o from, UnityEngine_Color_o to, float duration, const MethodInfo* method); */

long Dino_BusSand_App_Tween__Color_2161810
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float in_stack_00000000;
  
  puVar1 = PTR_DAT_04cac258;
  if ((bRam0000000004f9b828 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cac260);
    FUN_02132f7c(PTR_DAT_04cac258);
    bRam0000000004f9b828 = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar5,0);
  puVar3 = PTR_DAT_04cac260;
  puVar2 = PTR_DAT_04cac208;
  puVar1 = PTR_DAT_04cac1e8;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = param_9;
    thunk_FUN_02134474((undefined8 *)(lVar5 + 0x10),param_9);
    uVar6 = *(undefined8 *)puVar2;
    *(undefined4 *)(lVar5 + 0x18) = param_1;
    *(undefined4 *)(lVar5 + 0x1c) = param_2;
    *(undefined4 *)(lVar5 + 0x20) = param_3;
    *(undefined4 *)(lVar5 + 0x24) = param_4;
    *(undefined4 *)(lVar5 + 0x28) = param_5;
    *(undefined4 *)(lVar5 + 0x2c) = param_6;
    *(undefined4 *)(lVar5 + 0x30) = param_7;
    *(undefined4 *)(lVar5 + 0x34) = param_8;
    uVar6 = thunk_FUN_0216e89c(uVar6);
    System_Action_float____ctor_35f1448(uVar6,lVar5,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04cac1f0;
    puVar1 = PTR_DAT_04cac1e8;
    if ((bRam0000000004f9b822 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cac1f0);
      FUN_02132f7c(PTR_DAT_04cac1e8);
      bRam0000000004f9b822 = 1;
    }
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    *(undefined1 *)(lVar5 + 0x10) = 1;
    *(undefined4 *)(lVar5 + 0x48) = 1;
    System_Object___ctor_4870e5c(lVar5,0);
    fVar7 = _UNK_00e20948;
    *(undefined8 *)(lVar5 + 0x38) = uVar6;
    if (fVar7 <= in_stack_00000000) {
      fVar7 = in_stack_00000000;
    }
    *(float *)(lVar5 + 0x24) = fVar7;
    thunk_FUN_02134474((undefined8 *)(lVar5 + 0x38),uVar6);
    lVar4 = *(long *)puVar2;
    *(undefined4 *)(lVar5 + 0x2c) = 0;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_TweenRunner__Add_2161044(lVar5);
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

