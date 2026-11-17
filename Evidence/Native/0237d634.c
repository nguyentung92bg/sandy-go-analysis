/* IL2CPP: Dino.BusSand.App.UI.KitAdopt.Scope$$.ctor
void Dino_BusSand_App_UI_KitAdopt_Scope___ctor (Dino_BusSand_App_UI_KitAdopt_Scope_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitAdopt.Scope$$.ctor
   void Dino_BusSand_App_UI_KitAdopt_Scope___ctor (Dino_BusSand_App_UI_KitAdopt_Scope_o* __this,
   const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_KitAdopt_Scope___ctor_227d634(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = PTR_DAT_04cb4bb8;
  puVar3 = PTR_DAT_04cb4bb0;
  puVar2 = PTR_DAT_04cb4ba8;
  puVar1 = PTR_DAT_04cb4ba0;
  if ((bRam0000000004f9c13d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4ba8);
    FUN_02132f7c(PTR_DAT_04cb4bb8);
    FUN_02132f7c(PTR_DAT_04cb4bb0);
    FUN_02132f7c(PTR_DAT_04cb4ba0);
    bRam0000000004f9c13d = 1;
  }
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary_object__int____ctor_34a8b9c(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x38),uVar5);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_Dictionary_ValueTuple_int__object___int____ctor_3379aa4
            (uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x40),uVar5);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

