/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass118_0$$<OnShift>b__0
void Dino_BusSand_View_MechanicLayer___c__DisplayClass118_0___OnShift_b__0 (Dino_BusSand_View_MechanicLayer___c__DisplayClass118_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass118_0$$<OnShift>b__0
   void Dino_BusSand_View_MechanicLayer___c__DisplayClass118_0___OnShift_b__0
   (Dino_BusSand_View_MechanicLayer___c__DisplayClass118_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_View_MechanicLayer___c__DisplayClass118_0___OnShift_b__0_23d45a8
               (undefined4 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca11 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca11 = 1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)(param_2 + 0x10);
  Dino_BusSand_Easing__Evaluate_238b7d0(param_1,5,0);
  UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004fa8b3a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7a00,0);
    bRam0000000004fa8b3a = 1;
  }
  if (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 != 0) {
      if (pcRam0000000004fa8bd0 == (code *)0x0) {
        pcRam0000000004fa8bd0 = (code *)FUN_02132f40(&UNK_00e520b7);
      }
      (*pcRam0000000004fa8bd0)(lVar4,&stack0xffffffffffffffd0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

