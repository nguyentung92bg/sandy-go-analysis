/* IL2CPP: Dino.BusSand.App.UI.TipsToast.<>c__DisplayClass6_0$$<Leave>b__1
void Dino_BusSand_App_UI_TipsToast___c__DisplayClass6_0___Leave_b__1 (Dino_BusSand_App_UI_TipsToast___c__DisplayClass6_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.TipsToast.<>c__DisplayClass6_0$$<Leave>b__1
   void Dino_BusSand_App_UI_TipsToast___c__DisplayClass6_0___Leave_b__1
   (Dino_BusSand_App_UI_TipsToast___c__DisplayClass6_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_TipsToast___c__DisplayClass6_0___Leave_b__1_22bdb04(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_04cabb08;
  if ((bRam0000000004f9c319 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabb08);
    bRam0000000004f9c319 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar6,uVar7,0);
  if ((uVar4 & 1) != 0) {
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
    *puVar5 = 0;
    thunk_FUN_02134474(puVar5,0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04ca9ae8;
    uVar6 = 0;
    if ((bRam0000000004fa8603 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8,0);
      bRam0000000004fa8603 = 1;
      uVar6 = extraout_x1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      uVar6 = extraout_x1_00;
    }
    puVar2 = PTR_DAT_04cf6418;
    if ((bRam0000000004fa8602 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf6418,uVar6);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      bRam0000000004fa8602 = 1;
    }
    if (*(long *)(*(long *)puVar2 + 0x38) == 0) {
      FUN_0216b4cc();
    }
    uVar6 = 0;
    if (lVar3 != 0) {
      uVar6 = *(undefined8 *)(lVar3 + 0x10);
    }
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (pcRam0000000004fa8680 == (code *)0x0) {
      pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
    }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fa8680)(0,uVar6);
    return;
  }
  return;
}

