/* IL2CPP: Dino.BusSand.Tween.<>c__DisplayClass29_0$$<Move>b__0
void Dino_BusSand_Tween___c__DisplayClass29_0___Move_b__0 (Dino_BusSand_Tween___c__DisplayClass29_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Tween.<>c__DisplayClass29_0$$<Move>b__0
   void Dino_BusSand_Tween___c__DisplayClass29_0___Move_b__0
   (Dino_BusSand_Tween___c__DisplayClass29_0_o* __this, float k, const MethodInfo* method); */

void Dino_BusSand_Tween___c__DisplayClass29_0___Move_b__0_238c90c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_30;
  float fStack_28;
  float fStack_24;
  
  puVar1 = PTR_DAT_04ca9ae8;
  uStack_30 = param_1;
  if ((bRam0000000004f9c8a9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c8a9 = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar3 = *(long *)(param_2 + 0x10);
  fVar5 = (float)*(undefined8 *)(param_2 + 0x18);
  fVar6 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  fVar8 = (float)uStack_30;
  fVar5 = fVar5 + ((float)*(undefined8 *)(param_2 + 0x24) - fVar5) * fVar8;
  fVar6 = fVar6 + ((float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20) - fVar6) * fVar8;
  fVar7 = *(float *)(param_2 + 0x20) +
          (*(float *)(param_2 + 0x2c) - *(float *)(param_2 + 0x20)) * fVar8;
  if (*(char *)(param_2 + 0x30) == '\0') {
    if (lVar3 != 0) {
      uStack_30 = CONCAT44(fVar5,fVar8);
      _fStack_28 = CONCAT44(fVar7,fVar6);
      if ((bRam0000000004fa8b31 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7a00,0);
        bRam0000000004fa8b31 = 1;
      }
      if (lVar3 != 0) {
        lVar3 = *(long *)(lVar3 + 0x10);
        if (lVar3 != 0) {
          if (pcRam0000000004fa8b88 == (code *)0x0) {
            pcRam0000000004fa8b88 = (code *)FUN_02132f40(&UNK_00e68510);
          }
          (*pcRam0000000004fa8b88)(lVar3,(long)&uStack_30 + 4);
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
    uStack_30 = CONCAT44(fVar5,fVar8);
    _fStack_28 = CONCAT44(fVar7,fVar6);
    if ((bRam0000000004fa8b33 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7a00,0);
      bRam0000000004fa8b33 = 1;
    }
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar3 + 0x10);
      if (lVar3 != 0) {
        if (pcRam0000000004fa8b98 == (code *)0x0) {
          pcRam0000000004fa8b98 = (code *)FUN_02132f40(&UNK_00e52061);
        }
        (*pcRam0000000004fa8b98)(lVar3,(long)&uStack_30 + 4);
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

