/* IL2CPP: Dino.BusSand.App.UI.UiKit$$ButtonRoot
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UiKit__ButtonRoot (TMPro_TMP_Text_o* label, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$ButtonRoot
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UiKit__ButtonRoot (TMPro_TMP_Text_o* label,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_UiKit__ButtonRoot_228cab4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if ((bRam0000000004f9c191 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9c191 = 1;
  }
  if ((((param_1 != 0) && (lVar1 = TMPro_TMP_Text__get_transform_42cd604(param_1,0), lVar1 != 0)) &&
      (lVar1 = UnityEngine_Transform__get_parent_43d0d70(lVar1,0), lVar1 != 0)) &&
     (lVar1 = UnityEngine_Transform__get_parent_43d0d70(lVar1,0), lVar1 != 0)) {
    plVar2 = (long *)UnityEngine_Transform__get_parent_43d0d70(lVar1,0);
    if (plVar2 != (long *)0x0) {
      if (*plVar2 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4();
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

