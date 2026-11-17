/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$get_Visible
bool Dino_BusSand_Cheat_AutoPlayHand__get_Visible (Dino_BusSand_Cheat_AutoPlayHand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$get_Visible
   bool Dino_BusSand_Cheat_AutoPlayHand__get_Visible (Dino_BusSand_Cheat_AutoPlayHand_o* __this,
   const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_AutoPlayHand__get_Visible_233f470(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c675 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c675 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x28),0), lVar3 == 0
     )) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004fa8361 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf5bd0,0);
    bRam0000000004fa8361 = 1;
  }
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
    }
    if (pcRam0000000004fa8438 == (code *)0x0) {
      pcRam0000000004fa8438 = (code *)FUN_02132f40(&UNK_00e566fb);
    }
                    /* WARNING: Could not recover jumptable at 0x044c153c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*pcRam0000000004fa8438)(lVar4);
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

