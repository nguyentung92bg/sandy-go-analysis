/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$ClampHorizontal
void Dino_BusSand_App_UI_GuidePanel__ClampHorizontal (Dino_BusSand_App_UI_GuidePanel_o* __this, UnityEngine_RectTransform_o* rt, float halfWidth, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$ClampHorizontal
   void Dino_BusSand_App_UI_GuidePanel__ClampHorizontal (Dino_BusSand_App_UI_GuidePanel_o* __this,
   UnityEngine_RectTransform_o* rt, float halfWidth, const MethodInfo* method); */

void Dino_BusSand_App_UI_GuidePanel__ClampHorizontal_22cba78
               (float param_1,undefined1 param_2 [16],float param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  
  if ((bRam0000000004f9c382 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9c382 = 1;
  }
  plVar1 = (long *)UnityEngine_Component__get_transform_43bcd18(param_4,0);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4();
    }
    UnityEngine_RectTransform__get_rect_43cf450(plVar1,0);
    if (param_3 * 0.5 <= param_1) {
      return;
    }
    if (param_5 != 0) {
      UnityEngine_Transform__get_localPosition_43cfce8(param_5,0);
      if ((bRam0000000004fa8b33 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7a00,0);
        bRam0000000004fa8b33 = 1;
      }
      if (param_5 != 0) {
        lVar2 = *(long *)(param_5 + 0x10);
        if (lVar2 != 0) {
          if (pcRam0000000004fa8b98 == (code *)0x0) {
            pcRam0000000004fa8b98 = (code *)FUN_02132f40(&UNK_00e52061);
          }
          (*pcRam0000000004fa8b98)(lVar2,&stack0xffffffffffffffd4);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

