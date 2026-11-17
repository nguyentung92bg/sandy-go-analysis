/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$SetDot
void Dino_BusSand_App_UI_ContinueBottomPanel__SetDot (UnityEngine_GameObject_o* dot, bool selected, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$SetDot
   void Dino_BusSand_App_UI_ContinueBottomPanel__SetDot (UnityEngine_GameObject_o* dot, bool
   selected, const MethodInfo* method); */

void Dino_BusSand_App_UI_ContinueBottomPanel__SetDot_22c1b30(long param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if ((bRam0000000004f9c334 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6708);
    FUN_02132f7c(PTR_DAT_04cb6710);
    bRam0000000004f9c334 = 1;
  }
  if ((param_1 != 0) &&
     (lVar3 = UnityEngine_GameObject__get_transform_43c1048(param_1,0), lVar3 != 0)) {
    lVar3 = UnityEngine_Transform__Find_43d4bec(lVar3,*(undefined8 *)PTR_DAT_04cb6708,0);
    lVar4 = UnityEngine_GameObject__get_transform_43c1048(param_1,0);
    puVar2 = PTR_DAT_04ca9ae8;
    if (lVar4 != 0) {
      lVar4 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cb6710,0);
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar6);
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
      if ((uVar5 & 1) != 0) {
        if ((lVar3 == 0) ||
           (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0), lVar3 == 0))
        goto LAB_023c1c84;
        UnityEngine_GameObject__SetActive_43c1408(lVar3,param_2 & 1,0);
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
      if ((lVar4 != 0) &&
         (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0), lVar3 != 0)) {
        uVar1 = (param_2 ^ 0xffffffff) & 1;
        if ((bRam0000000004fa8360 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf5bd0,uVar1,0);
          bRam0000000004fa8360 = 1;
        }
        if (lVar3 != 0) {
          lVar4 = *(long *)(lVar3 + 0x10);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
          }
          if (pcRam0000000004fa8430 == (code *)0x0) {
            pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
          }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa8430)(lVar4,uVar1);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
LAB_023c1c84:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

