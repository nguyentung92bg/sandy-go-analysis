/* IL2CPP: Dino.BusSand.View.MechanicLayer.LaneVis$$.ctor
void Dino_BusSand_View_MechanicLayer_LaneVis___ctor (Dino_BusSand_View_MechanicLayer_LaneVis_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer.LaneVis$$.ctor
   void Dino_BusSand_View_MechanicLayer_LaneVis___ctor (Dino_BusSand_View_MechanicLayer_LaneVis_o*
   __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_View_MechanicLayer_LaneVis___ctor_23d3834(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  puVar8 = PTR_DAT_04cbd710;
  puVar7 = PTR_DAT_04cbd708;
  puVar6 = PTR_DAT_04cb3c10;
  puVar5 = PTR_DAT_04caeb10;
  puVar4 = PTR_DAT_04caeb08;
  puVar3 = PTR_DAT_04cad728;
  puVar2 = PTR_DAT_04cad6f0;
  puVar1 = PTR_DAT_04caa1d0;
  if ((bRam0000000004f9ca06 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caeb10);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04cad6f0);
    FUN_02132f7c(PTR_DAT_04cbd710);
    FUN_02132f7c(PTR_DAT_04caeb08);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04cbd708);
    FUN_02132f7c(PTR_DAT_04cad728);
    bRam0000000004f9ca06 = 1;
  }
  uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_Vector3____ctor_3af944c(uVar9,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x10),uVar9);
  uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar9,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x18) = uVar9;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar9);
  uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_float____ctor_3ac202c(uVar9,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x20) = uVar9;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),uVar9);
  uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar9,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x50) = uVar9;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x50),uVar9);
  *(undefined4 *)(param_1 + 100) = 0xbf800000;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_1;
  return auVar10;
}

