/* IL2CPP: Dino.BusSand.View.Fx$$.ctor
void Dino_BusSand_View_Fx___ctor (Dino_BusSand_View_Fx_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.Fx$$.ctor
   void Dino_BusSand_View_Fx___ctor (Dino_BusSand_View_Fx_o* __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_View_Fx___ctor_239a07c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = PTR_DAT_04cbc290;
  puVar3 = PTR_DAT_04cbc288;
  puVar2 = PTR_DAT_04cab650;
  puVar1 = PTR_DAT_04cab648;
  if ((bRam0000000004f9c8f8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab648);
    FUN_02132f7c(PTR_DAT_04cbc290);
    FUN_02132f7c(PTR_DAT_04cab650);
    FUN_02132f7c(PTR_DAT_04cbc288);
    bRam0000000004f9c8f8 = 1;
  }
  uVar5 = *(undefined8 *)puVar2;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  uVar5 = thunk_FUN_0216e89c(uVar5);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar5,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x60),uVar5);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_ValueTuple_object__float__float__Vector3_____ctor_39dbbe0
            (uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x68),uVar5);
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

