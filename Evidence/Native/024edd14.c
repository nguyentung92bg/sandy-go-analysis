/* IL2CPP: Dino.BusSand.View.SuctionBeams$$OnDestroy
void Dino_BusSand_View_SuctionBeams__OnDestroy (Dino_BusSand_View_SuctionBeams_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.SuctionBeams$$OnDestroy
   void Dino_BusSand_View_SuctionBeams__OnDestroy (Dino_BusSand_View_SuctionBeams_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_SuctionBeams__OnDestroy_23edd14(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9caa8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9caa8 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__Destroy_43c8114(uVar4,0);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar1 = PTR_DAT_04ca9ae8;
    uVar4 = 0;
    if ((bRam0000000004fa8603 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8,0);
      bRam0000000004fa8603 = 1;
      uVar4 = extraout_x1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      uVar4 = extraout_x1_00;
    }
    puVar1 = PTR_DAT_04cf6418;
    if ((bRam0000000004fa8602 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf6418,uVar4);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      bRam0000000004fa8602 = 1;
    }
    if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
      FUN_0216b4cc();
    }
    uVar4 = 0;
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x10);
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
  return;
}

