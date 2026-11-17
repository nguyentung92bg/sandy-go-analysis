/* IL2CPP: Dino.BusSand.App.UI.KitParts$$AtTop<object>
Il2CppObject* Dino_BusSand_App_UI_KitParts__AtTop_object_ (Il2CppObject* c, float fromTop, float x, const MethodInfo_27DB09C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitParts$$AtTop<object>
   Il2CppObject* Dino_BusSand_App_UI_KitParts__AtTop_object_ (Il2CppObject* c, float fromTop, float
   x, const MethodInfo_27DB09C* method); */

long Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
               (float param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  
  if ((bRam0000000004f9d81c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9d81c = 1;
  }
  if ((param_3 != 0) &&
     (plVar1 = (long *)UnityEngine_Component__get_transform_43bcd18(param_3,0),
     plVar1 != (long *)0x0)) {
    if (*plVar1 == *(long *)PTR_DAT_04cabdb0) {
      UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,plVar1,0);
      UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,plVar1,0);
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(param_2,-param_1,plVar1,0);
      return param_3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021335a4(plVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

