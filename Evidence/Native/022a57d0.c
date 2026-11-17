/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$SetChildActive
void Dino_BusSand_App_UI_ClimbTowerPanel__SetChildActive (UnityEngine_Transform_o* t, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$SetChildActive
   void Dino_BusSand_App_UI_ClimbTowerPanel__SetChildActive (UnityEngine_Transform_o* t, int32_t i,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_ClimbTowerPanel__SetChildActive_21a57d0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != 0) {
    iVar1 = UnityEngine_Transform__get_childCount_43d4480(param_1,0);
    if (iVar1 <= param_2) {
      return;
    }
    lVar2 = UnityEngine_Transform__GetChild_43d5294(param_1,param_2,0);
    if ((lVar2 != 0) && (lVar2 = UnityEngine_Component__get_gameObject_43bcde8(lVar2,0), lVar2 != 0)
       ) {
      if ((bRam0000000004fa8360 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5bd0,1,0);
        bRam0000000004fa8360 = 1;
      }
      if (lVar2 != 0) {
        lVar3 = *(long *)(lVar2 + 0x10);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar2,0);
        }
        if (pcRam0000000004fa8430 == (code *)0x0) {
          pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
        }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8430)(lVar3,1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

