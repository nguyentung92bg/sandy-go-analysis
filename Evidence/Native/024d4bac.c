/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass123_1$$<OnLiftSpent>b__0
void Dino_BusSand_View_MechanicLayer___c__DisplayClass123_1___OnLiftSpent_b__0 (Dino_BusSand_View_MechanicLayer___c__DisplayClass123_1_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass123_1$$<OnLiftSpent>b__0
   void Dino_BusSand_View_MechanicLayer___c__DisplayClass123_1___OnLiftSpent_b__0
   (Dino_BusSand_View_MechanicLayer___c__DisplayClass123_1_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_View_MechanicLayer___c__DisplayClass123_1___OnLiftSpent_b__0_23d4bac
               (undefined4 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000004f9ca16 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca16 = 1;
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar1 = UnityEngine_Object__op_Inequality_43c8dec(uVar2,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(long *)(param_2 + 0x20) != 0) {
      lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0x10);
      Dino_BusSand_Easing__Evaluate_238b7d0(param_1,0xb,0);
      if (lVar3 != 0) {
        if ((bRam0000000004fa8b3e & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7a00,0);
          bRam0000000004fa8b3e = 1;
        }
        if (lVar3 != 0) {
          lVar3 = *(long *)(lVar3 + 0x10);
          if (lVar3 != 0) {
            if (pcRam0000000004fa8bf0 == (code *)0x0) {
              pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
            }
            (*pcRam0000000004fa8bf0)(lVar3,&stack0xffffffffffffffd4);
            return;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

