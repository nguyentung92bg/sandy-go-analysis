/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$Fade
Dino_BusSand_App_Tween_o* Dino_BusSand_App_UI_UiMotion__Fade (UnityEngine_CanvasGroup_o* g, float to, float duration, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$Fade
   Dino_BusSand_App_Tween_o* Dino_BusSand_App_UI_UiMotion__Fade (UnityEngine_CanvasGroup_o* g, float
   to, float duration, float delay, const MethodInfo* method); */

long Dino_BusSand_App_UI_UiMotion__Fade_2291234
               (undefined4 param_1,undefined4 param_2,float param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined4 uVar9;
  
  puVar1 = PTR_DAT_04cb5388;
  if ((bRam0000000004f9c1c4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb5390);
    FUN_02132f7c(PTR_DAT_04cb5388);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c1c4 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_UI_UiMotion___c__DisplayClass29_0___ctor_22a197c(lVar2,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar2 != 0) {
    plVar8 = (long *)(lVar2 + 0x10);
    *plVar8 = param_4;
    thunk_FUN_02134474(plVar8,param_4);
    lVar3 = *(long *)puVar1;
    lVar7 = *plVar8;
    *(undefined4 *)(lVar2 + 0x1c) = param_1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    lVar3 = *plVar8;
    if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Tween__KillAll_2161a90(lVar3,0);
    if (*plVar8 != 0) {
      uVar9 = UnityEngine_CanvasGroup__get_alpha_467ac88(*plVar8,0);
      puVar1 = PTR_DAT_04cac208;
      *(undefined4 *)(lVar2 + 0x18) = uVar9;
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      System_Action_float____ctor_35f1448(uVar5,lVar2,*(undefined8 *)PTR_DAT_04cb5390,0);
      uVar6 = *(undefined8 *)(lVar2 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar1 = PTR_DAT_04cac1e8;
      if ((bRam0000000004f9c1bd & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caa210);
        FUN_02132f7c(PTR_DAT_04cb4ce0);
        FUN_02132f7c(PTR_DAT_04cac1e8);
        bRam0000000004f9c1bd = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar2 = Dino_BusSand_App_Tween__Value_2160f64(param_2,uVar5,0);
      if (((lVar2 != 0) &&
          (lVar2 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar2,1,0), lVar2 != 0)) &&
         (lVar2 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar2,uVar6,0), lVar2 != 0)) {
        lVar2 = Dino_BusSand_App_Tween__OnDone_2160edc(lVar2,0,0);
        if (0.0 < param_3) {
          if (lVar2 == 0) goto LAB_02390cdc;
          Dino_BusSand_App_Tween__SetDelay_2160ea8(param_3,lVar2,0);
        }
        if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = UnityEngine_Application__get_isPlaying_4351eec(0);
        puVar1 = PTR_DAT_04cb4ce0;
        if ((uVar4 & 1) != 0) {
          lVar3 = *(long *)PTR_DAT_04cb4ce0;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar3 = *(long *)puVar1;
          }
          if (*(char *)(*(long *)(lVar3 + 0xb8) + 1) == '\0') {
            return lVar2;
          }
        }
        if (lVar2 != 0) {
          Dino_BusSand_App_Tween__Kill_2160f04(lVar2,1,0);
          return lVar2;
        }
      }
LAB_02390cdc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

