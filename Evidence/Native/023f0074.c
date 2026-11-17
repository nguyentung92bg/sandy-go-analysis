/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$get_ScreenRect
UnityEngine_Rect_o Dino_BusSand_App_UI_HomeStage__get_ScreenRect (Dino_BusSand_App_UI_HomeStage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$get_ScreenRect
   UnityEngine_Rect_o Dino_BusSand_App_UI_HomeStage__get_ScreenRect
   (Dino_BusSand_App_UI_HomeStage_o* __this, const MethodInfo* method); */

float Dino_BusSand_App_UI_HomeStage__get_ScreenRect_22f0074(long param_1)

{
  float fVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    Dino_BusSand_App_UI_HomeBus__Corners_22e00cc
              (*(long *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0xa8),0);
    lVar5 = *(long *)(param_1 + 0xa8);
    if (lVar5 != 0) {
      if ((int)*(ulong *)(lVar5 + 0x18) < 1) {
        fVar1 = -3.4028235e+38;
        fVar9 = 3.4028235e+38;
      }
      else {
        uVar6 = 0;
        fVar3 = 3.4028235e+38;
        fVar4 = -3.4028235e+38;
        uVar2 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        pfVar7 = (float *)(lVar5 + 0x28);
        fVar1 = fVar4;
        fVar9 = fVar3;
        do {
          if (uVar2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_023f0194;
          fVar10 = pfVar7[-1];
          fVar11 = *pfVar7;
          fVar8 = (float)UnityEngine_Camera__WorldToScreenPoint_435c56c
                                   (pfVar7[-2],*(long *)(param_1 + 0x20),0);
          if (0.0 < fVar11) {
            if (fVar8 <= fVar9) {
              fVar9 = fVar8;
            }
            if (fVar1 <= fVar8) {
              fVar1 = fVar8;
            }
            if (fVar10 <= fVar3) {
              fVar3 = fVar10;
            }
            if (fVar4 <= fVar10) {
              fVar4 = fVar10;
            }
          }
          uVar2 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar6 = uVar6 + 1;
          pfVar7 = pfVar7 + 3;
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
      if (fVar1 <= fVar9) {
        fVar9 = (float)UnityEngine_Rect__get_zero_4365fe0(0);
      }
      return fVar9;
    }
  }
LAB_023f0194:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

