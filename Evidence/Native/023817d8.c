/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Fill
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UiKit__Fill (UnityEngine_Transform_o* parent, System_String_o* name, float l, float b, float r, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Fill
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UiKit__Fill (UnityEngine_Transform_o* parent,
   System_String_o* name, float l, float b, float r, float t, const MethodInfo* method); */

long Dino_BusSand_App_UI_UiKit__Fill_22817d8
               (undefined4 param_1,undefined4 param_2,float param_3,float param_4,undefined8 param_5
               ,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((bRam0000000004f9c17b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad330);
    bRam0000000004f9c17b = 1;
  }
  puVar1 = PTR_DAT_04cad330;
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  uVar3 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
  uVar4 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_App_UI_UiKit__Node_22818c4(uVar3,uVar4,0,0,param_5,param_6,0,0);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  puVar1 = PTR_DAT_04cacfc0;
  if (lVar2 != 0) {
    UnityEngine_RectTransform__set_anchorMin_43cf5e4
              (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
               (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],lVar2,0);
    if (cRam0000000004f9b949 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b949 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax_43cf768
              (*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
               *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),lVar2,0);
    UnityEngine_RectTransform__set_offsetMin_43cfe84(param_1,param_2,lVar2,0);
    UnityEngine_RectTransform__set_offsetMax_43d0018(-param_3,-param_4,lVar2,0);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

