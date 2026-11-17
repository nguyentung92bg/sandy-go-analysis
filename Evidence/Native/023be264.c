/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager$$StopTween
void Dino_BusSand_App_UI_ContinueBottomPager__StopTween (Dino_BusSand_App_UI_ContinueBottomPager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager$$StopTween
   void Dino_BusSand_App_UI_ContinueBottomPager__StopTween
   (Dino_BusSand_App_UI_ContinueBottomPager_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ContinueBottomPager__StopTween_22be264(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x60);
  if (*plVar1 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,*plVar1,0);
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)plVar1 >> 0xc & 0x3f),
                   ((ulong)plVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  return;
}

