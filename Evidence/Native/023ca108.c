/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$NewBlock
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_GuidePanel__NewBlock (Dino_BusSand_App_UI_GuidePanel_o* __this, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$NewBlock
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_GuidePanel__NewBlock
   (Dino_BusSand_App_UI_GuidePanel_o* __this, System_String_o* name, const MethodInfo* method); */

long Dino_BusSand_App_UI_GuidePanel__NewBlock_22ca108(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if ((bRam0000000004f9c372 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacf98);
    bRam0000000004f9c372 = 1;
  }
  lVar1 = Dino_BusSand_App_UI_GuidePanel__NewRect_22c9bb8
                    (param_1,param_2,*(undefined8 *)(param_1 + 0x88));
  if (((lVar1 != 0) && (lVar2 = UnityEngine_Component__get_gameObject_43bcde8(lVar1,0), lVar2 != 0))
     && (plVar3 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                    (lVar2,*(undefined8 *)PTR_DAT_04cacf98), plVar3 != (long *)0x0))
  {
    (**(code **)(*plVar3 + 0x2a8))(0,0,0,0x3f800000,plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    (**(code **)(*plVar3 + 0x2c8))(plVar3,0,*(undefined8 *)(*plVar3 + 0x2d0));
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

