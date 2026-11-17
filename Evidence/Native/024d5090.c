/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass126_0$$<AnimateBoom>b__1
void Dino_BusSand_View_MechanicLayer___c__DisplayClass126_0___AnimateBoom_b__1 (Dino_BusSand_View_MechanicLayer___c__DisplayClass126_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass126_0$$<AnimateBoom>b__1
   void Dino_BusSand_View_MechanicLayer___c__DisplayClass126_0___AnimateBoom_b__1
   (Dino_BusSand_View_MechanicLayer___c__DisplayClass126_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer___c__DisplayClass126_0___AnimateBoom_b__1_23d5090(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca1a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca1a = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uStack_30 = *(undefined4 *)(param_1 + 0x24);
  uStack_2c = *(undefined4 *)(param_1 + 0x28);
  uStack_28 = *(undefined4 *)(param_1 + 0x2c);
  uStack_24 = *(undefined4 *)(param_1 + 0x30);
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
      (*pcRam0000000004fa8bc0)(lVar3,&uStack_30);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

