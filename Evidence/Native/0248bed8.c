/* IL2CPP: Dino.BusSand.Tween$$Delayed
Dino_BusSand_Tween_o* Dino_BusSand_Tween__Delayed (float delay, System_Action_o* callback, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Tween$$Delayed
   Dino_BusSand_Tween_o* Dino_BusSand_Tween__Delayed (float delay, System_Action_o* callback, const
   MethodInfo* method); */

long Dino_BusSand_Tween__Delayed_238bed8(undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_04cbbe40;
  puVar1 = PTR_DAT_04cbbe18;
  if ((bRam0000000004f9c8a1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cbbe20);
    FUN_02132f7c(PTR_DAT_04cbbe18);
    FUN_02132f7c(PTR_DAT_04cbbe48);
    FUN_02132f7c(PTR_DAT_04cbbe40);
    bRam0000000004f9c8a1 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  *(undefined4 *)(lVar3 + 0x48) = 1;
  System_Object___ctor_4870e5c(lVar3,0);
  *(undefined4 *)(lVar3 + 0x20) = param_1;
  *(undefined4 *)(lVar3 + 0x24) = 0x38d1b717;
  *(undefined8 *)(lVar3 + 0x40) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar3 + 0x40),param_2);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04cbbe20;
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar6[1];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
    System_Action_float____ctor_35f1448(lVar7,uVar8,*(undefined8 *)PTR_DAT_04cbbe48,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar5 = lVar7;
    thunk_FUN_02134474(plVar5,lVar7);
  }
  *(long *)(lVar3 + 0x38) = lVar7;
  thunk_FUN_02134474((long *)(lVar3 + 0x38),lVar7);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_TweenRunner__Add_238bcdc(lVar3);
  return lVar3;
}

