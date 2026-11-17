/* IL2CPP: Dino.BusSand.View.StageLayout$$BehindFrame
bool Dino_BusSand_View_StageLayout__BehindFrame (Dino_BusSand_View_StageLayout_o* __this, UnityEngine_Vector3_o p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.StageLayout$$BehindFrame
   bool Dino_BusSand_View_StageLayout__BehindFrame (Dino_BusSand_View_StageLayout_o* __this,
   UnityEngine_Vector3_o p, const MethodInfo* method); */

bool Dino_BusSand_View_StageLayout__BehindFrame_23e8ac0
               (float param_1,undefined1 param_2 [16],float param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_4 + 0xc4) + _UNK_00e1ff60;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (ABS(param_1) < _UNK_00e1fe0c) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_3) && !NAN(fVar4)) {
      bVar1 = param_3 < fVar4;
      bVar2 = param_3 == fVar4;
      bVar3 = false;
    }
  }
  return !bVar2 && bVar1 == bVar3;
}

