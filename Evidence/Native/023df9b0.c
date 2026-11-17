/* IL2CPP: Dino.BusSand.App.UI.HomeBeach$$.ctor
void Dino_BusSand_App_UI_HomeBeach___ctor (Dino_BusSand_App_UI_HomeBeach_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBeach$$.ctor
   void Dino_BusSand_App_UI_HomeBeach___ctor (Dino_BusSand_App_UI_HomeBeach_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_HomeBeach___ctor_22df9b0(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar3 = PTR_DAT_04cb7160;
  puVar2 = PTR_DAT_04cb7158;
  puVar1 = PTR_DAT_04cae330;
  if ((bRam0000000004f9c401 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7160);
    FUN_02132f7c(PTR_DAT_04cb7158);
    FUN_02132f7c(PTR_DAT_04cae330);
    bRam0000000004f9c401 = 1;
  }
  uVar4 = FUN_02133068(*(undefined8 *)puVar2,0xe);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  thunk_FUN_02134474();
  uVar4 = FUN_02133068(*(undefined8 *)puVar3,5);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  thunk_FUN_02134474();
  uVar4 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x3c) = _UNK_00e69988;
  uVar4 = thunk_FUN_0216e89c(uVar4);
  System_Random___ctor_4840cc4(uVar4,0x94e,0);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x48),uVar4);
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

