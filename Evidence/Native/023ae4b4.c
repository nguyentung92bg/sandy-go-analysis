/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel.Request$$.ctor
void Dino_BusSand_App_UI_CommonGetPanel_Request___ctor (Dino_BusSand_App_UI_CommonGetPanel_Request_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel.Request$$.ctor
   void Dino_BusSand_App_UI_CommonGetPanel_Request___ctor
   (Dino_BusSand_App_UI_CommonGetPanel_Request_o* __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_CommonGetPanel_Request___ctor_22ae4b4(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar3 = PTR_DAT_04caca60;
  puVar2 = PTR_DAT_04caca50;
  puVar1 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9c2c0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c2c0 = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
            (uVar4,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x10),uVar4);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)puVar1;
  thunk_FUN_02134474();
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)puVar1;
  thunk_FUN_02134474();
  *(undefined1 *)(param_1 + 0x2c) = 1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1;
  return auVar5;
}

