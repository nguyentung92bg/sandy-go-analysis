/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass126_0$$<AnimateBoom>b__0
void Dino_BusSand_View_MechanicLayer___c__DisplayClass126_0___AnimateBoom_b__0 (Dino_BusSand_View_MechanicLayer___c__DisplayClass126_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass126_0$$<AnimateBoom>b__0
   void Dino_BusSand_View_MechanicLayer___c__DisplayClass126_0___AnimateBoom_b__0
   (Dino_BusSand_View_MechanicLayer___c__DisplayClass126_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_View_MechanicLayer___c__DisplayClass126_0___AnimateBoom_b__0_23d4f00
               (float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca19 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca19 = 1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (0.25 <= param_1) {
    fVar5 = 1.0;
    if (_UNK_00e20994 < param_1) {
      fVar5 = (float)Dino_BusSand_Easing__Evaluate_238b7d0
                               ((param_1 + _UNK_00e204e4) / _UNK_00e207cc,3,0);
      fVar5 = 1.0 - fVar5;
    }
  }
  else {
    fVar5 = (float)Dino_BusSand_Easing__Evaluate_238b7d0(param_1 * 4.0,5,0);
  }
  lVar4 = *(long *)(param_2 + 0x10);
  UnityEngine_Quaternion__AngleAxis_43af1e8(fVar5 * -75.0,0);
  if (lVar4 != 0) {
    if ((bRam0000000004fa8b38 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7a00,0);
      bRam0000000004fa8b38 = 1;
    }
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0x10);
      if (lVar4 != 0) {
        if (pcRam0000000004fa8bc0 == (code *)0x0) {
          pcRam0000000004fa8bc0 = (code *)FUN_02132f40(&UNK_00e2b2f8);
        }
        (*pcRam0000000004fa8bc0)(lVar4,&stack0xffffffffffffffd0);
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

