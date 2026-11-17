/* IL2CPP: Dino.BusSand.View.PaintingLayer$$.ctor
void Dino_BusSand_View_PaintingLayer___ctor (Dino_BusSand_View_PaintingLayer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PaintingLayer$$.ctor
   void Dino_BusSand_View_PaintingLayer___ctor (Dino_BusSand_View_PaintingLayer_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_View_PaintingLayer___ctor_23da2e8(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar3 = PTR_DAT_04cb6a60;
  puVar2 = PTR_DAT_04caed88;
  puVar1 = PTR_DAT_04caadd0;
  if ((bRam0000000004f9ca3a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a60);
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04caed88);
    bRam0000000004f9ca3a = 1;
  }
  uVar4 = FUN_02133068(*(undefined8 *)puVar1,0x80);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  thunk_FUN_02134474();
  uVar4 = FUN_02133068(*(undefined8 *)puVar2,0x80);
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  thunk_FUN_02134474();
  uVar4 = FUN_02133068(*(undefined8 *)puVar3,0x80);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  thunk_FUN_02134474();
  uVar4 = FUN_02133068(*(undefined8 *)puVar2,0x80);
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  thunk_FUN_02134474();
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

