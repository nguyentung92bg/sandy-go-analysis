/* IL2CPP: Dino.BusSand.App.UI.TapRipple$$.ctor
void Dino_BusSand_App_UI_TapRipple___ctor (Dino_BusSand_App_UI_TapRipple_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.TapRipple$$.ctor
   void Dino_BusSand_App_UI_TapRipple___ctor (Dino_BusSand_App_UI_TapRipple_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_TapRipple___ctor_228b1c0(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_04cabda0;
  puVar1 = PTR_DAT_04cabd88;
  if ((bRam0000000004f9c177 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabd88);
    FUN_02132f7c(PTR_DAT_04cabda0);
    bRam0000000004f9c177 = 1;
  }
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_RaycastResult____ctor_3a9f350(uVar3,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),uVar3);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

