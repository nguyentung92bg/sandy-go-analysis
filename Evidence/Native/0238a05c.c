/* IL2CPP: Dino.BusSand.App.UI.ScreenFade$$.ctor
void Dino_BusSand_App_UI_ScreenFade___ctor (Dino_BusSand_App_UI_ScreenFade_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ScreenFade$$.ctor
   void Dino_BusSand_App_UI_ScreenFade___ctor (Dino_BusSand_App_UI_ScreenFade_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_ScreenFade___ctor_228a05c(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_DAT_04cabb00;
  if ((bRam0000000004f9c170 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabb00);
    bRam0000000004f9c170 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  uVar3 = **(undefined8 **)(lVar2 + 0xb8);
  *(undefined8 *)(param_1 + 0x34) = (*(undefined8 **)(lVar2 + 0xb8))[1];
  *(undefined8 *)(param_1 + 0x2c) = uVar3;
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

