/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$PlaceBox
void Dino_BusSand_App_UI_GuidePanel__PlaceBox (UnityEngine_RectTransform_o* rt, UnityEngine_Vector2_o min, UnityEngine_Vector2_o max, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$PlaceBox
   void Dino_BusSand_App_UI_GuidePanel__PlaceBox (UnityEngine_RectTransform_o* rt,
   UnityEngine_Vector2_o min, UnityEngine_Vector2_o max, const MethodInfo* method); */

void Dino_BusSand_App_UI_GuidePanel__PlaceBox_22ca3c4
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c36d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c36d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_5,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
            ((param_1 + param_3) * 0.5,(param_2 + param_4) * 0.5,param_5,0);
  if ((bRam0000000004fa8a8a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7bc8,0);
    bRam0000000004fa8a8a = 1;
  }
  if (param_5 != 0) {
    lVar3 = *(long *)(param_5 + 0x10);
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

