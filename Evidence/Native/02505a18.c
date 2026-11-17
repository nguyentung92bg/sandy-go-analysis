/* IL2CPP: Dino.BusSand.View.WorldView$$get_BoardBaseZ
float Dino_BusSand_View_WorldView__get_BoardBaseZ (Dino_BusSand_View_WorldView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.WorldView$$get_BoardBaseZ
   float Dino_BusSand_View_WorldView__get_BoardBaseZ (Dino_BusSand_View_WorldView_o* __this, const
   MethodInfo* method); */

float Dino_BusSand_View_WorldView__get_BoardBaseZ_2405a18(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    return *(float *)(lVar1 + 0x7c) - *(float *)(lVar1 + 0x88) * *(float *)(lVar1 + 0x6c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

