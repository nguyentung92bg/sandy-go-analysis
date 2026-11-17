/* IL2CPP: Dino.BusSand.App.UI.ArtPopup.Parts$$At<object>
Il2CppObject* Dino_BusSand_App_UI_ArtPopup_Parts__At_object_ (Dino_BusSand_App_UI_ArtPopup_Parts_o* __this, Il2CppObject* c, float x, float y, const MethodInfo_2970578* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ArtPopup.Parts$$At<object>
   Il2CppObject* Dino_BusSand_App_UI_ArtPopup_Parts__At_object_
   (Dino_BusSand_App_UI_ArtPopup_Parts_o* __this, Il2CppObject* c, float x, float y, const
   MethodInfo_2970578* method); */

long Dino_BusSand_App_UI_ArtPopup_Parts__At_object__2970578
               (float param_1,float param_2,long param_3,long param_4)

{
  long *plVar1;
  
  if ((bRam0000000004f9d84c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9d84c = 1;
  }
  if ((param_4 != 0) &&
     (plVar1 = (long *)UnityEngine_Component__get_transform_43bcd18(param_4,0),
     plVar1 != (long *)0x0)) {
    if (*plVar1 == *(long *)PTR_DAT_04cabdb0) {
      UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,plVar1,0);
      UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,plVar1,0);
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                (param_1 - *(float *)(param_3 + 0x30) * 0.5,-param_2,plVar1,0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02a704d4 with catch @ 02a70634
                        */
      return param_4;
    }
                    /* try { // try from 02a7064c to 02b70663 has its CatchHandler @ 02a706bc */
                    /* WARNING: Subroutine does not return */
    FUN_021335a4(plVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

