/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$SetActive
void Dino_BusSand_App_UI_CommerceUi__SetActive (UnityEngine_Transform_o* node, bool on, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$SetActive
   void Dino_BusSand_App_UI_CommerceUi__SetActive (UnityEngine_Transform_o* node, bool on, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_CommerceUi__SetActive_22ac144(long param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c2ab & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c2ab = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if ((param_1 != 0) &&
     (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0), lVar4 != 0)) {
    uVar2 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar4,0);
    if ((uVar2 & 1) == (param_2 & 1)) {
      return;
    }
    lVar4 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
    if (lVar4 != 0) {
      if ((bRam0000000004fa8360 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5bd0,param_2 & 1,0);
        bRam0000000004fa8360 = 1;
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar5 = *(long *)(lVar4 + 0x10);
      if (lVar5 != 0) {
        if (pcRam0000000004fa8430 == (code *)0x0) {
          pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
        }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8430)(lVar5,param_2 & 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

