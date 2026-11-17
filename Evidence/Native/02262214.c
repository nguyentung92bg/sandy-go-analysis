/* IL2CPP: Dino.BusSand.App.Tween.<>c__DisplayClass39_0$$<Rotate>b__0
void Dino_BusSand_App_Tween___c__DisplayClass39_0___Rotate_b__0 (Dino_BusSand_App_Tween___c__DisplayClass39_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Tween.<>c__DisplayClass39_0$$<Rotate>b__0
   void Dino_BusSand_App_Tween___c__DisplayClass39_0___Rotate_b__0
   (Dino_BusSand_App_Tween___c__DisplayClass39_0_o* __this, float k, const MethodInfo* method); */

void Dino_BusSand_App_Tween___c__DisplayClass39_0___Rotate_b__0_2162214(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b830 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b830 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  UnityEngine_Quaternion__SlerpUnclamped_43aef2c(*(undefined4 *)(param_1 + 0x18),0);
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (lVar3 != 0) {
      if ((bRam0000000004fa8b38 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7a00,0);
        bRam0000000004fa8b38 = 1;
      }
      if (lVar3 != 0) {
        lVar3 = *(long *)(lVar3 + 0x10);
        if (lVar3 != 0) {
          if (pcRam0000000004fa8bc0 == (code *)0x0) {
            pcRam0000000004fa8bc0 = (code *)FUN_02132f40(&UNK_00e2b2f8);
          }
          (*pcRam0000000004fa8bc0)(lVar3,&stack0xffffffffffffffd0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  else if (lVar3 != 0) {
    if ((bRam0000000004fa8b3a & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7a00,0);
      bRam0000000004fa8b3a = 1;
    }
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar3 + 0x10);
      if (lVar3 != 0) {
        if (pcRam0000000004fa8bd0 == (code *)0x0) {
          pcRam0000000004fa8bd0 = (code *)FUN_02132f40(&UNK_00e520b7);
        }
        (*pcRam0000000004fa8bd0)(lVar3,&stack0xffffffffffffffd0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

