/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$Fit
void Dino_BusSand_App_UI_DailyGiftPanel__Fit (Dino_BusSand_App_UI_DailyGiftPanel_o* __this, Dino_BusSand_App_UI_KitWindow_o* w, float bottom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$Fit
   void Dino_BusSand_App_UI_DailyGiftPanel__Fit (Dino_BusSand_App_UI_DailyGiftPanel_o* __this,
   Dino_BusSand_App_UI_KitWindow_o* w, float bottom, const MethodInfo* method); */

void Dino_BusSand_App_UI_DailyGiftPanel__Fit_2329c64
               (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               undefined8 param_5,long param_6)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if ((bRam0000000004f9c5f7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9c5f7 = 1;
  }
  plVar1 = (long *)UnityEngine_Component__get_transform_43bcd18(param_5,0);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4(plVar1);
    }
    UnityEngine_RectTransform__get_rect_43cf450(plVar1,0);
    if ((param_4 <= 1.0) ||
       (UnityEngine_RectTransform__get_rect_43cf450(plVar1,0), _UNK_00e201a8 <= param_4)) {
      return;
    }
    fVar3 = (param_4 + -205.0 + -30.0) / (param_1 + 49.5);
    fVar4 = 1.0;
    if (fVar3 <= 1.0) {
      fVar4 = fVar3;
    }
    if (1.0 <= fVar4) {
      if (param_6 == 0) goto LAB_02429dbc;
    }
    else {
      if ((param_6 == 0) || (*(long *)(param_6 + 0x48) == 0)) goto LAB_02429dbc;
      Dino_BusSand_App_UI_KitPop__Rescale_228da00(fVar4,*(long *)(param_6 + 0x48),0);
    }
    lVar2 = *(long *)(param_6 + 0x10);
    if (lVar2 != 0) {
      if ((bRam0000000004fa8a88 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7bc8,0);
        bRam0000000004fa8a88 = 1;
      }
      if (lVar2 != 0) {
        lVar2 = *(long *)(lVar2 + 0x10);
        if (lVar2 != 0) {
          if (pcRam0000000004fa8ad0 == (code *)0x0) {
            pcRam0000000004fa8ad0 = (code *)FUN_02132f40(&UNK_00e47400);
          }
          (*pcRam0000000004fa8ad0)(lVar2,&stack0xffffffffffffffe8);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
LAB_02429dbc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

