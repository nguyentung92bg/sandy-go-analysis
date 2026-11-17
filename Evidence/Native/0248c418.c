/* IL2CPP: Dino.BusSand.Tween$$Color
Dino_BusSand_Tween_o* Dino_BusSand_Tween__Color (System_Action_Color__o* setter, UnityEngine_Color_o from, UnityEngine_Color_o to, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Tween$$Color
   Dino_BusSand_Tween_o* Dino_BusSand_Tween__Color (System_Action_Color__o* setter,
   UnityEngine_Color_o from, UnityEngine_Color_o to, float duration, const MethodInfo* method); */

long Dino_BusSand_Tween__Color_238c418
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float in_stack_00000000;
  
  puVar1 = PTR_DAT_04cbbe80;
  if ((bRam0000000004f9c8a5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cbbe88);
    FUN_02132f7c(PTR_DAT_04cbbe80);
    bRam0000000004f9c8a5 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar4,0);
  puVar2 = PTR_DAT_04cbbe88;
  puVar1 = PTR_DAT_04cac208;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = param_9;
    thunk_FUN_02134474((undefined8 *)(lVar4 + 0x10),param_9);
    uVar5 = *(undefined8 *)puVar1;
    *(undefined4 *)(lVar4 + 0x18) = param_1;
    *(undefined4 *)(lVar4 + 0x1c) = param_2;
    *(undefined4 *)(lVar4 + 0x20) = param_3;
    *(undefined4 *)(lVar4 + 0x24) = param_4;
    *(undefined4 *)(lVar4 + 0x28) = param_5;
    *(undefined4 *)(lVar4 + 0x2c) = param_6;
    *(undefined4 *)(lVar4 + 0x30) = param_7;
    *(undefined4 *)(lVar4 + 0x34) = param_8;
    uVar5 = thunk_FUN_0216e89c(uVar5);
    System_Action_float____ctor_35f1448(uVar5,lVar4,*(undefined8 *)puVar2,0);
    puVar2 = PTR_DAT_04cbbe20;
    puVar1 = PTR_DAT_04cbbe18;
    if ((bRam0000000004f9c89f & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cbbe20);
      FUN_02132f7c(PTR_DAT_04cbbe18);
      bRam0000000004f9c89f = 1;
    }
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    *(undefined1 *)(lVar4 + 0x10) = 1;
    *(undefined4 *)(lVar4 + 0x48) = 1;
    System_Object___ctor_4870e5c(lVar4,0);
    fVar6 = _UNK_00e20948;
    *(undefined8 *)(lVar4 + 0x38) = uVar5;
    if (fVar6 <= in_stack_00000000) {
      fVar6 = in_stack_00000000;
    }
    *(float *)(lVar4 + 0x24) = fVar6;
    thunk_FUN_02134474((undefined8 *)(lVar4 + 0x38),uVar5);
    lVar3 = *(long *)puVar2;
    *(undefined4 *)(lVar4 + 0x2c) = 0;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_TweenRunner__Add_238bcdc(lVar4);
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

