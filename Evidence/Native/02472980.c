/* IL2CPP: Dino.BusSand.AudioTable$$.ctor
void Dino_BusSand_AudioTable___ctor (Dino_BusSand_AudioTable_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioTable$$.ctor
   void Dino_BusSand_AudioTable___ctor (Dino_BusSand_AudioTable_o* __this, const MethodInfo*
   method); */

undefined1  [16] Dino_BusSand_AudioTable___ctor_2372980(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = PTR_DAT_04cbb0b8;
  puVar3 = PTR_DAT_04cbb0b0;
  puVar2 = PTR_DAT_04cbb0a8;
  puVar1 = PTR_DAT_04cbb0a0;
  if ((bRam0000000004f9c7d9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb0b8);
    FUN_02132f7c(PTR_DAT_04cbb0a8);
    FUN_02132f7c(PTR_DAT_04cbb0a0);
    FUN_02132f7c(PTR_DAT_04cbb0b0);
    bRam0000000004f9c7d9 = 1;
  }
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar5);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),uVar5);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

