/* IL2CPP: Dino.BusSand.App.UI.UiTweakApplier$$Resolve
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UiTweakApplier__Resolve (Dino_BusSand_App_UI_UiTweakApplier_o* __this, System_String_o* path, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiTweakApplier$$Resolve
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UiTweakApplier__Resolve
   (Dino_BusSand_App_UI_UiTweakApplier_o* __this, System_String_o* path, const MethodInfo* method);
    */

long * Dino_BusSand_App_UI_UiTweakApplier__Resolve_22a450c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((bRam0000000004f9c27c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9c27c = 1;
  }
  uVar1 = System_String__IsNullOrEmpty_46d2084(param_2,0);
  plVar2 = (long *)UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if ((uVar1 & 1) == 0) {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    plVar2 = (long *)UnityEngine_Transform__Find_43d4bec(plVar2,param_2,0);
  }
  if ((plVar2 != (long *)0x0) && (*plVar2 != *(long *)PTR_DAT_04cabdb0)) {
    plVar2 = (long *)0x0;
  }
  return plVar2;
}

