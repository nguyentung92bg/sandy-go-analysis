/* IL2CPP: Dino.BusSand.App.UI.HallScene$$.ctor
void Dino_BusSand_App_UI_HallScene___ctor (Dino_BusSand_App_UI_HallScene_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HallScene$$.ctor
   void Dino_BusSand_App_UI_HallScene___ctor (Dino_BusSand_App_UI_HallScene_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_HallScene___ctor_22d3dc8(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  puVar6 = PTR_DAT_04cb6e80;
  puVar5 = PTR_DAT_04cb6e78;
  puVar4 = PTR_DAT_04cb6e70;
  puVar3 = PTR_DAT_04cb6e68;
  puVar2 = PTR_DAT_04cb6e60;
  puVar1 = PTR_DAT_04cb6e58;
  if ((bRam0000000004f9c3c8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6e80);
    FUN_02132f7c(PTR_DAT_04cb6e60);
    FUN_02132f7c(PTR_DAT_04cb6e70);
    FUN_02132f7c(PTR_DAT_04cb6e58);
    FUN_02132f7c(PTR_DAT_04cb6e68);
    FUN_02132f7c(PTR_DAT_04cb6e78);
    bRam0000000004f9c3c8 = 1;
  }
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar7,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x50),uVar7);
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar7,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x58),uVar7);
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar7,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x60) = uVar7;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x60),uVar7);
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar7,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x68),uVar7);
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

