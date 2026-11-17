/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$Run
Dino_BusSand_App_Tween_o* Dino_BusSand_App_UI_UiMotion__Run (float duration, System_Action_float__o* step, Il2CppObject* owner, float delay, System_Action_o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$Run
   Dino_BusSand_App_Tween_o* Dino_BusSand_App_UI_UiMotion__Run (float duration,
   System_Action_float__o* step, Il2CppObject* owner, float delay, System_Action_o* done, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_UiMotion__Run_2290b90
               (undefined4 param_1,float param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
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
  lVar2 = Dino_BusSand_App_Tween__Value_2160f64(param_1,param_3,0);
  if (((lVar2 != 0) && (lVar2 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar2,1,0), lVar2 != 0))
     && (lVar2 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar2,param_4,0), lVar2 != 0)) {
    lVar2 = Dino_BusSand_App_Tween__OnDone_2160edc(lVar2,param_5,0);
    if (0.0 < param_2) {
      if (lVar2 == 0) goto LAB_02390cdc;
      Dino_BusSand_App_Tween__SetDelay_2160ea8(param_2,lVar2,0);
    }
    if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Application__get_isPlaying_4351eec(0);
    puVar1 = PTR_DAT_04cb4ce0;
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)PTR_DAT_04cb4ce0;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar1;
      }
      if (*(char *)(*(long *)(lVar4 + 0xb8) + 1) == '\0') {
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

