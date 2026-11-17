/* IL2CPP: Dino.BusSand.View.WorldView$$get_CounterWorld
UnityEngine_Vector3_o Dino_BusSand_View_WorldView__get_CounterWorld (Dino_BusSand_View_WorldView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.WorldView$$get_CounterWorld
   UnityEngine_Vector3_o Dino_BusSand_View_WorldView__get_CounterWorld
   (Dino_BusSand_View_WorldView_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_View_WorldView__get_CounterWorld_240ac64(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_38;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  lVar1 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  lVar2 = *(long *)(param_1 + 0x20);
  if ((lVar2 == 0) || (lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uStack_24 = *(undefined4 *)(lVar2 + 0xf0);
  fStack_2c = (*(float *)(lVar2 + 0xd4) + *(float *)(lVar2 + 0xd8)) * 0.5;
  uStack_28 = _UNK_00e2043c;
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
      (*pcRam0000000004fa8c88)(lVar1,&fStack_2c,&uStack_38);
      return (undefined4)uStack_38;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

