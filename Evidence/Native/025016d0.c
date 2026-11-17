/* IL2CPP: Dino.BusSand.View.VehicleView$$OnDestroy
void Dino_BusSand_View_VehicleView__OnDestroy (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$OnDestroy
   void Dino_BusSand_View_VehicleView__OnDestroy (Dino_BusSand_View_VehicleView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_VehicleView__OnDestroy_24016d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar5;
  
  if ((bRam0000000004f9cb05 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc2c8);
    bRam0000000004f9cb05 = 1;
  }
  puVar2 = PTR_DAT_04cbc2c8;
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(char *)(param_1 + 0xe0) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_04cbc2c8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9cb0a == '\0') {
      FUN_02132f7c(PTR_DAT_04cbc2c8);
      cRam0000000004f9cb0a = '\x01';
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9cb0a == '\0') {
        FUN_02132f7c(PTR_DAT_04cbc2c8);
        cRam0000000004f9cb0a = '\x01';
      }
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_View_VehicleBatch__Unregister_23efb2c(lVar3,param_1);
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 200);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 200);
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
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(lVar3 + 0x10);
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

