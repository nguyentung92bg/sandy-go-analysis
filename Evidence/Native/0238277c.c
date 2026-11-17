/* IL2CPP: Dino.BusSand.App.UI.UiKit$$HitArea
UnityEngine_UI_Image_o* Dino_BusSand_App_UI_UiKit__HitArea (UnityEngine_RectTransform_o* rt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$HitArea
   UnityEngine_UI_Image_o* Dino_BusSand_App_UI_UiKit__HitArea (UnityEngine_RectTransform_o* rt,
   const MethodInfo* method); */

long * Dino_BusSand_App_UI_UiKit__HitArea_228277c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam0000000004f9c17f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c17f = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_1 != 0) {
    plVar2 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                               (param_1,*(undefined8 *)PTR_DAT_04cad788);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(plVar2,0,0);
    if ((uVar3 & 1) == 0) {
      if (plVar2 == (long *)0x0) goto LAB_02382884;
    }
    else {
      lVar4 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
      if ((lVar4 == 0) ||
         (plVar2 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                     (lVar4,*(undefined8 *)PTR_DAT_04cacf98), plVar2 == (long *)0x0)
         ) goto LAB_02382884;
      (**(code **)(*plVar2 + 0x2a8))
                (0x3f800000,0x3f800000,0x3f800000,0,plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
    }
    (**(code **)(*plVar2 + 0x2c8))(plVar2,1,*(undefined8 *)(*plVar2 + 0x2d0));
    return plVar2;
  }
LAB_02382884:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

