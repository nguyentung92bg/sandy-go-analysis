/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$ScrollTo
void Dino_BusSand_App_UI_StreakEventPanel__ScrollTo (Dino_BusSand_App_UI_StreakEventPanel_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$ScrollTo
   void Dino_BusSand_App_UI_StreakEventPanel__ScrollTo (Dino_BusSand_App_UI_StreakEventPanel_o*
   __this, int32_t index, const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakEventPanel__ScrollTo_21c2070
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,
               long param_5,uint param_6)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((bRam0000000004f9bae4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cafcd8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9bae4 = 1;
  }
  UnityEngine_Canvas__ForceUpdateCanvases_4681650(0);
  if ((*(long *)(param_5 + 0x98) != 0) && (*(long *)(param_5 + 0x90) != 0)) {
    iVar1 = *(int *)(*(long *)(param_5 + 0x98) + 0x18);
    plVar2 = (long *)UnityEngine_Component__get_transform_43bcd18(*(long *)(param_5 + 0x90),0);
    if (plVar2 != (long *)0x0) {
      if (*plVar2 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4();
      }
      UnityEngine_RectTransform__get_rect_43cf450(plVar2,0);
      if (*(long *)(param_5 + 0x58) != 0) {
        UnityEngine_RectTransform__get_sizeDelta_43cf9ac(*(long *)(param_5 + 0x58),0);
        if ((param_2 <= param_4) || (iVar1 == 0)) {
          return;
        }
        plVar2 = *(long **)(param_5 + 0x90);
        if (plVar2 != (long *)0x0) {
          param_2 = param_2 - param_4;
          if ((int)(iVar1 - 1U) <= (int)param_6) {
            param_6 = iVar1 - 1U;
          }
          fVar3 = (float)(int)(iVar1 + ~param_6) * 350.0 + 175.0 + 10.0 + -175.0 + -10.0;
          fVar5 = param_2;
          if (fVar3 <= param_2) {
            fVar5 = fVar3;
          }
          fVar4 = 0.0;
          if (0.0 <= fVar3) {
            fVar4 = fVar5;
          }
                    /* WARNING: Could not recover jumptable at 0x047906f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x448))
                    (1.0 - fVar4 / param_2,plVar2,1,*(undefined8 *)(*plVar2 + 0x450));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

