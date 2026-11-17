/* IL2CPP: Dino.BusSand.App.UI.EventKit$$SetBar
void Dino_BusSand_App_UI_EventKit__SetBar (UnityEngine_RectTransform_o* fill, float maxW, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.EventKit$$SetBar
   void Dino_BusSand_App_UI_EventKit__SetBar (UnityEngine_RectTransform_o* fill, float maxW, float
   k, const MethodInfo* method); */

void Dino_BusSand_App_UI_EventKit__SetBar_21be594
               (undefined1 param_1 [16],float param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bad3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bad3 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_3,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if ((param_3 == 0) ||
     (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(param_3,0), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_GameObject__SetActive_43c1408(lVar3,_UNK_00e20a7c < param_2,0);
  UnityEngine_RectTransform__get_sizeDelta_43cf9ac(param_3,0);
  UnityEngine_RectTransform__get_sizeDelta_43cf9ac(param_3,0);
  if ((bRam0000000004fa8a8a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7bc8,0);
    bRam0000000004fa8a8a = 1;
  }
  if (param_3 != 0) {
    lVar3 = *(long *)(param_3 + 0x10);
    if (lVar3 != 0) {
      if (pcRam0000000004fa8ae0 == (code *)0x0) {
        pcRam0000000004fa8ae0 = (code *)FUN_02132f40(&UNK_00e51f73);
      }
      (*pcRam0000000004fa8ae0)(lVar3,&stack0xffffffffffffffe8);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

