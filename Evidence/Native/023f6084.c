/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$HeapTop
UnityEngine_Vector3_o Dino_BusSand_App_UI_HomeToonRig__HeapTop (Dino_BusSand_App_UI_HomeToonRig_o* __this, float fill, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$HeapTop
   UnityEngine_Vector3_o Dino_BusSand_App_UI_HomeToonRig__HeapTop
   (Dino_BusSand_App_UI_HomeToonRig_o* __this, float fill, const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_HomeToonRig__HeapTop_22f6084(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04cb71b0;
  if ((bRam0000000004f9c482 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb71b0);
    bRam0000000004f9c482 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c47d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb71b0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c47d = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != 0) {
      if ((bRam0000000004fa8b30 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7a00,0);
        bRam0000000004fa8b30 = 1;
      }
      if (lVar3 != 0) {
        lVar3 = *(long *)(lVar3 + 0x10);
        if (lVar3 != 0) {
          if (pcRam0000000004fa8b80 == (code *)0x0) {
            pcRam0000000004fa8b80 = (code *)FUN_02132f40(&UNK_00e4daa9);
          }
          (*pcRam0000000004fa8b80)(lVar3,&stack0xffffffffffffffd0);
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_04cb71b0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (lVar3 != 0) {
      if ((bRam0000000004fa8b5d & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7a00,0);
        bRam0000000004fa8b5d = 1;
      }
      uStack_38 = 0;
      if (lVar3 != 0) {
        lVar3 = *(long *)(lVar3 + 0x10);
        if (lVar3 != 0) {
          if (pcRam0000000004fa8c88 == (code *)0x0) {
            pcRam0000000004fa8c88 = (code *)FUN_02132f40(&UNK_00e5acb6);
          }
          (*pcRam0000000004fa8c88)(lVar3,&stack0xffffffffffffffd4,&uStack_38);
          return (undefined4)uStack_38;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

