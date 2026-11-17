/* IL2CPP: Dino.BusSand.View.StageLayout$$get_SideTurnZ
float Dino_BusSand_View_StageLayout__get_SideTurnZ (Dino_BusSand_View_StageLayout_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.StageLayout$$get_SideTurnZ
   float Dino_BusSand_View_StageLayout__get_SideTurnZ (Dino_BusSand_View_StageLayout_o* __this,
   const MethodInfo* method); */

float Dino_BusSand_View_StageLayout__get_SideTurnZ_23e6d2c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  puVar1 = PTR_DAT_04cbc250;
  if ((bRam0000000004f9ca89 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc250);
    bRam0000000004f9ca89 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_View_RoadLoopConfig__get_Active_23e4040();
  if (lVar2 != 0) {
    fVar4 = *(float *)(lVar2 + 0x20);
    fVar5 = *(float *)(param_1 + 0xc4);
    fVar3 = (float)Dino_BusSand_View_StageLayout__get_EntryRadius_23e6bb0();
    fVar5 = fVar5 + fVar3;
    if (fVar4 <= fVar5) {
      fVar4 = fVar5;
    }
    return fVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

