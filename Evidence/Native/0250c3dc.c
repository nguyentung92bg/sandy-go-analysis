/* IL2CPP: Dino.BusSand.View.WorldView$$.ctor
void Dino_BusSand_View_WorldView___ctor (Dino_BusSand_View_WorldView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.WorldView$$.ctor
   void Dino_BusSand_View_WorldView___ctor (Dino_BusSand_View_WorldView_o* __this, const MethodInfo*
   method); */

undefined1  [16] Dino_BusSand_View_WorldView___ctor_240c3dc(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_04cbe358;
  puVar1 = PTR_DAT_04cbe2e0;
  if ((bRam0000000004f9cb28 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe358);
    FUN_02132f7c(PTR_DAT_04cbe2e0);
    bRam0000000004f9cb28 = 1;
  }
  uVar3 = *(undefined8 *)puVar1;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x30) = 0x7f7fffff7f7fffff;
  uVar3 = thunk_FUN_0216e89c(uVar3);
  System_Collections_Generic_HashSet_object____ctor_37e5358(uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x58),uVar3);
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

