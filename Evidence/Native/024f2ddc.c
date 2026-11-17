/* IL2CPP: Dino.BusSand.View.VehicleView$$get_BatchBlobVisible
bool Dino_BusSand_View_VehicleView__get_BatchBlobVisible (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$get_BatchBlobVisible
   bool Dino_BusSand_View_VehicleView__get_BatchBlobVisible (Dino_BusSand_View_VehicleView_o*
   __this, const MethodInfo* method); */

undefined8 Dino_BusSand_View_VehicleView__get_BatchBlobVisible_23f2ddc(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000004f9cae4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9cae4 = 1;
  }
  if (*(char *)(param_1 + 0xe0) != '\0') {
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar1 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar1 & 1) != 0) {
      if ((*(long *)(param_1 + 0x78) == 0) ||
         (lVar2 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x78),0),
         lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((bRam0000000004fa8362 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5bd0,0);
        bRam0000000004fa8362 = 1;
      }
      if (lVar2 != 0) {
        lVar3 = *(long *)(lVar2 + 0x10);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar2,0);
        }
        if (pcRam0000000004fa8440 == (code *)0x0) {
          pcRam0000000004fa8440 = (code *)FUN_02132f40(&UNK_00e58523);
        }
                    /* WARNING: Could not recover jumptable at 0x044c15f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*pcRam0000000004fa8440)(lVar3);
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return 0;
}

