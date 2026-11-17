/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$.ctor
void Dino_BusSand_App_Gameplay_GameplayController___ctor (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$.ctor
   void Dino_BusSand_App_Gameplay_GameplayController___ctor
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Gameplay_GameplayController___ctor_229fc04(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar3 = PTR_DAT_04caa008;
  puVar2 = PTR_DAT_04ca9ff8;
  puVar1 = PTR_DAT_04ca9c20;
  if ((bRam0000000004f9c251 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa008);
    FUN_02132f7c(PTR_DAT_04ca9ff8);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    bRam0000000004f9c251 = 1;
  }
  uVar4 = FUN_02133068(*(undefined8 *)puVar1,0);
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  thunk_FUN_02134474();
  uVar4 = *(undefined8 *)puVar2;
  *(undefined1 *)(param_1 + 0x58) = 1;
  uVar4 = thunk_FUN_0216e89c(uVar4);
  System_Collections_Generic_HashSet_object____ctor_37e5358(uVar4,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0xa8),uVar4);
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

