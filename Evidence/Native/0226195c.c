/* IL2CPP: Dino.BusSand.App.Tween$$Fade
Dino_BusSand_App_Tween_o* Dino_BusSand_App_Tween__Fade (UnityEngine_CanvasGroup_o* g, float to, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Tween$$Fade
   Dino_BusSand_App_Tween_o* Dino_BusSand_App_Tween__Fade (UnityEngine_CanvasGroup_o* g, float to,
   float duration, const MethodInfo* method); */

long Dino_BusSand_App_Tween__Fade_216195c(undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_DAT_04cac268;
  if ((bRam0000000004f9b829 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cac270);
    FUN_02132f7c(PTR_DAT_04cac268);
    bRam0000000004f9b829 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar4,0);
  if (lVar4 != 0) {
    plVar6 = (long *)(lVar4 + 0x10);
    *plVar6 = param_3;
    thunk_FUN_02134474(plVar6,param_3);
    *(undefined4 *)(lVar4 + 0x1c) = param_1;
    puVar3 = PTR_DAT_04cac270;
    puVar2 = PTR_DAT_04cac208;
    puVar1 = PTR_DAT_04cac1e8;
    if (*plVar6 != 0) {
      uVar7 = UnityEngine_CanvasGroup__get_alpha_467ac88(*plVar6,0);
      uVar5 = *(undefined8 *)puVar2;
      *(undefined4 *)(lVar4 + 0x18) = uVar7;
      uVar5 = thunk_FUN_0216e89c(uVar5);
      System_Action_float____ctor_35f1448(uVar5,lVar4,*(undefined8 *)puVar3,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar4 = Dino_BusSand_App_Tween__Value_2160f64(param_2,uVar5);
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x18) = *plVar6;
        thunk_FUN_02134474();
        return lVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

