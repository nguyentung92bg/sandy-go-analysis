/* IL2CPP: Dino.BusSand.View.MechFx$$.ctor
void Dino_BusSand_View_MechFx___ctor (Dino_BusSand_View_MechFx_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechFx$$.ctor
   void Dino_BusSand_View_MechFx___ctor (Dino_BusSand_View_MechFx_o* __this, const MethodInfo*
   method); */

undefined1  [16] Dino_BusSand_View_MechFx___ctor_23beaf4(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  puVar6 = PTR_DAT_04cbcfe8;
  puVar5 = PTR_DAT_04cbcfe0;
  puVar4 = PTR_DAT_04cb7e48;
  puVar3 = PTR_DAT_04cb7e40;
  puVar2 = PTR_DAT_04cab510;
  puVar1 = PTR_DAT_04cab508;
  if ((bRam0000000004f9c9ba & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7e48);
    FUN_02132f7c(PTR_DAT_04cab510);
    FUN_02132f7c(PTR_DAT_04cb7e40);
    FUN_02132f7c(PTR_DAT_04cab508);
    FUN_02132f7c(PTR_DAT_04cbcfe8);
    FUN_02132f7c(PTR_DAT_04cbcfe0);
    bRam0000000004f9c9ba = 1;
  }
  uVar7 = *(undefined8 *)puVar3;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  uVar7 = thunk_FUN_0216e89c(uVar7);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar7,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),uVar7);
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar7,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar7);
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_List_ValueTuple_object__object__float__object__Vector3_____ctor_39de75c
            (uVar7,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x38),uVar7);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_1;
  return auVar8;
}

