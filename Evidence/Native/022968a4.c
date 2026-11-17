/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$.ctor
void Dino_BusSand_App_UI_BattleRoyaleScenePanel___ctor (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$.ctor
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel___ctor
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_BattleRoyaleScenePanel___ctor_21968a4(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  puVar5 = PTR_DAT_04cae330;
  puVar4 = PTR_DAT_04cae328;
  puVar3 = PTR_DAT_04cae320;
  puVar2 = PTR_DAT_04cad728;
  puVar1 = PTR_DAT_04cad6f0;
  if ((bRam0000000004f9b9d1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae328);
    FUN_02132f7c(PTR_DAT_04cad6f0);
    FUN_02132f7c(PTR_DAT_04cae320);
    FUN_02132f7c(PTR_DAT_04cad728);
    FUN_02132f7c(PTR_DAT_04cae330);
    bRam0000000004f9b9d1 = 1;
  }
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar6,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x68) = uVar6;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x68),uVar6);
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar6,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x70) = uVar6;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x70),uVar6);
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar6,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x80),uVar6);
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar6,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x88) = uVar6;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x88),uVar6);
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar6,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x90) = uVar6;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x90),uVar6);
  uVar6 = *(undefined8 *)puVar5;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  uVar6 = thunk_FUN_0216e89c(uVar6);
  System_Random___ctor_4840a9c(uVar6,0);
  *(undefined8 *)(param_1 + 0xa0) = uVar6;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0xa0),uVar6);
  puVar2 = PTR_DAT_04cb1698;
  puVar1 = PTR_DAT_04cb1690;
  if ((bRam0000000004f9bc9e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1698,0);
    FUN_02132f7c(PTR_DAT_04cb1690);
    bRam0000000004f9bc9e = 1;
  }
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar6,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar6);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_1;
  return auVar7;
}

