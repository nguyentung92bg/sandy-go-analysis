/* IL2CPP: Dino.BusSand.App.UI.GoldenView$$.ctor
void Dino_BusSand_App_UI_GoldenView___ctor (Dino_BusSand_App_UI_GoldenView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenView$$.ctor
   void Dino_BusSand_App_UI_GoldenView___ctor (Dino_BusSand_App_UI_GoldenView_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_GoldenView___ctor_21b9d24(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_DAT_04cac668;
  if ((bRam0000000004f9bab6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf6f8);
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9bab6 = 1;
  }
  puVar2 = PTR_DAT_04caf6f8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_Meta_LiveOps__Get_object__27ef0a4(*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  thunk_FUN_02134474();
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

