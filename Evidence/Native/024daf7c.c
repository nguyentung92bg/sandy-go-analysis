/* IL2CPP: Dino.BusSand.View.PicturePaper$$ColorAt
UnityEngine_Color_o Dino_BusSand_View_PicturePaper__ColorAt (Dino_BusSand_View_PicturePaper_o* __this, UnityEngine_Vector2_o uv, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PicturePaper$$ColorAt
   UnityEngine_Color_o Dino_BusSand_View_PicturePaper__ColorAt (Dino_BusSand_View_PicturePaper_o*
   __this, UnityEngine_Vector2_o uv, const MethodInfo* method); */

undefined4 Dino_BusSand_View_PicturePaper__ColorAt_23daf7c(float param_1,float param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  
  uVar10 = 0;
  lVar9 = *(long *)(param_3 + 0x30);
  if ((lVar9 != 0) && (lVar8 = *(long *)(param_3 + 0x38), lVar8 != 0)) {
    iVar4 = *(int *)(param_3 + 0x20);
    iVar7 = *(int *)(param_3 + 0x24) + -1;
    param_2 = param_2 * (float)*(int *)(param_3 + 0x24);
    iVar2 = -0x80000000;
    if (param_1 * (float)iVar4 != INFINITY) {
      iVar2 = (int)(param_1 * (float)iVar4);
    }
    iVar3 = iVar2;
    if (iVar4 + -1 <= iVar2) {
      iVar3 = iVar4 + -1;
    }
    iVar1 = 0;
    if (-1 < iVar2) {
      iVar1 = iVar3;
    }
    iVar2 = -0x80000000;
    if (param_2 != INFINITY) {
      iVar2 = (int)param_2;
    }
    iVar3 = iVar2;
    if (iVar7 <= iVar2) {
      iVar3 = iVar7;
    }
    iVar7 = 0;
    if (-1 < iVar2) {
      iVar7 = iVar3;
    }
    uVar6 = iVar1 + iVar7 * iVar4;
    if (*(uint *)(lVar9 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    bVar5 = *(byte *)(lVar9 + (int)uVar6 + 0x20);
    if ((bVar5 != 0) && ((int)(uint)bVar5 < *(int *)(lVar8 + 0x18))) {
      uVar10 = *(undefined4 *)(lVar8 + (ulong)bVar5 * 0x10 + 0x20);
    }
  }
  return uVar10;
}

