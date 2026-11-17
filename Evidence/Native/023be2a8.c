/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager$$OnBeginDrag
void Dino_BusSand_App_UI_ContinueBottomPager__OnBeginDrag (Dino_BusSand_App_UI_ContinueBottomPager_o* __this, UnityEngine_EventSystems_PointerEventData_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager$$OnBeginDrag
   void Dino_BusSand_App_UI_ContinueBottomPager__OnBeginDrag
   (Dino_BusSand_App_UI_ContinueBottomPager_o* __this, UnityEngine_EventSystems_PointerEventData_o*
   e, const MethodInfo* method); */

void Dino_BusSand_App_UI_ContinueBottomPager__OnBeginDrag_22be2a8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c321 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c321 = 1;
  }
  *(undefined1 *)(param_1 + 0x50) = 1;
  Dino_BusSand_App_UI_ContinueBottomPager__StopTween_22be264(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar4 = (float)UnityEngine_UI_ScrollRect__get_horizontalNormalizedPosition_469048c
                             (*(long *)(param_1 + 0x38),0);
    fVar6 = 1.0;
    if (fVar4 <= 1.0) {
      fVar6 = fVar4;
    }
    fVar5 = 0.0;
    if (0.0 <= fVar4) {
      fVar5 = fVar6;
    }
    *(float *)(param_1 + 0x54) = fVar5;
  }
  return;
}

