/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$.ctor
void Dino_BusSand_App_UI_HomeAtelier___ctor (Dino_BusSand_App_UI_HomeAtelier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$.ctor
   void Dino_BusSand_App_UI_HomeAtelier___ctor (Dino_BusSand_App_UI_HomeAtelier_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_HomeAtelier___ctor_22daf4c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  puVar9 = PTR_DAT_04cb70c0;
  puVar8 = PTR_DAT_04cb70b8;
  puVar7 = PTR_DAT_04cb70b0;
  puVar6 = PTR_DAT_04cb70a8;
  puVar5 = PTR_DAT_04cb70a0;
  puVar4 = PTR_DAT_04cb7098;
  puVar3 = PTR_DAT_04cae330;
  puVar2 = PTR_DAT_04cad6e8;
  puVar1 = PTR_DAT_04caa1c8;
  if ((bRam0000000004f9c3e8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb70a0);
    FUN_02132f7c(PTR_DAT_04cb70b0);
    FUN_02132f7c(PTR_DAT_04cb7098);
    FUN_02132f7c(PTR_DAT_04cb70a8);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cb70c0);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cb70b8);
    FUN_02132f7c(PTR_DAT_04cae330);
    bRam0000000004f9c3e8 = 1;
  }
  uVar12 = _UNK_00e6ba50;
  uVar11 = _UNK_00e6a4f8;
  uVar10 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x68) = _UNK_00e6ba58;
  *(undefined8 *)(param_1 + 0x60) = uVar12;
  *(undefined8 *)(param_1 + 0x70) = uVar11;
  uVar11 = thunk_FUN_0216e89c(uVar10);
  System_Collections_Generic_Dictionary_int__object____ctor_343658c(uVar11,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x78) = uVar11;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x78),uVar11);
  uVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_int____ctor_3a2b7dc(uVar11,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x80) = uVar11;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x80),uVar11);
  uVar12 = NEON_fmov(0x3f800000,4);
  uVar11 = *(undefined8 *)puVar3;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x88) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x90) = uVar12;
  uVar11 = thunk_FUN_0216e89c(uVar11);
  System_Random___ctor_4840cc4(uVar11,0x44d,0);
  *(undefined8 *)(param_1 + 0xf0) = uVar11;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0xf0),uVar11);
  uVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar11,*(undefined8 *)puVar7)
  ;
  *(undefined8 *)(param_1 + 0x108) = uVar11;
  thunk_FUN_02134474(param_1 + 0x108,uVar11);
  uVar11 = _UNK_00e69698;
  uVar12 = *(undefined8 *)puVar8;
  *(undefined4 *)(param_1 + 0x120) = 0xc2c80000;
  *(undefined8 *)(param_1 + 0x118) = uVar11;
  uVar11 = thunk_FUN_0216e89c(uVar12);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar11,*(undefined8 *)puVar9);
  *(undefined8 *)(param_1 + 0x128) = uVar11;
  thunk_FUN_02134474(param_1 + 0x128,uVar11);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_1;
  return auVar13;
}

