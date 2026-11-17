/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$StartAutoPlay
void Dino_BusSand_App_UI_ContinueBottomPanel__StartAutoPlay (Dino_BusSand_App_UI_ContinueBottomPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$StartAutoPlay
   void Dino_BusSand_App_UI_ContinueBottomPanel__StartAutoPlay
   (Dino_BusSand_App_UI_ContinueBottomPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ContinueBottomPanel__StartAutoPlay_22c1e60(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c338 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c338 = 1;
  }
  lVar3 = *(long *)puVar1;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar2 = Dino_BusSand_App_UI_ContinueBottomPager__get_PageCount_22bdf80();
    if ((1 < iVar2) && (*(char *)(param_1 + 0x4e) == '\0')) {
      *(undefined1 *)(param_1 + 0x4c) = 1;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      lVar3 = Dino_BusSand_App_UI_ContinueBottomPanel__AutoPlay_22c1f20(param_1);
      uVar4 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      if (lVar3 == 0) {
        thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
        uVar5 = thunk_FUN_0216e89c();
        uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
        System_NullReferenceException___ctor_483267c(uVar5,uVar6,0);
      }
      else {
        uVar4 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
        if ((uVar4 & 1) != 0) {
          if ((bRam0000000004fa84ef & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7890);
            bRam0000000004fa84ef = 1;
          }
          if (param_1 != 0) {
            lVar7 = *(long *)(param_1 + 0x10);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
            }
            if (pcRam0000000004fa8560 == (code *)0x0) {
              pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
            }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8560)(lVar7,lVar3);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        thunk_FUN_021985a8(PTR_DAT_04caa3a8);
        uVar5 = thunk_FUN_0216e89c();
        uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
        System_ArgumentException___ctor_47b660c(uVar5,uVar6,0);
      }
      uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar5,uVar6);
    }
  }
  return;
}

