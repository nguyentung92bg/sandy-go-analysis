/* IL2CPP: Dino.BusSand.App.UI.KitPop$$Awake
void Dino_BusSand_App_UI_KitPop__Awake (Dino_BusSand_App_UI_KitPop_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPop$$Awake
   void Dino_BusSand_App_UI_KitPop__Awake (Dino_BusSand_App_UI_KitPop_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_KitPop__Awake_228da74
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  
  if ((bRam0000000004f9c1a3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c1a3 = 1;
  }
  lVar2 = UnityEngine_Component__get_transform_43bcd18(param_4,0);
  puVar1 = PTR_DAT_04cad4c0;
  if (lVar2 != 0) {
    uVar6 = UnityEngine_Transform__get_localScale_43d1b0c(lVar2,0);
    *(undefined4 *)(param_4 + 0x4c) = uVar6;
    *(undefined4 *)(param_4 + 0x50) = param_2;
    *(undefined4 *)(param_4 + 0x54) = param_3;
    uVar3 = UnityEngine_Component__get_gameObject_43bcde8(param_4,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    lVar2 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar3);
    plVar4 = (long *)(param_4 + 0x60);
    *plVar4 = lVar2;
    thunk_FUN_02134474(plVar4,lVar2);
    if (*plVar4 != 0) {
      UnityEngine_CanvasGroup__set_alpha_467ad3c(0,*plVar4,0);
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        if ((bRam0000000004fac324 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04d09bf8,0,0);
          bRam0000000004fac324 = 1;
        }
        if (lVar2 != 0) {
          lVar5 = *(long *)(lVar2 + 0x10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar2,0);
          }
          if (pcRam0000000004fac350 == (code *)0x0) {
            pcRam0000000004fac350 = (code *)FUN_02132f40(&UNK_00e22703);
          }
                    /* WARNING: Could not recover jumptable at 0x0477b0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fac350)(lVar5,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

