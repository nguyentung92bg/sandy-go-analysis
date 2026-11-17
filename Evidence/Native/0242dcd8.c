/* IL2CPP: Dino.BusSand.App.UI.RewardStagePanel$$.ctor
void Dino_BusSand_App_UI_RewardStagePanel___ctor (Dino_BusSand_App_UI_RewardStagePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RewardStagePanel$$.ctor
   void Dino_BusSand_App_UI_RewardStagePanel___ctor (Dino_BusSand_App_UI_RewardStagePanel_o* __this,
   const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_RewardStagePanel___ctor_232dcd8(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar3 = PTR_DAT_04cb8fe0;
  puVar2 = PTR_DAT_04cb8fd8;
  puVar1 = PTR_DAT_04cb8f98;
  if ((bRam0000000004f9c635 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8fe0);
    FUN_02132f7c(PTR_DAT_04cb8fd8);
    FUN_02132f7c(PTR_DAT_04cb8f98);
    bRam0000000004f9c635 = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_KeyValuePair_int__object_____ctor_3967844
            (uVar4,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x68),uVar4);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cb1698;
  puVar1 = PTR_DAT_04cb1690;
  if ((bRam0000000004f9bc9e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1698,0);
    FUN_02132f7c(PTR_DAT_04cb1690);
    bRam0000000004f9bc9e = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar4,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar4);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1;
  return auVar5;
}

