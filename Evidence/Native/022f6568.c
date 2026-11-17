/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$SetActive
void Dino_BusSand_App_UI_YachtRacingUi__SetActive (UnityEngine_GameObject_o* go, bool on, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$SetActive
   void Dino_BusSand_App_UI_YachtRacingUi__SetActive (UnityEngine_GameObject_o* go, bool on, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f6568(long param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bc51 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc51 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  if ((uVar3 & 1) != 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = UnityEngine_GameObject__get_activeSelf_43c14cc(param_1,0);
    param_2 = param_2 & 1;
    if ((uVar2 & 1) != param_2) {
      if ((bRam0000000004fa8360 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5bd0,param_2,0);
        bRam0000000004fa8360 = 1;
      }
      if (param_1 != 0) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
        }
        if (pcRam0000000004fa8430 == (code *)0x0) {
          pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
        }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8430)(lVar4,param_2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

