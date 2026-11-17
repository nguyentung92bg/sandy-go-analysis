/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$Hide
void Dino_BusSand_Cheat_AutoPlayHand__Hide (Dino_BusSand_Cheat_AutoPlayHand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$Hide
   void Dino_BusSand_Cheat_AutoPlayHand__Hide (Dino_BusSand_Cheat_AutoPlayHand_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_AutoPlayHand__Hide_233f754(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c676 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c676 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x28),0), lVar4 != 0
     )) {
    uVar2 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar4,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x28),0),
       lVar4 != 0)) {
      if ((bRam0000000004fa8360 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
        bRam0000000004fa8360 = 1;
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar5 = *(long *)(lVar4 + 0x10);
      if (lVar5 != 0) {
        if (pcRam0000000004fa8430 == (code *)0x0) {
          pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
        }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8430)(lVar5,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

