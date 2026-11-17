/* IL2CPP: Dino.BusSand.View.PicturePaper$$Free
void Dino_BusSand_View_PicturePaper__Free (UnityEngine_Object_o* o, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PicturePaper$$Free
   void Dino_BusSand_View_PicturePaper__Free (UnityEngine_Object_o* o, const MethodInfo* method); */

void Dino_BusSand_View_PicturePaper__Free_23dc8c0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca46 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca46 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Application__get_isPlaying_4351eec(0);
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  if ((uVar3 & 1) != 0) {
    if (iVar1 == 0) {
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04ca9ae8;
    uVar4 = 0;
    if ((bRam0000000004fa8603 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8,0);
      bRam0000000004fa8603 = 1;
      uVar4 = extraout_x1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      uVar4 = extraout_x1_00;
    }
    puVar2 = PTR_DAT_04cf6418;
    if ((bRam0000000004fa8602 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf6418,uVar4);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      bRam0000000004fa8602 = 1;
    }
    if (*(long *)(*(long *)puVar2 + 0x38) == 0) {
      FUN_0216b4cc();
    }
    uVar4 = 0;
    if (param_1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
    }
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (pcRam0000000004fa8680 == (code *)0x0) {
      pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
    }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fa8680)(0,uVar4);
    return;
  }
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa8605 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa8605 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cf6418;
  if ((bRam0000000004fa8604 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf6418);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004fa8604 = 1;
  }
  if (*(long *)(*(long *)puVar2 + 0x38) == 0) {
    FUN_0216b4cc();
  }
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
  }
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (pcRam0000000004fa8688 == (code *)0x0) {
    pcRam0000000004fa8688 = (code *)FUN_02132f40(&UNK_00e2fee9);
  }
                    /* WARNING: Could not recover jumptable at 0x044c8218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000004fa8688)(uVar4,0);
  return;
}

