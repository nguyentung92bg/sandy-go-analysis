/* IL2CPP: Dino.BusSand.View.StageLayout$$get_SideTurnRadius
float Dino_BusSand_View_StageLayout__get_SideTurnRadius (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.StageLayout$$get_SideTurnRadius
   float Dino_BusSand_View_StageLayout__get_SideTurnRadius (const MethodInfo* method); */

float Dino_BusSand_View_StageLayout__get_SideTurnRadius_23e6c3c(void)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  puVar1 = PTR_DAT_04cbc250;
  if ((bRam0000000004f9ca87 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc250);
    bRam0000000004f9ca87 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_View_RoadLoopConfig__get_Active_23e4040();
  if (lVar2 != 0) {
    fVar5 = *(float *)(lVar2 + 0x24);
    fVar3 = (float)Dino_BusSand_View_StageLayout__get_SideLaneX_23e6b48();
    fVar4 = fVar3 + -0.5;
    if (fVar5 <= fVar3 + -0.5) {
      fVar4 = fVar5;
    }
    fVar3 = _UNK_00e20390;
    if (_UNK_00e20390 <= fVar5) {
      fVar3 = fVar4;
    }
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

