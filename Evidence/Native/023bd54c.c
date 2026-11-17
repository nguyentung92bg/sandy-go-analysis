/* IL2CPP: Dino.BusSand.App.UI.TipsToast$$Leave
void Dino_BusSand_App_UI_TipsToast__Leave (UnityEngine_GameObject_o* go, float duration, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.TipsToast$$Leave
   void Dino_BusSand_App_UI_TipsToast__Leave (UnityEngine_GameObject_o* go, float duration, float
   delay, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_TipsToast__Leave_22bd54c(undefined4 param_1,float param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_DAT_04cb6580;
  if ((bRam0000000004f9c316 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb6588);
    FUN_02132f7c(PTR_DAT_04cb6590);
    FUN_02132f7c(PTR_DAT_04cb6580);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c316 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar2 != 0) {
    plVar6 = (long *)(lVar2 + 0x10);
    *plVar6 = param_3;
    thunk_FUN_02134474(plVar6,param_3);
    lVar8 = *plVar6;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
    if ((uVar3 & 1) != 0) {
      return uVar3;
    }
    if (*plVar6 != 0) {
      plVar4 = (long *)UnityEngine_GameObject__get_transform_43c1048(*plVar6,0);
      if (plVar4 == (long *)0x0) {
        *(undefined8 *)(lVar2 + 0x28) = 0;
      }
      else {
        lVar8 = *(long *)PTR_DAT_04cabdb0;
        if ((*plVar4 != lVar8) || (*(long **)(lVar2 + 0x28) = plVar4, *plVar4 != lVar8)) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(plVar4);
        }
      }
      thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),plVar4);
      puVar1 = PTR_DAT_04cad4c0;
      lVar8 = *plVar6;
      if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar8,0);
      puVar7 = (undefined8 *)(lVar2 + 0x30);
      *puVar7 = uVar5;
      thunk_FUN_02134474(puVar7,uVar5);
      if (param_2 <= 0.0) {
        uVar5 = *(undefined8 *)(lVar2 + 0x28);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_UiMotion__Stop_22913ec(uVar5,0);
      }
      if (cRam0000000004f9b948 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b948 = '\x01';
      }
      uVar9 = **(undefined8 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
      uVar5 = *(undefined8 *)PTR_DAT_04cac208;
      *(undefined1 *)(lVar2 + 0x18) = 0;
      *(undefined8 *)(lVar2 + 0x1c) = uVar9;
      uVar5 = thunk_FUN_0216e89c(uVar5);
      System_Action_float____ctor_35f1448(uVar5,lVar2,*(undefined8 *)PTR_DAT_04cb6588,0);
      if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar8 = Dino_BusSand_App_Tween__Value_2160f64(param_1,uVar5,0);
      if (((lVar8 != 0) &&
          (lVar8 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar8,1,0), lVar8 != 0)) &&
         (lVar8 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar8,*puVar7,0), lVar8 != 0)) {
        uVar3 = Dino_BusSand_App_Tween__SetDelay_2160ea8(param_2,lVar8,0);
        uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar5,lVar2,*(undefined8 *)PTR_DAT_04cb6590,0);
        if (uVar3 != 0) {
          *(undefined8 *)(uVar3 + 0x40) = uVar5;
          thunk_FUN_02134474((undefined8 *)(uVar3 + 0x40),uVar5,0);
          return uVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

