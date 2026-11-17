/* IL2CPP: Dino.BusSand.Tween$$Value
Dino_BusSand_Tween_o* Dino_BusSand_Tween__Value (float duration, System_Action_float__o* onUpdate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Tween$$Value
   Dino_BusSand_Tween_o* Dino_BusSand_Tween__Value (float duration, System_Action_float__o*
   onUpdate, const MethodInfo* method); */

long Dino_BusSand_Tween__Value_238bbfc(float param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  puVar2 = PTR_DAT_04cbbe20;
  puVar1 = PTR_DAT_04cbbe18;
  if ((bRam0000000004f9c89f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbe20);
    FUN_02132f7c(PTR_DAT_04cbbe18);
    bRam0000000004f9c89f = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  *(undefined4 *)(lVar3 + 0x48) = 1;
  System_Object___ctor_4870e5c(lVar3,0);
  fVar5 = _UNK_00e20948;
  *(undefined8 *)(lVar3 + 0x38) = param_2;
  if (fVar5 <= param_1) {
    fVar5 = param_1;
  }
  *(float *)(lVar3 + 0x24) = fVar5;
  thunk_FUN_02134474((undefined8 *)(lVar3 + 0x38),param_2);
  lVar4 = *(long *)puVar2;
  *(undefined4 *)(lVar3 + 0x2c) = 0;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_TweenRunner__Add_238bcdc(lVar3);
  return lVar3;
}

