/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$.ctor
void Dino_BusSand_Cheat_CheatManager___ctor (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$.ctor
   void Dino_BusSand_Cheat_CheatManager___ctor (Dino_BusSand_Cheat_CheatManager_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_Cheat_CheatManager___ctor_2367fe0(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = PTR_DAT_04cbaa10;
  puVar3 = PTR_DAT_04cbaa08;
  puVar2 = PTR_DAT_04cbaa00;
  puVar1 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9c77d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbaa00);
    FUN_02132f7c(PTR_DAT_04cbaa10);
    FUN_02132f7c(PTR_DAT_04cbaa08);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c77d = 1;
  }
  uVar5 = *(undefined8 *)puVar1;
  *(undefined4 *)(param_1 + 0x54) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  thunk_FUN_02134474();
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)puVar1;
  thunk_FUN_02134474();
  uVar5 = *(undefined8 *)puVar1;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x108) = uVar5;
  thunk_FUN_02134474(param_1 + 0x108);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  Dino_BusSand_Cheat_CheatUiHider___ctor_236f494(uVar5,0);
  *(undefined8 *)(param_1 + 0x110) = uVar5;
  thunk_FUN_02134474(param_1 + 0x110,uVar5);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)puVar1;
  thunk_FUN_02134474(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)puVar1;
  thunk_FUN_02134474(param_1 + 0x130);
  uVar5 = *(undefined8 *)puVar3;
  *(undefined4 *)(param_1 + 0x13c) = 0xffffffff;
  uVar5 = thunk_FUN_0216e89c(uVar5);
  System_Collections_Generic_List_CheatManager_ToastLine____ctor_3b1ce80
            (uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x160) = uVar5;
  thunk_FUN_02134474(param_1 + 0x160,uVar5);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

