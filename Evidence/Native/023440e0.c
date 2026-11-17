/* IL2CPP: Dino.BusSand.App.Meta.PassportData$$.ctor
void Dino_BusSand_App_Meta_PassportData___ctor (Dino_BusSand_App_Meta_PassportData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportData$$.ctor
   void Dino_BusSand_App_Meta_PassportData___ctor (Dino_BusSand_App_Meta_PassportData_o* __this,
   const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Meta_PassportData___ctor_22440e0(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar3 = PTR_DAT_04cad6e8;
  puVar2 = PTR_DAT_04caa1c8;
  puVar1 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9bf2f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bf2f = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* try { // try from 0234414c to 024441d3 has its CatchHandler @ 02344258 */
  System_Collections_Generic_List_int____ctor_3a2b7dc(uVar4,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar4);
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_int____ctor_3a2b7dc(uVar4,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x38),uVar4);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)puVar1;
  thunk_FUN_02134474();
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_int____ctor_3a2b7dc(uVar4,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x80),uVar4);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1;
  return auVar5;
}

