/* IL2CPP: Dino.BusSand.View.StageLayout$$get_SideLaneX
float Dino_BusSand_View_StageLayout__get_SideLaneX (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.StageLayout$$get_SideLaneX
   float Dino_BusSand_View_StageLayout__get_SideLaneX (const MethodInfo* method); */

float Dino_BusSand_View_StageLayout__get_SideLaneX_23e6b48(void)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  
  puVar1 = PTR_DAT_04cbc250;
  if ((bRam0000000004f9ca85 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc250);
    bRam0000000004f9ca85 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_View_RoadLoopConfig__get_Active_23e4040();
  if (lVar2 != 0) {
    fVar3 = 7.75;
    if (7.75 <= *(float *)(lVar2 + 0x18)) {
      fVar3 = *(float *)(lVar2 + 0x18);
    }
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

