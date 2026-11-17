/* IL2CPP: Dino.BusSand.View.PicturePaper$$TipAt
UnityEngine_Vector2_o Dino_BusSand_View_PicturePaper__TipAt (Dino_BusSand_View_PicturePaper_o* __this, float drawn01, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PicturePaper$$TipAt
   UnityEngine_Vector2_o Dino_BusSand_View_PicturePaper__TipAt (Dino_BusSand_View_PicturePaper_o*
   __this, float drawn01, const MethodInfo* method); */

float Dino_BusSand_View_PicturePaper__TipAt_23dc770(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = 0.5;
  lVar3 = *(long *)(param_2 + 0x28);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) {
    uVar4 = (uint)*(long *)(lVar3 + 0x18);
    fVar7 = 1.0;
    if (param_1 <= 1.0) {
      fVar7 = param_1;
    }
    fVar5 = 0.0;
    if (0.0 <= param_1) {
      fVar5 = fVar7;
    }
    fVar5 = fVar5 * (float)(int)(uVar4 - 1);
    uVar1 = 0x80000000;
    if (fVar5 != INFINITY) {
      uVar1 = (int)fVar5;
    }
    uVar2 = uVar4 - 2;
    if ((int)uVar1 <= (int)(uVar4 - 2)) {
      uVar2 = uVar1;
    }
    if ((int)uVar2 < 0) {
      if (uVar4 == 0) goto LAB_024dc838;
      fVar7 = (float)*(undefined8 *)(lVar3 + 0x20);
    }
    else {
      if ((uVar4 <= uVar2) || (uVar4 <= uVar2 + 1)) {
LAB_024dc838:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      fVar5 = fVar5 - (float)(int)uVar2;
      fVar7 = 1.0;
      if (fVar5 <= 1.0) {
        fVar7 = fVar5;
      }
      fVar6 = 0.0;
      if (0.0 <= fVar5) {
        fVar6 = fVar7;
      }
      fVar7 = (float)*(undefined8 *)(lVar3 + 0x20 + (ulong)uVar2 * 8);
      fVar7 = fVar7 + ((float)*(undefined8 *)(lVar3 + 0x20 + (long)(int)(uVar2 + 1) * 8) - fVar7) *
                      fVar6;
    }
  }
  return fVar7;
}

