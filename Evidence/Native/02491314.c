/* IL2CPP: Dino.BusSand.View.ChainRig.Hitch$$.ctor
void Dino_BusSand_View_ChainRig_Hitch___ctor (Dino_BusSand_View_ChainRig_Hitch_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.ChainRig.Hitch$$.ctor
   void Dino_BusSand_View_ChainRig_Hitch___ctor (Dino_BusSand_View_ChainRig_Hitch_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_View_ChainRig_Hitch___ctor_2391314(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = PTR_DAT_04cb3c10;
  puVar3 = PTR_DAT_04caeb10;
  puVar2 = PTR_DAT_04caeb08;
  puVar1 = PTR_DAT_04caa1d0;
  if ((bRam0000000004f9c8d7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caeb10);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04caeb08);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    bRam0000000004f9c8d7 = 1;
  }
  uVar5 = *(undefined8 *)puVar1;
  *(undefined4 *)(param_1 + 0x54) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x30) = 0x3f74bc6a;
  uVar5 = thunk_FUN_0216e89c(uVar5);
  System_Collections_Generic_List_Vector3____ctor_3af944c(uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x68),uVar5);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_float____ctor_3ac202c(uVar5,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x70),uVar5);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_float____ctor_3ac202c(uVar5,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x78),uVar5);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

