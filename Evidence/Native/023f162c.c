/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$.ctor
void Dino_BusSand_App_UI_HomeStage___ctor (Dino_BusSand_App_UI_HomeStage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$.ctor
   void Dino_BusSand_App_UI_HomeStage___ctor (Dino_BusSand_App_UI_HomeStage_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_HomeStage___ctor_22f162c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar3 = PTR_DAT_04cb6a60;
  puVar2 = PTR_DAT_04cabdb8;
  puVar1 = PTR_DAT_04caadd0;
  if ((bRam0000000004f9c46a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a60);
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04cabdb8);
    bRam0000000004f9c46a = 1;
  }
  uVar4 = FUN_02133068(*(undefined8 *)puVar1,0x400);
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  thunk_FUN_02134474();
  uVar4 = FUN_02133068(*(undefined8 *)puVar3,0x400);
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  thunk_FUN_02134474();
  uVar4 = *(undefined8 *)puVar2;
  *(undefined4 *)(param_1 + 0x8c) = 0x41400000;
  uVar4 = FUN_02133068(uVar4,8);
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  thunk_FUN_02134474();
  uVar4 = FUN_02133068(*(undefined8 *)puVar1,0x5a);
  *(undefined8 *)(param_1 + 0xb8) = uVar4;
  thunk_FUN_02134474();
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffc4;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1;
  return auVar5;
}

