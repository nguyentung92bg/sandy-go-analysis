/* IL2CPP: Dino.BusSand.View.SandBoardView$$CellWorld
UnityEngine_Vector3_o Dino_BusSand_View_SandBoardView__CellWorld (Dino_BusSand_View_SandBoardView_o* __this, float x, float y, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.SandBoardView$$CellWorld
   UnityEngine_Vector3_o Dino_BusSand_View_SandBoardView__CellWorld
   (Dino_BusSand_View_SandBoardView_o* __this, float x, float y, const MethodInfo* method); */

undefined4
Dino_BusSand_View_SandBoardView__CellWorld_23e61a0(float param_1,float param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_38;
  undefined4 uStack_30;
  float afStack_2c [3];
  
  lVar1 = UnityEngine_Component__get_transform_43bcd18(param_3,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  afStack_2c[2] = (param_2 + 0.5) * *(float *)(param_3 + 100);
  afStack_2c[0] = (param_1 + 0.5) * *(float *)(param_3 + 0x68);
  afStack_2c[1] = 0.0;
  if ((bRam0000000004fa8b5d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7a00,0);
    bRam0000000004fa8b5d = 1;
  }
  uStack_30 = 0;
  uStack_38 = 0;
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x10);
    if (lVar1 != 0) {
      if (pcRam0000000004fa8c88 == (code *)0x0) {
        pcRam0000000004fa8c88 = (code *)FUN_02132f40(&UNK_00e5acb6);
      }
      (*pcRam0000000004fa8c88)(lVar1,afStack_2c,&uStack_38);
      return (undefined4)uStack_38;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

