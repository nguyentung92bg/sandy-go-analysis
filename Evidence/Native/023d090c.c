/* IL2CPP: Dino.BusSand.App.UI.CommonNamePlateView$$Stretch
void Dino_BusSand_App_UI_CommonNamePlateView__Stretch (UnityEngine_RectTransform_o* rt, UnityEngine_Vector2_o offsetMin, UnityEngine_Vector2_o offsetMax, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommonNamePlateView$$Stretch
   void Dino_BusSand_App_UI_CommonNamePlateView__Stretch (UnityEngine_RectTransform_o* rt,
   UnityEngine_Vector2_o offsetMin, UnityEngine_Vector2_o offsetMax, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommonNamePlateView__Stretch_22d090c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c3ab & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3ab = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_5,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  puVar1 = PTR_DAT_04cacfc0;
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
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
  UnityEngine_RectTransform__set_offsetMin_43cfe84(param_1,param_2,param_5,0);
  UnityEngine_RectTransform__set_offsetMax_43d0018(param_3,param_4,param_5,0);
  if (cRam0000000004f9b65e == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65e = '\x01';
  }
  if ((bRam0000000004fa8b3e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7a00,0);
    bRam0000000004fa8b3e = 1;
  }
  if (param_5 != 0) {
    lVar3 = *(long *)(param_5 + 0x10);
    if (lVar3 != 0) {
      if (pcRam0000000004fa8bf0 == (code *)0x0) {
        pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
      }
      (*pcRam0000000004fa8bf0)(lVar3,&stack0xffffffffffffffd4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

