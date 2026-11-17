/* IL2CPP: Dino.BusSand.View.GameView$$OnDisable
void Dino_BusSand_View_GameView__OnDisable (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$OnDisable
   void Dino_BusSand_View_GameView__OnDisable (Dino_BusSand_View_GameView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_GameView__OnDisable_23ab300(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0.0 < *(float *)(param_1 + 0x268)) {
    fVar1 = (float)UnityEngine_Time__get_timeScale_43cd6b0(0);
    fVar5 = *(float *)(param_1 + 0x268);
    if (cRam0000000004f9c305 == '\0') {
      FUN_02132f7c(PTR_DAT_04cb5bf8);
      cRam0000000004f9c305 = '\x01';
    }
    fVar3 = ABS(fVar5);
    fVar2 = ABS(fVar1);
    if (ABS(fVar1) <= fVar3) {
      fVar2 = fVar3;
    }
    fVar4 = **(float **)(*(long *)PTR_DAT_04cb5bf8 + 0xb8) * 8.0;
    fVar3 = fVar2 * _UNK_00e20900;
    if (fVar2 * _UNK_00e20900 <= fVar4) {
      fVar3 = fVar4;
    }
    if (ABS(fVar5 - fVar1) < fVar3) {
      UnityEngine_Time__set_timeScale_43cd6d8(*(undefined4 *)(param_1 + 0x26c),0);
    }
  }
  *(undefined4 *)(param_1 + 0x268) = 0;
  return;
}

