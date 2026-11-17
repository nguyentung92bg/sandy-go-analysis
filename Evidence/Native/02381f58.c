/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Stretch
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UiKit__Stretch (UnityEngine_RectTransform_o* rt, float l, float b, float r, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Stretch
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UiKit__Stretch (UnityEngine_RectTransform_o* rt,
   float l, float b, float r, float t, const MethodInfo* method); */

long Dino_BusSand_App_UI_UiKit__Stretch_2281f58
               (undefined4 param_1,undefined4 param_2,float param_3,float param_4,long param_5)

{
  undefined *puVar1;
  
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  puVar1 = PTR_DAT_04cacfc0;
  if (param_5 != 0) {
    UnityEngine_RectTransform__set_anchorMin_43cf5e4
              (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
               (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],param_5,0);
    if (cRam0000000004f9b949 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b949 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax_43cf768
              (*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
               *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),param_5,0);
                    /* try { // try from 02382008 to 0248213b has its CatchHandler @ 02382008
                       catch() { ... } // from try @ 02382008 with catch @ 02382008
                       catch() { ... } // from try @ 023821d0 with catch @ 02382008
                       catch() { ... } // from try @ 02382274 with catch @ 02382008
                       catch() { ... } // from try @ 02382298 with catch @ 02382008 */
    UnityEngine_RectTransform__set_offsetMin_43cfe84(param_1,param_2,param_5,0);
    UnityEngine_RectTransform__set_offsetMax_43d0018(-param_3,-param_4,param_5,0);
    return param_5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

