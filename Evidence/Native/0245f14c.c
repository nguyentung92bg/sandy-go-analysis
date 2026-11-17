/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$get_Scale
float Dino_BusSand_Cheat_CheatManager__get_Scale (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$get_Scale
   float Dino_BusSand_Cheat_CheatManager__get_Scale (Dino_BusSand_Cheat_CheatManager_o* __this,
   const MethodInfo* method); */

float Dino_BusSand_Cheat_CheatManager__get_Scale_235f14c(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = UnityEngine_Screen__get_width_436a6a0(0);
  iVar2 = UnityEngine_Screen__get_height_436a6c8(0);
  fVar3 = (float)iVar1 / 540.0;
  if ((float)iVar2 / 960.0 <= (float)iVar1 / 540.0) {
    fVar3 = (float)iVar2 / 960.0;
  }
  fVar5 = 3.0;
  if (fVar3 <= 3.0) {
    fVar5 = fVar3;
  }
  fVar4 = _UNK_00e20094;
  if (_UNK_00e20094 <= fVar3) {
    fVar4 = fVar5;
  }
  return fVar4;
}

