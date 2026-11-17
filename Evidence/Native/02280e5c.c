/* IL2CPP: Dino.BusSand.App.UI.KitIdle$$Init
void Dino_BusSand_App_UI_KitIdle__Init (Dino_BusSand_App_UI_KitIdle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitIdle$$Init
   void Dino_BusSand_App_UI_KitIdle__Init (Dino_BusSand_App_UI_KitIdle_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_KitIdle__Init_2180e5c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  
  if ((bRam0000000004f9b928 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9b928 = 1;
  }
  plVar1 = (long *)UnityEngine_Component__get_transform_43bcd18(param_4,0);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4();
    }
    uVar3 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(plVar1,0);
    *(undefined4 *)(param_4 + 0x28) = uVar3;
    *(undefined4 *)(param_4 + 0x2c) = param_2;
    lVar2 = UnityEngine_Component__get_transform_43bcd18(param_4,0);
    if (lVar2 != 0) {
      uVar3 = UnityEngine_Transform__get_localScale_43d1b0c(lVar2,0);
      *(undefined4 *)(param_4 + 0x30) = uVar3;
      *(undefined4 *)(param_4 + 0x34) = param_2;
      *(undefined4 *)(param_4 + 0x38) = param_3;
      *(undefined1 *)(param_4 + 0x3c) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

