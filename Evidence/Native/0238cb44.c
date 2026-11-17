/* IL2CPP: Dino.BusSand.App.UI.UiKit$$SetLabel
void Dino_BusSand_App_UI_UiKit__SetLabel (TMPro_TMP_Text_o* t, System_String_o* label, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$SetLabel
   void Dino_BusSand_App_UI_UiKit__SetLabel (TMPro_TMP_Text_o* t, System_String_o* label, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UiKit__SetLabel_228cb44(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c192 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9c192 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x518))(param_1,param_2,*(undefined8 *)(*param_1 + 0x520));
    lVar3 = TMPro_TMP_Text__get_rectTransform_42cd6a4(param_1,0);
    if ((lVar3 != 0) &&
       (plVar4 = (long *)UnityEngine_Transform__get_parent_43d0d70(lVar3,0), plVar4 != (long *)0x0))
    {
      if (*plVar4 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4();
      }
      UnityEngine_RectTransform__get_sizeDelta_43cf9ac(plVar4,0);
      TMPro_TMP_Text__GetPreferredValues_42d193c(param_1,param_2,0);
      UnityEngine_RectTransform__get_sizeDelta_43cf9ac(lVar3,0);
      if ((bRam0000000004fa8a8a & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7bc8,0);
        bRam0000000004fa8a8a = 1;
      }
      if (lVar3 != 0) {
        lVar3 = *(long *)(lVar3 + 0x10);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

