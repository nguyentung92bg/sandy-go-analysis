/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$Run
void Dino_BusSand_App_UI_UIPanel__Run (Dino_BusSand_App_UI_UIPanel_o* __this, System_Collections_IEnumerator_o* co, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$Run
   void Dino_BusSand_App_UI_UIPanel__Run (Dino_BusSand_App_UI_UIPanel_o* __this,
   System_Collections_IEnumerator_o* co, const MethodInfo* method); */

void Dino_BusSand_App_UI_UIPanel__Run_2200f98(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (param_2 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
    uVar2 = thunk_FUN_0216e89c();
    uVar3 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
    System_NullReferenceException___ctor_483267c(uVar2,uVar3,0);
  }
  else {
    uVar1 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
    if ((uVar1 & 1) != 0) {
      if ((bRam0000000004fa84ef & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7890);
        bRam0000000004fa84ef = 1;
      }
      if (param_1 != 0) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
        }
        if (pcRam0000000004fa8560 == (code *)0x0) {
          pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
        }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8560)(lVar4,param_2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    thunk_FUN_021985a8(PTR_DAT_04caa3a8);
    uVar2 = thunk_FUN_0216e89c();
    uVar3 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
    System_ArgumentException___ctor_47b660c(uVar2,uVar3,0);
  }
  uVar3 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar2,uVar3);
}

