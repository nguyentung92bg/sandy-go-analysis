/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$.ctor
void Dino_BusSand_Cheat_AutoQa___ctor (Dino_BusSand_Cheat_AutoQa_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$.ctor
   void Dino_BusSand_Cheat_AutoQa___ctor (Dino_BusSand_Cheat_AutoQa_o* __this, const MethodInfo*
   method); */

undefined1  [16] Dino_BusSand_Cheat_AutoQa___ctor_2343d3c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_04cab748;
  puVar1 = PTR_DAT_04cab740;
  if ((bRam0000000004f9c6a9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab740);
    FUN_02132f7c(PTR_DAT_04cab748);
    bRam0000000004f9c6a9 = 1;
  }
  uVar3 = *(undefined8 *)puVar2;
  *(undefined4 *)(param_1 + 0x2c) = 0xbf800000;
  uVar3 = thunk_FUN_0216e89c(uVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar3,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar3);
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

