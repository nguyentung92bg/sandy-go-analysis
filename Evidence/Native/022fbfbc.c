/* IL2CPP: Dino.BusSand.App.UI.RescueTimerWidget$$Awake
void Dino_BusSand_App_UI_RescueTimerWidget__Awake (Dino_BusSand_App_UI_RescueTimerWidget_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RescueTimerWidget$$Awake
   void Dino_BusSand_App_UI_RescueTimerWidget__Awake (Dino_BusSand_App_UI_RescueTimerWidget_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_RescueTimerWidget__Awake_21fbfbc(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam0000000004f9bc67 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0890);
    bRam0000000004f9bc67 = 1;
  }
  lVar1 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
  if (lVar1 != 0) {
    lVar1 = UnityEngine_GameObject__AddComponent_object__275a54c
                      (lVar1,*(undefined8 *)PTR_DAT_04cb0890);
    plVar2 = (long *)(param_1 + 0x38);
    *plVar2 = lVar1;
    thunk_FUN_02134474(plVar2,lVar1);
    lVar1 = *plVar2;
    if (lVar1 != 0) {
      if ((bRam0000000004fac320 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04d09bf8,0);
        bRam0000000004fac320 = 1;
      }
      if (lVar1 != 0) {
        lVar3 = *(long *)(lVar1 + 0x10);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar1,0);
        }
        if (pcRam0000000004fac330 == (code *)0x0) {
          pcRam0000000004fac330 = (code *)FUN_02132f40(&UNK_00e648e1);
        }
                    /* WARNING: Could not recover jumptable at 0x0477adbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fac330)(0,lVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

