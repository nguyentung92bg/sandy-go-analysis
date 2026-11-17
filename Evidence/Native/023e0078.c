/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$get_Top
UnityEngine_Vector3_o Dino_BusSand_App_UI_HomeBus__get_Top (Dino_BusSand_App_UI_HomeBus_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$get_Top
   UnityEngine_Vector3_o Dino_BusSand_App_UI_HomeBus__get_Top (Dino_BusSand_App_UI_HomeBus_o*
   __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_HomeBus__get_Top_22e0078(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04cb71b0;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    if (*(float *)(param_1 + 0xa8) <= 0.0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      if ((bRam0000000004f9c482 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb71b0,0);
        bRam0000000004f9c482 = 1;
        uVar4 = extraout_x1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        uVar4 = extraout_x1_00;
      }
    }
    puVar1 = PTR_DAT_04ca9ae8;
    if ((bRam0000000004f9c47d & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cb71b0,uVar4);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      bRam0000000004f9c47d = 1;
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar3 & 1) == 0) {
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 != 0) goto UnityEngine_Transform__get_position_43d0e48;
    }
    else {
      lVar2 = *(long *)(lVar2 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_04cb71b0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (lVar2 != 0) {
        if ((bRam0000000004fa8b5d & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7a00,0);
          bRam0000000004fa8b5d = 1;
        }
        uStack_38 = 0;
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar2 = *(long *)(lVar2 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
        }
        if (pcRam0000000004fa8c88 == (code *)0x0) {
          pcRam0000000004fa8c88 = (code *)FUN_02132f40(&UNK_00e5acb6);
        }
        (*pcRam0000000004fa8c88)(lVar2,&stack0xffffffffffffffd4,&uStack_38);
        return (undefined4)uStack_38;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
UnityEngine_Transform__get_position_43d0e48:
  if ((bRam0000000004fa8b30 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7a00,0);
    bRam0000000004fa8b30 = 1;
  }
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
  if (pcRam0000000004fa8b80 == (code *)0x0) {
    pcRam0000000004fa8b80 = (code *)FUN_02132f40(&UNK_00e4daa9);
  }
  (*pcRam0000000004fa8b80)(lVar2,&stack0xffffffffffffffd0);
  return 0;
}

