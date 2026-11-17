/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$.ctor
void Dino_BusSand_App_UI_ClimbTowerPanel___ctor (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$.ctor
   void Dino_BusSand_App_UI_ClimbTowerPanel___ctor (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this,
   const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_ClimbTowerPanel___ctor_21a66dc(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  puVar6 = PTR_DAT_04caeb10;
  puVar5 = PTR_DAT_04caeb08;
  puVar4 = PTR_DAT_04caeb00;
  puVar3 = PTR_DAT_04caeaf8;
  puVar2 = PTR_DAT_04cad6e8;
  puVar1 = PTR_DAT_04caa1c8;
  if ((bRam0000000004f9ba45 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caeb10);
    FUN_02132f7c(PTR_DAT_04caeb00);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04caeb08);
    FUN_02132f7c(PTR_DAT_04caeaf8);
    bRam0000000004f9ba45 = 1;
  }
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar7,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x90) = uVar7;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x90),uVar7);
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_List_float____ctor_3ac202c(uVar7,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x98) = uVar7;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x98),uVar7);
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_int____ctor_3a2b7dc(uVar7,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0xa0) = uVar7;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0xa0),uVar7);
  puVar2 = PTR_DAT_04cb1698;
  puVar1 = PTR_DAT_04cb1690;
  if ((bRam0000000004f9bc9e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1698,0);
    FUN_02132f7c(PTR_DAT_04cb1690);
    bRam0000000004f9bc9e = 1;
  }
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar7,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar7);
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

