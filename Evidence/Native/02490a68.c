/* IL2CPP: Dino.BusSand.View.ArtPackData$$.ctor
void Dino_BusSand_View_ArtPackData___ctor (Dino_BusSand_View_ArtPackData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.ArtPackData$$.ctor
   void Dino_BusSand_View_ArtPackData___ctor (Dino_BusSand_View_ArtPackData_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_ArtPackData___ctor_2390a68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 in_s3;
  
  puVar9 = PTR_DAT_04cbc068;
  puVar8 = PTR_DAT_04cbc060;
  puVar7 = PTR_DAT_04cbc058;
  puVar6 = PTR_DAT_04cbbfc8;
  puVar5 = PTR_DAT_04cbbfc0;
  if ((bRam0000000004f9c8c9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc068);
    FUN_02132f7c(PTR_DAT_04cbc060);
    FUN_02132f7c(PTR_DAT_04cbbfc8);
    FUN_02132f7c(PTR_DAT_04cbbfc0);
    FUN_02132f7c(PTR_DAT_04cbc058);
    bRam0000000004f9c8c9 = 1;
  }
  uVar4 = _UNK_00e6be68;
  uVar3 = _UNK_00e6be60;
  uVar2 = _UNK_00e6aeb8;
  uVar12 = _UNK_00e6aeb0;
  uVar1 = _UNK_00e6ae08;
  uVar11 = _UNK_00e6ae00;
  uVar10 = *(undefined8 *)puVar7;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = uVar11;
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar12;
  uVar11 = thunk_FUN_0216e89c(uVar10);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar11,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x50) = uVar11;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x50),uVar11);
  uVar11 = _UNK_00e6a730;
  uVar14 = 0;
  uVar15 = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x41900000;
  *(undefined8 *)(param_1 + 0x58) = uVar11;
  uVar13 = UnityEngine_Quaternion__Internal_FromEulerRad_43af004(_UNK_00e2006c,0);
  *(undefined4 *)(param_1 + 100) = uVar13;
  *(undefined4 *)(param_1 + 0x68) = uVar14;
  uVar11 = _UNK_00e6a738;
  uVar12 = *(undefined8 *)puVar9;
  *(undefined4 *)(param_1 + 0x6c) = uVar15;
  *(undefined4 *)(param_1 + 0x70) = in_s3;
  *(undefined8 *)(param_1 + 0x74) = uVar11;
  uVar1 = _UNK_00e6b368;
  uVar11 = _UNK_00e6b360;
  *(undefined4 *)(param_1 + 0x8c) = 0x3f333333;
  *(undefined8 *)(param_1 + 0x84) = uVar1;
  *(undefined8 *)(param_1 + 0x7c) = uVar11;
  uVar11 = FUN_02133068(uVar12,3);
  *(undefined8 *)(param_1 + 200) = uVar11;
  thunk_FUN_02134474();
  uVar11 = FUN_02133068(*(undefined8 *)puVar9,3);
  *(undefined8 *)(param_1 + 0xd0) = uVar11;
  thunk_FUN_02134474();
  uVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar11,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x108) = uVar11;
  thunk_FUN_02134474(param_1 + 0x108,uVar11);
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  puVar5 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa8588 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa8588 = 1;
  }
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  UnityEngine_Object___ctor_43c663c(param_1,0);
  if (pcRam0000000004fa8590 == (code *)0x0) {
    pcRam0000000004fa8590 = (code *)FUN_02132f40(&UNK_00e3b9b1);
  }
                    /* WARNING: Could not recover jumptable at 0x044c4b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000004fa8590)(param_1);
  return;
}

