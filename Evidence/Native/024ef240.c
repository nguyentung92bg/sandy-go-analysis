/* IL2CPP: Dino.BusSand.View.SkidMarks$$OnDestroy
void Dino_BusSand_View_SkidMarks__OnDestroy (Dino_BusSand_View_SkidMarks_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.SkidMarks$$OnDestroy
   void Dino_BusSand_View_SkidMarks__OnDestroy (Dino_BusSand_View_SkidMarks_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_SkidMarks__OnDestroy_23ef240(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000004f9caaf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9caaf = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9cb08 == '\0') {
    FUN_02132f7c(PTR_DAT_04cbdce0);
    cRam0000000004f9cb08 = '\x01';
  }
  puVar2 = PTR_DAT_04cbdce0;
  uVar5 = **(undefined8 **)(*(long *)PTR_DAT_04cbdce0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,param_1,0);
  if ((uVar3 & 1) != 0) {
    if (cRam0000000004f9cb07 == '\0') {
      FUN_02132f7c(PTR_DAT_04cbdce0);
      cRam0000000004f9cb07 = '\x01';
    }
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = 0;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),0);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__Destroy_43c8114(uVar5,0);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x58);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar1 = PTR_DAT_04ca9ae8;
    uVar5 = 0;
    if ((bRam0000000004fa8603 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8,0);
      bRam0000000004fa8603 = 1;
      uVar5 = extraout_x1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      uVar5 = extraout_x1_00;
    }
    puVar1 = PTR_DAT_04cf6418;
    if ((bRam0000000004fa8602 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf6418,uVar5);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      bRam0000000004fa8602 = 1;
    }
    if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
      FUN_0216b4cc();
    }
    uVar5 = 0;
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(lVar4 + 0x10);
    }
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (pcRam0000000004fa8680 == (code *)0x0) {
      pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
    }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fa8680)(0,uVar5);
    return;
  }
  return;
}

