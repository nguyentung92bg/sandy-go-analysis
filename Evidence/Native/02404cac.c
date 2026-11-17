/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$.ctor
void Dino_BusSand_App_UI_PlayerSettingPanel___ctor (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$.ctor
   void Dino_BusSand_App_UI_PlayerSettingPanel___ctor (Dino_BusSand_App_UI_PlayerSettingPanel_o*
   __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_PlayerSettingPanel___ctor_2304cac(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = PTR_DAT_04cb7e48;
  puVar3 = PTR_DAT_04cb7e40;
  puVar2 = PTR_DAT_04cb7e38;
  puVar1 = PTR_DAT_04cb7e30;
  if ((bRam0000000004f9c4f1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7e48);
    FUN_02132f7c(PTR_DAT_04cb7e40);
    FUN_02132f7c(PTR_DAT_04cb7e38);
    FUN_02132f7c(PTR_DAT_04cb7e30);
    bRam0000000004f9c4f1 = 1;
  }
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x60),uVar5);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x68),uVar5);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x70),uVar5);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0xc0),uVar5);
  puVar2 = PTR_DAT_04cb1698;
  puVar1 = PTR_DAT_04cb1690;
  if ((bRam0000000004f9bc9e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1698,0);
    FUN_02132f7c(PTR_DAT_04cb1690);
    bRam0000000004f9bc9e = 1;
  }
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar5);
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

