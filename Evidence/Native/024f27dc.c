/* IL2CPP: Dino.BusSand.View.VehicleView$$get_BatchVisible
bool Dino_BusSand_View_VehicleView__get_BatchVisible (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$get_BatchVisible
   bool Dino_BusSand_View_VehicleView__get_BatchVisible (Dino_BusSand_View_VehicleView_o* __this,
   const MethodInfo* method); */

undefined8 Dino_BusSand_View_VehicleView__get_BatchVisible_23f27dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0xe0) == '\0') {
    return 0;
  }
  lVar1 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
  if (lVar1 != 0) {
    if ((bRam0000000004fa8362 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf5bd0,0);
      bRam0000000004fa8362 = 1;
    }
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar1,0);
      }
      if (pcRam0000000004fa8440 == (code *)0x0) {
        pcRam0000000004fa8440 = (code *)FUN_02132f40(&UNK_00e58523);
      }
                    /* WARNING: Could not recover jumptable at 0x044c15f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*pcRam0000000004fa8440)(lVar3);
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

