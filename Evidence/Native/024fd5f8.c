/* IL2CPP: Dino.BusSand.View.VehicleView$$SetEscapable
void Dino_BusSand_View_VehicleView__SetEscapable (Dino_BusSand_View_VehicleView_o* __this, bool can, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$SetEscapable
   void Dino_BusSand_View_VehicleView__SetEscapable (Dino_BusSand_View_VehicleView_o* __this, bool
   can, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__SetEscapable_23fd5f8(long param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (((*(char *)(param_1 + 0x30) != '\0') ||
      (*(byte *)(param_1 + 0x13c) = param_2 & 1, *(char *)(param_1 + 0xe1) != '\0')) ||
     (*(char *)(param_1 + 0xe0) != '\0')) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x70);
  lVar1 = Dino_BusSand_View_VehicleView__ArrowMaterial_23facec(param_1,param_2 & 1);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004fa68bc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf67a0,lVar1,0);
    FUN_02132f7c(PTR_DAT_04cf6618);
    bRam0000000004fa68bc = 1;
  }
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar2,0);
    }
    if (*(long *)(*(long *)PTR_DAT_04cf6618 + 0x38) == 0) {
      FUN_0216b4cc();
    }
    uVar4 = 0;
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x10);
    }
    if (pcRam0000000004fa68f0 == (code *)0x0) {
      pcRam0000000004fa68f0 = (code *)FUN_02132f40(&UNK_00e421fa);
    }
                    /* WARNING: Could not recover jumptable at 0x044733d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fa68f0)(lVar3,uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

